// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Bullet)
HX_DECLARE_CLASS0(Coin)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(EnemyWalker)
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmoLoader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x46c2835d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static hx::ObjectPtr< PlayState_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		 ::Player player;
		 ::flixel::addons::editors::ogmo::FlxOgmoLoader map;
		 ::flixel::tile::FlxTilemap mWalls;
		::Array< ::Dynamic> floorMap;
		int floorX;
		int floorY;
		bool roomClear;
		 ::flixel::_hx_system::FlxSound sndCoin;
		 ::flixel::_hx_system::FlxSound sndHurt;
		 ::flixel::group::FlxTypedGroup grpCoins;
		 ::flixel::group::FlxTypedGroup grpEnemies;
		 ::flixel::group::FlxTypedGroup grpPlayerBullets;
		 ::flixel::group::FlxTypedGroup grpEnemyBullets;
		 ::flixel::group::FlxTypedGroup grpHoles;
		 ::flixel::group::FlxTypedGroup grpObstacles;
		 ::HUD hud;
		int money;
		int playerHealth;
		bool ending;
		bool won;
		void create();

		void buildMap();
		::Dynamic buildMap_dyn();

		void setup( ::Dynamic path, ::Dynamic direction);
		::Dynamic setup_dyn();

		void placeEntities(::String entityName, ::Xml entityData);
		::Dynamic placeEntities_dyn();

		void update(Float elapsed);

		void playerTouchCoin( ::Player P, ::Coin C);
		::Dynamic playerTouchCoin_dyn();

		void checkEnemyVision( ::Enemy e);
		::Dynamic checkEnemyVision_dyn();

		void playerTouchEnemy( ::Player P, ::EnemyWalker E);
		::Dynamic playerTouchEnemy_dyn();

		void playerHurt( ::Player P);
		::Dynamic playerHurt_dyn();

		void doneFadeOut();
		::Dynamic doneFadeOut_dyn();

		void moveRoom( ::flixel::FlxObject FlxTile, ::flixel::FlxObject player);
		::Dynamic moveRoom_dyn();

		void playerShoot();
		::Dynamic playerShoot_dyn();

		void enemyShoot( ::Enemy enemyRef);
		::Dynamic enemyShoot_dyn();

		void bulletHitMap( ::Bullet bulletRef, ::flixel::FlxObject mapRef);
		::Dynamic bulletHitMap_dyn();

		void bulletHitEnemy( ::Bullet bulletRef, ::Enemy enemyRef);
		::Dynamic bulletHitEnemy_dyn();

		void bulletHitPlayer( ::Bullet bulletRef, ::Player playerRef);
		::Dynamic bulletHitPlayer_dyn();

};


#endif /* INCLUDED_PlayState */ 
