#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.ISubsystem>
struct List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9;
// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>
struct List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858;
// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl>
struct List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.ISubsystem
struct ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.ISubsystemDescriptorImpl
struct ISubsystemDescriptorImpl_tE72E28C34A9DDE87527315A223AAC7ECB4FFA72F;
// UnityEngine.ISubsystemDescriptorImpl[]
struct ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520;
// UnityEngine.ISubsystemDescriptor[]
struct ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA;
// UnityEngine.ISubsystem[]
struct ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA;

IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptorImpl_tE72E28C34A9DDE87527315A223AAC7ECB4FFA72F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m03E6AAFF2B793D3FDD535899BD56910FA2A32C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m232BAAA9E5E833715D9A804A3FDC0F69AB30A025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC67BA862241866E4DA5DBEFA1CC626D62BA810A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1107D721F1E253992686EDCAC577400975276F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mABA9C70C5D798FAE04C6CE5DB5BD682685F9A160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC62BE88892A86021EC05C63291BB500831D4CEA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE41404CE04D2EB600173EC4FD50C046CC477E68A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEF7C1CBEB16A80BEFD2A568073F6480842105730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAC23B4412EFE76CFCFDECF09126C69B49F6753C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCB360C521A89F468B979C5A68D1D0E8279396E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2034FA7711F829F94E3BDA7DEA0B30D4F00BF71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFC27276EEA6E54C9C165D1852C7A8E0AD8AE3E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0C0B0645C534FB327F81FA98B68E4D8BC81DF33C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7E46EDC3E8D632F026FBB434365DBD2655754870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m66CFF3B42CC0D1054424CA077E8DB397702817CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m73E261FA716CB16FA3DCDBA5E06FE1451E597C6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCD025E64DC79BF09A5CE562A4A84CEE45615D487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDC2630ED97B5A6C00A7C0DEB4DD9B57F43ECB6A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m10DF42A0F70E7A1D237DDE264FE7B1B6EE489E4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA0C14C2F68D92C1FE6645A3363FB6752A781A180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCD74DCA5067730766C16F8B2ED6EB3A464EC913D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0C122C3A8BF281BFAC8D50832F55A37F4205E288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA87A7BAE00494AAAE2DC4C68F773906FC8F9C2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemDescriptors_Internal_AddDescriptor_mDC4139EBD261FEEEB9B0A659AB97677F1F32C12A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemDescriptors_Internal_ClearManagedDescriptors_m2947E77893C4527DC1DFFAE46FA920B7C1A1BFFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemDescriptors_Internal_InitializeManagedDescriptor_m6F2F39E103FF8E64209A1E552F6DE83410E41344_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemDescriptors__cctor_mA81DC94667310761A1A6064370E19E6D16384331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemInstances_Internal_ClearManagedInstances_mA3062D2B43F457428E705FEB44838A7CA692015C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemInstances_Internal_GetInstanceByPtr_m2A25D2EFCD0D32F75D464EBF44499DD53B26EAC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemInstances_Internal_InitializeManagedInstance_m210EC1AB05D6223E474ED5B93629A88C41AD5F74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemInstances_Internal_RemoveInstanceByPtr_m59644CC0F66FFDAAA00E6C3B2BF9E41AE93C3DCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Internal_SubsystemInstances__cctor_mE5273AC77F77BCAE925CF863DCD1CABE7AD9DC88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemManager_Internal_ReloadSubsystemsCompleted_m87E3A1F499D364227A97A55619BC5E5E2333A63E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemManager_Internal_ReloadSubsystemsStarted_m5803445C7288172232312883A02DB385EE4A1A33_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9A78601B9A44A0D2B34033CD8A2D3EE387D3E707 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ISubsystem>
struct  List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9, ____items_1)); }
	inline ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B* get__items_1() const { return ____items_1; }
	inline ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9_StaticFields, ____emptyArray_5)); }
	inline ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISubsystemU5BU5D_t937C19AC41D7DD511EF467E28083DEE06EB2034B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>
struct  List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858, ____items_1)); }
	inline ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA* get__items_1() const { return ____items_1; }
	inline ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858_StaticFields, ____emptyArray_5)); }
	inline ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISubsystemDescriptorU5BU5D_tD7A5CF5BB5FF9E56D122BD47CCF4C25064CED8BA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl>
struct  List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716, ____items_1)); }
	inline ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520* get__items_1() const { return ____items_1; }
	inline ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716_StaticFields, ____emptyArray_5)); }
	inline ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISubsystemDescriptorImplU5BU5D_tDA71D6AAD5FA67A4277A4A291DB51B4DEFCFD520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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

// UnityEngine.Internal_SubsystemDescriptors
struct  Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234  : public RuntimeObject
{
public:

public:
};

struct Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> UnityEngine.Internal_SubsystemDescriptors::s_IntegratedSubsystemDescriptors
	List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * ___s_IntegratedSubsystemDescriptors_0;
	// System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> UnityEngine.Internal_SubsystemDescriptors::s_StandaloneSubsystemDescriptors
	List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * ___s_StandaloneSubsystemDescriptors_1;

public:
	inline static int32_t get_offset_of_s_IntegratedSubsystemDescriptors_0() { return static_cast<int32_t>(offsetof(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields, ___s_IntegratedSubsystemDescriptors_0)); }
	inline List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * get_s_IntegratedSubsystemDescriptors_0() const { return ___s_IntegratedSubsystemDescriptors_0; }
	inline List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 ** get_address_of_s_IntegratedSubsystemDescriptors_0() { return &___s_IntegratedSubsystemDescriptors_0; }
	inline void set_s_IntegratedSubsystemDescriptors_0(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * value)
	{
		___s_IntegratedSubsystemDescriptors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IntegratedSubsystemDescriptors_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandaloneSubsystemDescriptors_1() { return static_cast<int32_t>(offsetof(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields, ___s_StandaloneSubsystemDescriptors_1)); }
	inline List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * get_s_StandaloneSubsystemDescriptors_1() const { return ___s_StandaloneSubsystemDescriptors_1; }
	inline List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 ** get_address_of_s_StandaloneSubsystemDescriptors_1() { return &___s_StandaloneSubsystemDescriptors_1; }
	inline void set_s_StandaloneSubsystemDescriptors_1(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * value)
	{
		___s_StandaloneSubsystemDescriptors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandaloneSubsystemDescriptors_1), (void*)value);
	}
};


// UnityEngine.Internal_SubsystemInstances
struct  Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A  : public RuntimeObject
{
public:

public:
};

struct Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ISubsystem> UnityEngine.Internal_SubsystemInstances::s_IntegratedSubsystemInstances
	List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * ___s_IntegratedSubsystemInstances_0;
	// System.Collections.Generic.List`1<UnityEngine.ISubsystem> UnityEngine.Internal_SubsystemInstances::s_StandaloneSubsystemInstances
	List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * ___s_StandaloneSubsystemInstances_1;

public:
	inline static int32_t get_offset_of_s_IntegratedSubsystemInstances_0() { return static_cast<int32_t>(offsetof(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields, ___s_IntegratedSubsystemInstances_0)); }
	inline List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * get_s_IntegratedSubsystemInstances_0() const { return ___s_IntegratedSubsystemInstances_0; }
	inline List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 ** get_address_of_s_IntegratedSubsystemInstances_0() { return &___s_IntegratedSubsystemInstances_0; }
	inline void set_s_IntegratedSubsystemInstances_0(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * value)
	{
		___s_IntegratedSubsystemInstances_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IntegratedSubsystemInstances_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandaloneSubsystemInstances_1() { return static_cast<int32_t>(offsetof(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields, ___s_StandaloneSubsystemInstances_1)); }
	inline List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * get_s_StandaloneSubsystemInstances_1() const { return ___s_StandaloneSubsystemInstances_1; }
	inline List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 ** get_address_of_s_StandaloneSubsystemInstances_1() { return &___s_StandaloneSubsystemInstances_1; }
	inline void set_s_StandaloneSubsystemInstances_1(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * value)
	{
		___s_StandaloneSubsystemInstances_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandaloneSubsystemInstances_1), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.SubsystemManager
struct  SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58  : public RuntimeObject
{
public:

public:
};

struct SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_StaticFields
{
public:
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsStarted
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___reloadSubsytemsStarted_0;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsCompleted
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___reloadSubsytemsCompleted_1;

public:
	inline static int32_t get_offset_of_reloadSubsytemsStarted_0() { return static_cast<int32_t>(offsetof(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_StaticFields, ___reloadSubsytemsStarted_0)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_reloadSubsytemsStarted_0() const { return ___reloadSubsytemsStarted_0; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_reloadSubsytemsStarted_0() { return &___reloadSubsytemsStarted_0; }
	inline void set_reloadSubsytemsStarted_0(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___reloadSubsytemsStarted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reloadSubsytemsStarted_0), (void*)value);
	}

	inline static int32_t get_offset_of_reloadSubsytemsCompleted_1() { return static_cast<int32_t>(offsetof(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_StaticFields, ___reloadSubsytemsCompleted_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_reloadSubsytemsCompleted_1() const { return ___reloadSubsytemsCompleted_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_reloadSubsytemsCompleted_1() { return &___reloadSubsytemsCompleted_1; }
	inline void set_reloadSubsytemsCompleted_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___reloadSubsytemsCompleted_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reloadSubsytemsCompleted_1), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.ISubsystem>
struct  Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t132C9260C76027A8580C4B532786EB0F12261102, ___list_0)); }
	inline List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * get_list_0() const { return ___list_0; }
	inline List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t132C9260C76027A8580C4B532786EB0F12261102, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t132C9260C76027A8580C4B532786EB0F12261102, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t132C9260C76027A8580C4B532786EB0F12261102, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.ISubsystemDescriptor>
struct  Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A, ___list_0)); }
	inline List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * get_list_0() const { return ___list_0; }
	inline List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.ISubsystemDescriptorImpl>
struct  Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A, ___list_0)); }
	inline List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * get_list_0() const { return ___list_0; }
	inline List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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

// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m5CC48CCE85C48EE93BB5DAD0BC0D5FBC73611E3D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF201359DDE38A44A0DBC3042F7CD3701A6127AEB_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5C679DCAB114CB103C7CD04CD81B4EA61BD0F90C_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mDE99FFBCD61594561747E7F3812F7729E27034A6_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>::GetEnumerator()
inline Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A  List_1_GetEnumerator_mCD025E64DC79BF09A5CE562A4A84CEE45615D487 (List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A  (*) (List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 *, const RuntimeMethod*))List_1_GetEnumerator_m5CC48CCE85C48EE93BB5DAD0BC0D5FBC73611E3D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptor>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mE41404CE04D2EB600173EC4FD50C046CC477E68A_inline (Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A *, const RuntimeMethod*))Enumerator_get_Current_mF201359DDE38A44A0DBC3042F7CD3701A6127AEB_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_mABA9C70C5D798FAE04C6CE5DB5BD682685F9A160 (Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_mFC67BA862241866E4DA5DBEFA1CC626D62BA810A (Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>::Add(!0)
inline void List_1_Add_mE2034FA7711F829F94E3BDA7DEA0B30D4F00BF71 (List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m5C679DCAB114CB103C7CD04CD81B4EA61BD0F90C_gshared)(__this, ___item0, method);
}
// System.String UnityEngine.SubsystemDescriptor::get_id()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mFB99164DB43E3A8E9DD30C63A8DA72CFBDA1B550_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::ReportSingleSubsystemAnalytics(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_ReportSingleSubsystemAnalytics_m0C148FA346A745A8EEF4C3A10BC4A666575EEEE4 (String_t* ___id0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl>::Add(!0)
inline void List_1_Add_mCB360C521A89F468B979C5A68D1D0E8279396E75 (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m5C679DCAB114CB103C7CD04CD81B4EA61BD0F90C_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl>::GetEnumerator()
inline Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A  List_1_GetEnumerator_m66CFF3B42CC0D1054424CA077E8DB397702817CF (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A  (*) (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 *, const RuntimeMethod*))List_1_GetEnumerator_m5CC48CCE85C48EE93BB5DAD0BC0D5FBC73611E3D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptorImpl>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mFAC23B4412EFE76CFCFDECF09126C69B49F6753C_inline (Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A *, const RuntimeMethod*))Enumerator_get_Current_mF201359DDE38A44A0DBC3042F7CD3701A6127AEB_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptorImpl>::MoveNext()
inline bool Enumerator_MoveNext_mC62BE88892A86021EC05C63291BB500831D4CEA8 (Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystemDescriptorImpl>::Dispose()
inline void Enumerator_Dispose_m03E6AAFF2B793D3FDD535899BD56910FA2A32C87 (Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl>::Clear()
inline void List_1_Clear_m0C0B0645C534FB327F81FA98B68E4D8BC81DF33C (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl>::.ctor()
inline void List_1__ctor_m10DF42A0F70E7A1D237DDE264FE7B1B6EE489E4D (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor>::.ctor()
inline void List_1__ctor_mCD74DCA5067730766C16F8B2ED6EB3A464EC913D (List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_SetHandle_m86341E5F5F9232910DDEA01CF3316D7148F0035B (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * ___inst0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystem>::Add(!0)
inline void List_1_Add_mFC27276EEA6E54C9C165D1852C7A8E0AD8AE3E6C (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m5C679DCAB114CB103C7CD04CD81B4EA61BD0F90C_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ISubsystem>::GetEnumerator()
inline Enumerator_t132C9260C76027A8580C4B532786EB0F12261102  List_1_GetEnumerator_m73E261FA716CB16FA3DCDBA5E06FE1451E597C6A (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t132C9260C76027A8580C4B532786EB0F12261102  (*) (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *, const RuntimeMethod*))List_1_GetEnumerator_m5CC48CCE85C48EE93BB5DAD0BC0D5FBC73611E3D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystem>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mEF7C1CBEB16A80BEFD2A568073F6480842105730_inline (Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *, const RuntimeMethod*))Enumerator_get_Current_mF201359DDE38A44A0DBC3042F7CD3701A6127AEB_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m1107D721F1E253992686EDCAC577400975276F22 (Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ISubsystem>::Dispose()
inline void Enumerator_Dispose_m232BAAA9E5E833715D9A804A3FDC0F69AB30A025 (Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystem>::Clear()
inline void List_1_Clear_m7E46EDC3E8D632F026FBB434365DBD2655754870 (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ISubsystem>::get_Count()
inline int32_t List_1_get_Count_m0C122C3A8BF281BFAC8D50832F55A37F4205E288_inline (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.ISubsystem>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mA87A7BAE00494AAAE2DC4C68F773906FC8F9C2B3_inline (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDE99FFBCD61594561747E7F3812F7729E27034A6_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystem>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDC2630ED97B5A6C00A7C0DEB4DD9B57F43ECB6A2 (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ISubsystem>::.ctor()
inline void List_1__ctor_mA0C14C2F68D92C1FE6645A3363FB6752A781A180 (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_StaticConstructScriptingClassMap_m62C8E21DAD9E5D2F3EFA3D8E6222CEEE12180330 (const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshal_pinvoke(const IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026& unmarshaled, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshal_pinvoke_back(const IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke& marshaled, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026& unmarshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshal_pinvoke_cleanup(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshal_com(const IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026& unmarshaled, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com& marshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshal_com_back(const IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com& marshaled, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026& unmarshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'IntegratedSubsystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystem
IL2CPP_EXTERN_C void IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshal_com_cleanup(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_SetHandle_m86341E5F5F9232910DDEA01CF3316D7148F0035B (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * ___inst0, const RuntimeMethod* method)
{
	typedef void (*IntegratedSubsystem_SetHandle_m86341E5F5F9232910DDEA01CF3316D7148F0035B_ftn) (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *);
	static IntegratedSubsystem_SetHandle_m86341E5F5F9232910DDEA01CF3316D7148F0035B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (IntegratedSubsystem_SetHandle_m86341E5F5F9232910DDEA01CF3316D7148F0035B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)");
	_il2cpp_icall_func(__this, ___inst0);
}
// System.Void UnityEngine.IntegratedSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem__ctor_mEA84F3507D101D7BA6A1B2C156AFDEE6237A9AB5 (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshal_pinvoke(const IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA& unmarshaled, IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshal_pinvoke_back(const IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke& marshaled, IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshal_pinvoke_cleanup(IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshal_com(const IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA& unmarshaled, IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshal_com_back(const IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com& marshaled, IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.IntegratedSubsystemDescriptor
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshal_com_cleanup(IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor::UnityEngine.ISubsystemDescriptorImpl.set_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_UnityEngine_ISubsystemDescriptorImpl_set_ptr_mDD5A50EDF4582729AF5A7C3417E02494D41A1B35 (IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___value0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor__ctor_m070A4E0B7FE9C322E275AAAAEF7D4305CC5A1C08 (IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Internal_SubsystemDescriptors::Internal_AddDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SubsystemDescriptors_Internal_AddDescriptor_mDC4139EBD261FEEEB9B0A659AB97677F1F32C12A (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * ___descriptor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemDescriptors_Internal_AddDescriptor_mDC4139EBD261FEEEB9B0A659AB97677F1F32C12A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var);
		List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * L_0 = ((Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var))->get_s_StandaloneSubsystemDescriptors_1();
		NullCheck(L_0);
		Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A  L_1 = List_1_GetEnumerator_mCD025E64DC79BF09A5CE562A4A84CEE45615D487(L_0, /*hidden argument*/List_1_GetEnumerator_mCD025E64DC79BF09A5CE562A4A84CEE45615D487_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_000f:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_mE41404CE04D2EB600173EC4FD50C046CC477E68A_inline((Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mE41404CE04D2EB600173EC4FD50C046CC477E68A_RuntimeMethod_var);
			V_1 = L_2;
			RuntimeObject* L_3 = V_1;
			SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * L_4 = ___descriptor0;
			V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)L_4))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0024;
			}
		}

IL_0020:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x5B, FINALLY_0030);
		}

IL_0024:
		{
		}

IL_0025:
		{
			bool L_6 = Enumerator_MoveNext_mABA9C70C5D798FAE04C6CE5DB5BD682685F9A160((Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mABA9C70C5D798FAE04C6CE5DB5BD682685F9A160_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000f;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFC67BA862241866E4DA5DBEFA1CC626D62BA810A((Enumerator_tB5C216C416D49A440EB9D5DFA17B805A8A1B6E9A *)(&V_0), /*hidden argument*/Enumerator_Dispose_mFC67BA862241866E4DA5DBEFA1CC626D62BA810A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var);
		List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * L_7 = ((Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var))->get_s_StandaloneSubsystemDescriptors_1();
		SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * L_8 = ___descriptor0;
		NullCheck(L_7);
		List_1_Add_mE2034FA7711F829F94E3BDA7DEA0B30D4F00BF71(L_7, L_8, /*hidden argument*/List_1_Add_mE2034FA7711F829F94E3BDA7DEA0B30D4F00BF71_RuntimeMethod_var);
		SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * L_9 = ___descriptor0;
		NullCheck(L_9);
		String_t* L_10 = SubsystemDescriptor_get_id_mFB99164DB43E3A8E9DD30C63A8DA72CFBDA1B550_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		SubsystemManager_ReportSingleSubsystemAnalytics_m0C148FA346A745A8EEF4C3A10BC4A666575EEEE4(L_10, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_005b;
	}

IL_005b:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void UnityEngine.Internal_SubsystemDescriptors::Internal_InitializeManagedDescriptor(System.IntPtr,UnityEngine.ISubsystemDescriptorImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemDescriptors_Internal_InitializeManagedDescriptor_m6F2F39E103FF8E64209A1E552F6DE83410E41344 (intptr_t ___ptr0, RuntimeObject* ___desc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemDescriptors_Internal_InitializeManagedDescriptor_m6F2F39E103FF8E64209A1E552F6DE83410E41344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___desc1;
		intptr_t L_1 = ___ptr0;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(0 /* System.Void UnityEngine.ISubsystemDescriptorImpl::set_ptr(System.IntPtr) */, ISubsystemDescriptorImpl_tE72E28C34A9DDE87527315A223AAC7ECB4FFA72F_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var);
		List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * L_2 = ((Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemDescriptors_0();
		RuntimeObject* L_3 = ___desc1;
		NullCheck(L_2);
		List_1_Add_mCB360C521A89F468B979C5A68D1D0E8279396E75(L_2, L_3, /*hidden argument*/List_1_Add_mCB360C521A89F468B979C5A68D1D0E8279396E75_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Internal_SubsystemDescriptors::Internal_ClearManagedDescriptors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemDescriptors_Internal_ClearManagedDescriptors_m2947E77893C4527DC1DFFAE46FA920B7C1A1BFFF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemDescriptors_Internal_ClearManagedDescriptors_m2947E77893C4527DC1DFFAE46FA920B7C1A1BFFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var);
		List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * L_0 = ((Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemDescriptors_0();
		NullCheck(L_0);
		Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A  L_1 = List_1_GetEnumerator_m66CFF3B42CC0D1054424CA077E8DB397702817CF(L_0, /*hidden argument*/List_1_GetEnumerator_m66CFF3B42CC0D1054424CA077E8DB397702817CF_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_000f:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_mFAC23B4412EFE76CFCFDECF09126C69B49F6753C_inline((Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFAC23B4412EFE76CFCFDECF09126C69B49F6753C_RuntimeMethod_var);
			V_1 = L_2;
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			InterfaceActionInvoker1< intptr_t >::Invoke(0 /* System.Void UnityEngine.ISubsystemDescriptorImpl::set_ptr(System.IntPtr) */, ISubsystemDescriptorImpl_tE72E28C34A9DDE87527315A223AAC7ECB4FFA72F_il2cpp_TypeInfo_var, L_3, (intptr_t)(0));
		}

IL_0025:
		{
			bool L_4 = Enumerator_MoveNext_mC62BE88892A86021EC05C63291BB500831D4CEA8((Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC62BE88892A86021EC05C63291BB500831D4CEA8_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000f;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m03E6AAFF2B793D3FDD535899BD56910FA2A32C87((Enumerator_tD23A803E704225FB8CBCE8E7788AAF2DEECFAA3A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m03E6AAFF2B793D3FDD535899BD56910FA2A32C87_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var);
		List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * L_5 = ((Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemDescriptors_0();
		NullCheck(L_5);
		List_1_Clear_m0C0B0645C534FB327F81FA98B68E4D8BC81DF33C(L_5, /*hidden argument*/List_1_Clear_m0C0B0645C534FB327F81FA98B68E4D8BC81DF33C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Internal_SubsystemDescriptors::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemDescriptors__cctor_mA81DC94667310761A1A6064370E19E6D16384331 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemDescriptors__cctor_mA81DC94667310761A1A6064370E19E6D16384331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 * L_0 = (List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716 *)il2cpp_codegen_object_new(List_1_tF94B00A9CCF1AC14AC4045AF1DE8274D251EA716_il2cpp_TypeInfo_var);
		List_1__ctor_m10DF42A0F70E7A1D237DDE264FE7B1B6EE489E4D(L_0, /*hidden argument*/List_1__ctor_m10DF42A0F70E7A1D237DDE264FE7B1B6EE489E4D_RuntimeMethod_var);
		((Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var))->set_s_IntegratedSubsystemDescriptors_0(L_0);
		List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 * L_1 = (List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858 *)il2cpp_codegen_object_new(List_1_tE88DD120C435773284C1905EFAC0BAEC0579F858_il2cpp_TypeInfo_var);
		List_1__ctor_mCD74DCA5067730766C16F8B2ED6EB3A464EC913D(L_1, /*hidden argument*/List_1__ctor_mCD74DCA5067730766C16F8B2ED6EB3A464EC913D_RuntimeMethod_var);
		((Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var))->set_s_StandaloneSubsystemDescriptors_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Internal_SubsystemInstances::Internal_InitializeManagedInstance(System.IntPtr,UnityEngine.IntegratedSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances_Internal_InitializeManagedInstance_m210EC1AB05D6223E474ED5B93629A88C41AD5F74 (intptr_t ___ptr0, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * ___inst1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemInstances_Internal_InitializeManagedInstance_m210EC1AB05D6223E474ED5B93629A88C41AD5F74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = ___inst1;
		intptr_t L_1 = ___ptr0;
		NullCheck(L_0);
		L_0->set_m_Ptr_0((intptr_t)L_1);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_2 = ___inst1;
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_3 = ___inst1;
		NullCheck(L_2);
		IntegratedSubsystem_SetHandle_m86341E5F5F9232910DDEA01CF3316D7148F0035B(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_4 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_5 = ___inst1;
		NullCheck(L_4);
		List_1_Add_mFC27276EEA6E54C9C165D1852C7A8E0AD8AE3E6C(L_4, L_5, /*hidden argument*/List_1_Add_mFC27276EEA6E54C9C165D1852C7A8E0AD8AE3E6C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Internal_SubsystemInstances::Internal_ClearManagedInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances_Internal_ClearManagedInstances_mA3062D2B43F457428E705FEB44838A7CA692015C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemInstances_Internal_ClearManagedInstances_mA3062D2B43F457428E705FEB44838A7CA692015C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t132C9260C76027A8580C4B532786EB0F12261102  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_0 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		NullCheck(L_0);
		Enumerator_t132C9260C76027A8580C4B532786EB0F12261102  L_1 = List_1_GetEnumerator_m73E261FA716CB16FA3DCDBA5E06FE1451E597C6A(L_0, /*hidden argument*/List_1_GetEnumerator_m73E261FA716CB16FA3DCDBA5E06FE1451E597C6A_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_000f:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_mEF7C1CBEB16A80BEFD2A568073F6480842105730_inline((Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mEF7C1CBEB16A80BEFD2A568073F6480842105730_RuntimeMethod_var);
			V_1 = L_2;
			RuntimeObject* L_3 = V_1;
			NullCheck(((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)CastclassClass((RuntimeObject*)L_3, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var)));
			((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)CastclassClass((RuntimeObject*)L_3, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var))->set_m_Ptr_0((intptr_t)(0));
		}

IL_0029:
		{
			bool L_4 = Enumerator_MoveNext_m1107D721F1E253992686EDCAC577400975276F22((Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m1107D721F1E253992686EDCAC577400975276F22_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000f;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m232BAAA9E5E833715D9A804A3FDC0F69AB30A025((Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m232BAAA9E5E833715D9A804A3FDC0F69AB30A025_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_5 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		NullCheck(L_5);
		List_1_Clear_m7E46EDC3E8D632F026FBB434365DBD2655754870(L_5, /*hidden argument*/List_1_Clear_m7E46EDC3E8D632F026FBB434365DBD2655754870_RuntimeMethod_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_6 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_StandaloneSubsystemInstances_1();
		NullCheck(L_6);
		List_1_Clear_m7E46EDC3E8D632F026FBB434365DBD2655754870(L_6, /*hidden argument*/List_1_Clear_m7E46EDC3E8D632F026FBB434365DBD2655754870_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Internal_SubsystemInstances::Internal_RemoveInstanceByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances_Internal_RemoveInstanceByPtr_m59644CC0F66FFDAAA00E6C3B2BF9E41AE93C3DCD (intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemInstances_Internal_RemoveInstanceByPtr_m59644CC0F66FFDAAA00E6C3B2BF9E41AE93C3DCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_0 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m0C122C3A8BF281BFAC8D50832F55A37F4205E288_inline(L_0, /*hidden argument*/List_1_get_Count_m0C122C3A8BF281BFAC8D50832F55A37F4205E288_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_005d;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_2 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_4 = List_1_get_Item_mA87A7BAE00494AAAE2DC4C68F773906FC8F9C2B3_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mA87A7BAE00494AAAE2DC4C68F773906FC8F9C2B3_RuntimeMethod_var);
		NullCheck(((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)CastclassClass((RuntimeObject*)L_4, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var)));
		intptr_t L_5 = ((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)CastclassClass((RuntimeObject*)L_4, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var))->get_m_Ptr_0();
		intptr_t L_6 = ___ptr0;
		bool L_7 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_9 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_11 = List_1_get_Item_mA87A7BAE00494AAAE2DC4C68F773906FC8F9C2B3_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mA87A7BAE00494AAAE2DC4C68F773906FC8F9C2B3_RuntimeMethod_var);
		NullCheck(((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)CastclassClass((RuntimeObject*)L_11, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var)));
		((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)CastclassClass((RuntimeObject*)L_11, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var))->set_m_Ptr_0((intptr_t)(0));
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_12 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_mDC2630ED97B5A6C00A7C0DEB4DD9B57F43ECB6A2(L_12, L_13, /*hidden argument*/List_1_RemoveAt_mDC2630ED97B5A6C00A7C0DEB4DD9B57F43ECB6A2_RuntimeMethod_var);
	}

IL_0058:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_15 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// UnityEngine.IntegratedSubsystem UnityEngine.Internal_SubsystemInstances::Internal_GetInstanceByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * Internal_SubsystemInstances_Internal_GetInstanceByPtr_m2A25D2EFCD0D32F75D464EBF44499DD53B26EAC1 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemInstances_Internal_GetInstanceByPtr_m2A25D2EFCD0D32F75D464EBF44499DD53B26EAC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t132C9260C76027A8580C4B532786EB0F12261102  V_0;
	memset((&V_0), 0, sizeof(V_0));
	IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * V_1 = NULL;
	bool V_2 = false;
	IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_0 = ((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystemInstances_0();
		NullCheck(L_0);
		Enumerator_t132C9260C76027A8580C4B532786EB0F12261102  L_1 = List_1_GetEnumerator_m73E261FA716CB16FA3DCDBA5E06FE1451E597C6A(L_0, /*hidden argument*/List_1_GetEnumerator_m73E261FA716CB16FA3DCDBA5E06FE1451E597C6A_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_000f:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_mEF7C1CBEB16A80BEFD2A568073F6480842105730_inline((Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mEF7C1CBEB16A80BEFD2A568073F6480842105730_RuntimeMethod_var);
			V_1 = ((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)CastclassClass((RuntimeObject*)L_2, IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_il2cpp_TypeInfo_var));
			IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_3 = V_1;
			NullCheck(L_3);
			intptr_t L_4 = L_3->get_m_Ptr_0();
			intptr_t L_5 = ___ptr0;
			bool L_6 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_4, (intptr_t)L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0031;
			}
		}

IL_002d:
		{
			IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_8 = V_1;
			V_3 = L_8;
			IL2CPP_LEAVE(0x50, FINALLY_003d);
		}

IL_0031:
		{
		}

IL_0032:
		{
			bool L_9 = Enumerator_MoveNext_m1107D721F1E253992686EDCAC577400975276F22((Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m1107D721F1E253992686EDCAC577400975276F22_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000f;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m232BAAA9E5E833715D9A804A3FDC0F69AB30A025((Enumerator_t132C9260C76027A8580C4B532786EB0F12261102 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m232BAAA9E5E833715D9A804A3FDC0F69AB30A025_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		V_3 = (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)NULL;
		goto IL_0050;
	}

IL_0050:
	{
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.Internal_SubsystemInstances::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances__cctor_mE5273AC77F77BCAE925CF863DCD1CABE7AD9DC88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_SubsystemInstances__cctor_mE5273AC77F77BCAE925CF863DCD1CABE7AD9DC88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_0 = (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *)il2cpp_codegen_object_new(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9_il2cpp_TypeInfo_var);
		List_1__ctor_mA0C14C2F68D92C1FE6645A3363FB6752A781A180(L_0, /*hidden argument*/List_1__ctor_mA0C14C2F68D92C1FE6645A3363FB6752A781A180_RuntimeMethod_var);
		((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->set_s_IntegratedSubsystemInstances_0(L_0);
		List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 * L_1 = (List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9 *)il2cpp_codegen_object_new(List_1_t6DEA2730597655A3EBDD4294E5E05BE80BE681C9_il2cpp_TypeInfo_var);
		List_1__ctor_mA0C14C2F68D92C1FE6645A3363FB6752A781A180(L_1, /*hidden argument*/List_1__ctor_mA0C14C2F68D92C1FE6645A3363FB6752A781A180_RuntimeMethod_var);
		((Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_StaticFields*)il2cpp_codegen_static_fields_for(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var))->set_s_StandaloneSubsystemInstances_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.SubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mFB99164DB43E3A8E9DD30C63A8DA72CFBDA1B550 (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.SubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor__ctor_m64AE04BCDD75FAED960389A6402D6C4F65CDB0ED (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SubsystemManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager__cctor_m7ECF9BCE322C85C77E3C8A11E8B8644B149CE550 (const RuntimeMethod* method)
{
	{
		SubsystemManager_StaticConstructScriptingClassMap_m62C8E21DAD9E5D2F3EFA3D8E6222CEEE12180330(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::ReportSingleSubsystemAnalytics(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_ReportSingleSubsystemAnalytics_m0C148FA346A745A8EEF4C3A10BC4A666575EEEE4 (String_t* ___id0, const RuntimeMethod* method)
{
	typedef void (*SubsystemManager_ReportSingleSubsystemAnalytics_m0C148FA346A745A8EEF4C3A10BC4A666575EEEE4_ftn) (String_t*);
	static SubsystemManager_ReportSingleSubsystemAnalytics_m0C148FA346A745A8EEF4C3A10BC4A666575EEEE4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SubsystemManager_ReportSingleSubsystemAnalytics_m0C148FA346A745A8EEF4C3A10BC4A666575EEEE4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SubsystemManager::ReportSingleSubsystemAnalytics(System.String)");
	_il2cpp_icall_func(___id0);
}
// System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_StaticConstructScriptingClassMap_m62C8E21DAD9E5D2F3EFA3D8E6222CEEE12180330 (const RuntimeMethod* method)
{
	typedef void (*SubsystemManager_StaticConstructScriptingClassMap_m62C8E21DAD9E5D2F3EFA3D8E6222CEEE12180330_ftn) ();
	static SubsystemManager_StaticConstructScriptingClassMap_m62C8E21DAD9E5D2F3EFA3D8E6222CEEE12180330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SubsystemManager_StaticConstructScriptingClassMap_m62C8E21DAD9E5D2F3EFA3D8E6222CEEE12180330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SubsystemManager::Internal_ReloadSubsystemsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_Internal_ReloadSubsystemsStarted_m5803445C7288172232312883A02DB385EE4A1A33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemManager_Internal_ReloadSubsystemsStarted_m5803445C7288172232312883A02DB385EE4A1A33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var))->get_reloadSubsytemsStarted_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = ((SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var))->get_reloadSubsytemsStarted_0();
		NullCheck(L_2);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::Internal_ReloadSubsystemsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_Internal_ReloadSubsystemsCompleted_m87E3A1F499D364227A97A55619BC5E5E2333A63E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemManager_Internal_ReloadSubsystemsCompleted_m87E3A1F499D364227A97A55619BC5E5E2333A63E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var))->get_reloadSubsytemsCompleted_1();
		V_0 = (bool)((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = ((SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var))->get_reloadSubsytemsCompleted_1();
		NullCheck(L_2);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mFB99164DB43E3A8E9DD30C63A8DA72CFBDA1B550_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF201359DDE38A44A0DBC3042F7CD3701A6127AEB_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mDE99FFBCD61594561747E7F3812F7729E27034A6_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
