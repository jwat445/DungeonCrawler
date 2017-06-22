package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.tile.FlxTilemap;
import flixel.tile.FlxTile;
import flixel.FlxObject;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.FlxG.keys;

using flixel.util.FlxSpriteUtil;

class PlayState extends FlxState
{
	private var player:Player;
	private var map:FlxOgmoLoader;
	private var mWalls:FlxTilemap;
	private var floorMap:Array<Array<String>>;
	private var floorX:Int = 4;
	private var floorY:Int = 4;
	private var roomClear:Bool;

	//Sounds
	private var sndCoin:FlxSound;
	private var sndHurt:FlxSound;

	//Object Groups
	private var grpCoins:FlxTypedGroup<Coin>;
	private var grpEnemies:FlxTypedGroup<Enemy>;
	private var grpBullets:FlxTypedGroup<Bullet>;
	private var grpHoles:FlxTypedGroup<Hole>;
	private var grpObstacles:FlxTypedGroup<Obstacle>;

	private var bulletDelay:Int;

	//HUD
	private var hud:HUD;
	private var money:Int = 0;
	private var playerHealth:Int = 3;

	//Game Over
	private var ending:Bool;
	private var won:Bool;

	override public function create():Void
	{
		player = new Player();
		roomClear = true;
		floorMap = [for (x in 0...9) [for (y in 0...9) AssetPaths.room000__oel]];
		buildMap();
		setup(floorMap[floorX][floorY], 0);
		FlxG.camera.follow(player, TOPDOWN, 1);
		sndHurt = FlxG.sound.load(AssetPaths.hurt__wav);
		super.create();
	}

	private function buildMap():Void
	{
		//TODO make this randomized and called at the start of every floor to randomly generate floors
		floorMap[4][4] = AssetPaths.room001__oel;
		floorMap[5][4] = AssetPaths.room002__oel;
		floorMap[5][5] = AssetPaths.room003__oel;
		floorMap[4][5] = AssetPaths.room004__oel;
	}

	private function setup(path:Dynamic, ?direction:Int):Void
	{
		map = new FlxOgmoLoader(path);
		mWalls = map.loadTilemap(AssetPaths.tiles__png, 32, 32, "walls");
		mWalls.follow();
		mWalls.setTileProperties(0, FlxObject.NONE);
		mWalls.setTileProperties(1, FlxObject.NONE);
		mWalls.setTileProperties(2, FlxObject.ANY);
		add(mWalls);

		grpHoles = new FlxTypedGroup<Hole>();
		add(grpHoles);
		grpObstacles = new FlxTypedGroup<Obstacle>();
		add(grpObstacles);

		grpCoins = new FlxTypedGroup<Coin>();
		add(grpCoins);
		sndCoin = FlxG.sound.load(AssetPaths.coin__wav);

		grpEnemies = new FlxTypedGroup<Enemy>();
		add(grpEnemies);

		player = new Player();
		map.loadEntities(placeEntities, "entities");
		add(player);

		hud = new HUD();
		add(hud);

		grpBullets = new FlxTypedGroup<Bullet>();
		add(grpBullets);
		bulletDelay = 10;

		mWalls.setTileProperties(3, FlxObject.ANY, moveRoom, Player);
		
		switch (direction) 
		{
			case 0:
				//center
				player.x = 288;
				player.y = 224;
			case 1:
				//top
				player.x = 288;
				player.y = 64;
			case 2:
				//right
				player.x = 512;
				player.y = 224;
			case 3:
				//bottom
				player.x = 288;
				player.y = 384;
			case 4:
				//left
				player.x = 64;
				player.y = 224;
			default:
				player.x = 0;
				player.y = 0;
				throw "UH OH Player direction not specified when entering room";
		}

	}

	private function placeEntities(entityName:String, entityData:Xml):Void
	{
		var x:Int = Std.parseInt(entityData.get("x"));
		var y:Int = Std.parseInt(entityData.get("y"));
		if (entityName == "player")
		{
			//_player.x = x;
			//_player.y = y;
		}
		else if (entityName == "coin")
		{
			grpCoins.add(new Coin(x + 8, y + 8));
		}
		else if (entityName == "hole")
		{
			grpHoles.add(new Hole(x, y));
		}
		else if (entityName == "obstacle")
		{
			grpObstacles.add(new Obstacle(x, y, entityData.get("variant")));
		}
		else if (entityName == "enemy" && (Math.abs(player.x - x) > 40) && (Math.abs(player.y - y) > 40))
		{
			switch (entityData.get("etype"))
			{
				case "walker":
					grpEnemies.add(new EnemyWalker(x + 8, y, entityData.get("variant")));
				case "head":
					grpEnemies.add(new EnemySpitter(x + 8, y, entityData.get("variant")));
				default:
					//random
			}
		}
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (grpEnemies.countLiving() <= 0)
		{
			roomClear = true;
		}
		else roomClear = false;
		bulletDelay --;
		if ((player.shoot()) && bulletDelay < 0)
		{
			shoot();
		}

		if (playerHealth < 1)
		{
			ending = true;
			FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
		}

		//WINNER
		if (money > 9)
		{
			won = true;
			ending = true;
			FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
		}

		if (ending)
		{
			return;
		}

		FlxG.collide(player, mWalls);
		FlxG.collide(player, grpHoles);
		FlxG.collide(player, grpObstacles);
		FlxG.overlap(player, grpCoins, playerTouchCoin);
		FlxG.overlap(player, grpEnemies, playerTouchEnemy);
		FlxG.collide(player, grpEnemies);

		FlxG.collide(grpEnemies, grpObstacles);
		FlxG.collide(grpEnemies, grpHoles);
		FlxG.collide(grpEnemies, mWalls);
		FlxG.collide(grpEnemies, grpEnemies);
		grpEnemies.forEachAlive(checkEnemyVision);

		hud.updateHUD(playerHealth, money);

		//check for bullet collisions
		FlxG.collide(grpBullets, grpEnemies, bulletHitEnemy);
		FlxG.collide(grpBullets, mWalls, bulletHitMap);
		FlxG.collide(grpBullets, grpObstacles, bulletHitMap);
	}

	private function playerTouchCoin(P:Player, C:Coin):Void
	{
		if (P.alive && P.exists && C.alive && C.exists)
		{
			money++;
			sndCoin.play(true);
			C.kill();
		}
	}

	private function checkEnemyVision(e:Enemy):Void
	{
		if (mWalls.ray(e.getMidpoint(), player.getMidpoint()))
		{
			e.seesPlayer = true;
			e.playerPos.copyFrom(player.getMidpoint());
		}
		else
			e.seesPlayer = false;
	}

	private function playerTouchEnemy(P:Player, E:EnemyWalker):Void
	{
		if (P.alive && P.exists && E.alive && E.exists && !P.isFlickering())
		{
			playerHurt(P);
		}
	}

	private function playerHurt(P:Player):Void
	{
		playerHealth--;
		sndHurt.play();
		P.flicker(1);
		FlxG.camera.shake(0.01, 0.2);
	}

	private function doneFadeOut():Void
	{
		FlxG.switchState(new GameOverState(won, money));
	}

	public function moveRoom(FlxTile, player:FlxObject):Void
	{
		if (roomClear)
		{
			var direction = 0;
			if (player.x > 300 && player.y > 100 && player.y < 400)
			{
				direction = 4; //exiting right, into left
				floorX += 1;
				trace("moved right");
			}
			else if (player.x < 100 && player.y > 100 && player.y < 400)
			{
				direction = 2; //exiting left, into right
				floorX -= 1;
				trace("moved left");
			}
			else if (player.y > 200 && player.x > 100 && player.x < 400)
			{
				direction = 1; //exiting bottom, into top
				floorY -= 1;
				trace("moved down");
			}
			else if (player.y < 200 && player.x > 100 && player.x < 400)
			{
				direction = 3; //exiting top, into bottom
				floorY += 1;
				trace("moved up");
			}
			trace(floorX, floorY);
			mWalls.kill();
			hud.destroy();
			grpEnemies.destroy();
			grpBullets.destroy();
			grpCoins.destroy();
			player.kill();
			setup(floorMap[floorX][floorY], direction);
		}
	}

	public function shoot():Void
	{
		bulletDelay = 30;
		var bullet = grpBullets.recycle(Bullet);
		bullet.init(player);
	}

	function bulletHitMap(bulletRef:Bullet, mapRef:FlxObject):Void
	{
		bulletRef.kill();
		trace("hit map: " + mapRef);
	}

	function bulletHitEnemy(bulletRef:Bullet, enemyRef:Enemy):Void
	{
		bulletRef.kill();
		enemyRef.damage(bulletRef);
		trace("hit enemy: " + enemyRef);
	}
}
