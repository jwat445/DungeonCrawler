// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1124_fromOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","fromOpenFL",0xc584ea03,"flixel.text._FlxText.FlxTextAlign_Impl_.fromOpenFL","flixel/text/FlxText.hx",1124,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1136_toOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","toOpenFL",0xa34e3094,"flixel.text._FlxText.FlxTextAlign_Impl_.toOpenFL","flixel/text/FlxText.hx",1136,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1109_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1109,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1116_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1116,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1118_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1118,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1120_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1120,0xdf165a6e)
namespace flixel{
namespace text{
namespace _FlxText{

void FlxTextAlign_Impl__obj::__construct() { }

Dynamic FlxTextAlign_Impl__obj::__CreateEmpty() { return new FlxTextAlign_Impl__obj; }

void *FlxTextAlign_Impl__obj::_hx_vtable = 0;

Dynamic FlxTextAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTextAlign_Impl__obj > _hx_result = new FlxTextAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTextAlign_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e9dd0ef;
}

::String FlxTextAlign_Impl__obj::LEFT;

::String FlxTextAlign_Impl__obj::CENTER;

::String FlxTextAlign_Impl__obj::RIGHT;

::String FlxTextAlign_Impl__obj::JUSTIFY;

::String FlxTextAlign_Impl__obj::fromOpenFL(::String align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1124_fromOpenFL)
HXDLIN(1124)		::String _hx_switch_0 = align;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(1127)			return HX_("center",d5,25,db,05);
HXDLIN(1127)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("justify",50,df,b5,83)) ){
HXLINE(1129)			return HX_("justify",50,df,b5,83);
HXDLIN(1129)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(1126)			return HX_("left",07,08,b0,47);
HXDLIN(1126)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(1128)			return HX_("right",dc,0b,64,e9);
HXDLIN(1128)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(1130)			return HX_("left",07,08,b0,47);
            		}
            		_hx_goto_0:;
HXLINE(1124)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,fromOpenFL,return )

::String FlxTextAlign_Impl__obj::toOpenFL(::String align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1136_toOpenFL)
HXDLIN(1136)		::String _hx_switch_0 = align;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(1139)			return HX_("center",d5,25,db,05);
HXDLIN(1139)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("justify",50,df,b5,83)) ){
HXLINE(1141)			return HX_("justify",50,df,b5,83);
HXDLIN(1141)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(1138)			return HX_("left",07,08,b0,47);
HXDLIN(1138)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(1140)			return HX_("right",dc,0b,64,e9);
HXDLIN(1140)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(1142)			return HX_("left",07,08,b0,47);
            		}
            		_hx_goto_2:;
HXLINE(1136)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,toOpenFL,return )


FlxTextAlign_Impl__obj::FlxTextAlign_Impl__obj()
{
}

bool FlxTextAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toOpenFL") ) { outValue = toOpenFL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromOpenFL") ) { outValue = fromOpenFL_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxTextAlign_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxTextAlign_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::JUSTIFY,HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxTextAlign_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTextAlign_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#endif

hx::Class FlxTextAlign_Impl__obj::__mClass;

static ::String FlxTextAlign_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03"),
	HX_HCSTRING("fromOpenFL","\x9a","\x4c","\xd8","\x64"),
	HX_HCSTRING("toOpenFL","\x6b","\xef","\xd2","\x48"),
	::String(null())
};

void FlxTextAlign_Impl__obj::__register()
{
	hx::Object *dummy = new FlxTextAlign_Impl__obj;
	FlxTextAlign_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text._FlxText.FlxTextAlign_Impl_","\x65","\xe8","\xc9","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTextAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTextAlign_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxTextAlign_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxTextAlign_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTextAlign_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTextAlign_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTextAlign_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTextAlign_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1109_boot)
HXDLIN(1109)		LEFT = HX_("left",07,08,b0,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1116_boot)
HXDLIN(1116)		CENTER = HX_("center",d5,25,db,05);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1118_boot)
HXDLIN(1118)		RIGHT = HX_("right",dc,0b,64,e9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1120_boot)
HXDLIN(1120)		JUSTIFY = HX_("justify",50,df,b5,83);
            	}
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText
