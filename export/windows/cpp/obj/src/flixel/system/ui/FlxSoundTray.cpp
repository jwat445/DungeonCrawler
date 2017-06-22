// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b1aa19ce59d84264_23_new,"flixel.system.ui.FlxSoundTray","new",0x221b6352,"flixel.system.ui.FlxSoundTray.new","flixel/system/ui/FlxSoundTray.hx",23,0x04618f9d)
HX_LOCAL_STACK_FRAME(_hx_pos_b1aa19ce59d84264_106_update,"flixel.system.ui.FlxSoundTray","update",0x9cbad657,"flixel.system.ui.FlxSoundTray.update","flixel/system/ui/FlxSoundTray.hx",106,0x04618f9d)
HX_LOCAL_STACK_FRAME(_hx_pos_b1aa19ce59d84264_133_show,"flixel.system.ui.FlxSoundTray","show",0xb92bd5cb,"flixel.system.ui.FlxSoundTray.show","flixel/system/ui/FlxSoundTray.hx",133,0x04618f9d)
HX_LOCAL_STACK_FRAME(_hx_pos_b1aa19ce59d84264_166_screenCenter,"flixel.system.ui.FlxSoundTray","screenCenter",0x0f14ad2f,"flixel.system.ui.FlxSoundTray.screenCenter","flixel/system/ui/FlxSoundTray.hx",166,0x04618f9d)
namespace flixel{
namespace _hx_system{
namespace ui{

void FlxSoundTray_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b1aa19ce59d84264_23_new)
HXLINE(  43)		this->_defaultScale = ((Float)2.0);
HXLINE(  41)		this->_width = (int)80;
HXLINE(  51)		super::__construct();
HXLINE(  53)		this->set_visible(false);
HXLINE(  54)		this->set_scaleX(this->_defaultScale);
HXLINE(  55)		this->set_scaleY(this->_defaultScale);
HXLINE(  56)		 ::openfl::_legacy::display::Bitmap tmp =  ::openfl::_legacy::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,this->_width,(int)30,true,(int)2130706432,null()),null(),null());
HXLINE(  57)		this->screenCenter();
HXLINE(  58)		this->addChild(tmp);
HXLINE(  60)		 ::openfl::_legacy::text::TextField text =  ::openfl::_legacy::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  61)		text->set_width(tmp->get_width());
HXLINE(  62)		text->set_height(tmp->get_height());
HXLINE(  63)		text->set_multiline(true);
HXLINE(  64)		text->set_wordWrap(true);
HXLINE(  65)		text->set_selectable(false);
HXLINE(  74)		 ::openfl::_legacy::text::TextFormat dtf =  ::openfl::_legacy::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT,(int)10,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  75)		dtf->align = HX_("center",d5,25,db,05);
HXLINE(  76)		text->set_defaultTextFormat(dtf);
HXLINE(  77)		this->addChild(text);
HXLINE(  78)		text->set_text(HX_("VOLUME",da,d5,d5,11));
HXLINE(  79)		text->set_y((int)16);
HXLINE(  81)		int bx = (int)10;
HXLINE(  82)		int by = (int)14;
HXLINE(  83)		this->_bars = ::Array_obj< ::Dynamic>::__new();
HXLINE(  85)		{
HXLINE(  85)			int _g = (int)0;
HXDLIN(  85)			while((_g < (int)10)){
HXLINE(  85)				_g = (_g + (int)1);
HXDLIN(  85)				int i = (_g - (int)1);
HXLINE(  87)				tmp =  ::openfl::_legacy::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,(int)4,(i + (int)1),false,(int)-1,null()),null(),null());
HXLINE(  88)				tmp->set_x(bx);
HXLINE(  89)				tmp->set_y(by);
HXLINE(  90)				this->addChild(tmp);
HXLINE(  91)				this->_bars->push(tmp);
HXLINE(  92)				bx = (bx + (int)6);
HXLINE(  93)				by = (by - (int)1);
            			}
            		}
HXLINE(  96)		this->set_y(-(this->get_height()));
HXLINE(  97)		this->set_visible(false);
            	}

Dynamic FlxSoundTray_obj::__CreateEmpty() { return new FlxSoundTray_obj; }

void *FlxSoundTray_obj::_hx_vtable = 0;

Dynamic FlxSoundTray_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxSoundTray_obj > _hx_result = new FlxSoundTray_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSoundTray_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x5e035a1a) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5e035a1a;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

void FlxSoundTray_obj::update(Float MS){
            	HX_STACKFRAME(&_hx_pos_b1aa19ce59d84264_106_update)
HXDLIN( 106)		if ((this->_timer > (int)0)) {
HXLINE( 108)			 ::flixel::_hx_system::ui::FlxSoundTray _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 108)			_hx_tmp->_timer = (_hx_tmp->_timer - ((Float)MS / (Float)(int)1000));
            		}
            		else {
HXLINE( 110)			Float _hx_tmp1 = this->get_y();
HXDLIN( 110)			if ((_hx_tmp1 > -(this->get_height()))) {
HXLINE( 112)				{
HXLINE( 112)					 ::flixel::_hx_system::ui::FlxSoundTray _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 112)					Float _hx_tmp2 = _g->get_y();
HXDLIN( 112)					_g->set_y((_hx_tmp2 - ((((Float)MS / (Float)(int)1000) * ::flixel::FlxG_obj::height) * (int)2)));
            				}
HXLINE( 114)				Float _hx_tmp3 = this->get_y();
HXDLIN( 114)				if ((_hx_tmp3 <= -(this->get_height()))) {
HXLINE( 116)					this->set_visible(false);
HXLINE( 117)					this->active = false;
HXLINE( 120)					::flixel::FlxG_obj::save->data->__SetField(HX_("mute",d9,6e,65,48),::flixel::FlxG_obj::sound->muted,hx::paccDynamic);
HXLINE( 121)					::flixel::FlxG_obj::save->data->__SetField(HX_("volume",da,29,53,5f),::flixel::FlxG_obj::sound->volume,hx::paccDynamic);
HXLINE( 122)					::flixel::FlxG_obj::save->flush(null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,update,(void))

void FlxSoundTray_obj::show(hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
            	HX_STACKFRAME(&_hx_pos_b1aa19ce59d84264_133_show)
HXLINE( 134)		if (!(Silent)) {
HXLINE( 136)			::String extension = HX_("",00,00,00,00);
HXDLIN( 136)			extension = HX_(".ogg",e1,64,bc,1e);
HXDLIN( 136)			 ::openfl::_legacy::media::Sound sound = ::openfl::_legacy::Assets_obj::getSound((HX_("flixel/sounds/beep",e6,b5,a9,33) + extension),null());
HXLINE( 137)			if (hx::IsNotNull( sound )) {
HXLINE( 138)				::flixel::FlxG_obj::sound->load(sound,null(),null(),null(),null(),null(),null(),null())->play(null(),null(),null());
            			}
            		}
HXLINE( 141)		this->_timer = (int)1;
HXLINE( 142)		this->set_y((int)0);
HXLINE( 143)		this->set_visible(true);
HXLINE( 144)		this->active = true;
HXLINE( 145)		int globalVolume = ::Math_obj::round((::flixel::FlxG_obj::sound->volume * (int)10));
HXLINE( 147)		if (::flixel::FlxG_obj::sound->muted) {
HXLINE( 149)			globalVolume = (int)0;
            		}
HXLINE( 152)		{
HXLINE( 152)			int _g1 = (int)0;
HXDLIN( 152)			int _g = this->_bars->length;
HXDLIN( 152)			while((_g1 < _g)){
HXLINE( 152)				_g1 = (_g1 + (int)1);
HXDLIN( 152)				int i = (_g1 - (int)1);
HXLINE( 154)				if ((i < globalVolume)) {
HXLINE( 156)					this->_bars->__get(i).StaticCast<  ::openfl::_legacy::display::Bitmap >()->set_alpha((int)1);
            				}
            				else {
HXLINE( 160)					this->_bars->__get(i).StaticCast<  ::openfl::_legacy::display::Bitmap >()->set_alpha(((Float)0.5));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,show,(void))

void FlxSoundTray_obj::screenCenter(){
            	HX_STACKFRAME(&_hx_pos_b1aa19ce59d84264_166_screenCenter)
HXLINE( 167)		this->set_scaleX(this->_defaultScale);
HXLINE( 168)		this->set_scaleY(this->_defaultScale);
HXLINE( 170)		int _hx_tmp = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth();
HXDLIN( 170)		Float _hx_tmp1 = (((Float)0.5) * (_hx_tmp - (this->_width * this->_defaultScale)));
HXDLIN( 170)		this->set_x((_hx_tmp1 - ::flixel::FlxG_obj::game->get_x()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundTray_obj,screenCenter,(void))


hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__new() {
	hx::ObjectPtr< FlxSoundTray_obj > __this = new FlxSoundTray_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxSoundTray_obj *__this = (FlxSoundTray_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxSoundTray_obj), true, "flixel.system.ui.FlxSoundTray"));
	*(void **)__this = FlxSoundTray_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSoundTray_obj::FlxSoundTray_obj()
{
}

void FlxSoundTray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundTray);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_bars,"_bars");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_defaultScale,"_defaultScale");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSoundTray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_bars,"_bars");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_defaultScale,"_defaultScale");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxSoundTray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return hx::Val( show_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { return hx::Val( _bars ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"_timer") ) { return hx::Val( _timer ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return hx::Val( screenCenter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { return hx::Val( _defaultScale ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxSoundTray_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { _bars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { _defaultScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundTray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_bars","\x1f","\x03","\x22","\xf4"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_defaultScale","\xe8","\x9c","\x98","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxSoundTray_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxSoundTray_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSoundTray_obj,_bars),HX_HCSTRING("_bars","\x1f","\x03","\x22","\xf4")},
	{hx::fsInt,(int)offsetof(FlxSoundTray_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_defaultScale),HX_HCSTRING("_defaultScale","\xe8","\x9c","\x98","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxSoundTray_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSoundTray_obj_sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_bars","\x1f","\x03","\x22","\xf4"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_defaultScale","\xe8","\x9c","\x98","\x10"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"),
	::String(null()) };

static void FlxSoundTray_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSoundTray_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSoundTray_obj::__mClass;

void FlxSoundTray_obj::__register()
{
	hx::Object *dummy = new FlxSoundTray_obj;
	FlxSoundTray_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.ui.FlxSoundTray","\x60","\x12","\xf7","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxSoundTray_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxSoundTray_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSoundTray_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSoundTray_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSoundTray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSoundTray_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
