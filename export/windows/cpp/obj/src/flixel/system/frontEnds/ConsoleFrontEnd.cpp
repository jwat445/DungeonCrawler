// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_5_new,"flixel.system.frontEnds.ConsoleFrontEnd","new",0x926b3ea1,"flixel.system.frontEnds.ConsoleFrontEnd.new","flixel/system/frontEnds/ConsoleFrontEnd.hx",5,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_27_registerFunction,"flixel.system.frontEnds.ConsoleFrontEnd","registerFunction",0xa673a5ba,"flixel.system.frontEnds.ConsoleFrontEnd.registerFunction","flixel/system/frontEnds/ConsoleFrontEnd.hx",27,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_40_registerObject,"flixel.system.frontEnds.ConsoleFrontEnd","registerObject",0x557f2ce1,"flixel.system.frontEnds.ConsoleFrontEnd.registerObject","flixel/system/frontEnds/ConsoleFrontEnd.hx",40,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_52_registerClass,"flixel.system.frontEnds.ConsoleFrontEnd","registerClass",0x3d276456,"flixel.system.frontEnds.ConsoleFrontEnd.registerClass","flixel/system/frontEnds/ConsoleFrontEnd.hx",52,0x0ff3a650)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void ConsoleFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_5_new)
HXLINE(  18)		this->stepAfterCommand = true;
HXLINE(  10)		this->autoPause = true;
            	}

Dynamic ConsoleFrontEnd_obj::__CreateEmpty() { return new ConsoleFrontEnd_obj; }

void *ConsoleFrontEnd_obj::_hx_vtable = 0;

Dynamic ConsoleFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConsoleFrontEnd_obj > _hx_result = new ConsoleFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConsoleFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x30cae657;
}

void ConsoleFrontEnd_obj::registerFunction(::String FunctionAlias, ::Dynamic Function){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_27_registerFunction)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerFunction,(void))

void ConsoleFrontEnd_obj::registerObject(::String ObjectAlias, ::Dynamic AnyObject){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_40_registerObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerObject,(void))

void ConsoleFrontEnd_obj::registerClass(hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_52_registerClass)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,registerClass,(void))


ConsoleFrontEnd_obj::ConsoleFrontEnd_obj()
{
}

hx::Val ConsoleFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return hx::Val( autoPause ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerClass") ) { return hx::Val( registerClass_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { return hx::Val( registerObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stepAfterCommand") ) { return hx::Val( stepAfterCommand ); }
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return hx::Val( registerFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ConsoleFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stepAfterCommand") ) { stepAfterCommand=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"));
	outFields->push(HX_HCSTRING("stepAfterCommand","\xfb","\x63","\xab","\x7b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ConsoleFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ConsoleFrontEnd_obj,autoPause),HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b")},
	{hx::fsBool,(int)offsetof(ConsoleFrontEnd_obj,stepAfterCommand),HX_HCSTRING("stepAfterCommand","\xfb","\x63","\xab","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ConsoleFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"),
	HX_HCSTRING("stepAfterCommand","\xfb","\x63","\xab","\x7b"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerClass","\xd5","\x3a","\xc1","\x3d"),
	::String(null()) };

static void ConsoleFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConsoleFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleFrontEnd_obj::__mClass;

void ConsoleFrontEnd_obj::__register()
{
	hx::Object *dummy = new ConsoleFrontEnd_obj;
	ConsoleFrontEnd_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.ConsoleFrontEnd","\x2f","\x5a","\x25","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConsoleFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConsoleFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConsoleFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
