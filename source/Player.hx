package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.FlxG;
import flixel.math.FlxPoint;
import flixel.FlxObject;
import flixel.system.FlxSound;

/**
 * ...
 * @author Joshua
 *
 */
class Player extends FlxSprite
{
	public var speed:Float = 200;
	private var _sndStep:FlxSound;
	public var bulletDelay:Int;

	public function new(?X:Float=0, ?Y:Float=0)
	{
		super(X, Y);

		loadGraphic(AssetPaths.player__png, true, 32, 32);
		setFacingFlip(FlxObject.LEFT, false, false);
		setFacingFlip(FlxObject.RIGHT, true, false);

		animation.add("lr", [3, 4, 3, 5], 6, false);
		animation.add("u", [6, 7, 6, 8], 6, false);
		animation.add("d", [0, 1, 0, 2], 6, false);

		_sndStep = FlxG.sound.load(AssetPaths.step_2__wav);

		drag.x = drag.y = 900;
		setSize(16, 28); //change hitbox
		offset.set(8, 4);
		
		bulletDelay = 10;
	}

	override public function update(elapsed:Float):Void
	{
		movement();
		shoot();
		super.update(elapsed);
	}

	private function movement():Void
	{
		var walk_up:Bool = false;
		var walk_down:Bool = false;
		var walk_left:Bool = false;
		var walk_right:Bool = false;

		walk_up = FlxG.keys.anyPressed([W]);
		walk_down = FlxG.keys.anyPressed([S]);
		walk_left = FlxG.keys.anyPressed([A]);
		walk_right = FlxG.keys.anyPressed([D]);

		if (walk_up && walk_down)
			walk_up = walk_down = false;
		if (walk_left && walk_right)
			walk_left = walk_right = false;

		if (walk_up || walk_down || walk_left || walk_right)
		{
			var mA:Float = 0;
			if (walk_up)
			{
				mA = -90;
				if (walk_left)
					mA -= 45;
				else if (walk_right)
					mA += 45;
				else 
					facing = FlxObject.UP; // the sprite should be facing UP
			}
			else if (walk_down)
			{
				mA = 90;
				if (walk_left)
					mA += 45;
				else if (walk_right)
					mA -= 45;
				else
					facing = FlxObject.DOWN; // the sprite is facing DOWN
			}
			else if (walk_left)
			{
				mA = 180;
				facing = FlxObject.LEFT; // the sprite should be facing LEFT
			}
			else if (walk_right)
			{
				mA = 0;
				facing = FlxObject.RIGHT; // set the sprite's facing to RIGHT
			}

			_sndStep.play();
			velocity.set(speed, 0);
			velocity.rotate(FlxPoint.weak(0, 0), mA);
			animate();
		}
	}

	private function animate():Void
	{
		if (touching == FlxObject.NONE) // if the player is moving (velocity is not 0 for either axis), we need to change the animation to match their facing
		{
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
	}

	public function shoot():Bool
	{
		var shoot_up:Bool = false;
		var shoot_down:Bool = false;
		var shoot_left:Bool = false;
		var shoot_right:Bool = false;
		
		shoot_up = FlxG.keys.anyPressed([UP]);
		shoot_down = FlxG.keys.anyPressed([DOWN]);
		shoot_left = FlxG.keys.anyPressed([LEFT]);
		shoot_right = FlxG.keys.anyPressed([RIGHT]);
		
		if (shoot_up && shoot_down)
			shoot_up = shoot_down = false;
		if (shoot_left && shoot_right)
			shoot_left = shoot_right = false;

		if (shoot_up || shoot_down || shoot_left || shoot_right)
		{
			if (shoot_up)
			{
				facing = FlxObject.UP; // the sprite should be facing UP
			}
			else if (shoot_down)
			{
				facing = FlxObject.DOWN; // the sprite is facing DOWN
			}
			else if (shoot_left)
			{
				facing = FlxObject.LEFT; // the sprite should be facing LEFT
			}
			else if (shoot_right)
			{
				facing = FlxObject.RIGHT; // set the sprite's facing to RIGHT
			}
			animate();//need to do better than this, just change facing
			return true;
		}
		return false;
	}
}