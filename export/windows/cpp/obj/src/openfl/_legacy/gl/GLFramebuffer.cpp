// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GLFramebuffer
#include <openfl/_legacy/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c27bfd3e1a26e9b8_9_new,"openfl._legacy.gl.GLFramebuffer","new",0x6cf59115,"openfl._legacy.gl.GLFramebuffer.new","openfl/_legacy/gl/GLFramebuffer.hx",9,0x94ab3a3a)
HX_LOCAL_STACK_FRAME(_hx_pos_c27bfd3e1a26e9b8_16_getType,"openfl._legacy.gl.GLFramebuffer","getType",0x179461a5,"openfl._legacy.gl.GLFramebuffer.getType","openfl/_legacy/gl/GLFramebuffer.hx",16,0x94ab3a3a)
namespace openfl{
namespace _legacy{
namespace gl{

void GLFramebuffer_obj::__construct(int version, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_c27bfd3e1a26e9b8_9_new)
HXDLIN(   9)		super::__construct(version,id);
            	}

Dynamic GLFramebuffer_obj::__CreateEmpty() { return new GLFramebuffer_obj; }

void *GLFramebuffer_obj::_hx_vtable = 0;

Dynamic GLFramebuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLFramebuffer_obj > _hx_result = new GLFramebuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLFramebuffer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2cc54057) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2cc54057;
	} else {
		return inClassId==(int)0x2ef17041;
	}
}

::String GLFramebuffer_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_c27bfd3e1a26e9b8_16_getType)
HXDLIN(  16)		return HX_("Framebuffer",cd,ac,7a,5e);
            	}



hx::ObjectPtr< GLFramebuffer_obj > GLFramebuffer_obj::__new(int version, ::Dynamic id) {
	hx::ObjectPtr< GLFramebuffer_obj > __this = new GLFramebuffer_obj();
	__this->__construct(version,id);
	return __this;
}

hx::ObjectPtr< GLFramebuffer_obj > GLFramebuffer_obj::__alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id) {
	GLFramebuffer_obj *__this = (GLFramebuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLFramebuffer_obj), true, "openfl._legacy.gl.GLFramebuffer"));
	*(void **)__this = GLFramebuffer_obj::_hx_vtable;
	__this->__construct(version,id);
	return __this;
}

GLFramebuffer_obj::GLFramebuffer_obj()
{
}

hx::Val GLFramebuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLFramebuffer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLFramebuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String GLFramebuffer_obj_sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void GLFramebuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFramebuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFramebuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFramebuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLFramebuffer_obj::__mClass;

void GLFramebuffer_obj::__register()
{
	hx::Object *dummy = new GLFramebuffer_obj;
	GLFramebuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLFramebuffer","\xa3","\x62","\x10","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLFramebuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLFramebuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLFramebuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFramebuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFramebuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFramebuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
