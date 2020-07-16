﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196;
// System.Action`2<System.Int32,System.Object>
struct Action_2_t310C65F24696E342C03289B42E1BD1D3EBAEA23C;
// System.Action`2<System.Int32,System.String>
struct Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_tBEDDB665A5F6AD3FD16616F6F0212C5A0079B20A;
// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5;

IL2CPP_EXTERN_C RuntimeClass* NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3E4A3CB903A28EB23E184053458FF650929CFBE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mDF71FA1A3E65E077E1E91D732C6C2F14603ADC25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m39B9270531EF3D50986D3A3BAF26E1E46F2BAC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t NativeInputSystem_NotifyBeforeUpdate_m65673A1CA957016CDC49780FBB2E2EAF1B55D633_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeInputSystem_NotifyDeviceDiscovered_m5C7F0337EC7557A9F5B5CCC3EEE6CB183988F059_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeInputSystem_NotifyUpdate_mA66010686BB71BD57BD71F20C418ECCB750232E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeInputSystem_ShouldRunUpdate_mCD7DAB04F17B45C217E768E68971E8EA105A4B26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeUpdateCallback_BeginInvoke_mDE0F8231E8BD932DAAD0CFE06CAECDE4CF46D08C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngineInternal.Input.NativeInputSystem
struct  NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C  : public RuntimeObject
{
public:

public:
};

struct NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields
{
public:
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * ___onBeforeUpdate_1;
	// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> UnityEngineInternal.Input.NativeInputSystem::onShouldRunUpdate
	Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * ___onShouldRunUpdate_2;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * ___s_OnDeviceDiscoveredCallback_3;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onUpdate_0)); }
	inline NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_0), (void*)value);
	}

	inline static int32_t get_offset_of_onBeforeUpdate_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onBeforeUpdate_1)); }
	inline Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * get_onBeforeUpdate_1() const { return ___onBeforeUpdate_1; }
	inline Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 ** get_address_of_onBeforeUpdate_1() { return &___onBeforeUpdate_1; }
	inline void set_onBeforeUpdate_1(Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * value)
	{
		___onBeforeUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onBeforeUpdate_1), (void*)value);
	}

	inline static int32_t get_offset_of_onShouldRunUpdate_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onShouldRunUpdate_2)); }
	inline Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * get_onShouldRunUpdate_2() const { return ___onShouldRunUpdate_2; }
	inline Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 ** get_address_of_onShouldRunUpdate_2() { return &___onShouldRunUpdate_2; }
	inline void set_onShouldRunUpdate_2(Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * value)
	{
		___onShouldRunUpdate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onShouldRunUpdate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnDeviceDiscoveredCallback_3() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___s_OnDeviceDiscoveredCallback_3)); }
	inline Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * get_s_OnDeviceDiscoveredCallback_3() const { return ___s_OnDeviceDiscoveredCallback_3; }
	inline Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 ** get_address_of_s_OnDeviceDiscoveredCallback_3() { return &___s_OnDeviceDiscoveredCallback_3; }
	inline void set_s_OnDeviceDiscoveredCallback_3(Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * value)
	{
		___s_OnDeviceDiscoveredCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnDeviceDiscoveredCallback_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngineInternal.Input.NativeInputEventBuffer
struct  NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Void* UnityEngineInternal.Input.NativeInputEventBuffer::eventBuffer
					void* ___eventBuffer_0;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					void* ___eventBuffer_0_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding[8];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::eventCount
					int32_t ___eventCount_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding_forAlignmentOnly[8];
					int32_t ___eventCount_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[12];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::sizeInBytes
					int32_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[12];
					int32_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::capacityInBytes
					int32_t ___capacityInBytes_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding_forAlignmentOnly[16];
					int32_t ___capacityInBytes_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF__padding[20];
	};

public:
	inline static int32_t get_offset_of_eventBuffer_0() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF, ___eventBuffer_0)); }
	inline void* get_eventBuffer_0() const { return ___eventBuffer_0; }
	inline void** get_address_of_eventBuffer_0() { return &___eventBuffer_0; }
	inline void set_eventBuffer_0(void* value)
	{
		___eventBuffer_0 = value;
	}

	inline static int32_t get_offset_of_eventCount_1() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF, ___eventCount_1)); }
	inline int32_t get_eventCount_1() const { return ___eventCount_1; }
	inline int32_t* get_address_of_eventCount_1() { return &___eventCount_1; }
	inline void set_eventCount_1(int32_t value)
	{
		___eventCount_1 = value;
	}

	inline static int32_t get_offset_of_sizeInBytes_2() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF, ___sizeInBytes_2)); }
	inline int32_t get_sizeInBytes_2() const { return ___sizeInBytes_2; }
	inline int32_t* get_address_of_sizeInBytes_2() { return &___sizeInBytes_2; }
	inline void set_sizeInBytes_2(int32_t value)
	{
		___sizeInBytes_2 = value;
	}

	inline static int32_t get_offset_of_capacityInBytes_3() { return static_cast<int32_t>(offsetof(NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF, ___capacityInBytes_3)); }
	inline int32_t get_capacityInBytes_3() const { return ___capacityInBytes_3; }
	inline int32_t* get_address_of_capacityInBytes_3() { return &___capacityInBytes_3; }
	inline void set_capacityInBytes_3(int32_t value)
	{
		___capacityInBytes_3 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngineInternal.Input.NativeInputUpdateType
struct  NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct  Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Int32,System.String>
struct  Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct  Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngineInternal.Input.NativeUpdateCallback
struct  NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mA889387FF7C40A1B72F040B66E1B3CB3663E6F81_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m725EE552C4871CF54C3E304DE0F437CE599F6FA0_gshared (Action_2_t310C65F24696E342C03289B42E1BD1D3EBAEA23C * __this, int32_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32Enum,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mD8922F3D37B298CE28A34A50BD4A0D1B4E039286_gshared (Func_2_tBEDDB665A5F6AD3FD16616F6F0212C5A0079B20A * __this, int32_t ___arg0, const RuntimeMethod* method);

// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A (bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>::Invoke(!0)
inline void Action_1_Invoke_m3E4A3CB903A28EB23E184053458FF650929CFBE5 (Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 *, int32_t, const RuntimeMethod*))Action_1_Invoke_mA889387FF7C40A1B72F040B66E1B3CB3663E6F81_gshared)(__this, ___obj0, method);
}
// System.Void* System.IntPtr::ToPointer()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_mE82D2994A5D407825C267886E58586A60959E9C3 (NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * __this, int32_t ___updateType0, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * ___buffer1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_mDF71FA1A3E65E077E1E91D732C6C2F14603ADC25 (Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * __this, int32_t ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 *, int32_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m725EE552C4871CF54C3E304DE0F437CE599F6FA0_gshared)(__this, ___arg10, ___arg21, method);
}
// !1 System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_m39B9270531EF3D50986D3A3BAF26E1E46F2BAC3F (Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 *, int32_t, const RuntimeMethod*))Func_2_Invoke_mD8922F3D37B298CE28A34A50BD4A0D1B4E039286_gshared)(__this, ___arg0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem__cctor_mD8309B8A85FBA303AAA31417962E01ECE64B6F29 (const RuntimeMethod* method)
{
	{
		NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A((bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyBeforeUpdate_m65673A1CA957016CDC49780FBB2E2EAF1B55D633 (int32_t ___updateType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyBeforeUpdate_m65673A1CA957016CDC49780FBB2E2EAF1B55D633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_onBeforeUpdate_1();
		V_0 = L_0;
		Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_tB58198D6D651B2D8E7C692107E8090CEAD784196 * L_3 = V_0;
		int32_t L_4 = ___updateType0;
		NullCheck(L_3);
		Action_1_Invoke_m3E4A3CB903A28EB23E184053458FF650929CFBE5(L_3, L_4, /*hidden argument*/Action_1_Invoke_m3E4A3CB903A28EB23E184053458FF650929CFBE5_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyUpdate_mA66010686BB71BD57BD71F20C418ECCB750232E6 (int32_t ___updateType0, intptr_t ___eventBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyUpdate_mA66010686BB71BD57BD71F20C418ECCB750232E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * V_0 = NULL;
	NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * V_1 = NULL;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_onUpdate_0();
		V_0 = L_0;
		void* L_1 = IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline((intptr_t*)(&___eventBuffer1), /*hidden argument*/NULL);
		V_1 = (NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *)L_1;
		NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_eventCount_1(0);
		NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_sizeInBytes_2(0);
		goto IL_0034;
	}

IL_0029:
	{
		NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * L_6 = V_0;
		int32_t L_7 = ___updateType0;
		NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * L_8 = V_1;
		NullCheck(L_6);
		NativeUpdateCallback_Invoke_mE82D2994A5D407825C267886E58586A60959E9C3(L_6, L_7, (NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *)(NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *)L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyDeviceDiscovered_m5C7F0337EC7557A9F5B5CCC3EEE6CB183988F059 (int32_t ___deviceId0, String_t* ___deviceDescriptor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyDeviceDiscovered_m5C7F0337EC7557A9F5B5CCC3EEE6CB183988F059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_s_OnDeviceDiscoveredCallback_3();
		V_0 = L_0;
		Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		Action_2_t8B107436013DEE288E8B8ED1E381BFC9B97396C1 * L_3 = V_0;
		int32_t L_4 = ___deviceId0;
		String_t* L_5 = ___deviceDescriptor1;
		NullCheck(L_3);
		Action_2_Invoke_mDF71FA1A3E65E077E1E91D732C6C2F14603ADC25(L_3, L_4, L_5, /*hidden argument*/Action_2_Invoke_mDF71FA1A3E65E077E1E91D732C6C2F14603ADC25_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_ShouldRunUpdate_mCD7DAB04F17B45C217E768E68971E8EA105A4B26 (int32_t ___updateType0, bool* ___retval1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_ShouldRunUpdate_mCD7DAB04F17B45C217E768E68971E8EA105A4B26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_onShouldRunUpdate_2();
		V_0 = L_0;
		bool* L_1 = ___retval1;
		Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * L_2 = V_0;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_000e:
	{
		Func_2_t000E40228589512DCB78A1DD24FF9CBF6A7A8B60 * L_3 = V_0;
		int32_t L_4 = ___updateType0;
		NullCheck(L_3);
		bool L_5 = Func_2_Invoke_m39B9270531EF3D50986D3A3BAF26E1E46F2BAC3F(L_3, L_4, /*hidden argument*/Func_2_Invoke_m39B9270531EF3D50986D3A3BAF26E1E46F2BAC3F_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A_ftn) (bool);
	static NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 (NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * __this, int32_t ___updateType0, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * ___buffer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___updateType0, ___buffer1);

}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback__ctor_mD33D51CCB8192018082E8B6CFC552E5BC6D23512 (NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_mE82D2994A5D407825C267886E58586A60959E9C3 (NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * __this, int32_t ___updateType0, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * ___buffer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___updateType0, ___buffer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___updateType0, ___buffer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___updateType0, ___buffer1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * >::Invoke(targetMethod, targetThis, ___updateType0, ___buffer1);
					else
						GenericVirtActionInvoker2< int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * >::Invoke(targetMethod, targetThis, ___updateType0, ___buffer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___updateType0, ___buffer1);
					else
						VirtActionInvoker2< int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___updateType0, ___buffer1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___updateType0) - 1), ___buffer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___updateType0, ___buffer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeUpdateCallback_BeginInvoke_mDE0F8231E8BD932DAAD0CFE06CAECDE4CF46D08C (NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * __this, int32_t ___updateType0, NativeInputEventBuffer_t9960648276F01C5C3435E0E6FD870F2DA8A132EF * ___buffer1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeUpdateCallback_BeginInvoke_mDE0F8231E8BD932DAAD0CFE06CAECDE4CF46D08C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71_il2cpp_TypeInfo_var, &___updateType0);
	__d_args[1] = ___buffer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback_EndInvoke_mC5CBF699E4F0792A8516529FB0AD40D59CA27674 (NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_mC56A17E597E9F767B889DA10DB866F0B96CF0D65_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
