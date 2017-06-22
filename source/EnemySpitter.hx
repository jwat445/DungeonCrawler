package;
import Enemy;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.math.FlxPoint;
import flixel.FlxG;
import flixel.math.FlxVelocity;
import flixel.system.FlxSound;
import flixel.util.FlxColor;
import flixel.effects.FlxFlicker;

/**
 * ...
 * @author Joshua
 */
class EnemySpitter extends Enemy
{

	override public function new(X:Float = 0, Y:Float=0, Etype:String)
	{
		trace("you tried loading a SPITTER!!!!");
		super(X, Y, Etype);
		variant = Etype;
		loadGraphic("assets/images/spitter-" + variant + ".png", true, 32, 32);
		setFacingFlip(FlxObject.LEFT, false, false);
		setFacingFlip(FlxObject.RIGHT, true, false);
		animation.add("d", [0, 1, 0, 2], 6, false);
		animation.add("lr", [3, 4, 3, 5], 6, false);
		animation.add("u", [6, 7, 6, 8], 6, false);

		_sndStep = FlxG.sound.load(AssetPaths.step_1__wav,.2);
		_sndStep.proximity(x, y, FlxG.camera.target, FlxG.width * .4);

		drag.x = drag.y = 10;
		width = 16;
		height = 24;
		offset.x = 8;
		offset.y = 4;
		switch (variant)
		{
			case "small":
				health = 25;
				speed = 150;
			case "big":
				health = 100;
				speed = 60;
			default:
				health = 50;
				speed = 100;
		}
		_brain = new FSM(idle);
		_idleTmr = 0;
		playerPos = FlxPoint.get();
	}

	override public function idle():Void
	{
		if (seesPlayer)
		{
			_brain.activeState = chase;
		}
		else if (_idleTmr <= 0)
		{
			if (FlxG.random.bool(1))
			{
				_moveDir = -1;
				velocity.x = velocity.y = 0;
			}
			else
			{
				_moveDir = FlxG.random.int(0, 8) * 45;
				velocity.set(speed * 0.5, 0);
				velocity.rotate(FlxPoint.weak(), _moveDir);
			}
			_idleTmr = FlxG.random.int(1, 4);
		}
		else
			_idleTmr -= FlxG.elapsed;
	}

	override public function chase():Void
	{
		if (!seesPlayer)
		{
			_brain.activeState = idle;
		}
		else
		{
			FlxVelocity.moveTowardsPoint(this, playerPos, Std.int(speed));
		}
	}
}