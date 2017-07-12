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
		super(X, Y, Etype);
		variant = Etype;
		loadGraphic("assets/images/spitter-" + variant + ".png", true, 32, 32);
		setFacingFlip(FlxObject.LEFT, false, false);
		setFacingFlip(FlxObject.RIGHT, true, false);
		animation.add("shoot", [0, 2, 3, 4, 5], 6, false);

		_sndStep = FlxG.sound.load(AssetPaths.step_1__wav, .2);
		_sndShoot = FlxG.sound.load(AssetPaths.enemy_shoot__wav, .2);
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

	override public function shoot():Bool
	{
		if (seesPlayer)
		{
			_sndShoot.play();
			return true;
		}
		else
		{
			return false;
		}
	}
}