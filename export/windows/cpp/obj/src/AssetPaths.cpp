// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a71b198b2cf5b646_28_boot,"AssetPaths","boot",0x7f6e2362,"AssetPaths.boot","flixel/system/macros/FlxAssetPaths.hx",28,0x71054749)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60e60f3e;
}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::room000__oel;

::String AssetPaths_obj::room001__oel;

::String AssetPaths_obj::room002__oel;

::String AssetPaths_obj::room003__oel;

::String AssetPaths_obj::room004__oel;

::String AssetPaths_obj::room005__oel;

::String AssetPaths_obj::room006__oel;

::String AssetPaths_obj::Tiles__oep;

::String AssetPaths_obj::bulletEnemy__png;

::String AssetPaths_obj::bulletPlayer__png;

::String AssetPaths_obj::button__png;

::String AssetPaths_obj::coin__png;

::String AssetPaths_obj::health__png;

::String AssetPaths_obj::hole__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::rock__png;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::walker_big__png;

::String AssetPaths_obj::walker_default__png;

::String AssetPaths_obj::walker_strong__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::coin__wav;

::String AssetPaths_obj::hurt__wav;

::String AssetPaths_obj::select__wav;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::step_1__wav;

::String AssetPaths_obj::step_2__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::room000__oel,HX_HCSTRING("room000__oel","\x61","\xf0","\x90","\x01")},
	{hx::fsString,(void *) &AssetPaths_obj::room001__oel,HX_HCSTRING("room001__oel","\xc0","\x4c","\xec","\x67")},
	{hx::fsString,(void *) &AssetPaths_obj::room002__oel,HX_HCSTRING("room002__oel","\x1f","\xa9","\x47","\xce")},
	{hx::fsString,(void *) &AssetPaths_obj::room003__oel,HX_HCSTRING("room003__oel","\x7e","\x05","\xa3","\x34")},
	{hx::fsString,(void *) &AssetPaths_obj::room004__oel,HX_HCSTRING("room004__oel","\xdd","\x61","\xfe","\x9a")},
	{hx::fsString,(void *) &AssetPaths_obj::room005__oel,HX_HCSTRING("room005__oel","\x3c","\xbe","\x59","\x01")},
	{hx::fsString,(void *) &AssetPaths_obj::room006__oel,HX_HCSTRING("room006__oel","\x9b","\x1a","\xb5","\x67")},
	{hx::fsString,(void *) &AssetPaths_obj::Tiles__oep,HX_HCSTRING("Tiles__oep","\xf5","\xd7","\xee","\x13")},
	{hx::fsString,(void *) &AssetPaths_obj::bulletEnemy__png,HX_HCSTRING("bulletEnemy__png","\x23","\x23","\xcb","\x4b")},
	{hx::fsString,(void *) &AssetPaths_obj::bulletPlayer__png,HX_HCSTRING("bulletPlayer__png","\x66","\x7b","\x64","\xbf")},
	{hx::fsString,(void *) &AssetPaths_obj::button__png,HX_HCSTRING("button__png","\x57","\x0e","\xaf","\xac")},
	{hx::fsString,(void *) &AssetPaths_obj::coin__png,HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b")},
	{hx::fsString,(void *) &AssetPaths_obj::health__png,HX_HCSTRING("health__png","\x6d","\xdf","\x86","\xa5")},
	{hx::fsString,(void *) &AssetPaths_obj::hole__png,HX_HCSTRING("hole__png","\x49","\x6c","\x3d","\x5e")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::player__png,HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65")},
	{hx::fsString,(void *) &AssetPaths_obj::rock__png,HX_HCSTRING("rock__png","\xc4","\x83","\x8e","\x8b")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles__png,HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d")},
	{hx::fsString,(void *) &AssetPaths_obj::walker_big__png,HX_HCSTRING("walker_big__png","\xb2","\x93","\xec","\xc1")},
	{hx::fsString,(void *) &AssetPaths_obj::walker_default__png,HX_HCSTRING("walker_default__png","\x91","\xf8","\x32","\x40")},
	{hx::fsString,(void *) &AssetPaths_obj::walker_strong__png,HX_HCSTRING("walker_strong__png","\x89","\xdc","\xac","\x7d")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{hx::fsString,(void *) &AssetPaths_obj::coin__wav,HX_HCSTRING("coin__wav","\xdb","\x7e","\x01","\x5c")},
	{hx::fsString,(void *) &AssetPaths_obj::hurt__wav,HX_HCSTRING("hurt__wav","\x9d","\x8f","\x4c","\xae")},
	{hx::fsString,(void *) &AssetPaths_obj::select__wav,HX_HCSTRING("select__wav","\x90","\x95","\x74","\xb8")},
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{hx::fsString,(void *) &AssetPaths_obj::step_1__wav,HX_HCSTRING("step_1__wav","\x0e","\x9c","\x23","\x3d")},
	{hx::fsString,(void *) &AssetPaths_obj::step_2__wav,HX_HCSTRING("step_2__wav","\x6d","\xf8","\x7e","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room000__oel,"room000__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room001__oel,"room001__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room002__oel,"room002__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room003__oel,"room003__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room004__oel,"room004__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room005__oel,"room005__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room006__oel,"room006__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Tiles__oep,"Tiles__oep");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bulletEnemy__png,"bulletEnemy__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bulletPlayer__png,"bulletPlayer__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hole__png,"hole__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::rock__png,"rock__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::walker_big__png,"walker_big__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::walker_default__png,"walker_default__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::walker_strong__png,"walker_strong__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step_1__wav,"step_1__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step_2__wav,"step_2__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room000__oel,"room000__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room001__oel,"room001__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room002__oel,"room002__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room003__oel,"room003__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room004__oel,"room004__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room005__oel,"room005__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room006__oel,"room006__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Tiles__oep,"Tiles__oep");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bulletEnemy__png,"bulletEnemy__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bulletPlayer__png,"bulletPlayer__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hole__png,"hole__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::rock__png,"rock__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::walker_big__png,"walker_big__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::walker_default__png,"walker_default__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::walker_strong__png,"walker_strong__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step_1__wav,"step_1__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step_2__wav,"step_2__wav");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("room000__oel","\x61","\xf0","\x90","\x01"),
	HX_HCSTRING("room001__oel","\xc0","\x4c","\xec","\x67"),
	HX_HCSTRING("room002__oel","\x1f","\xa9","\x47","\xce"),
	HX_HCSTRING("room003__oel","\x7e","\x05","\xa3","\x34"),
	HX_HCSTRING("room004__oel","\xdd","\x61","\xfe","\x9a"),
	HX_HCSTRING("room005__oel","\x3c","\xbe","\x59","\x01"),
	HX_HCSTRING("room006__oel","\x9b","\x1a","\xb5","\x67"),
	HX_HCSTRING("Tiles__oep","\xf5","\xd7","\xee","\x13"),
	HX_HCSTRING("bulletEnemy__png","\x23","\x23","\xcb","\x4b"),
	HX_HCSTRING("bulletPlayer__png","\x66","\x7b","\x64","\xbf"),
	HX_HCSTRING("button__png","\x57","\x0e","\xaf","\xac"),
	HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b"),
	HX_HCSTRING("health__png","\x6d","\xdf","\x86","\xa5"),
	HX_HCSTRING("hole__png","\x49","\x6c","\x3d","\x5e"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65"),
	HX_HCSTRING("rock__png","\xc4","\x83","\x8e","\x8b"),
	HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d"),
	HX_HCSTRING("walker_big__png","\xb2","\x93","\xec","\xc1"),
	HX_HCSTRING("walker_default__png","\x91","\xf8","\x32","\x40"),
	HX_HCSTRING("walker_strong__png","\x89","\xdc","\xac","\x7d"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	HX_HCSTRING("coin__wav","\xdb","\x7e","\x01","\x5c"),
	HX_HCSTRING("hurt__wav","\x9d","\x8f","\x4c","\xae"),
	HX_HCSTRING("select__wav","\x90","\x95","\x74","\xb8"),
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	HX_HCSTRING("step_1__wav","\x0e","\x9c","\x23","\x3d"),
	HX_HCSTRING("step_2__wav","\x6d","\xf8","\x7e","\xa3"),
	::String(null())
};

void AssetPaths_obj::__register()
{
	hx::Object *dummy = new AssetPaths_obj;
	AssetPaths_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		data_goes_here__txt = HX_("assets/data/data-goes-here.txt",5f,4b,b2,8e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		room000__oel = HX_("assets/data/room000.oel",44,3c,15,dc);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		room001__oel = HX_("assets/data/room001.oel",c5,d0,7b,6f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		room002__oel = HX_("assets/data/room002.oel",46,65,e2,02);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		room003__oel = HX_("assets/data/room003.oel",c7,f9,48,96);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		room004__oel = HX_("assets/data/room004.oel",48,8e,af,29);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		room005__oel = HX_("assets/data/room005.oel",c9,22,16,bd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		room006__oel = HX_("assets/data/room006.oel",4a,b7,7c,50);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		Tiles__oep = HX_("assets/data/Tiles.oep",f8,6e,eb,d8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		bulletEnemy__png = HX_("assets/images/bulletEnemy.png",96,09,fe,9f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		bulletPlayer__png = HX_("assets/images/bulletPlayer.png",a9,27,50,06);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		button__png = HX_("assets/images/button.png",98,1b,b6,cd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		coin__png = HX_("assets/images/coin.png",f7,e9,c5,54);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		health__png = HX_("assets/images/health.png",42,7f,55,20);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		hole__png = HX_("assets/images/hole.png",26,01,39,77);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		images_go_here__txt = HX_("assets/images/images-go-here.txt",0d,1d,45,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		player__png = HX_("assets/images/player.png",87,88,81,c6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		rock__png = HX_("assets/images/rock.png",0b,b2,62,8e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		tiles__png = HX_("assets/images/tiles.png",35,bc,d1,f5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		walker_big__png = HX_("assets/images/walker-big.png",0f,02,1b,8f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		walker_default__png = HX_("assets/images/walker-default.png",90,50,9c,59);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		walker_strong__png = HX_("assets/images/walker-strong.png",7e,63,af,cf);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		music_goes_here__txt = HX_("assets/music/music-goes-here.txt",6b,32,60,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		coin__wav = HX_("assets/sounds/coin.wav",ee,74,61,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		hurt__wav = HX_("assets/sounds/hurt.wav",6c,32,7c,8f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		select__wav = HX_("assets/sounds/select.wav",99,31,ec,2e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		sounds_go_here__txt = HX_("assets/sounds/sounds-go-here.txt",8d,b6,3d,a7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		step_1__wav = HX_("assets/sounds/step_1.wav",db,04,d6,96);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		step_2__wav = HX_("assets/sounds/step_2.wav",5c,99,3c,2a);
            	}
}

