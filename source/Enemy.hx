package;
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
class Enemy extends FlxSprite
{
	
	public var speed:Float;
	public var variant(default, null):String;
	private var _brain:FSM;
	private var _idleTmr:Float;
	private var _moveDir:Float;
	public var seesPlayer:Bool = false;
	public var playerPos(default, null):FlxPoint;
	private var _sndStep:FlxSound;
	private var _sndShoot:FlxSound;
	public var bulletDelay:Int;

	public function new(X:Float = 0, Y:Float=0, Etype:String)
	{
		super(X, Y);
		bulletDelay = 50; //amount of time before any enemy starts shooting at player. Time between shots should be defined using this varialbe but in the specific enemy class.
	}

	override public function draw():Void
	{
		if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
		{
			if (Math.abs(velocity.x) > Math.abs(velocity.y))
			{
				if (velocity.x < 0)
				{
					facing = FlxObject.LEFT;
				}
				else
				{
					facing = FlxObject.RIGHT;
				}
			}
			else
			{
				if (velocity.y < 0)
					facing = FlxObject.UP;
				else
					facing = FlxObject.DOWN;
			}
			switch (facing)
			{
				case FlxObject.LEFT, FlxObject.RIGHT:
					animation.play("lr");
				case FlxObject.UP:
					animation.play("u");
				case FlxObject.DOWN:
					animation.play("d");
			}
		}
		super.draw();
	}

	public function idle():Void
	{
		
	}

	public function chase():Void
	{
		
	}
	
	public function shoot():Bool
	{
		return false;
	}

	public function damage(bulletRef:Bullet):Void
	{
		hurt(bulletRef.damage);
		FlxFlicker.flicker(this, .1, .1);
	}

	override public function update(elapsed:Float):Void
	{
		_brain.update();
		super.update(elapsed);

		if (FlxFlicker.isFlickering(this))
		{
			this.color = FlxColor.RED;
		}
		else {
			this.color = FlxColor.WHITE;
		}

		if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
		{
			//_sndStep.setPosition(x + frameWidth / 2, y + height);
			//_sndStep.play();
		}

	}
}