// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)



class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x60e60f3e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"AssetPaths"); }

		hx::ObjectPtr< AssetPaths_obj > __new() {
			hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AssetPaths_obj > __alloc(hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60"); }

		static void __boot();
		static ::String data_goes_here__txt;
		static ::String room000__oel;
		static ::String room001__oel;
		static ::String room002__oel;
		static ::String room003__oel;
		static ::String room004__oel;
		static ::String room005__oel;
		static ::String room006__oel;
		static ::String Tiles__oep;
		static ::String bulletEnemy__png;
		static ::String bulletPlayer__png;
		static ::String button__png;
		static ::String coin__png;
		static ::String health__png;
		static ::String hole__png;
		static ::String images_go_here__txt;
		static ::String player__png;
		static ::String rock__png;
		static ::String tiles__png;
		static ::String walker_big__png;
		static ::String walker_default__png;
		static ::String walker_strong__png;
		static ::String music_goes_here__txt;
		static ::String coin__wav;
		static ::String hurt__wav;
		static ::String select__wav;
		static ::String sounds_go_here__txt;
		static ::String step_1__wav;
		static ::String step_2__wav;
};


#endif /* INCLUDED_AssetPaths */ 
