package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState
{
	private var _btnPlay:FlxButton;
	private var _txtTitle:FlxText;
	private var _btnOptions:FlxButton;

	override public function create():Void
	{
		_txtTitle = new FlxText(20, 0, 0, firstWord() + "\n" + secondWord(), 22);
		_txtTitle.alignment = CENTER;
		_txtTitle.screenCenter(X);
		add(_txtTitle);

		_btnPlay = new FlxButton(0, 0, "Play", clickPlay);
		_btnPlay.x = (FlxG.width / 2) - _btnPlay.width - 10;
		_btnPlay.y = FlxG.height - _btnPlay.height - 10;
		add(_btnPlay);
		_btnPlay.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);

		_btnOptions = new FlxButton(0, 0, "Options", clickOptions);
		_btnOptions.x = (FlxG.width / 2) + 10;
		_btnOptions.y = FlxG.height - _btnOptions.height - 10;
		add(_btnOptions);
		_btnOptions.onUp.sound = FlxG.sound.load(AssetPaths.select__wav);

		if (FlxG.sound.music == null) // don't restart the music if it's already playing
		{
			//FlxG.sound.playMusic(AssetPaths.menu__wav, 1, true); Also edit line in playstate to remove menu music
		}
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
	
	private function firstWord():String
	{
		return "Flixel";
	}
	
	private function secondWord():String
	{
		return "Game";
	}

	private function clickPlay():Void
	{
		FlxG.switchState(new PlayState());
	}

	private function clickOptions():Void
	{
		FlxG.switchState(new OptionsState());
	}
}
