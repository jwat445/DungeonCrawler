// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_events_JoystickEvent
#define INCLUDED_openfl__legacy_events_JoystickEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,JoystickEvent)

namespace openfl{
namespace _legacy{
namespace events{


class HXCPP_CLASS_ATTRIBUTES JoystickEvent_obj : public  ::openfl::_legacy::events::Event_obj
{
	public:
		typedef  ::openfl::_legacy::events::Event_obj super;
		typedef JoystickEvent_obj OBJ_;
		JoystickEvent_obj();

	public:
		enum { _hx_ClassId = 0x5b19148d };

		void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.events.JoystickEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.events.JoystickEvent"); }
		static hx::ObjectPtr< JoystickEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		static hx::ObjectPtr< JoystickEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JoystickEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JoystickEvent","\x9e","\x7d","\x3c","\xe7"); }

		static void __boot();
		static ::String AXIS_MOVE;
		static ::String BALL_MOVE;
		static ::String BUTTON_DOWN;
		static ::String BUTTON_UP;
		static ::String HAT_MOVE;
		static ::String DEVICE_ADDED;
		static ::String DEVICE_REMOVED;
		::Array< Float > axis;
		int device;
		int id;
		Float x;
		Float y;
		Float z;
		 ::openfl::_legacy::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events

#endif /* INCLUDED_openfl__legacy_events_JoystickEvent */ 
