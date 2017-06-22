package;
import flixel.FlxSprite;

/**
 * ...
 * @author Joshua
 */
class Obstacle extends FlxSprite
{
	
	public var variant(default, null):String;

	public function new(X:Float = 0, Y:Float=0, Otype:String)
	{
		super(X, Y);
		
		variant = Otype;
		
		switch (variant)
		{
			case "rock":
				loadGraphic(AssetPaths.rock__png, true, 32, 32);
			case "wood":
				loadGraphic(AssetPaths.rock__png, true, 32, 32); // WOOD PNG
			default:
				loadGraphic(AssetPaths.rock__png, true, 32, 32); //error png
		}
		this.immovable = true;
	}

}