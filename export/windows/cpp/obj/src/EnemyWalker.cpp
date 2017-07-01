// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_EnemyWalker
#include <EnemyWalker.h>
#endif
#ifndef INCLUDED_FSM
#include <FSM.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_31d1a27adb051509_20_new,"EnemyWalker","new",0x28dd45f0,"EnemyWalker.new","EnemyWalker.hx",20,0x4635c780)
static const int _hx_array_data_81efcdfe_2[] = {
	(int)0,(int)1,(int)0,(int)2,
};
static const int _hx_array_data_81efcdfe_3[] = {
	(int)3,(int)4,(int)3,(int)5,
};
static const int _hx_array_data_81efcdfe_4[] = {
	(int)6,(int)7,(int)6,(int)8,
};
HX_LOCAL_STACK_FRAME(_hx_pos_31d1a27adb051509_63_idle,"EnemyWalker","idle",0x95710f84,"EnemyWalker.idle","EnemyWalker.hx",63,0x4635c780)
HX_LOCAL_STACK_FRAME(_hx_pos_31d1a27adb051509_88_chase,"EnemyWalker","chase",0xbbb1973e,"EnemyWalker.chase","EnemyWalker.hx",88,0x4635c780)

void EnemyWalker_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Etype){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_31d1a27adb051509_20_new)
HXLINE(  21)		super::__construct(X,Y,Etype);
HXLINE(  22)		this->variant = Etype;
HXLINE(  23)		 ::flixel::math::FlxPoint _hx_tmp = this->drag;
HXDLIN(  23)		_hx_tmp->set_x(this->drag->set_y((int)10));
HXLINE(  24)		this->offset->set_x((int)8);
HXLINE(  25)		this->offset->set_y((int)4);
HXLINE(  26)		{
HXLINE(  26)			::String _g = this->variant;
HXDLIN(  26)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("big",c0,b8,4a,00)) ){
HXLINE(  35)				this->loadGraphic(((HX_("assets/images/walker-",6c,89,53,85) + this->variant) + HX_(".png",3b,2d,bd,1e)),true,(int)48,(int)48,null(),null());
HXLINE(  36)				this->health = (int)100;
HXLINE(  37)				this->speed = (int)65;
HXLINE(  38)				this->set_width((int)24);
HXLINE(  39)				this->set_height((int)32);
HXLINE(  34)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("small",c7,f0,6a,7f)) ){
HXLINE(  29)				this->loadGraphic(((HX_("assets/images/walker-",6c,89,53,85) + this->variant) + HX_(".png",3b,2d,bd,1e)),true,(int)24,(int)24,null(),null());
HXLINE(  30)				this->health = (int)25;
HXLINE(  31)				this->speed = (int)150;
HXLINE(  32)				this->set_width((int)8);
HXLINE(  33)				this->set_height((int)12);
HXLINE(  28)				goto _hx_goto_0;
            			}
            			/* default */{
HXLINE(  41)				this->loadGraphic(((HX_("assets/images/walker-",6c,89,53,85) + this->variant) + HX_(".png",3b,2d,bd,1e)),true,(int)32,(int)32,null(),null());
HXLINE(  42)				this->health = (int)50;
HXLINE(  43)				this->speed = (int)100;
HXLINE(  44)				this->set_width((int)16);
HXLINE(  45)				this->set_height((int)24);
            			}
            			_hx_goto_0:;
            		}
HXLINE(  48)		::haxe::IMap_obj::set(this->_facingFlip,(int)1, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  49)		::haxe::IMap_obj::set(this->_facingFlip,(int)16, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  50)		this->animation->add(HX_("d",64,00,00,00),::Array_obj< int >::fromData( _hx_array_data_81efcdfe_2,4),(int)6,false,null(),null());
HXLINE(  51)		this->animation->add(HX_("lr",86,5e,00,00),::Array_obj< int >::fromData( _hx_array_data_81efcdfe_3,4),(int)6,false,null(),null());
HXLINE(  52)		this->animation->add(HX_("u",75,00,00,00),::Array_obj< int >::fromData( _hx_array_data_81efcdfe_4,4),(int)6,false,null(),null());
HXLINE(  54)		this->_sndStep = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/step_1.wav",db,04,d6,96),((Float).2),null(),null(),null(),null(),null(),null());
HXLINE(  55)		 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->_sndStep;
HXDLIN(  55)		Float _hx_tmp2 = this->x;
HXDLIN(  55)		Float _hx_tmp3 = this->y;
HXDLIN(  55)		 ::flixel::FlxObject _hx_tmp4 = ::flixel::FlxG_obj::camera->target;
HXDLIN(  55)		_hx_tmp1->proximity(_hx_tmp2,_hx_tmp3,_hx_tmp4,(::flixel::FlxG_obj::width * ((Float).4)),null());
HXLINE(  56)		this->_brain =  ::FSM_obj::__alloc( HX_CTX ,this->idle_dyn());
HXLINE(  57)		this->_idleTmr = (int)0;
HXLINE(  58)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  58)		point->_inPool = false;
HXDLIN(  58)		this->playerPos = point;
            	}

Dynamic EnemyWalker_obj::__CreateEmpty() { return new EnemyWalker_obj; }

void *EnemyWalker_obj::_hx_vtable = 0;

Dynamic EnemyWalker_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EnemyWalker_obj > _hx_result = new EnemyWalker_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool EnemyWalker_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			if (inClassId<=(int)0x03a88228) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x03a88228;
			} else {
				return inClassId==(int)0x0b6ffd77;
			}
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x30b6a01a;
	}
}

void EnemyWalker_obj::idle(){
            	HX_STACKFRAME(&_hx_pos_31d1a27adb051509_63_idle)
HXDLIN(  63)		if (this->seesPlayer) {
HXLINE(  65)			this->_brain->activeState = this->chase_dyn();
            		}
            		else {
HXLINE(  67)			if ((this->_idleTmr <= (int)0)) {
HXLINE(  69)				if ((::flixel::FlxG_obj::random->_hx_float((int)0,(int)100,null()) < (int)1)) {
HXLINE(  71)					this->_moveDir = (int)-1;
HXLINE(  72)					 ::flixel::math::FlxPoint _hx_tmp = this->velocity;
HXDLIN(  72)					_hx_tmp->set_x(this->velocity->set_y((int)0));
            				}
            				else {
HXLINE(  76)					this->_moveDir = (::flixel::FlxG_obj::random->_hx_int((int)0,(int)8,null()) * (int)45);
HXLINE(  77)					 ::flixel::math::FlxPoint _hx_tmp1 = this->velocity;
HXDLIN(  77)					_hx_tmp1->set((this->speed * ((Float)0.5)),(int)0);
HXLINE(  78)					 ::flixel::math::FlxPoint _hx_tmp2 = this->velocity;
HXDLIN(  78)					 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  78)					point->_inPool = false;
HXDLIN(  78)					 ::flixel::math::FlxPoint point1 = point;
HXDLIN(  78)					point1->_weak = true;
HXDLIN(  78)					_hx_tmp2->rotate(point1,this->_moveDir);
            				}
HXLINE(  80)				this->_idleTmr = ::flixel::FlxG_obj::random->_hx_int((int)1,(int)4,null());
            			}
            			else {
HXLINE(  83)				 ::EnemyWalker _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  83)				_hx_tmp3->_idleTmr = (_hx_tmp3->_idleTmr - ::flixel::FlxG_obj::elapsed);
            			}
            		}
            	}


void EnemyWalker_obj::chase(){
            	HX_STACKFRAME(&_hx_pos_31d1a27adb051509_88_chase)
HXDLIN(  88)		if (!(this->seesPlayer)) {
HXLINE(  90)			this->_brain->activeState = this->idle_dyn();
            		}
            		else {
HXLINE(  94)			 ::flixel::math::FlxPoint _hx_tmp = this->playerPos;
HXDLIN(  94)			::flixel::math::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),_hx_tmp,::Std_obj::_hx_int(this->speed),null());
            		}
            	}



hx::ObjectPtr< EnemyWalker_obj > EnemyWalker_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Etype) {
	hx::ObjectPtr< EnemyWalker_obj > __this = new EnemyWalker_obj();
	__this->__construct(__o_X,__o_Y,Etype);
	return __this;
}

hx::ObjectPtr< EnemyWalker_obj > EnemyWalker_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Etype) {
	EnemyWalker_obj *__this = (EnemyWalker_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EnemyWalker_obj), true, "EnemyWalker"));
	*(void **)__this = EnemyWalker_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Etype);
	return __this;
}

EnemyWalker_obj::EnemyWalker_obj()
{
}

hx::Val EnemyWalker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"idle") ) { return hx::Val( idle_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"chase") ) { return hx::Val( chase_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *EnemyWalker_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *EnemyWalker_obj_sStaticStorageInfo = 0;
#endif

static ::String EnemyWalker_obj_sMemberFields[] = {
	HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),
	HX_HCSTRING("chase","\xae","\x9d","\xb3","\x45"),
	::String(null()) };

static void EnemyWalker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyWalker_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EnemyWalker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyWalker_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyWalker_obj::__mClass;

void EnemyWalker_obj::__register()
{
	hx::Object *dummy = new EnemyWalker_obj;
	EnemyWalker_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EnemyWalker","\xfe","\xcd","\xef","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EnemyWalker_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EnemyWalker_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyWalker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EnemyWalker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnemyWalker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnemyWalker_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
