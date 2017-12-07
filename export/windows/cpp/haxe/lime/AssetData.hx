package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/room000.oel", "assets/data/room000.oel");
			type.set ("assets/data/room000.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/room001.oel", "assets/data/room001.oel");
			type.set ("assets/data/room001.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/room002.oel", "assets/data/room002.oel");
			type.set ("assets/data/room002.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/room003.oel", "assets/data/room003.oel");
			type.set ("assets/data/room003.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/room004.oel", "assets/data/room004.oel");
			type.set ("assets/data/room004.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/room005.oel", "assets/data/room005.oel");
			type.set ("assets/data/room005.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/room006.oel", "assets/data/room006.oel");
			type.set ("assets/data/room006.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/Tiles.oep", "assets/data/Tiles.oep");
			type.set ("assets/data/Tiles.oep", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/bulletEnemy.png", "assets/images/bulletEnemy.png");
			type.set ("assets/images/bulletEnemy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bulletPlayer.png", "assets/images/bulletPlayer.png");
			type.set ("assets/images/bulletPlayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/button.png", "assets/images/button.png");
			type.set ("assets/images/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coin.png", "assets/images/coin.png");
			type.set ("assets/images/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/health.png", "assets/images/health.png");
			type.set ("assets/images/health.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/hole.png", "assets/images/hole.png");
			type.set ("assets/images/hole.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/rock.png", "assets/images/rock.png");
			type.set ("assets/images/rock.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/spitter-default.png", "assets/images/spitter-default.png");
			type.set ("assets/images/spitter-default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tiles.png", "assets/images/tiles.png");
			type.set ("assets/images/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/walker-big.png", "assets/images/walker-big.png");
			type.set ("assets/images/walker-big.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/walker-default.png", "assets/images/walker-default.png");
			type.set ("assets/images/walker-default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/walker-strong.png", "assets/images/walker-strong.png");
			type.set ("assets/images/walker-strong.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/menu.wav", "assets/music/menu.wav");
			type.set ("assets/music/menu.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/coin.wav", "assets/sounds/coin.wav");
			type.set ("assets/sounds/coin.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_shoot.wav", "assets/sounds/enemy_shoot.wav");
			type.set ("assets/sounds/enemy_shoot.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hurt.wav", "assets/sounds/hurt.wav");
			type.set ("assets/sounds/hurt.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/select.wav", "assets/sounds/select.wav");
			type.set ("assets/sounds/select.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/step_1.wav", "assets/sounds/step_1.wav");
			type.set ("assets/sounds/step_1.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/step_2.wav", "assets/sounds/step_2.wav");
			type.set ("assets/sounds/step_2.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
