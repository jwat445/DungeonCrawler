// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_GraphicVirtualInput
#include <flixel/system/GraphicVirtualInput.h>
#endif
#ifndef INCLUDED_flixel_system_VirtualInputData
#include <flixel/system/VirtualInputData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_69_drawLogo,"flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",69,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_125_getBitmapData,"flixel.system.FlxAssets","getBitmapData",0x17128189,"flixel.system.FlxAssets.getBitmapData","flixel/system/FlxAssets.hx",125,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_140_getBitmapFromClass,"flixel.system.FlxAssets","getBitmapFromClass",0x223d9eaf,"flixel.system.FlxAssets.getBitmapFromClass","flixel/system/FlxAssets.hx",140,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_154_resolveBitmapData,"flixel.system.FlxAssets","resolveBitmapData",0x02df705f,"flixel.system.FlxAssets.resolveBitmapData","flixel/system/FlxAssets.hx",154,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_183_resolveKey,"flixel.system.FlxAssets","resolveKey",0xd790f639,"flixel.system.FlxAssets.resolveKey","flixel/system/FlxAssets.hx",183,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_206_getSound,"flixel.system.FlxAssets","getSound",0x306e52ff,"flixel.system.FlxAssets.getSound","flixel/system/FlxAssets.hx",206,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_217_getVirtualInputFrames,"flixel.system.FlxAssets","getVirtualInputFrames",0xfe1716d5,"flixel.system.FlxAssets.getVirtualInputFrames","flixel/system/FlxAssets.hx",217,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_65_boot,"flixel.system.FlxAssets","boot",0x48106fd8,"flixel.system.FlxAssets.boot","flixel/system/FlxAssets.hx",65,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_66_boot,"flixel.system.FlxAssets","boot",0x48106fd8,"flixel.system.FlxAssets.boot","flixel/system/FlxAssets.hx",66,0xd3ac1356)
namespace flixel{
namespace _hx_system{

void FlxAssets_obj::__construct() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return new FlxAssets_obj; }

void *FlxAssets_obj::_hx_vtable = 0;

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxAssets_obj > _hx_result = new FlxAssets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAssets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x284d158a;
}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

void FlxAssets_obj::drawLogo( ::openfl::_legacy::display::Graphics graph){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_69_drawLogo)
HXLINE(  71)		graph->beginFill((int)47394,null());
HXLINE(  72)		graph->moveTo((int)50,(int)13);
HXLINE(  73)		graph->lineTo((int)51,(int)13);
HXLINE(  74)		graph->lineTo((int)87,(int)50);
HXLINE(  75)		graph->lineTo((int)87,(int)51);
HXLINE(  76)		graph->lineTo((int)51,(int)87);
HXLINE(  77)		graph->lineTo((int)50,(int)87);
HXLINE(  78)		graph->lineTo((int)13,(int)51);
HXLINE(  79)		graph->lineTo((int)13,(int)50);
HXLINE(  80)		graph->lineTo((int)50,(int)13);
HXLINE(  81)		graph->endFill();
HXLINE(  84)		graph->beginFill((int)16761138,null());
HXLINE(  85)		graph->moveTo((int)0,(int)0);
HXLINE(  86)		graph->lineTo((int)25,(int)0);
HXLINE(  87)		graph->lineTo((int)50,(int)13);
HXLINE(  88)		graph->lineTo((int)13,(int)50);
HXLINE(  89)		graph->lineTo((int)0,(int)25);
HXLINE(  90)		graph->lineTo((int)0,(int)0);
HXLINE(  91)		graph->endFill();
HXLINE(  94)		graph->beginFill((int)16066382,null());
HXLINE(  95)		graph->moveTo((int)100,(int)0);
HXLINE(  96)		graph->lineTo((int)75,(int)0);
HXLINE(  97)		graph->lineTo((int)51,(int)13);
HXLINE(  98)		graph->lineTo((int)87,(int)50);
HXLINE(  99)		graph->lineTo((int)100,(int)25);
HXLINE( 100)		graph->lineTo((int)100,(int)0);
HXLINE( 101)		graph->endFill();
HXLINE( 104)		graph->beginFill((int)3555839,null());
HXLINE( 105)		graph->moveTo((int)0,(int)100);
HXLINE( 106)		graph->lineTo((int)25,(int)100);
HXLINE( 107)		graph->lineTo((int)50,(int)87);
HXLINE( 108)		graph->lineTo((int)13,(int)51);
HXLINE( 109)		graph->lineTo((int)0,(int)75);
HXLINE( 110)		graph->lineTo((int)0,(int)100);
HXLINE( 111)		graph->endFill();
HXLINE( 114)		graph->beginFill((int)314875,null());
HXLINE( 115)		graph->moveTo((int)100,(int)100);
HXLINE( 116)		graph->lineTo((int)75,(int)100);
HXLINE( 117)		graph->lineTo((int)51,(int)87);
HXLINE( 118)		graph->lineTo((int)87,(int)51);
HXLINE( 119)		graph->lineTo((int)100,(int)75);
HXLINE( 120)		graph->lineTo((int)100,(int)100);
HXLINE( 121)		graph->endFill();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

 ::openfl::_legacy::display::BitmapData FlxAssets_obj::getBitmapData(::String id){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_125_getBitmapData)
HXLINE( 126)		if (::openfl::_legacy::Assets_obj::exists(id,null())) {
HXLINE( 127)			return ::openfl::_legacy::Assets_obj::getBitmapData(id,false);
            		}
HXLINE( 128)		 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXLINE( 129)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

 ::openfl::_legacy::display::BitmapData FlxAssets_obj::getBitmapFromClass(hx::Class source){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_140_getBitmapFromClass)
HXDLIN( 140)		return ( ( ::openfl::_legacy::display::BitmapData)(::Type_obj::createInstance(source,::cpp::VirtualArray_obj::__new(2)->init(0,(int)0)->init(1,(int)0))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapFromClass,return )

 ::openfl::_legacy::display::BitmapData FlxAssets_obj::resolveBitmapData( ::Dynamic Graphic){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_154_resolveBitmapData)
HXLINE( 155)		if (::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_legacy::display::BitmapData >())) {
HXLINE( 157)			return ( ( ::openfl::_legacy::display::BitmapData)(Graphic) );
            		}
            		else {
HXLINE( 159)			if (::Std_obj::is(Graphic,hx::ClassOf< ::hx::Class >())) {
HXLINE( 161)				return ( ( ::openfl::_legacy::display::BitmapData)(::Type_obj::createInstance(Graphic,::cpp::VirtualArray_obj::__new(2)->init(0,(int)0)->init(1,(int)0))) );
            			}
            			else {
HXLINE( 163)				if (::Std_obj::is(Graphic,hx::ClassOf< ::String >())) {
HXLINE( 165)					 ::openfl::_legacy::display::BitmapData _hx_tmp;
HXDLIN( 165)					if (::openfl::_legacy::Assets_obj::exists(( (::String)(Graphic) ),null())) {
HXLINE( 165)						_hx_tmp = ::openfl::_legacy::Assets_obj::getBitmapData(( (::String)(Graphic) ),false);
            					}
            					else {
HXLINE( 165)						 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 165)						_hx_tmp = null();
            					}
HXDLIN( 165)					return _hx_tmp;
            				}
            			}
            		}
HXLINE( 168)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,resolveBitmapData,return )

::String FlxAssets_obj::resolveKey( ::Dynamic Graphic,::String Key){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_183_resolveKey)
HXLINE( 184)		if (hx::IsNotNull( Key )) {
HXLINE( 186)			return Key;
            		}
HXLINE( 189)		if (::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_legacy::display::BitmapData >())) {
HXLINE( 191)			return Key;
            		}
            		else {
HXLINE( 193)			if (::Std_obj::is(Graphic,hx::ClassOf< ::hx::Class >())) {
HXLINE( 195)				 ::flixel::_hx_system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;
HXDLIN( 195)				return ::Type_obj::getClassName(Graphic);
            			}
            			else {
HXLINE( 197)				if (::Std_obj::is(Graphic,hx::ClassOf< ::String >())) {
HXLINE( 199)					return ( (::String)(Graphic) );
            				}
            			}
            		}
HXLINE( 202)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAssets_obj,resolveKey,return )

 ::openfl::_legacy::media::Sound FlxAssets_obj::getSound(::String id){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_206_getSound)
HXLINE( 207)		::String extension = HX_("",00,00,00,00);
HXLINE( 211)		extension = HX_(".ogg",e1,64,bc,1e);
HXLINE( 213)		return ::openfl::_legacy::Assets_obj::getSound((id + extension),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getSound,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAssets_obj::getVirtualInputFrames(){
            	HX_GC_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_217_getVirtualInputFrames)
HXLINE( 218)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::graphics::FlxGraphic_obj::fromClass(hx::ClassOf< ::flixel::_hx_system::GraphicVirtualInput >(),null(),null(),null());
HXLINE( 219)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(graphic,::Std_obj::string( ::flixel::_hx_system::VirtualInputData_obj::__alloc( HX_CTX ,null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,getVirtualInputFrames,return )


FlxAssets_obj::FlxAssets_obj()
{
}

bool FlxAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { outValue = drawLogo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resolveKey") ) { outValue = resolveKey_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { outValue = ( FONT_DEFAULT ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { outValue = ( FONT_DEBUGGER ); return true; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolveBitmapData") ) { outValue = resolveBitmapData_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBitmapFromClass") ) { outValue = getBitmapFromClass_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getVirtualInputFrames") ) { outValue = getVirtualInputFrames_dyn(); return true; }
	}
	return false;
}

bool FlxAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxAssets_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxAssets_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEFAULT,HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2")},
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEBUGGER,HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxAssets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAssets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

hx::Class FlxAssets_obj::__mClass;

static ::String FlxAssets_obj_sStaticFields[] = {
	HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2"),
	HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea"),
	HX_HCSTRING("drawLogo","\x8f","\x49","\x21","\x5c"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBitmapFromClass","\x89","\xdc","\x79","\xc1"),
	HX_HCSTRING("resolveBitmapData","\xc5","\x2b","\x67","\xfa"),
	HX_HCSTRING("resolveKey","\x13","\xca","\xae","\xf6"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getVirtualInputFrames","\x3b","\x7d","\x77","\x6e"),
	::String(null())
};

void FlxAssets_obj::__register()
{
	hx::Object *dummy = new FlxAssets_obj;
	FlxAssets_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxAssets","\x88","\x16","\x13","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAssets_obj::__SetStatic;
	__mClass->mMarkFunc = FlxAssets_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxAssets_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAssets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAssets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAssets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAssets_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAssets_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_65_boot)
HXDLIN(  65)		FONT_DEFAULT = HX_("Nokia Cellphone FC Small",d6,2f,44,ca);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_66_boot)
HXDLIN(  66)		FONT_DEBUGGER = HX_("Monsterrat",2b,92,73,63);
            	}
}

} // end namespace flixel
} // end namespace system
