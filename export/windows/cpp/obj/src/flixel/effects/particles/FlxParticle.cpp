// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1fbac93af6038753_17_new,"flixel.effects.particles.FlxParticle","new",0x64bf516b,"flixel.effects.particles.FlxParticle.new","flixel/effects/particles/FlxParticle.hx",17,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_98_destroy,"flixel.effects.particles.FlxParticle","destroy",0xa0ae8f85,"flixel.effects.particles.FlxParticle.destroy","flixel/effects/particles/FlxParticle.hx",98,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_136_update,"flixel.effects.particles.FlxParticle","update",0xc345fdde,"flixel.effects.particles.FlxParticle.update","flixel/effects/particles/FlxParticle.hx",136,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_201_reset,"flixel.effects.particles.FlxParticle","reset",0xddde639a,"flixel.effects.particles.FlxParticle.reset","flixel/effects/particles/FlxParticle.hx",201,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_211_onEmit,"flixel.effects.particles.FlxParticle","onEmit",0x21e01ee7,"flixel.effects.particles.FlxParticle.onEmit","flixel/effects/particles/FlxParticle.hx",211,0xdb578328)
namespace flixel{
namespace effects{
namespace particles{

void FlxParticle_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1fbac93af6038753_17_new)
HXLINE(  71)		this->_delta = ((Float)0);
HXLINE(  35)		this->autoUpdateHitbox = false;
HXLINE(  31)		this->percent = ((Float)0);
HXLINE(  27)		this->age = ((Float)0);
HXLINE(  23)		this->lifespan = ((Float)0);
HXLINE(  80)		super::__construct(null(),null(),null());
HXLINE(  82)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  82)		point->_inPool = false;
HXDLIN(  82)		 ::flixel::math::FlxPoint _hx_tmp = point;
HXDLIN(  82)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  82)		point1->_inPool = false;
HXDLIN(  82)		this->velocityRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,_hx_tmp,point1);
HXLINE(  83)		this->angularVelocityRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,(int)0,null());
HXLINE(  84)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);
HXDLIN(  84)		point2->_inPool = false;
HXDLIN(  84)		 ::flixel::math::FlxPoint _hx_tmp1 = point2;
HXDLIN(  84)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);
HXDLIN(  84)		point3->_inPool = false;
HXDLIN(  84)		this->scaleRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,_hx_tmp1,point3);
HXLINE(  85)		this->alphaRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,(int)1,(int)1);
HXLINE(  86)		this->colorRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,(int)-1,null());
HXLINE(  87)		 ::flixel::math::FlxPoint point4 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  87)		point4->_inPool = false;
HXDLIN(  87)		 ::flixel::math::FlxPoint _hx_tmp2 = point4;
HXDLIN(  87)		 ::flixel::math::FlxPoint point5 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  87)		point5->_inPool = false;
HXDLIN(  87)		this->dragRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,_hx_tmp2,point5);
HXLINE(  88)		 ::flixel::math::FlxPoint point6 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  88)		point6->_inPool = false;
HXDLIN(  88)		 ::flixel::math::FlxPoint _hx_tmp3 = point6;
HXDLIN(  88)		 ::flixel::math::FlxPoint point7 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  88)		point7->_inPool = false;
HXDLIN(  88)		this->accelerationRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,_hx_tmp3,point7);
HXLINE(  89)		this->elasticityRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,(int)0,null());
HXLINE(  91)		this->set_exists(false);
            	}

Dynamic FlxParticle_obj::__CreateEmpty() { return new FlxParticle_obj; }

void *FlxParticle_obj::_hx_vtable = 0;

Dynamic FlxParticle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxParticle_obj > _hx_result = new FlxParticle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxParticle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13a7eba5) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x13a7eba5;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxSprite= {
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_exists,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::update,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::destroy,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::kill,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::revive,
	( ::String (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::toString,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_x,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_y,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_angle,
	( int (hx::Object::*)(int))&::flixel::effects::particles::FlxParticle_obj::set_facing,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_moves,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::flixel::effects::particles::FlxParticle_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::flixel::effects::particles::FlxParticle_obj::setPosition,
};

static ::flixel::effects::particles::IFlxParticle_obj _hx_flixel_effects_particles_FlxParticle__hx_flixel_effects_particles_IFlxParticle= {
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_exists,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::update,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::destroy,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::kill,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::revive,
	( ::String (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::toString,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_x,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_y,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_angle,
	( int (hx::Object::*)(int))&::flixel::effects::particles::FlxParticle_obj::set_facing,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_moves,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::flixel::effects::particles::FlxParticle_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::flixel::effects::particles::FlxParticle_obj::setPosition,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::onEmit,
};

static ::flixel::IFlxBasic_obj _hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxBasic= {
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_exists,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::update,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::destroy,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::kill,
	( void (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::revive,
	( ::String (hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::toString,
};

void *FlxParticle_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxSprite;
		case (int)0x1d5bda56: return &_hx_flixel_effects_particles_FlxParticle__hx_flixel_effects_particles_IFlxParticle;
		case (int)0x284cfea9: return &_hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxBasic;
	}
	return super::_hx_getInterface(inHash);
}

void FlxParticle_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_98_destroy)
HXLINE(  99)		if (hx::IsNotNull( this->velocityRange )) {
HXLINE( 101)			this->velocityRange->start = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->velocityRange->start)) );
HXLINE( 102)			this->velocityRange->end = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->velocityRange->end)) );
HXLINE( 103)			this->velocityRange = null();
            		}
HXLINE( 105)		if (hx::IsNotNull( this->scaleRange )) {
HXLINE( 107)			this->scaleRange->start = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scaleRange->start)) );
HXLINE( 108)			this->scaleRange->end = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scaleRange->end)) );
HXLINE( 109)			this->scaleRange = null();
            		}
HXLINE( 111)		if (hx::IsNotNull( this->dragRange )) {
HXLINE( 113)			this->dragRange->start = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->dragRange->start)) );
HXLINE( 114)			this->dragRange->end = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->dragRange->end)) );
HXLINE( 115)			this->dragRange = null();
            		}
HXLINE( 117)		if (hx::IsNotNull( this->accelerationRange )) {
HXLINE( 119)			this->accelerationRange->start = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->accelerationRange->start)) );
HXLINE( 120)			this->accelerationRange->end = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->accelerationRange->end)) );
HXLINE( 121)			this->angularVelocityRange = null();
            		}
HXLINE( 124)		this->alphaRange = null();
HXLINE( 125)		this->colorRange = null();
HXLINE( 126)		this->accelerationRange = null();
HXLINE( 127)		this->elasticityRange = null();
HXLINE( 129)		this->super::destroy();
            	}


void FlxParticle_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_136_update)
HXLINE( 137)		if ((this->age < this->lifespan)) {
HXLINE( 139)			 ::flixel::effects::particles::FlxParticle _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 139)			_hx_tmp->age = (_hx_tmp->age + elapsed);
            		}
HXLINE( 142)		bool _hx_tmp1;
HXDLIN( 142)		if ((this->age >= this->lifespan)) {
HXLINE( 142)			_hx_tmp1 = (this->lifespan != (int)0);
            		}
            		else {
HXLINE( 142)			_hx_tmp1 = false;
            		}
HXDLIN( 142)		if (_hx_tmp1) {
HXLINE( 144)			this->kill();
            		}
            		else {
HXLINE( 148)			this->_delta = ((Float)elapsed / (Float)this->lifespan);
HXLINE( 149)			this->percent = ((Float)this->age / (Float)this->lifespan);
HXLINE( 151)			if (this->velocityRange->active) {
HXLINE( 153)				{
HXLINE( 153)					 ::flixel::math::FlxPoint _g = this->velocity;
HXDLIN( 153)					Float _g1 = _g->x;
HXDLIN( 153)					_g->set_x((_g1 + ((( ( ::flixel::math::FlxPoint)(this->velocityRange->end) )->x - ( ( ::flixel::math::FlxPoint)(this->velocityRange->start) )->x) * this->_delta)));
            				}
HXLINE( 154)				{
HXLINE( 154)					 ::flixel::math::FlxPoint _g2 = this->velocity;
HXDLIN( 154)					Float _g3 = _g2->y;
HXDLIN( 154)					_g2->set_y((_g3 + ((( ( ::flixel::math::FlxPoint)(this->velocityRange->end) )->y - ( ( ::flixel::math::FlxPoint)(this->velocityRange->start) )->y) * this->_delta)));
            				}
            			}
HXLINE( 157)			if (this->angularVelocityRange->active) {
HXLINE( 159)				 ::flixel::effects::particles::FlxParticle _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 159)				_hx_tmp2->angularVelocity = (_hx_tmp2->angularVelocity + ((( (Float)(this->angularVelocityRange->end) ) - ( (Float)(this->angularVelocityRange->start) )) * this->_delta));
            			}
HXLINE( 162)			if (this->scaleRange->active) {
HXLINE( 164)				{
HXLINE( 164)					 ::flixel::math::FlxPoint _g4 = this->scale;
HXDLIN( 164)					Float _g5 = _g4->x;
HXDLIN( 164)					_g4->set_x((_g5 + ((( ( ::flixel::math::FlxPoint)(this->scaleRange->end) )->x - ( ( ::flixel::math::FlxPoint)(this->scaleRange->start) )->x) * this->_delta)));
            				}
HXLINE( 165)				{
HXLINE( 165)					 ::flixel::math::FlxPoint _g6 = this->scale;
HXDLIN( 165)					Float _g7 = _g6->y;
HXDLIN( 165)					_g6->set_y((_g7 + ((( ( ::flixel::math::FlxPoint)(this->scaleRange->end) )->y - ( ( ::flixel::math::FlxPoint)(this->scaleRange->start) )->y) * this->_delta)));
            				}
HXLINE( 166)				if (this->autoUpdateHitbox) {
HXLINE( 166)					this->updateHitbox();
            				}
            			}
HXLINE( 169)			if (this->alphaRange->active) {
HXLINE( 171)				 ::flixel::effects::particles::FlxParticle _g8 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 171)				Float _g9 = _g8->alpha;
HXDLIN( 171)				_g8->set_alpha((_g9 + ((( (Float)(this->alphaRange->end) ) - ( (Float)(this->alphaRange->start) )) * this->_delta)));
            			}
HXLINE( 174)			if (this->colorRange->active) {
HXLINE( 176)				int Color1 = ( (int)(this->colorRange->start) );
HXDLIN( 176)				int Color2 = ( (int)(this->colorRange->end) );
HXDLIN( 176)				Float Factor = this->percent;
HXDLIN( 176)				int r = ::Std_obj::_hx_int((((((int)((int)Color2 >> (int)(int)16) & (int)(int)255) - ((int)((int)Color1 >> (int)(int)16) & (int)(int)255)) * Factor) + ((int)((int)Color1 >> (int)(int)16) & (int)(int)255)));
HXDLIN( 176)				int g = ::Std_obj::_hx_int((((((int)((int)Color2 >> (int)(int)8) & (int)(int)255) - ((int)((int)Color1 >> (int)(int)8) & (int)(int)255)) * Factor) + ((int)((int)Color1 >> (int)(int)8) & (int)(int)255)));
HXDLIN( 176)				int b = ::Std_obj::_hx_int((((((int)Color2 & (int)(int)255) - ((int)Color1 & (int)(int)255)) * Factor) + ((int)Color1 & (int)(int)255)));
HXDLIN( 176)				int a = ::Std_obj::_hx_int((((((int)((int)Color2 >> (int)(int)24) & (int)(int)255) - ((int)((int)Color1 >> (int)(int)24) & (int)(int)255)) * Factor) + ((int)((int)Color1 >> (int)(int)24) & (int)(int)255)));
HXDLIN( 176)				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 176)				{
HXLINE( 176)					color = ((int)color & (int)(int)-16711681);
HXDLIN( 176)					int color1;
HXDLIN( 176)					if ((r > (int)255)) {
HXLINE( 176)						color1 = (int)255;
            					}
            					else {
HXLINE( 176)						if ((r < (int)0)) {
HXLINE( 176)							color1 = (int)0;
            						}
            						else {
HXLINE( 176)							color1 = r;
            						}
            					}
HXDLIN( 176)					color = ((int)color | (int)((int)color1 << (int)(int)16));
            				}
HXDLIN( 176)				{
HXLINE( 176)					color = ((int)color & (int)(int)-65281);
HXDLIN( 176)					int color2;
HXDLIN( 176)					if ((g > (int)255)) {
HXLINE( 176)						color2 = (int)255;
            					}
            					else {
HXLINE( 176)						if ((g < (int)0)) {
HXLINE( 176)							color2 = (int)0;
            						}
            						else {
HXLINE( 176)							color2 = g;
            						}
            					}
HXDLIN( 176)					color = ((int)color | (int)((int)color2 << (int)(int)8));
            				}
HXDLIN( 176)				{
HXLINE( 176)					color = ((int)color & (int)(int)-256);
HXDLIN( 176)					int color3;
HXDLIN( 176)					if ((b > (int)255)) {
HXLINE( 176)						color3 = (int)255;
            					}
            					else {
HXLINE( 176)						if ((b < (int)0)) {
HXLINE( 176)							color3 = (int)0;
            						}
            						else {
HXLINE( 176)							color3 = b;
            						}
            					}
HXDLIN( 176)					color = ((int)color | (int)color3);
            				}
HXDLIN( 176)				{
HXLINE( 176)					color = ((int)color & (int)(int)16777215);
HXDLIN( 176)					int color4;
HXDLIN( 176)					if ((a > (int)255)) {
HXLINE( 176)						color4 = (int)255;
            					}
            					else {
HXLINE( 176)						if ((a < (int)0)) {
HXLINE( 176)							color4 = (int)0;
            						}
            						else {
HXLINE( 176)							color4 = a;
            						}
            					}
HXDLIN( 176)					color = ((int)color | (int)((int)color4 << (int)(int)24));
            				}
HXDLIN( 176)				this->set_color(color);
            			}
HXLINE( 179)			if (this->dragRange->active) {
HXLINE( 181)				{
HXLINE( 181)					 ::flixel::math::FlxPoint _g10 = this->drag;
HXDLIN( 181)					Float _g11 = _g10->x;
HXDLIN( 181)					_g10->set_x((_g11 + ((( ( ::flixel::math::FlxPoint)(this->dragRange->end) )->x - ( ( ::flixel::math::FlxPoint)(this->dragRange->start) )->x) * this->_delta)));
            				}
HXLINE( 182)				{
HXLINE( 182)					 ::flixel::math::FlxPoint _g12 = this->drag;
HXDLIN( 182)					Float _g13 = _g12->y;
HXDLIN( 182)					_g12->set_y((_g13 + ((( ( ::flixel::math::FlxPoint)(this->dragRange->end) )->y - ( ( ::flixel::math::FlxPoint)(this->dragRange->start) )->y) * this->_delta)));
            				}
            			}
HXLINE( 185)			if (this->accelerationRange->active) {
HXLINE( 187)				{
HXLINE( 187)					 ::flixel::math::FlxPoint _g14 = this->acceleration;
HXDLIN( 187)					Float _g15 = _g14->x;
HXDLIN( 187)					_g14->set_x((_g15 + ((( ( ::flixel::math::FlxPoint)(this->accelerationRange->end) )->x - ( ( ::flixel::math::FlxPoint)(this->accelerationRange->start) )->x) * this->_delta)));
            				}
HXLINE( 188)				{
HXLINE( 188)					 ::flixel::math::FlxPoint _g16 = this->acceleration;
HXDLIN( 188)					Float _g17 = _g16->y;
HXDLIN( 188)					_g16->set_y((_g17 + ((( ( ::flixel::math::FlxPoint)(this->accelerationRange->end) )->y - ( ( ::flixel::math::FlxPoint)(this->accelerationRange->start) )->y) * this->_delta)));
            				}
            			}
HXLINE( 191)			if (this->elasticityRange->active) {
HXLINE( 193)				 ::flixel::effects::particles::FlxParticle _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 193)				_hx_tmp3->elasticity = (_hx_tmp3->elasticity + ((( (Float)(this->elasticityRange->end) ) - ( (Float)(this->elasticityRange->start) )) * this->_delta));
            			}
            		}
HXLINE( 197)		this->super::update(elapsed);
            	}


void FlxParticle_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_201_reset)
HXLINE( 202)		this->super::reset(X,Y);
HXLINE( 203)		this->age = (int)0;
HXLINE( 204)		this->set_visible(true);
            	}


void FlxParticle_obj::onEmit(){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_211_onEmit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))


hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new() {
	hx::ObjectPtr< FlxParticle_obj > __this = new FlxParticle_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxParticle_obj *__this = (FlxParticle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxParticle_obj), true, "flixel.effects.particles.FlxParticle"));
	*(void **)__this = FlxParticle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxParticle_obj::FlxParticle_obj()
{
}

void FlxParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxParticle);
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(age,"age");
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(velocityRange,"velocityRange");
	HX_MARK_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_MARK_MEMBER_NAME(scaleRange,"scaleRange");
	HX_MARK_MEMBER_NAME(alphaRange,"alphaRange");
	HX_MARK_MEMBER_NAME(colorRange,"colorRange");
	HX_MARK_MEMBER_NAME(dragRange,"dragRange");
	HX_MARK_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_MARK_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxParticle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(age,"age");
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(velocityRange,"velocityRange");
	HX_VISIT_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_VISIT_MEMBER_NAME(scaleRange,"scaleRange");
	HX_VISIT_MEMBER_NAME(alphaRange,"alphaRange");
	HX_VISIT_MEMBER_NAME(colorRange,"colorRange");
	HX_VISIT_MEMBER_NAME(dragRange,"dragRange");
	HX_VISIT_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_VISIT_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxParticle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { return hx::Val( age); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { return hx::Val( _delta); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"onEmit") ) { return hx::Val( onEmit_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return hx::Val( percent); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return hx::Val( lifespan); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { return hx::Val( dragRange); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { return hx::Val( scaleRange); }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { return hx::Val( alphaRange); }
		if (HX_FIELD_EQ(inName,"colorRange") ) { return hx::Val( colorRange); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { return hx::Val( velocityRange); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { return hx::Val( elasticityRange); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return hx::Val( autoUpdateHitbox); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { return hx::Val( accelerationRange); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { return hx::Val( angularVelocityRange); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxParticle_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { age=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { dragRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { scaleRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { alphaRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorRange") ) { colorRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { velocityRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { elasticityRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { accelerationRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { angularVelocityRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("age","\xbf","\xf4","\x49","\x00"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"));
	outFields->push(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"));
	outFields->push(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"));
	outFields->push(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"));
	outFields->push(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"));
	outFields->push(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"));
	outFields->push(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"));
	outFields->push(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"));
	outFields->push(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"));
	outFields->push(HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxParticle_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,age),HX_HCSTRING("age","\xbf","\xf4","\x49","\x00")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,percent),HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,autoUpdateHitbox),HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,velocityRange),HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,angularVelocityRange),HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,scaleRange),HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,alphaRange),HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,colorRange),HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,dragRange),HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,accelerationRange),HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,elasticityRange),HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,_delta),HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxParticle_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxParticle_obj_sMemberFields[] = {
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("age","\xbf","\xf4","\x49","\x00"),
	HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"),
	HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"),
	HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"),
	HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"),
	HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"),
	HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"),
	HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"),
	HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"),
	HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"),
	HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"),
	HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"),
	::String(null()) };

static void FlxParticle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxParticle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	hx::Object *dummy = new FlxParticle_obj;
	FlxParticle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxParticle","\xf9","\xbf","\xf1","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxParticle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxParticle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxParticle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxParticle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxParticle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxParticle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
