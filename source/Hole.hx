package;
import flixel.FlxSprite;

/**
 * ...
 * @author Joshua
 */
class Hole extends FlxSprite
{

	public function new(X:Float = 0, Y:Float=0)
	{
		super(X, Y);
		loadGraphic(AssetPaths.hole__png, true, 32, 32);
		this.immovable = true;
	}

}