// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#define INCLUDED_openfl__legacy_utils_IMemoryRange

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)

namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES IMemoryRange_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::openfl::_legacy::utils::ByteArray (hx::Object :: *_hx_getByteBuffer)(); 
		static inline  ::openfl::_legacy::utils::ByteArray getByteBuffer( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::utils::IMemoryRange_obj *>(_hx_.mPtr->_hx_getInterface(0x0ecba48c)))->_hx_getByteBuffer)();
		}
		int (hx::Object :: *_hx_getStart)(); 
		static inline int getStart( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::utils::IMemoryRange_obj *>(_hx_.mPtr->_hx_getInterface(0x0ecba48c)))->_hx_getStart)();
		}
		int (hx::Object :: *_hx_getLength)(); 
		static inline int getLength( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::utils::IMemoryRange_obj *>(_hx_.mPtr->_hx_getInterface(0x0ecba48c)))->_hx_getLength)();
		}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_IMemoryRange */ 
