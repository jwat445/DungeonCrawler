package;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxAngle;
import flixel.math.FlxPoint;
import flixel.math.FlxVelocity;

/**
 * ...
 * @author Joshua
 */
class Bullet extends FlxSprite
{
	public var direction:Int = 1;
	public var damage:Int = 10;

	public function initPlayer(player:Player, speed:Int)
	{
		loadGraphic(AssetPaths.bulletPlayer__png, false, 16, 16, true);
		facing = player.facing;
		x = player.x;
		y = player.y;
		
		if (facing == FlxObject.LEFT || facing == FlxObject.RIGHT)
		{
			velocity.x = ((facing == FlxObject.LEFT) ? -1 : 1) * speed;
			velocity.x +=  player.velocity.x / 2;
			x += ((facing == FlxObject.LEFT) ? -6 : 6);
			
			velocity.y += player.velocity.y;
		}
		else if (facing == FlxObject.UP || facing == FlxObject.DOWN)
		{
			velocity.y = ((facing == FlxObject.UP) ? -1 : 1) * speed;
			velocity.y +=  player.velocity.y / 2;
			y += ((facing == FlxObject.UP) ? -6 : 6);
			
			velocity.x += player.velocity.x;
		}
	}
	
	public function initEnemy(enemy:Enemy, player:Player, speed:Int)
	{
		trace("here");
		loadGraphic(AssetPaths.bulletEnemy__png, false, 16, 16, false);
		var shootAngle:Float = FlxAngle.angleBetween(enemy, player, true);
		facing = enemy.facing;
		x = enemy.x;
		y = enemy.y;
		
		var shootvel:FlxPoint = FlxVelocity.velocityFromAngle(shootAngle, speed);
		
		velocity.x = shootvel.x;
		velocity.y = shootvel.y;
	}
}