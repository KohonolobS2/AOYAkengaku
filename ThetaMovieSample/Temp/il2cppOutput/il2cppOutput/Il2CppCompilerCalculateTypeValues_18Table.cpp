#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.Object
struct Object_t631007953;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3418373063;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t235857739;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t1772682203;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t2032715483;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t4184125570;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_t582536534;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t1868393739;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t3943537984;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture
struct Texture_t3661962703;




#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef TRACKABLEPROPERTYBASE_T2121532948_H
#define TRACKABLEPROPERTYBASE_T2121532948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackablePropertyBase
struct  TrackablePropertyBase_t2121532948  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Analytics.TrackablePropertyBase::m_Target
	Object_t631007953 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackablePropertyBase::m_Path
	String_t* ___m_Path_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Target_0)); }
	inline Object_t631007953 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t631007953 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t631007953 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(TrackablePropertyBase_t2121532948, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTYBASE_T2121532948_H
#ifndef TRIGGERMETHOD_T582536534_H
#define TRIGGERMETHOD_T582536534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_t582536534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_T582536534_H
#ifndef TRIGGERLISTCONTAINER_T2032715483_H
#define TRIGGERLISTCONTAINER_T2032715483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerListContainer
struct  TriggerListContainer_t2032715483  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t3418373063 * ___m_Rules_0;

public:
	inline static int32_t get_offset_of_m_Rules_0() { return static_cast<int32_t>(offsetof(TriggerListContainer_t2032715483, ___m_Rules_0)); }
	inline List_1_t3418373063 * get_m_Rules_0() const { return ___m_Rules_0; }
	inline List_1_t3418373063 ** get_address_of_m_Rules_0() { return &___m_Rules_0; }
	inline void set_m_Rules_0(List_1_t3418373063 * value)
	{
		___m_Rules_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLISTCONTAINER_T2032715483_H
#ifndef FIELDWITHTARGET_T3058750293_H
#define FIELDWITHTARGET_T3058750293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct  FieldWithTarget_t3058750293  : public RuntimeObject
{
public:
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_Target
	Object_t631007953 * ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;

public:
	inline static int32_t get_offset_of_m_ParamName_0() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_ParamName_0)); }
	inline String_t* get_m_ParamName_0() const { return ___m_ParamName_0; }
	inline String_t** get_address_of_m_ParamName_0() { return &___m_ParamName_0; }
	inline void set_m_ParamName_0(String_t* value)
	{
		___m_ParamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParamName_0), value);
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_Target_1)); }
	inline Object_t631007953 * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_t631007953 ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_t631007953 * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_1), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_2() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_FieldPath_2)); }
	inline String_t* get_m_FieldPath_2() const { return ___m_FieldPath_2; }
	inline String_t** get_address_of_m_FieldPath_2() { return &___m_FieldPath_2; }
	inline void set_m_FieldPath_2(String_t* value)
	{
		___m_FieldPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_2), value);
	}

	inline static int32_t get_offset_of_m_TypeString_3() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_TypeString_3)); }
	inline String_t* get_m_TypeString_3() const { return ___m_TypeString_3; }
	inline String_t** get_address_of_m_TypeString_3() { return &___m_TypeString_3; }
	inline void set_m_TypeString_3(String_t* value)
	{
		___m_TypeString_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeString_3), value);
	}

	inline static int32_t get_offset_of_m_DoStatic_4() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_DoStatic_4)); }
	inline bool get_m_DoStatic_4() const { return ___m_DoStatic_4; }
	inline bool* get_address_of_m_DoStatic_4() { return &___m_DoStatic_4; }
	inline void set_m_DoStatic_4(bool value)
	{
		___m_DoStatic_4 = value;
	}

	inline static int32_t get_offset_of_m_StaticString_5() { return static_cast<int32_t>(offsetof(FieldWithTarget_t3058750293, ___m_StaticString_5)); }
	inline String_t* get_m_StaticString_5() const { return ___m_StaticString_5; }
	inline String_t** get_address_of_m_StaticString_5() { return &___m_StaticString_5; }
	inline void set_m_StaticString_5(String_t* value)
	{
		___m_StaticString_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticString_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHTARGET_T3058750293_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef TRACKABLEPROPERTY_T3943537984_H
#define TRACKABLEPROPERTY_T3943537984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t3943537984  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t235857739 * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t3943537984, ___m_Fields_1)); }
	inline List_1_t235857739 * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t235857739 ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t235857739 * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTY_T3943537984_H
#ifndef TRACKABLETRIGGER_T621205209_H
#define TRACKABLETRIGGER_T621205209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t621205209  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t1113636619 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_Target_0)); }
	inline GameObject_t1113636619 * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_t1113636619 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T621205209_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef PROPERTYTYPE_T4040930247_H
#define PROPERTYTYPE_T4040930247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty/PropertyType
struct  PropertyType_t4040930247 
{
public:
	// System.Int32 UnityEngine.Analytics.ValueProperty/PropertyType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyType_t4040930247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTYPE_T4040930247_H
#ifndef TRIGGER_T4199345191_H
#define TRIGGER_T4199345191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker/Trigger
struct  Trigger_t4199345191 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker/Trigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Trigger_t4199345191, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGER_T4199345191_H
#ifndef TRIGGERBOOL_T501031542_H
#define TRIGGERBOOL_T501031542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerBool
struct  TriggerBool_t501031542 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerBool::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerBool_t501031542, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERBOOL_T501031542_H
#ifndef TRIGGERLIFECYCLEEVENT_T3193146760_H
#define TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerLifecycleEvent
struct  TriggerLifecycleEvent_t3193146760 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerLifecycleEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerLifecycleEvent_t3193146760, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifndef TRIGGEROPERATOR_T3611898925_H
#define TRIGGEROPERATOR_T3611898925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_t3611898925 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerOperator_t3611898925, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGEROPERATOR_T3611898925_H
#ifndef TRIGGERTYPE_T105272677_H
#define TRIGGERTYPE_T105272677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerType
struct  TriggerType_t105272677 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerType_t105272677, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERTYPE_T105272677_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef VALUEPROPERTY_T1868393739_H
#define VALUEPROPERTY_T1868393739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.ValueProperty
struct  ValueProperty_t1868393739  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EditingCustomValue
	bool ___m_EditingCustomValue_0;
	// System.Int32 UnityEngine.Analytics.ValueProperty::m_PopupIndex
	int32_t ___m_PopupIndex_1;
	// System.String UnityEngine.Analytics.ValueProperty::m_CustomValue
	String_t* ___m_CustomValue_2;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_FixedType
	bool ___m_FixedType_3;
	// System.String UnityEngine.Analytics.ValueProperty::m_EnumType
	String_t* ___m_EnumType_4;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EnumTypeIsCustomizable
	bool ___m_EnumTypeIsCustomizable_5;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_CanDisable
	bool ___m_CanDisable_6;
	// UnityEngine.Analytics.ValueProperty/PropertyType UnityEngine.Analytics.ValueProperty::m_PropertyType
	int32_t ___m_PropertyType_7;
	// System.String UnityEngine.Analytics.ValueProperty::m_ValueType
	String_t* ___m_ValueType_8;
	// System.String UnityEngine.Analytics.ValueProperty::m_Value
	String_t* ___m_Value_9;
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::m_Target
	TrackableField_t1772682203 * ___m_Target_10;

public:
	inline static int32_t get_offset_of_m_EditingCustomValue_0() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EditingCustomValue_0)); }
	inline bool get_m_EditingCustomValue_0() const { return ___m_EditingCustomValue_0; }
	inline bool* get_address_of_m_EditingCustomValue_0() { return &___m_EditingCustomValue_0; }
	inline void set_m_EditingCustomValue_0(bool value)
	{
		___m_EditingCustomValue_0 = value;
	}

	inline static int32_t get_offset_of_m_PopupIndex_1() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PopupIndex_1)); }
	inline int32_t get_m_PopupIndex_1() const { return ___m_PopupIndex_1; }
	inline int32_t* get_address_of_m_PopupIndex_1() { return &___m_PopupIndex_1; }
	inline void set_m_PopupIndex_1(int32_t value)
	{
		___m_PopupIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomValue_2() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CustomValue_2)); }
	inline String_t* get_m_CustomValue_2() const { return ___m_CustomValue_2; }
	inline String_t** get_address_of_m_CustomValue_2() { return &___m_CustomValue_2; }
	inline void set_m_CustomValue_2(String_t* value)
	{
		___m_CustomValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomValue_2), value);
	}

	inline static int32_t get_offset_of_m_FixedType_3() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_FixedType_3)); }
	inline bool get_m_FixedType_3() const { return ___m_FixedType_3; }
	inline bool* get_address_of_m_FixedType_3() { return &___m_FixedType_3; }
	inline void set_m_FixedType_3(bool value)
	{
		___m_FixedType_3 = value;
	}

	inline static int32_t get_offset_of_m_EnumType_4() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumType_4)); }
	inline String_t* get_m_EnumType_4() const { return ___m_EnumType_4; }
	inline String_t** get_address_of_m_EnumType_4() { return &___m_EnumType_4; }
	inline void set_m_EnumType_4(String_t* value)
	{
		___m_EnumType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EnumType_4), value);
	}

	inline static int32_t get_offset_of_m_EnumTypeIsCustomizable_5() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_EnumTypeIsCustomizable_5)); }
	inline bool get_m_EnumTypeIsCustomizable_5() const { return ___m_EnumTypeIsCustomizable_5; }
	inline bool* get_address_of_m_EnumTypeIsCustomizable_5() { return &___m_EnumTypeIsCustomizable_5; }
	inline void set_m_EnumTypeIsCustomizable_5(bool value)
	{
		___m_EnumTypeIsCustomizable_5 = value;
	}

	inline static int32_t get_offset_of_m_CanDisable_6() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_CanDisable_6)); }
	inline bool get_m_CanDisable_6() const { return ___m_CanDisable_6; }
	inline bool* get_address_of_m_CanDisable_6() { return &___m_CanDisable_6; }
	inline void set_m_CanDisable_6(bool value)
	{
		___m_CanDisable_6 = value;
	}

	inline static int32_t get_offset_of_m_PropertyType_7() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_PropertyType_7)); }
	inline int32_t get_m_PropertyType_7() const { return ___m_PropertyType_7; }
	inline int32_t* get_address_of_m_PropertyType_7() { return &___m_PropertyType_7; }
	inline void set_m_PropertyType_7(int32_t value)
	{
		___m_PropertyType_7 = value;
	}

	inline static int32_t get_offset_of_m_ValueType_8() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_ValueType_8)); }
	inline String_t* get_m_ValueType_8() const { return ___m_ValueType_8; }
	inline String_t** get_address_of_m_ValueType_8() { return &___m_ValueType_8; }
	inline void set_m_ValueType_8(String_t* value)
	{
		___m_ValueType_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueType_8), value);
	}

	inline static int32_t get_offset_of_m_Value_9() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Value_9)); }
	inline String_t* get_m_Value_9() const { return ___m_Value_9; }
	inline String_t** get_address_of_m_Value_9() { return &___m_Value_9; }
	inline void set_m_Value_9(String_t* value)
	{
		___m_Value_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_9), value);
	}

	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(ValueProperty_t1868393739, ___m_Target_10)); }
	inline TrackableField_t1772682203 * get_m_Target_10() const { return ___m_Target_10; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(TrackableField_t1772682203 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEPROPERTY_T1868393739_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef EVENTTRIGGER_T2527451695_H
#define EVENTTRIGGER_T2527451695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger
struct  EventTrigger_t2527451695  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t2032715483 * ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger/OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t4184125570 * ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_t582536534 * ___m_Method_11;

public:
	inline static int32_t get_offset_of_m_IsTriggerExpanded_0() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_IsTriggerExpanded_0)); }
	inline bool get_m_IsTriggerExpanded_0() const { return ___m_IsTriggerExpanded_0; }
	inline bool* get_address_of_m_IsTriggerExpanded_0() { return &___m_IsTriggerExpanded_0; }
	inline void set_m_IsTriggerExpanded_0(bool value)
	{
		___m_IsTriggerExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_LifecycleEvent_2() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_LifecycleEvent_2)); }
	inline int32_t get_m_LifecycleEvent_2() const { return ___m_LifecycleEvent_2; }
	inline int32_t* get_address_of_m_LifecycleEvent_2() { return &___m_LifecycleEvent_2; }
	inline void set_m_LifecycleEvent_2(int32_t value)
	{
		___m_LifecycleEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_ApplyRules_3() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_ApplyRules_3)); }
	inline bool get_m_ApplyRules_3() const { return ___m_ApplyRules_3; }
	inline bool* get_address_of_m_ApplyRules_3() { return &___m_ApplyRules_3; }
	inline void set_m_ApplyRules_3(bool value)
	{
		___m_ApplyRules_3 = value;
	}

	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Rules_4)); }
	inline TriggerListContainer_t2032715483 * get_m_Rules_4() const { return ___m_Rules_4; }
	inline TriggerListContainer_t2032715483 ** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(TriggerListContainer_t2032715483 * value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_4), value);
	}

	inline static int32_t get_offset_of_m_TriggerBool_5() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerBool_5)); }
	inline int32_t get_m_TriggerBool_5() const { return ___m_TriggerBool_5; }
	inline int32_t* get_address_of_m_TriggerBool_5() { return &___m_TriggerBool_5; }
	inline void set_m_TriggerBool_5(int32_t value)
	{
		___m_TriggerBool_5 = value;
	}

	inline static int32_t get_offset_of_m_InitTime_6() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_InitTime_6)); }
	inline float get_m_InitTime_6() const { return ___m_InitTime_6; }
	inline float* get_address_of_m_InitTime_6() { return &___m_InitTime_6; }
	inline void set_m_InitTime_6(float value)
	{
		___m_InitTime_6 = value;
	}

	inline static int32_t get_offset_of_m_RepeatTime_7() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_RepeatTime_7)); }
	inline float get_m_RepeatTime_7() const { return ___m_RepeatTime_7; }
	inline float* get_address_of_m_RepeatTime_7() { return &___m_RepeatTime_7; }
	inline void set_m_RepeatTime_7(float value)
	{
		___m_RepeatTime_7 = value;
	}

	inline static int32_t get_offset_of_m_Repetitions_8() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Repetitions_8)); }
	inline int32_t get_m_Repetitions_8() const { return ___m_Repetitions_8; }
	inline int32_t* get_address_of_m_Repetitions_8() { return &___m_Repetitions_8; }
	inline void set_m_Repetitions_8(int32_t value)
	{
		___m_Repetitions_8 = value;
	}

	inline static int32_t get_offset_of_repetitionCount_9() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___repetitionCount_9)); }
	inline int32_t get_repetitionCount_9() const { return ___repetitionCount_9; }
	inline int32_t* get_address_of_repetitionCount_9() { return &___repetitionCount_9; }
	inline void set_repetitionCount_9(int32_t value)
	{
		___repetitionCount_9 = value;
	}

	inline static int32_t get_offset_of_m_TriggerFunction_10() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerFunction_10)); }
	inline OnTrigger_t4184125570 * get_m_TriggerFunction_10() const { return ___m_TriggerFunction_10; }
	inline OnTrigger_t4184125570 ** get_address_of_m_TriggerFunction_10() { return &___m_TriggerFunction_10; }
	inline void set_m_TriggerFunction_10(OnTrigger_t4184125570 * value)
	{
		___m_TriggerFunction_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriggerFunction_10), value);
	}

	inline static int32_t get_offset_of_m_Method_11() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Method_11)); }
	inline TriggerMethod_t582536534 * get_m_Method_11() const { return ___m_Method_11; }
	inline TriggerMethod_t582536534 ** get_address_of_m_Method_11() { return &___m_Method_11; }
	inline void set_m_Method_11(TriggerMethod_t582536534 * value)
	{
		___m_Method_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Method_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T2527451695_H
#ifndef TRIGGERRULE_T1946298321_H
#define TRIGGERRULE_T1946298321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t1946298321  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t1772682203 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t1868393739 * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t1868393739 * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Target_0)); }
	inline TrackableField_t1772682203 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_t1772682203 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value_2)); }
	inline ValueProperty_t1868393739 * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t1868393739 * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value2_3)); }
	inline ValueProperty_t1868393739 * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t1868393739 * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T1946298321_H
#ifndef ONTRIGGER_T4184125570_H
#define ONTRIGGER_T4184125570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct  OnTrigger_t4184125570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T4184125570_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ANALYTICSTRACKER_T731021378_H
#define ANALYTICSTRACKER_T731021378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_t731021378  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t2865362463 * ___m_Dict_3;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_4;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t3943537984 * ___m_TrackableProperty_5;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_6;

public:
	inline static int32_t get_offset_of_m_EventName_2() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_EventName_2)); }
	inline String_t* get_m_EventName_2() const { return ___m_EventName_2; }
	inline String_t** get_address_of_m_EventName_2() { return &___m_EventName_2; }
	inline void set_m_EventName_2(String_t* value)
	{
		___m_EventName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventName_2), value);
	}

	inline static int32_t get_offset_of_m_Dict_3() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Dict_3)); }
	inline Dictionary_2_t2865362463 * get_m_Dict_3() const { return ___m_Dict_3; }
	inline Dictionary_2_t2865362463 ** get_address_of_m_Dict_3() { return &___m_Dict_3; }
	inline void set_m_Dict_3(Dictionary_2_t2865362463 * value)
	{
		___m_Dict_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_3), value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_PrevDictHash_4)); }
	inline int32_t get_m_PrevDictHash_4() const { return ___m_PrevDictHash_4; }
	inline int32_t* get_address_of_m_PrevDictHash_4() { return &___m_PrevDictHash_4; }
	inline void set_m_PrevDictHash_4(int32_t value)
	{
		___m_PrevDictHash_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_TrackableProperty_5)); }
	inline TrackableProperty_t3943537984 * get_m_TrackableProperty_5() const { return ___m_TrackableProperty_5; }
	inline TrackableProperty_t3943537984 ** get_address_of_m_TrackableProperty_5() { return &___m_TrackableProperty_5; }
	inline void set_m_TrackableProperty_5(TrackableProperty_t3943537984 * value)
	{
		___m_TrackableProperty_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableProperty_5), value);
	}

	inline static int32_t get_offset_of_m_Trigger_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t731021378, ___m_Trigger_6)); }
	inline int32_t get_m_Trigger_6() const { return ___m_Trigger_6; }
	inline int32_t* get_address_of_m_Trigger_6() { return &___m_Trigger_6; }
	inline void set_m_Trigger_6(int32_t value)
	{
		___m_Trigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSTRACKER_T731021378_H
#ifndef TOUCHQUSETION_T3391643830_H
#define TOUCHQUSETION_T3391643830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchQusetion
struct  TouchQusetion_t3391643830  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TouchQusetion::hit_target
	GameObject_t1113636619 * ___hit_target_2;
	// UnityEngine.GameObject TouchQusetion::MoviePlane
	GameObject_t1113636619 * ___MoviePlane_3;
	// UnityEngine.GameObject TouchQusetion::MovieStopButton
	GameObject_t1113636619 * ___MovieStopButton_4;

public:
	inline static int32_t get_offset_of_hit_target_2() { return static_cast<int32_t>(offsetof(TouchQusetion_t3391643830, ___hit_target_2)); }
	inline GameObject_t1113636619 * get_hit_target_2() const { return ___hit_target_2; }
	inline GameObject_t1113636619 ** get_address_of_hit_target_2() { return &___hit_target_2; }
	inline void set_hit_target_2(GameObject_t1113636619 * value)
	{
		___hit_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___hit_target_2), value);
	}

	inline static int32_t get_offset_of_MoviePlane_3() { return static_cast<int32_t>(offsetof(TouchQusetion_t3391643830, ___MoviePlane_3)); }
	inline GameObject_t1113636619 * get_MoviePlane_3() const { return ___MoviePlane_3; }
	inline GameObject_t1113636619 ** get_address_of_MoviePlane_3() { return &___MoviePlane_3; }
	inline void set_MoviePlane_3(GameObject_t1113636619 * value)
	{
		___MoviePlane_3 = value;
		Il2CppCodeGenWriteBarrier((&___MoviePlane_3), value);
	}

	inline static int32_t get_offset_of_MovieStopButton_4() { return static_cast<int32_t>(offsetof(TouchQusetion_t3391643830, ___MovieStopButton_4)); }
	inline GameObject_t1113636619 * get_MovieStopButton_4() const { return ___MovieStopButton_4; }
	inline GameObject_t1113636619 ** get_address_of_MovieStopButton_4() { return &___MovieStopButton_4; }
	inline void set_MovieStopButton_4(GameObject_t1113636619 * value)
	{
		___MovieStopButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___MovieStopButton_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHQUSETION_T3391643830_H
#ifndef SCENECHANGE_T1480171956_H
#define SCENECHANGE_T1480171956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneChange
struct  SceneChange_t1480171956  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENECHANGE_T1480171956_H
#ifndef POINTCLICK_T1916834135_H
#define POINTCLICK_T1916834135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointClick
struct  PointClick_t1916834135  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Sprite PointClick::img1
	Sprite_t280657092 * ___img1_2;
	// UnityEngine.Sprite PointClick::img2
	Sprite_t280657092 * ___img2_3;
	// UnityEngine.Sprite PointClick::img3
	Sprite_t280657092 * ___img3_4;
	// UnityEngine.Sprite PointClick::img4
	Sprite_t280657092 * ___img4_5;
	// UnityEngine.UI.Image PointClick::img
	Image_t2670269651 * ___img_6;
	// UnityEngine.GameObject PointClick::MapCanvas
	GameObject_t1113636619 * ___MapCanvas_7;
	// UnityEngine.GameObject PointClick::MainCanvas
	GameObject_t1113636619 * ___MainCanvas_8;
	// UnityEngine.Material PointClick::sphere
	Material_t340375123 * ___sphere_9;
	// UnityEngine.Texture PointClick::tx1
	Texture_t3661962703 * ___tx1_10;
	// UnityEngine.Texture PointClick::tx2
	Texture_t3661962703 * ___tx2_11;
	// UnityEngine.Texture PointClick::tx3
	Texture_t3661962703 * ___tx3_12;
	// UnityEngine.Texture PointClick::tx4
	Texture_t3661962703 * ___tx4_13;
	// UnityEngine.GameObject PointClick::Question1
	GameObject_t1113636619 * ___Question1_14;
	// UnityEngine.GameObject PointClick::Question2
	GameObject_t1113636619 * ___Question2_15;
	// UnityEngine.GameObject PointClick::Question3
	GameObject_t1113636619 * ___Question3_16;
	// UnityEngine.GameObject PointClick::Question4
	GameObject_t1113636619 * ___Question4_17;

public:
	inline static int32_t get_offset_of_img1_2() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___img1_2)); }
	inline Sprite_t280657092 * get_img1_2() const { return ___img1_2; }
	inline Sprite_t280657092 ** get_address_of_img1_2() { return &___img1_2; }
	inline void set_img1_2(Sprite_t280657092 * value)
	{
		___img1_2 = value;
		Il2CppCodeGenWriteBarrier((&___img1_2), value);
	}

	inline static int32_t get_offset_of_img2_3() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___img2_3)); }
	inline Sprite_t280657092 * get_img2_3() const { return ___img2_3; }
	inline Sprite_t280657092 ** get_address_of_img2_3() { return &___img2_3; }
	inline void set_img2_3(Sprite_t280657092 * value)
	{
		___img2_3 = value;
		Il2CppCodeGenWriteBarrier((&___img2_3), value);
	}

	inline static int32_t get_offset_of_img3_4() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___img3_4)); }
	inline Sprite_t280657092 * get_img3_4() const { return ___img3_4; }
	inline Sprite_t280657092 ** get_address_of_img3_4() { return &___img3_4; }
	inline void set_img3_4(Sprite_t280657092 * value)
	{
		___img3_4 = value;
		Il2CppCodeGenWriteBarrier((&___img3_4), value);
	}

	inline static int32_t get_offset_of_img4_5() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___img4_5)); }
	inline Sprite_t280657092 * get_img4_5() const { return ___img4_5; }
	inline Sprite_t280657092 ** get_address_of_img4_5() { return &___img4_5; }
	inline void set_img4_5(Sprite_t280657092 * value)
	{
		___img4_5 = value;
		Il2CppCodeGenWriteBarrier((&___img4_5), value);
	}

	inline static int32_t get_offset_of_img_6() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___img_6)); }
	inline Image_t2670269651 * get_img_6() const { return ___img_6; }
	inline Image_t2670269651 ** get_address_of_img_6() { return &___img_6; }
	inline void set_img_6(Image_t2670269651 * value)
	{
		___img_6 = value;
		Il2CppCodeGenWriteBarrier((&___img_6), value);
	}

	inline static int32_t get_offset_of_MapCanvas_7() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___MapCanvas_7)); }
	inline GameObject_t1113636619 * get_MapCanvas_7() const { return ___MapCanvas_7; }
	inline GameObject_t1113636619 ** get_address_of_MapCanvas_7() { return &___MapCanvas_7; }
	inline void set_MapCanvas_7(GameObject_t1113636619 * value)
	{
		___MapCanvas_7 = value;
		Il2CppCodeGenWriteBarrier((&___MapCanvas_7), value);
	}

	inline static int32_t get_offset_of_MainCanvas_8() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___MainCanvas_8)); }
	inline GameObject_t1113636619 * get_MainCanvas_8() const { return ___MainCanvas_8; }
	inline GameObject_t1113636619 ** get_address_of_MainCanvas_8() { return &___MainCanvas_8; }
	inline void set_MainCanvas_8(GameObject_t1113636619 * value)
	{
		___MainCanvas_8 = value;
		Il2CppCodeGenWriteBarrier((&___MainCanvas_8), value);
	}

	inline static int32_t get_offset_of_sphere_9() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___sphere_9)); }
	inline Material_t340375123 * get_sphere_9() const { return ___sphere_9; }
	inline Material_t340375123 ** get_address_of_sphere_9() { return &___sphere_9; }
	inline void set_sphere_9(Material_t340375123 * value)
	{
		___sphere_9 = value;
		Il2CppCodeGenWriteBarrier((&___sphere_9), value);
	}

	inline static int32_t get_offset_of_tx1_10() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___tx1_10)); }
	inline Texture_t3661962703 * get_tx1_10() const { return ___tx1_10; }
	inline Texture_t3661962703 ** get_address_of_tx1_10() { return &___tx1_10; }
	inline void set_tx1_10(Texture_t3661962703 * value)
	{
		___tx1_10 = value;
		Il2CppCodeGenWriteBarrier((&___tx1_10), value);
	}

	inline static int32_t get_offset_of_tx2_11() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___tx2_11)); }
	inline Texture_t3661962703 * get_tx2_11() const { return ___tx2_11; }
	inline Texture_t3661962703 ** get_address_of_tx2_11() { return &___tx2_11; }
	inline void set_tx2_11(Texture_t3661962703 * value)
	{
		___tx2_11 = value;
		Il2CppCodeGenWriteBarrier((&___tx2_11), value);
	}

	inline static int32_t get_offset_of_tx3_12() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___tx3_12)); }
	inline Texture_t3661962703 * get_tx3_12() const { return ___tx3_12; }
	inline Texture_t3661962703 ** get_address_of_tx3_12() { return &___tx3_12; }
	inline void set_tx3_12(Texture_t3661962703 * value)
	{
		___tx3_12 = value;
		Il2CppCodeGenWriteBarrier((&___tx3_12), value);
	}

	inline static int32_t get_offset_of_tx4_13() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___tx4_13)); }
	inline Texture_t3661962703 * get_tx4_13() const { return ___tx4_13; }
	inline Texture_t3661962703 ** get_address_of_tx4_13() { return &___tx4_13; }
	inline void set_tx4_13(Texture_t3661962703 * value)
	{
		___tx4_13 = value;
		Il2CppCodeGenWriteBarrier((&___tx4_13), value);
	}

	inline static int32_t get_offset_of_Question1_14() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___Question1_14)); }
	inline GameObject_t1113636619 * get_Question1_14() const { return ___Question1_14; }
	inline GameObject_t1113636619 ** get_address_of_Question1_14() { return &___Question1_14; }
	inline void set_Question1_14(GameObject_t1113636619 * value)
	{
		___Question1_14 = value;
		Il2CppCodeGenWriteBarrier((&___Question1_14), value);
	}

	inline static int32_t get_offset_of_Question2_15() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___Question2_15)); }
	inline GameObject_t1113636619 * get_Question2_15() const { return ___Question2_15; }
	inline GameObject_t1113636619 ** get_address_of_Question2_15() { return &___Question2_15; }
	inline void set_Question2_15(GameObject_t1113636619 * value)
	{
		___Question2_15 = value;
		Il2CppCodeGenWriteBarrier((&___Question2_15), value);
	}

	inline static int32_t get_offset_of_Question3_16() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___Question3_16)); }
	inline GameObject_t1113636619 * get_Question3_16() const { return ___Question3_16; }
	inline GameObject_t1113636619 ** get_address_of_Question3_16() { return &___Question3_16; }
	inline void set_Question3_16(GameObject_t1113636619 * value)
	{
		___Question3_16 = value;
		Il2CppCodeGenWriteBarrier((&___Question3_16), value);
	}

	inline static int32_t get_offset_of_Question4_17() { return static_cast<int32_t>(offsetof(PointClick_t1916834135, ___Question4_17)); }
	inline GameObject_t1113636619 * get_Question4_17() const { return ___Question4_17; }
	inline GameObject_t1113636619 ** get_address_of_Question4_17() { return &___Question4_17; }
	inline void set_Question4_17(GameObject_t1113636619 * value)
	{
		___Question4_17 = value;
		Il2CppCodeGenWriteBarrier((&___Question4_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTCLICK_T1916834135_H
#ifndef JYROCAMERA_T2186921828_H
#define JYROCAMERA_T2186921828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JyroCamera
struct  JyroCamera_t2186921828  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JYROCAMERA_T2186921828_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (TrackablePropertyBase_t2121532948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1800[2] = 
{
	TrackablePropertyBase_t2121532948::get_offset_of_m_Target_0(),
	TrackablePropertyBase_t2121532948::get_offset_of_m_Path_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (ValueProperty_t1868393739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[11] = 
{
	ValueProperty_t1868393739::get_offset_of_m_EditingCustomValue_0(),
	ValueProperty_t1868393739::get_offset_of_m_PopupIndex_1(),
	ValueProperty_t1868393739::get_offset_of_m_CustomValue_2(),
	ValueProperty_t1868393739::get_offset_of_m_FixedType_3(),
	ValueProperty_t1868393739::get_offset_of_m_EnumType_4(),
	ValueProperty_t1868393739::get_offset_of_m_EnumTypeIsCustomizable_5(),
	ValueProperty_t1868393739::get_offset_of_m_CanDisable_6(),
	ValueProperty_t1868393739::get_offset_of_m_PropertyType_7(),
	ValueProperty_t1868393739::get_offset_of_m_ValueType_8(),
	ValueProperty_t1868393739::get_offset_of_m_Value_9(),
	ValueProperty_t1868393739::get_offset_of_m_Target_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (PropertyType_t4040930247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1802[4] = 
{
	PropertyType_t4040930247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (AnalyticsTracker_t731021378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[5] = 
{
	AnalyticsTracker_t731021378::get_offset_of_m_EventName_2(),
	AnalyticsTracker_t731021378::get_offset_of_m_Dict_3(),
	AnalyticsTracker_t731021378::get_offset_of_m_PrevDictHash_4(),
	AnalyticsTracker_t731021378::get_offset_of_m_TrackableProperty_5(),
	AnalyticsTracker_t731021378::get_offset_of_m_Trigger_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (Trigger_t4199345191)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1804[8] = 
{
	Trigger_t4199345191::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (TrackableProperty_t3943537984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[2] = 
{
	0,
	TrackableProperty_t3943537984::get_offset_of_m_Fields_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (FieldWithTarget_t3058750293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1806[6] = 
{
	FieldWithTarget_t3058750293::get_offset_of_m_ParamName_0(),
	FieldWithTarget_t3058750293::get_offset_of_m_Target_1(),
	FieldWithTarget_t3058750293::get_offset_of_m_FieldPath_2(),
	FieldWithTarget_t3058750293::get_offset_of_m_TypeString_3(),
	FieldWithTarget_t3058750293::get_offset_of_m_DoStatic_4(),
	FieldWithTarget_t3058750293::get_offset_of_m_StaticString_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (TriggerBool_t501031542)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1807[4] = 
{
	TriggerBool_t501031542::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (TriggerLifecycleEvent_t3193146760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1808[9] = 
{
	TriggerLifecycleEvent_t3193146760::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (TriggerOperator_t3611898925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1809[9] = 
{
	TriggerOperator_t3611898925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (TriggerType_t105272677)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1810[5] = 
{
	TriggerType_t105272677::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (TriggerListContainer_t2032715483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[1] = 
{
	TriggerListContainer_t2032715483::get_offset_of_m_Rules_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (EventTrigger_t2527451695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1812[12] = 
{
	EventTrigger_t2527451695::get_offset_of_m_IsTriggerExpanded_0(),
	EventTrigger_t2527451695::get_offset_of_m_Type_1(),
	EventTrigger_t2527451695::get_offset_of_m_LifecycleEvent_2(),
	EventTrigger_t2527451695::get_offset_of_m_ApplyRules_3(),
	EventTrigger_t2527451695::get_offset_of_m_Rules_4(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerBool_5(),
	EventTrigger_t2527451695::get_offset_of_m_InitTime_6(),
	EventTrigger_t2527451695::get_offset_of_m_RepeatTime_7(),
	EventTrigger_t2527451695::get_offset_of_m_Repetitions_8(),
	EventTrigger_t2527451695::get_offset_of_repetitionCount_9(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerFunction_10(),
	EventTrigger_t2527451695::get_offset_of_m_Method_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (OnTrigger_t4184125570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (TrackableTrigger_t621205209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1814[2] = 
{
	TrackableTrigger_t621205209::get_offset_of_m_Target_0(),
	TrackableTrigger_t621205209::get_offset_of_m_MethodPath_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (TriggerMethod_t582536534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (TriggerRule_t1946298321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[4] = 
{
	TriggerRule_t1946298321::get_offset_of_m_Target_0(),
	TriggerRule_t1946298321::get_offset_of_m_Operator_1(),
	TriggerRule_t1946298321::get_offset_of_m_Value_2(),
	TriggerRule_t1946298321::get_offset_of_m_Value2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (U3CModuleU3E_t692745547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (JyroCamera_t2186921828), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (PointClick_t1916834135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[16] = 
{
	PointClick_t1916834135::get_offset_of_img1_2(),
	PointClick_t1916834135::get_offset_of_img2_3(),
	PointClick_t1916834135::get_offset_of_img3_4(),
	PointClick_t1916834135::get_offset_of_img4_5(),
	PointClick_t1916834135::get_offset_of_img_6(),
	PointClick_t1916834135::get_offset_of_MapCanvas_7(),
	PointClick_t1916834135::get_offset_of_MainCanvas_8(),
	PointClick_t1916834135::get_offset_of_sphere_9(),
	PointClick_t1916834135::get_offset_of_tx1_10(),
	PointClick_t1916834135::get_offset_of_tx2_11(),
	PointClick_t1916834135::get_offset_of_tx3_12(),
	PointClick_t1916834135::get_offset_of_tx4_13(),
	PointClick_t1916834135::get_offset_of_Question1_14(),
	PointClick_t1916834135::get_offset_of_Question2_15(),
	PointClick_t1916834135::get_offset_of_Question3_16(),
	PointClick_t1916834135::get_offset_of_Question4_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (SceneChange_t1480171956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (TouchQusetion_t3391643830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1821[3] = 
{
	TouchQusetion_t3391643830::get_offset_of_hit_target_2(),
	TouchQusetion_t3391643830::get_offset_of_MoviePlane_3(),
	TouchQusetion_t3391643830::get_offset_of_MovieStopButton_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
