// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_StageAlign
#include <openfl/_legacy/display/StageAlign.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::StageAlign StageAlign_obj::BOTTOM;

::openfl::_legacy::display::StageAlign StageAlign_obj::BOTTOM_LEFT;

::openfl::_legacy::display::StageAlign StageAlign_obj::BOTTOM_RIGHT;

::openfl::_legacy::display::StageAlign StageAlign_obj::LEFT;

::openfl::_legacy::display::StageAlign StageAlign_obj::RIGHT;

::openfl::_legacy::display::StageAlign StageAlign_obj::TOP;

::openfl::_legacy::display::StageAlign StageAlign_obj::TOP_LEFT;

::openfl::_legacy::display::StageAlign StageAlign_obj::TOP_RIGHT;

bool StageAlign_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) { outValue = StageAlign_obj::BOTTOM; return true; }
	if (inName==HX_("BOTTOM_LEFT",1b,e5,32,10)) { outValue = StageAlign_obj::BOTTOM_LEFT; return true; }
	if (inName==HX_("BOTTOM_RIGHT",28,a0,62,93)) { outValue = StageAlign_obj::BOTTOM_RIGHT; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = StageAlign_obj::LEFT; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = StageAlign_obj::RIGHT; return true; }
	if (inName==HX_("TOP",75,02,40,00)) { outValue = StageAlign_obj::TOP; return true; }
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) { outValue = StageAlign_obj::TOP_LEFT; return true; }
	if (inName==HX_("TOP_RIGHT",32,53,b6,3f)) { outValue = StageAlign_obj::TOP_RIGHT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StageAlign_obj)

int StageAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 7;
	if (inName==HX_("BOTTOM_LEFT",1b,e5,32,10)) return 6;
	if (inName==HX_("BOTTOM_RIGHT",28,a0,62,93)) return 5;
	if (inName==HX_("LEFT",07,d0,70,32)) return 4;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 3;
	if (inName==HX_("TOP",75,02,40,00)) return 2;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return 1;
	if (inName==HX_("TOP_RIGHT",32,53,b6,3f)) return 0;
	return super::__FindIndex(inName);
}

int StageAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 0;
	if (inName==HX_("BOTTOM_LEFT",1b,e5,32,10)) return 0;
	if (inName==HX_("BOTTOM_RIGHT",28,a0,62,93)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return 0;
	if (inName==HX_("TOP_RIGHT",32,53,b6,3f)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val StageAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return BOTTOM;
	if (inName==HX_("BOTTOM_LEFT",1b,e5,32,10)) return BOTTOM_LEFT;
	if (inName==HX_("BOTTOM_RIGHT",28,a0,62,93)) return BOTTOM_RIGHT;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	if (inName==HX_("TOP",75,02,40,00)) return TOP;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return TOP_LEFT;
	if (inName==HX_("TOP_RIGHT",32,53,b6,3f)) return TOP_RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String StageAlign_obj_sStaticFields[] = {
	HX_("TOP_RIGHT",32,53,b6,3f),
	HX_("TOP_LEFT",51,e1,bb,7b),
	HX_("TOP",75,02,40,00),
	HX_("RIGHT",bc,43,52,67),
	HX_("LEFT",07,d0,70,32),
	HX_("BOTTOM_RIGHT",28,a0,62,93),
	HX_("BOTTOM_LEFT",1b,e5,32,10),
	HX_("BOTTOM",eb,92,fb,17),
	::String(null())
};

static void StageAlign_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageAlign_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(StageAlign_obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(StageAlign_obj::TOP_LEFT,"TOP_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::TOP_RIGHT,"TOP_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageAlign_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::TOP_LEFT,"TOP_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::TOP_RIGHT,"TOP_RIGHT");
};
#endif

hx::Class StageAlign_obj::__mClass;

Dynamic __Create_StageAlign_obj() { return new StageAlign_obj; }

void StageAlign_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.StageAlign","\xd7","\x7e","\xae","\xd8"), hx::TCanCast< StageAlign_obj >,StageAlign_obj_sStaticFields,0,
	&__Create_StageAlign_obj, &__Create,
	&super::__SGetClass(), &CreateStageAlign_obj, StageAlign_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , StageAlign_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StageAlign_obj::__GetStatic;
}

void StageAlign_obj::__boot()
{
BOTTOM = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),7,0);
BOTTOM_LEFT = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10"),6,0);
BOTTOM_RIGHT = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93"),5,0);
LEFT = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),4,0);
RIGHT = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),3,0);
TOP = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),2,0);
TOP_LEFT = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b"),1,0);
TOP_RIGHT = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f"),0,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
