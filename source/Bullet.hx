package;

import flixel.FlxObject;
import flixel.FlxSprite;

/**
 * ...
 * @author Joshua
 */
class Bullet extends FlxSprite
{
	public var speed:Float = 350;
	public var direction:Int = 1;
	public var damage:Int = 10;

	public function initPlayer(_player:Player)
	{
		loadGraphic(AssetPaths.bulletPlayer__png, false, 16, 16, true);
		facing = _player.facing;
		x = _player.x;
		y = _player.y;
		
		if (facing == FlxObject.LEFT || facing == FlxObject.RIGHT)
		{
			velocity.x = ((facing == FlxObject.LEFT) ? -1 : 1) * speed;
			velocity.x +=  _player.velocity.x/4;
			x += ((facing == FlxObject.LEFT) ? -6 : 6);
		}
		else if (facing == FlxObject.UP || facing == FlxObject.DOWN)
		{
			velocity.y = ((facing == FlxObject.UP) ? -1 : 1) * speed;
			velocity.y +=  _player.velocity.y/4;
			y += ((facing == FlxObject.UP) ? -6 : 6);
		}
	}
	
	public function initEnemy(enemy:Enemy)
	{
		loadGraphic(AssetPaths.bulletEnemy__png, false, 16, 16, true);
		facing = enemy.facing;
		x = enemy.x;
		y = enemy.y;
		
		velocity.x = 10;
		velocity.x +=  enemy.velocity.x/4;
		velocity.y = 0;
		velocity.y +=  enemy.velocity.y/4;
	}

}