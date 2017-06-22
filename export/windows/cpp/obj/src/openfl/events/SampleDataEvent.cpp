// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_17_new,"openfl.events.SampleDataEvent","new",0xc5f17621,"openfl.events.SampleDataEvent.new","openfl/events/SampleDataEvent.hx",17,0x7507e28f)
HX_LOCAL_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_28_clone,"openfl.events.SampleDataEvent","clone",0xed066b5e,"openfl.events.SampleDataEvent.clone","openfl/events/SampleDataEvent.hx",28,0x7507e28f)
HX_LOCAL_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_43_toString,"openfl.events.SampleDataEvent","toString",0x071baf4b,"openfl.events.SampleDataEvent.toString","openfl/events/SampleDataEvent.hx",43,0x7507e28f)
static const ::String _hx_array_data_8459d1af_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_11_boot,"openfl.events.SampleDataEvent","boot",0x656ee751,"openfl.events.SampleDataEvent.boot","openfl/events/SampleDataEvent.hx",11,0x7507e28f)
namespace openfl{
namespace events{

void SampleDataEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_17_new)
HXLINE(  19)		super::__construct(type,bubbles,cancelable);
HXLINE(  21)		this->data =  ::openfl::_legacy::utils::ByteArray_obj::__alloc( HX_CTX ,null());
HXLINE(  22)		 ::openfl::_legacy::utils::ByteArray _hx_tmp = this->data;
HXDLIN(  22)		_hx_tmp->set_endian(::openfl::utils::_Endian::Endian_Impl__obj::toString((int)1));
HXLINE(  23)		this->position = ((Float)0.0);
            	}

Dynamic SampleDataEvent_obj::__CreateEmpty() { return new SampleDataEvent_obj; }

void *SampleDataEvent_obj::_hx_vtable = 0;

Dynamic SampleDataEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SampleDataEvent_obj > _hx_result = new SampleDataEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SampleDataEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dd3a6b1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dd3a6b1;
	} else {
		return inClassId==(int)0x7ff654f1;
	}
}

 ::openfl::_legacy::events::Event SampleDataEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_28_clone)
HXLINE(  30)		::String event = this->get_type();
HXDLIN(  30)		bool event1 = this->get_bubbles();
HXDLIN(  30)		 ::openfl::events::SampleDataEvent event2 =  ::openfl::events::SampleDataEvent_obj::__alloc( HX_CTX ,event,event1,this->get_cancelable());
HXLINE(  31)		event2->set_target(this->get_target());
HXLINE(  32)		event2->set_currentTarget(this->get_currentTarget());
HXLINE(  36)		return event2;
            	}


::String SampleDataEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_43_toString)
HXDLIN(  43)		return this->_hx___formatToString(HX_("SampleDataEvent",e6,7b,b4,20),::Array_obj< ::String >::fromData( _hx_array_data_8459d1af_3,3));
            	}


::String SampleDataEvent_obj::SAMPLE_DATA;


hx::ObjectPtr< SampleDataEvent_obj > SampleDataEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable) {
	hx::ObjectPtr< SampleDataEvent_obj > __this = new SampleDataEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

hx::ObjectPtr< SampleDataEvent_obj > SampleDataEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable) {
	SampleDataEvent_obj *__this = (SampleDataEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SampleDataEvent_obj), true, "openfl.events.SampleDataEvent"));
	*(void **)__this = SampleDataEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

SampleDataEvent_obj::SampleDataEvent_obj()
{
}

void SampleDataEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SampleDataEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(position,"position");
	 ::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SampleDataEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(position,"position");
	 ::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val SampleDataEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SampleDataEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SampleDataEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SampleDataEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(SampleDataEvent_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsFloat,(int)offsetof(SampleDataEvent_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo SampleDataEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SampleDataEvent_obj::SAMPLE_DATA,HX_HCSTRING("SAMPLE_DATA","\x9f","\xd5","\x99","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String SampleDataEvent_obj_sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void SampleDataEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SampleDataEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SampleDataEvent_obj::SAMPLE_DATA,"SAMPLE_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SampleDataEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SampleDataEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SampleDataEvent_obj::SAMPLE_DATA,"SAMPLE_DATA");
};

#endif

hx::Class SampleDataEvent_obj::__mClass;

static ::String SampleDataEvent_obj_sStaticFields[] = {
	HX_HCSTRING("SAMPLE_DATA","\x9f","\xd5","\x99","\xbc"),
	::String(null())
};

void SampleDataEvent_obj::__register()
{
	hx::Object *dummy = new SampleDataEvent_obj;
	SampleDataEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.SampleDataEvent","\xaf","\xd1","\x59","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SampleDataEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SampleDataEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SampleDataEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SampleDataEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SampleDataEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SampleDataEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SampleDataEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SampleDataEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_11_boot)
HXDLIN(  11)		SAMPLE_DATA = HX_("sampleData",74,3f,0b,5e);
            	}
}

} // end namespace openfl
} // end namespace events
