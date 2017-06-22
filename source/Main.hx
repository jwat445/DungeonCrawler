package;

import flixel.FlxGame;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.system.scaleModes.*;
import openfl.Lib;
import openfl.display.Sprite;
import flixel.util.FlxSave;

class Main extends Sprite
{

	public function new()
	{
		super();
		addChild(new FlxGame(608, 480, MenuState));

		var _save:FlxSave = new FlxSave();
		_save.bind("DungeonGame");
		if (_save.data.volume != null)
		{
			FlxG.sound.volume = _save.data.volume;
		}
		_save.close();
		FlxG.scaleMode = new RatioScaleMode();
	}
}
