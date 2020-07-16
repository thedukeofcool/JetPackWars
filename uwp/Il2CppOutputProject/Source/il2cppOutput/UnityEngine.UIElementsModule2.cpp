#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_tF2CEED321F9B2919DD6F52A45AE95C1DEAED56AD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_tE075FE9A0846AEACBCBBD2B3E55010ED1E95F2F8;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct Stack_1_tB29DAB5805548783C00D3649849ED54D3F0DB44C;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90;
// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91;
// UnityEngine.UIElements.EventBase
struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D;
// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_t404CEA309DA7B5B5EB5536186E3F34645F0372B2;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E;
// UnityEngine.UIElements.MouseEventBase`1<System.Object>
struct MouseEventBase_1_tF3CF2E851581AF56F9B0E543822EBD848420B1E8;
// UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>
struct MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16;
// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2;
// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct ObjectPool_1_t6E53D6A8D161E731FE74DD8A488DC5A126336CA5;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.WheelEvent>
struct ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57;
// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6;
// UnityEngine.UIElements.WheelEvent
struct WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C;

IL2CPP_EXTERN_C RuntimeClass* FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1BB9CF96A929EED6CE079D909FD8B53B92A1C333;
IL2CPP_EXTERN_C String_t* _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3;
IL2CPP_EXTERN_C String_t* _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m91BBB6ED88B8E8F23A1E2E808B820FC9A9D243EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mEC6CE86D5DDD35F832D0DAF915724F225F8F82D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m917B39C6D5E862135E8CB222566A2AC689FCBB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1_GetPooled_mA26A7A573DE29DDE89CC74C356ACE019A3F8CAB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1_Init_m8FF1E6532E2798799A54EC75CD58EA9D690B767C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1__ctor_m4F9CED3DE86FE15777DFBBABCF8C455EA66D1B95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m2E3FE6ABD49E2BBB18503E8DE6FC7CB3775C1D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_mE0ECAA13E48A959FCDF43E8E516E82D50538B94C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m0E696C792FE43273B145B3054A9FADF7FC5E8CC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig__ctor_m20D5CEDCD194672A70F5CC1F1ECDF4AB9C8E3AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_mA905C23C93548F48A3952D5B3AF967A2216162D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_m84E6EFB1298C9DFE1C7BA097C982B8BB4BCE355E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BaselineFunction_BeginInvoke_m8DC7A0610F3A3A2BE79C577284E0B6878BDF0B9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9UnityEngine_UIElementsModule2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction_BeginInvoke_m3012DF9368A4B39EAC99F52E66CAB8C2D3139092_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGConfigFree_m7215B958E7BC48CA3E5AA2A2EA6E96B45B3FA31D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection__cctor_m6E6A3B0C8DF426637C80BA0EB68703F6B78B0740_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection__ctor_m555B15981C04776229466B1896CBE09ED4A8BD44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementListPool_Get_m4EFCBC136E4FEEBBCC9331C8887DFA542F9094B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementListPool_Release_m0E7105DF4B76B02DCBD8C797F8AF060FE1DC2649_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementListPool__cctor_m4B7281095D5F1E7DAC1C9D87D864D11F79501498_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualTreeUpdater_OnVersionChanged_mC9146D17EB89B63BBA489D6DB7C79C8DC956037C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualTreeUpdater_UpdateVisualTreePhase_m8DA9170DDE40DC13F1E38EA50F416C9AB1706DA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent_Init_m02F0A329F29B207070119B132F2FAD9921D65713_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent_LocalInit_m793C5A97367D6586B74E34F47B7FB50C1F2D1083_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent__ctor_m5F9D92FBAF5FA3A1AD369ED9D56F98FD6DD91003_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaConfig_Finalize_m7E9C3167B22E3D63990ACAC52B31DBE4A5317D86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaConfig__cctor_m8A28C090EAB912A0AB01076CF59A5254EBA279C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaConfig__ctor_m20D5CEDCD194672A70F5CC1F1ECDF4AB9C8E3AE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_BaselineInternal_mA905C23C93548F48A3952D5B3AF967A2216162D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_MeasureInternal_m84E6EFB1298C9DFE1C7BA097C982B8BB4BCE355E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct  List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926, ____items_1)); }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* get__items_1() const { return ____items_1; }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926_StaticFields, ____emptyArray_5)); }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* value)
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

// UnityEngine.UIElements.CallbackEventHandler
struct  CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * ___m_CallbackRegistry_0;

public:
	inline static int32_t get_offset_of_m_CallbackRegistry_0() { return static_cast<int32_t>(offsetof(CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB, ___m_CallbackRegistry_0)); }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * get_m_CallbackRegistry_0() const { return ___m_CallbackRegistry_0; }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D ** get_address_of_m_CallbackRegistry_0() { return &___m_CallbackRegistry_0; }
	inline void set_m_CallbackRegistry_0(EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * value)
	{
		___m_CallbackRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackRegistry_0), (void*)value);
	}
};


// UnityEngine.UIElements.FocusChangeDirection
struct  FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;

public:
	inline static int32_t get_offset_of_m_Value_3() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2, ___m_Value_3)); }
	inline int32_t get_m_Value_3() const { return ___m_Value_3; }
	inline int32_t* get_address_of_m_Value_3() { return &___m_Value_3; }
	inline void set_m_Value_3(int32_t value)
	{
		___m_Value_3 = value;
	}
};

struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields
{
public:
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3ClastValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CunspecifiedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CunspecifiedU3Ek__BackingField_0)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CunspecifiedU3Ek__BackingField_0() const { return ___U3CunspecifiedU3Ek__BackingField_0; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CunspecifiedU3Ek__BackingField_0() { return &___U3CunspecifiedU3Ek__BackingField_0; }
	inline void set_U3CunspecifiedU3Ek__BackingField_0(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CunspecifiedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunspecifiedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CnoneU3Ek__BackingField_1)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CnoneU3Ek__BackingField_1() const { return ___U3CnoneU3Ek__BackingField_1; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CnoneU3Ek__BackingField_1() { return &___U3CnoneU3Ek__BackingField_1; }
	inline void set_U3CnoneU3Ek__BackingField_1(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CnoneU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnoneU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3ClastValueU3Ek__BackingField_2)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3ClastValueU3Ek__BackingField_2() const { return ___U3ClastValueU3Ek__BackingField_2; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3ClastValueU3Ek__BackingField_2() { return &___U3ClastValueU3Ek__BackingField_2; }
	inline void set_U3ClastValueU3Ek__BackingField_2(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3ClastValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastValueU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct  ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UIElements.ObjectPool`1::m_Stack
	Stack_1_tB29DAB5805548783C00D3649849ED54D3F0DB44C * ___m_Stack_0;
	// System.Int32 UnityEngine.UIElements.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_1;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2, ___m_Stack_0)); }
	inline Stack_1_tB29DAB5805548783C00D3649849ED54D3F0DB44C * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tB29DAB5805548783C00D3649849ED54D3F0DB44C ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tB29DAB5805548783C00D3649849ED54D3F0DB44C * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxSize_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2, ___m_MaxSize_1)); }
	inline int32_t get_m_MaxSize_1() const { return ___m_MaxSize_1; }
	inline int32_t* get_address_of_m_MaxSize_1() { return &___m_MaxSize_1; }
	inline void set_m_MaxSize_1(int32_t value)
	{
		___m_MaxSize_1 = value;
	}
};


// UnityEngine.UIElements.VisualElementListPool
struct  VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA  : public RuntimeObject
{
public:

public:
};

struct VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields
{
public:
	// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>> UnityEngine.UIElements.VisualElementListPool::pool
	ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields, ___pool_0)); }
	inline ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * get_pool_0() const { return ___pool_0; }
	inline ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// UnityEngine.UIElements.VisualTreeUpdater
struct  VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * ___m_UpdaterArray_0;

public:
	inline static int32_t get_offset_of_m_UpdaterArray_0() { return static_cast<int32_t>(offsetof(VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00, ___m_UpdaterArray_0)); }
	inline UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * get_m_UpdaterArray_0() const { return ___m_UpdaterArray_0; }
	inline UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 ** get_address_of_m_UpdaterArray_0() { return &___m_UpdaterArray_0; }
	inline void set_m_UpdaterArray_0(UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * value)
	{
		___m_UpdaterArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdaterArray_0), (void*)value);
	}
};


// UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray
struct  UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* ___m_VisualTreeUpdaters_0;

public:
	inline static int32_t get_offset_of_m_VisualTreeUpdaters_0() { return static_cast<int32_t>(offsetof(UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6, ___m_VisualTreeUpdaters_0)); }
	inline IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* get_m_VisualTreeUpdaters_0() const { return ___m_VisualTreeUpdaters_0; }
	inline IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E** get_address_of_m_VisualTreeUpdaters_0() { return &___m_VisualTreeUpdaters_0; }
	inline void set_m_VisualTreeUpdaters_0(IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* value)
	{
		___m_VisualTreeUpdaters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualTreeUpdaters_0), (void*)value);
	}
};


// UnityEngine.Yoga.Native
struct  Native_tAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A  : public RuntimeObject
{
public:

public:
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UIElements.Focusable
struct  Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B  : public CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB
{
public:
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_2;

public:
	inline static int32_t get_offset_of_U3CfocusableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___U3CfocusableU3Ek__BackingField_1)); }
	inline bool get_U3CfocusableU3Ek__BackingField_1() const { return ___U3CfocusableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CfocusableU3Ek__BackingField_1() { return &___U3CfocusableU3Ek__BackingField_1; }
	inline void set_U3CfocusableU3Ek__BackingField_1(bool value)
	{
		___U3CfocusableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_isIMGUIContainer_2() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___isIMGUIContainer_2)); }
	inline bool get_isIMGUIContainer_2() const { return ___isIMGUIContainer_2; }
	inline bool* get_address_of_isIMGUIContainer_2() { return &___isIMGUIContainer_2; }
	inline void set_isIMGUIContainer_2(bool value)
	{
		___isIMGUIContainer_2 = value;
	}
};


// UnityEngine.UIElements.UIR.BMPAlloc
struct  BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::owned
	uint8_t ___owned_4;

public:
	inline static int32_t get_offset_of_page_1() { return static_cast<int32_t>(offsetof(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A, ___page_1)); }
	inline int32_t get_page_1() const { return ___page_1; }
	inline int32_t* get_address_of_page_1() { return &___page_1; }
	inline void set_page_1(int32_t value)
	{
		___page_1 = value;
	}

	inline static int32_t get_offset_of_pageLine_2() { return static_cast<int32_t>(offsetof(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A, ___pageLine_2)); }
	inline uint16_t get_pageLine_2() const { return ___pageLine_2; }
	inline uint16_t* get_address_of_pageLine_2() { return &___pageLine_2; }
	inline void set_pageLine_2(uint16_t value)
	{
		___pageLine_2 = value;
	}

	inline static int32_t get_offset_of_bitIndex_3() { return static_cast<int32_t>(offsetof(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A, ___bitIndex_3)); }
	inline uint8_t get_bitIndex_3() const { return ___bitIndex_3; }
	inline uint8_t* get_address_of_bitIndex_3() { return &___bitIndex_3; }
	inline void set_bitIndex_3(uint8_t value)
	{
		___bitIndex_3 = value;
	}

	inline static int32_t get_offset_of_owned_4() { return static_cast<int32_t>(offsetof(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A, ___owned_4)); }
	inline uint8_t get_owned_4() const { return ___owned_4; }
	inline uint8_t* get_address_of_owned_4() { return &___owned_4; }
	inline void set_owned_4(uint8_t value)
	{
		___owned_4 = value;
	}
};

struct BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A_StaticFields
{
public:
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A_StaticFields, ___Invalid_0)); }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  get_Invalid_0() const { return ___Invalid_0; }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A * get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  value)
	{
		___Invalid_0 = value;
	}
};


// UnityEngine.UIElements.VisualElement_Hierarchy
struct  Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement_Hierarchy::m_Owner
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F, ___m_Owner_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
};

// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct  VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564  : public FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2
{
public:

public:
};

struct VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields
{
public:
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Left
	VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * ___s_Left_4;
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Right
	VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * ___s_Right_5;

public:
	inline static int32_t get_offset_of_s_Left_4() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields, ___s_Left_4)); }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * get_s_Left_4() const { return ___s_Left_4; }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 ** get_address_of_s_Left_4() { return &___s_Left_4; }
	inline void set_s_Left_4(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * value)
	{
		___s_Left_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Left_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Right_5() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields, ___s_Right_5)); }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * get_s_Right_5() const { return ___s_Right_5; }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 ** get_address_of_s_Right_5() { return &___s_Right_5; }
	inline void set_s_Right_5(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * value)
	{
		___s_Right_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Right_5), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Yoga.YogaSize
struct  YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 
{
public:
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker_AutoScope
struct  AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker_AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Event
struct  Event_t187FF6A6B357447B83EC2064823EE0AEC5263210  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_Current_1)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct  EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_EventPropagation
struct  EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_LifeCycleStatus
struct  LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PickingMode
struct  PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529 
{
public:
	// System.Int32 UnityEngine.UIElements.PickingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PropagationPhase
struct  PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PseudoStates
struct  PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545 
{
public:
	// System.Int32 UnityEngine.UIElements.PseudoStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.RenderHints
struct  RenderHints_t874DCFA6619B336C475E505FDDF9B14BD182AD1B 
{
public:
	// System.Int32 UnityEngine.UIElements.RenderHints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderHints_t874DCFA6619B336C475E505FDDF9B14BD182AD1B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.Implementation.ClipMethod
struct  ClipMethod_t0AEB7572F37C4E8E1F3CF908D85AE3D805DE2A48 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.Implementation.ClipMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipMethod_t0AEB7572F37C4E8E1F3CF908D85AE3D805DE2A48, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.RenderDataDirtyTypes
struct  RenderDataDirtyTypes_t14225DC71CC1E80E78F1B808A1226E422F437CCB 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.RenderDataDirtyTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderDataDirtyTypes_t14225DC71CC1E80E78F1B808A1226E422F437CCB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VersionChangeType
struct  VersionChangeType_tE727D12B03EC4449C5E3E6FFD34C2F84A83A7DFC 
{
public:
	// System.Int32 UnityEngine.UIElements.VersionChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VersionChangeType_tE727D12B03EC4449C5E3E6FFD34C2F84A83A7DFC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualTreeUpdatePhase
struct  VisualTreeUpdatePhase_tC1C3E61E2F062047A695B106F02A6220E2DE6967 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualTreeUpdatePhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisualTreeUpdatePhase_tC1C3E61E2F062047A695B106F02A6220E2DE6967, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.WhiteSpace
struct  WhiteSpace_t42884C70C453FDBBCA8FEBE44DD9D94B789C54FF 
{
public:
	// System.Int32 UnityEngine.UIElements.WhiteSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WhiteSpace_t42884C70C453FDBBCA8FEBE44DD9D94B789C54FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Wrap
struct  Wrap_tB74B2EE6B52C0B5503A60A8B68B88E04ECEF879C 
{
public:
	// System.Int32 UnityEngine.UIElements.Wrap::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Wrap_tB74B2EE6B52C0B5503A60A8B68B88E04ECEF879C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaConfig
struct  YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaConfig::_ygConfig
	intptr_t ____ygConfig_1;

public:
	inline static int32_t get_offset_of__ygConfig_1() { return static_cast<int32_t>(offsetof(YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60, ____ygConfig_1)); }
	inline intptr_t get__ygConfig_1() const { return ____ygConfig_1; }
	inline intptr_t* get_address_of__ygConfig_1() { return &____ygConfig_1; }
	inline void set__ygConfig_1(intptr_t value)
	{
		____ygConfig_1 = value;
	}
};

struct YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_StaticFields
{
public:
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaConfig::Default
	YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_StaticFields, ___Default_0)); }
	inline YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * get_Default_0() const { return ___Default_0; }
	inline YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// UnityEngine.Yoga.YogaEdge
struct  YogaEdge_tF346AB19AB5E5CA8DE139AE2F3A92000C02520FC 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaEdge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaEdge_tF346AB19AB5E5CA8DE139AE2F3A92000C02520FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaMeasureMode
struct  YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaMeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaNode
struct  YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * ____measureFunction_1;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * ____baselineFunction_2;

public:
	inline static int32_t get_offset_of__ygNode_0() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____ygNode_0)); }
	inline intptr_t get__ygNode_0() const { return ____ygNode_0; }
	inline intptr_t* get_address_of__ygNode_0() { return &____ygNode_0; }
	inline void set__ygNode_0(intptr_t value)
	{
		____ygNode_0 = value;
	}

	inline static int32_t get_offset_of__measureFunction_1() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____measureFunction_1)); }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * get__measureFunction_1() const { return ____measureFunction_1; }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB ** get_address_of__measureFunction_1() { return &____measureFunction_1; }
	inline void set__measureFunction_1(MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * value)
	{
		____measureFunction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____measureFunction_1), (void*)value);
	}

	inline static int32_t get_offset_of__baselineFunction_2() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____baselineFunction_2)); }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * get__baselineFunction_2() const { return ____baselineFunction_2; }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF ** get_address_of__baselineFunction_2() { return &____baselineFunction_2; }
	inline void set__baselineFunction_2(BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * value)
	{
		____baselineFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baselineFunction_2), (void*)value);
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.UIElements.EventBase
struct  EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase_EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * ___m_Path_6;
	// UnityEngine.UIElements.EventBase_LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_tF2CEED321F9B2919DD6F52A45AE95C1DEAED56AD * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Path_6)); }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_tF2CEED321F9B2919DD6F52A45AE95C1DEAED56AD * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_tF2CEED321F9B2919DD6F52A45AE95C1DEAED56AD ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_tF2CEED321F9B2919DD6F52A45AE95C1DEAED56AD * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_ImguiEvent_13)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
	}
};


// UnityEngine.UIElements.UIR.RenderChainVEData
struct  RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___firstCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___lastCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___firstClosingCommand_12;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___lastClosingCommand_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isStencilClipped
	bool ___isStencilClipped_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesAtlas
	bool ___usesAtlas_17;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_18;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_19;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * ___data_20;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * ___closingData_21;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___verticesSpace_22;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_23;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_24;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___transformID_25;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___clipRectID_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___opacityID_27;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_28;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prevText_29;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___nextText_30;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_tE075FE9A0846AEACBCBBD2B3E55010ED1E95F2F8 * ___textEntries_31;

public:
	inline static int32_t get_offset_of_prev_0() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___prev_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_prev_0() const { return ___prev_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_prev_0() { return &___prev_0; }
	inline void set_prev_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___prev_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___next_1)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_next_1() const { return ___next_1; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}

	inline static int32_t get_offset_of_groupTransformAncestor_2() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___groupTransformAncestor_2)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_groupTransformAncestor_2() const { return ___groupTransformAncestor_2; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_groupTransformAncestor_2() { return &___groupTransformAncestor_2; }
	inline void set_groupTransformAncestor_2(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___groupTransformAncestor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupTransformAncestor_2), (void*)value);
	}

	inline static int32_t get_offset_of_boneTransformAncestor_3() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___boneTransformAncestor_3)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_boneTransformAncestor_3() const { return ___boneTransformAncestor_3; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_boneTransformAncestor_3() { return &___boneTransformAncestor_3; }
	inline void set_boneTransformAncestor_3(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___boneTransformAncestor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneTransformAncestor_3), (void*)value);
	}

	inline static int32_t get_offset_of_prevDirty_4() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___prevDirty_4)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_prevDirty_4() const { return ___prevDirty_4; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_prevDirty_4() { return &___prevDirty_4; }
	inline void set_prevDirty_4(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___prevDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevDirty_4), (void*)value);
	}

	inline static int32_t get_offset_of_nextDirty_5() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___nextDirty_5)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_nextDirty_5() const { return ___nextDirty_5; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_nextDirty_5() { return &___nextDirty_5; }
	inline void set_nextDirty_5(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___nextDirty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextDirty_5), (void*)value);
	}

	inline static int32_t get_offset_of_hierarchyDepth_6() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___hierarchyDepth_6)); }
	inline int32_t get_hierarchyDepth_6() const { return ___hierarchyDepth_6; }
	inline int32_t* get_address_of_hierarchyDepth_6() { return &___hierarchyDepth_6; }
	inline void set_hierarchyDepth_6(int32_t value)
	{
		___hierarchyDepth_6 = value;
	}

	inline static int32_t get_offset_of_dirtiedValues_7() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___dirtiedValues_7)); }
	inline int32_t get_dirtiedValues_7() const { return ___dirtiedValues_7; }
	inline int32_t* get_address_of_dirtiedValues_7() { return &___dirtiedValues_7; }
	inline void set_dirtiedValues_7(int32_t value)
	{
		___dirtiedValues_7 = value;
	}

	inline static int32_t get_offset_of_dirtyID_8() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___dirtyID_8)); }
	inline uint32_t get_dirtyID_8() const { return ___dirtyID_8; }
	inline uint32_t* get_address_of_dirtyID_8() { return &___dirtyID_8; }
	inline void set_dirtyID_8(uint32_t value)
	{
		___dirtyID_8 = value;
	}

	inline static int32_t get_offset_of_clipMethod_9() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___clipMethod_9)); }
	inline int32_t get_clipMethod_9() const { return ___clipMethod_9; }
	inline int32_t* get_address_of_clipMethod_9() { return &___clipMethod_9; }
	inline void set_clipMethod_9(int32_t value)
	{
		___clipMethod_9 = value;
	}

	inline static int32_t get_offset_of_firstCommand_10() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___firstCommand_10)); }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * get_firstCommand_10() const { return ___firstCommand_10; }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 ** get_address_of_firstCommand_10() { return &___firstCommand_10; }
	inline void set_firstCommand_10(RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * value)
	{
		___firstCommand_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstCommand_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastCommand_11() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___lastCommand_11)); }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * get_lastCommand_11() const { return ___lastCommand_11; }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 ** get_address_of_lastCommand_11() { return &___lastCommand_11; }
	inline void set_lastCommand_11(RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * value)
	{
		___lastCommand_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastCommand_11), (void*)value);
	}

	inline static int32_t get_offset_of_firstClosingCommand_12() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___firstClosingCommand_12)); }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * get_firstClosingCommand_12() const { return ___firstClosingCommand_12; }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 ** get_address_of_firstClosingCommand_12() { return &___firstClosingCommand_12; }
	inline void set_firstClosingCommand_12(RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * value)
	{
		___firstClosingCommand_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstClosingCommand_12), (void*)value);
	}

	inline static int32_t get_offset_of_lastClosingCommand_13() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___lastClosingCommand_13)); }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * get_lastClosingCommand_13() const { return ___lastClosingCommand_13; }
	inline RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 ** get_address_of_lastClosingCommand_13() { return &___lastClosingCommand_13; }
	inline void set_lastClosingCommand_13(RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * value)
	{
		___lastClosingCommand_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastClosingCommand_13), (void*)value);
	}

	inline static int32_t get_offset_of_isInChain_14() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___isInChain_14)); }
	inline bool get_isInChain_14() const { return ___isInChain_14; }
	inline bool* get_address_of_isInChain_14() { return &___isInChain_14; }
	inline void set_isInChain_14(bool value)
	{
		___isInChain_14 = value;
	}

	inline static int32_t get_offset_of_isStencilClipped_15() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___isStencilClipped_15)); }
	inline bool get_isStencilClipped_15() const { return ___isStencilClipped_15; }
	inline bool* get_address_of_isStencilClipped_15() { return &___isStencilClipped_15; }
	inline void set_isStencilClipped_15(bool value)
	{
		___isStencilClipped_15 = value;
	}

	inline static int32_t get_offset_of_isHierarchyHidden_16() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___isHierarchyHidden_16)); }
	inline bool get_isHierarchyHidden_16() const { return ___isHierarchyHidden_16; }
	inline bool* get_address_of_isHierarchyHidden_16() { return &___isHierarchyHidden_16; }
	inline void set_isHierarchyHidden_16(bool value)
	{
		___isHierarchyHidden_16 = value;
	}

	inline static int32_t get_offset_of_usesAtlas_17() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___usesAtlas_17)); }
	inline bool get_usesAtlas_17() const { return ___usesAtlas_17; }
	inline bool* get_address_of_usesAtlas_17() { return &___usesAtlas_17; }
	inline void set_usesAtlas_17(bool value)
	{
		___usesAtlas_17 = value;
	}

	inline static int32_t get_offset_of_disableNudging_18() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___disableNudging_18)); }
	inline bool get_disableNudging_18() const { return ___disableNudging_18; }
	inline bool* get_address_of_disableNudging_18() { return &___disableNudging_18; }
	inline void set_disableNudging_18(bool value)
	{
		___disableNudging_18 = value;
	}

	inline static int32_t get_offset_of_usesLegacyText_19() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___usesLegacyText_19)); }
	inline bool get_usesLegacyText_19() const { return ___usesLegacyText_19; }
	inline bool* get_address_of_usesLegacyText_19() { return &___usesLegacyText_19; }
	inline void set_usesLegacyText_19(bool value)
	{
		___usesLegacyText_19 = value;
	}

	inline static int32_t get_offset_of_data_20() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___data_20)); }
	inline MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * get_data_20() const { return ___data_20; }
	inline MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D ** get_address_of_data_20() { return &___data_20; }
	inline void set_data_20(MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * value)
	{
		___data_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_20), (void*)value);
	}

	inline static int32_t get_offset_of_closingData_21() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___closingData_21)); }
	inline MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * get_closingData_21() const { return ___closingData_21; }
	inline MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D ** get_address_of_closingData_21() { return &___closingData_21; }
	inline void set_closingData_21(MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * value)
	{
		___closingData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closingData_21), (void*)value);
	}

	inline static int32_t get_offset_of_verticesSpace_22() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___verticesSpace_22)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_verticesSpace_22() const { return ___verticesSpace_22; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_verticesSpace_22() { return &___verticesSpace_22; }
	inline void set_verticesSpace_22(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___verticesSpace_22 = value;
	}

	inline static int32_t get_offset_of_displacementUVStart_23() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___displacementUVStart_23)); }
	inline int32_t get_displacementUVStart_23() const { return ___displacementUVStart_23; }
	inline int32_t* get_address_of_displacementUVStart_23() { return &___displacementUVStart_23; }
	inline void set_displacementUVStart_23(int32_t value)
	{
		___displacementUVStart_23 = value;
	}

	inline static int32_t get_offset_of_displacementUVEnd_24() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___displacementUVEnd_24)); }
	inline int32_t get_displacementUVEnd_24() const { return ___displacementUVEnd_24; }
	inline int32_t* get_address_of_displacementUVEnd_24() { return &___displacementUVEnd_24; }
	inline void set_displacementUVEnd_24(int32_t value)
	{
		___displacementUVEnd_24 = value;
	}

	inline static int32_t get_offset_of_transformID_25() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___transformID_25)); }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  get_transformID_25() const { return ___transformID_25; }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A * get_address_of_transformID_25() { return &___transformID_25; }
	inline void set_transformID_25(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  value)
	{
		___transformID_25 = value;
	}

	inline static int32_t get_offset_of_clipRectID_26() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___clipRectID_26)); }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  get_clipRectID_26() const { return ___clipRectID_26; }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A * get_address_of_clipRectID_26() { return &___clipRectID_26; }
	inline void set_clipRectID_26(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  value)
	{
		___clipRectID_26 = value;
	}

	inline static int32_t get_offset_of_opacityID_27() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___opacityID_27)); }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  get_opacityID_27() const { return ___opacityID_27; }
	inline BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A * get_address_of_opacityID_27() { return &___opacityID_27; }
	inline void set_opacityID_27(BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  value)
	{
		___opacityID_27 = value;
	}

	inline static int32_t get_offset_of_compositeOpacity_28() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___compositeOpacity_28)); }
	inline float get_compositeOpacity_28() const { return ___compositeOpacity_28; }
	inline float* get_address_of_compositeOpacity_28() { return &___compositeOpacity_28; }
	inline void set_compositeOpacity_28(float value)
	{
		___compositeOpacity_28 = value;
	}

	inline static int32_t get_offset_of_prevText_29() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___prevText_29)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_prevText_29() const { return ___prevText_29; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_prevText_29() { return &___prevText_29; }
	inline void set_prevText_29(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___prevText_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevText_29), (void*)value);
	}

	inline static int32_t get_offset_of_nextText_30() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___nextText_30)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_nextText_30() const { return ___nextText_30; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_nextText_30() { return &___nextText_30; }
	inline void set_nextText_30(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___nextText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextText_30), (void*)value);
	}

	inline static int32_t get_offset_of_textEntries_31() { return static_cast<int32_t>(offsetof(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69, ___textEntries_31)); }
	inline List_1_tE075FE9A0846AEACBCBBD2B3E55010ED1E95F2F8 * get_textEntries_31() const { return ___textEntries_31; }
	inline List_1_tE075FE9A0846AEACBCBBD2B3E55010ED1E95F2F8 ** get_address_of_textEntries_31() { return &___textEntries_31; }
	inline void set_textEntries_31(List_1_tE075FE9A0846AEACBCBBD2B3E55010ED1E95F2F8 * value)
	{
		___textEntries_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textEntries_31), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prev_0;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___next_1;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___groupTransformAncestor_2;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___boneTransformAncestor_3;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prevDirty_4;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	int32_t ___clipMethod_9;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___firstCommand_10;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___lastCommand_11;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___firstClosingCommand_12;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___lastClosingCommand_13;
	int32_t ___isInChain_14;
	int32_t ___isStencilClipped_15;
	int32_t ___isHierarchyHidden_16;
	int32_t ___usesAtlas_17;
	int32_t ___disableNudging_18;
	int32_t ___usesLegacyText_19;
	MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * ___data_20;
	MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * ___closingData_21;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___verticesSpace_22;
	int32_t ___displacementUVStart_23;
	int32_t ___displacementUVEnd_24;
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___transformID_25;
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___clipRectID_26;
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___opacityID_27;
	float ___compositeOpacity_28;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prevText_29;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___nextText_30;
	List_1_tE075FE9A0846AEACBCBBD2B3E55010ED1E95F2F8 * ___textEntries_31;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prev_0;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___next_1;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___groupTransformAncestor_2;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___boneTransformAncestor_3;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prevDirty_4;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	int32_t ___clipMethod_9;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___firstCommand_10;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___lastCommand_11;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___firstClosingCommand_12;
	RenderChainCommand_tAD94FEF8D98C5B2AD86CA26C5B44443000CE02E9 * ___lastClosingCommand_13;
	int32_t ___isInChain_14;
	int32_t ___isStencilClipped_15;
	int32_t ___isHierarchyHidden_16;
	int32_t ___usesAtlas_17;
	int32_t ___disableNudging_18;
	int32_t ___usesLegacyText_19;
	MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * ___data_20;
	MeshHandle_t2DE8AB95911A8FB2E9B37BAABD037474C2D58B2D * ___closingData_21;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___verticesSpace_22;
	int32_t ___displacementUVStart_23;
	int32_t ___displacementUVEnd_24;
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___transformID_25;
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___clipRectID_26;
	BMPAlloc_tD2C7A34BE1362220D71778B961944A29DCF8892A  ___opacityID_27;
	float ___compositeOpacity_28;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___prevText_29;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___nextText_30;
	List_1_tE075FE9A0846AEACBCBBD2B3E55010ED1E95F2F8 * ___textEntries_31;
};

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.WheelEvent>
struct  EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B  : public EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElement
struct  VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57  : public Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B
{
public:
	// System.Boolean UnityEngine.UIElements.VisualElement::<isCompositeRoot>k__BackingField
	bool ___U3CisCompositeRootU3Ek__BackingField_3;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_7;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69  ___renderChainData_8;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_9;
	// UnityEngine.Quaternion UnityEngine.UIElements.VisualElement::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_10;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_11;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isLayoutManual>k__BackingField
	bool ___U3CisLayoutManualU3Ek__BackingField_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_Layout_13;
	// System.Boolean UnityEngine.UIElements.VisualElement::isBoundingBoxDirty
	bool ___isBoundingBoxDirty_14;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_BoundingBox_15;
	// System.Boolean UnityEngine.UIElements.VisualElement::isWorldBoundingBoxDirty
	bool ___isWorldBoundingBoxDirty_16;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_WorldBoundingBox_17;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformDirty>k__BackingField
	bool ___U3CisWorldTransformDirtyU3Ek__BackingField_18;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformInverseDirty>k__BackingField
	bool ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_19;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformCache_20;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformInverseCache_21;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldClipDirty>k__BackingField
	bool ___U3CisWorldClipDirtyU3Ek__BackingField_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_WorldClip_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_WorldClipMinusGroup_24;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_26;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_27;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___U3CyogaNodeU3Ek__BackingField_28;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * ___m_Style_29;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_30;
	// UnityEngine.UIElements.VisualElement_Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___U3ChierarchyU3Ek__BackingField_31;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_PhysicalParent_32;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_LogicalParent_33;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * ___m_Children_35;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * ___U3CelementPanelU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CisCompositeRootU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisCompositeRootU3Ek__BackingField_3)); }
	inline bool get_U3CisCompositeRootU3Ek__BackingField_3() const { return ___U3CisCompositeRootU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisCompositeRootU3Ek__BackingField_3() { return &___U3CisCompositeRootU3Ek__BackingField_3; }
	inline void set_U3CisCompositeRootU3Ek__BackingField_3(bool value)
	{
		___U3CisCompositeRootU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_RenderHints_7() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_RenderHints_7)); }
	inline int32_t get_m_RenderHints_7() const { return ___m_RenderHints_7; }
	inline int32_t* get_address_of_m_RenderHints_7() { return &___m_RenderHints_7; }
	inline void set_m_RenderHints_7(int32_t value)
	{
		___m_RenderHints_7 = value;
	}

	inline static int32_t get_offset_of_renderChainData_8() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___renderChainData_8)); }
	inline RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69  get_renderChainData_8() const { return ___renderChainData_8; }
	inline RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69 * get_address_of_renderChainData_8() { return &___renderChainData_8; }
	inline void set_renderChainData_8(RenderChainVEData_t1778E7561123070E5DDFE97814D6D20C5E505E69  value)
	{
		___renderChainData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___prev_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___next_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___groupTransformAncestor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___boneTransformAncestor_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___prevDirty_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___nextDirty_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___firstCommand_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___lastCommand_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___firstClosingCommand_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___lastClosingCommand_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___data_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___closingData_21), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___prevText_29), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___nextText_30), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_8))->___textEntries_31), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Position_9() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Position_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_9() const { return ___m_Position_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_9() { return &___m_Position_9; }
	inline void set_m_Position_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_9 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_10() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Rotation_10)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_10() const { return ___m_Rotation_10; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_10() { return &___m_Rotation_10; }
	inline void set_m_Rotation_10(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_10 = value;
	}

	inline static int32_t get_offset_of_m_Scale_11() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Scale_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_11() const { return ___m_Scale_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_11() { return &___m_Scale_11; }
	inline void set_m_Scale_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_11 = value;
	}

	inline static int32_t get_offset_of_U3CisLayoutManualU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisLayoutManualU3Ek__BackingField_12)); }
	inline bool get_U3CisLayoutManualU3Ek__BackingField_12() const { return ___U3CisLayoutManualU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisLayoutManualU3Ek__BackingField_12() { return &___U3CisLayoutManualU3Ek__BackingField_12; }
	inline void set_U3CisLayoutManualU3Ek__BackingField_12(bool value)
	{
		___U3CisLayoutManualU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_m_Layout_13() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Layout_13)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_Layout_13() const { return ___m_Layout_13; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_Layout_13() { return &___m_Layout_13; }
	inline void set_m_Layout_13(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_Layout_13 = value;
	}

	inline static int32_t get_offset_of_isBoundingBoxDirty_14() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isBoundingBoxDirty_14)); }
	inline bool get_isBoundingBoxDirty_14() const { return ___isBoundingBoxDirty_14; }
	inline bool* get_address_of_isBoundingBoxDirty_14() { return &___isBoundingBoxDirty_14; }
	inline void set_isBoundingBoxDirty_14(bool value)
	{
		___isBoundingBoxDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_BoundingBox_15() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_BoundingBox_15)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_BoundingBox_15() const { return ___m_BoundingBox_15; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_BoundingBox_15() { return &___m_BoundingBox_15; }
	inline void set_m_BoundingBox_15(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_BoundingBox_15 = value;
	}

	inline static int32_t get_offset_of_isWorldBoundingBoxDirty_16() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isWorldBoundingBoxDirty_16)); }
	inline bool get_isWorldBoundingBoxDirty_16() const { return ___isWorldBoundingBoxDirty_16; }
	inline bool* get_address_of_isWorldBoundingBoxDirty_16() { return &___isWorldBoundingBoxDirty_16; }
	inline void set_isWorldBoundingBoxDirty_16(bool value)
	{
		___isWorldBoundingBoxDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_WorldBoundingBox_17() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldBoundingBox_17)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_WorldBoundingBox_17() const { return ___m_WorldBoundingBox_17; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_WorldBoundingBox_17() { return &___m_WorldBoundingBox_17; }
	inline void set_m_WorldBoundingBox_17(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_WorldBoundingBox_17 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformDirtyU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformDirtyU3Ek__BackingField_18)); }
	inline bool get_U3CisWorldTransformDirtyU3Ek__BackingField_18() const { return ___U3CisWorldTransformDirtyU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CisWorldTransformDirtyU3Ek__BackingField_18() { return &___U3CisWorldTransformDirtyU3Ek__BackingField_18; }
	inline void set_U3CisWorldTransformDirtyU3Ek__BackingField_18(bool value)
	{
		___U3CisWorldTransformDirtyU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_19)); }
	inline bool get_U3CisWorldTransformInverseDirtyU3Ek__BackingField_19() const { return ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_19() { return &___U3CisWorldTransformInverseDirtyU3Ek__BackingField_19; }
	inline void set_U3CisWorldTransformInverseDirtyU3Ek__BackingField_19(bool value)
	{
		___U3CisWorldTransformInverseDirtyU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformCache_20() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformCache_20)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformCache_20() const { return ___m_WorldTransformCache_20; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformCache_20() { return &___m_WorldTransformCache_20; }
	inline void set_m_WorldTransformCache_20(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformCache_20 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformInverseCache_21() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformInverseCache_21)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformInverseCache_21() const { return ___m_WorldTransformInverseCache_21; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformInverseCache_21() { return &___m_WorldTransformInverseCache_21; }
	inline void set_m_WorldTransformInverseCache_21(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformInverseCache_21 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldClipDirtyU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldClipDirtyU3Ek__BackingField_22)); }
	inline bool get_U3CisWorldClipDirtyU3Ek__BackingField_22() const { return ___U3CisWorldClipDirtyU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CisWorldClipDirtyU3Ek__BackingField_22() { return &___U3CisWorldClipDirtyU3Ek__BackingField_22; }
	inline void set_U3CisWorldClipDirtyU3Ek__BackingField_22(bool value)
	{
		___U3CisWorldClipDirtyU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_m_WorldClip_23() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldClip_23)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_WorldClip_23() const { return ___m_WorldClip_23; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_WorldClip_23() { return &___m_WorldClip_23; }
	inline void set_m_WorldClip_23(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_WorldClip_23 = value;
	}

	inline static int32_t get_offset_of_m_WorldClipMinusGroup_24() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldClipMinusGroup_24)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_WorldClipMinusGroup_24() const { return ___m_WorldClipMinusGroup_24; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_WorldClipMinusGroup_24() { return &___m_WorldClipMinusGroup_24; }
	inline void set_m_WorldClipMinusGroup_24(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_WorldClipMinusGroup_24 = value;
	}

	inline static int32_t get_offset_of_m_PseudoStates_26() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PseudoStates_26)); }
	inline int32_t get_m_PseudoStates_26() const { return ___m_PseudoStates_26; }
	inline int32_t* get_address_of_m_PseudoStates_26() { return &___m_PseudoStates_26; }
	inline void set_m_PseudoStates_26(int32_t value)
	{
		___m_PseudoStates_26 = value;
	}

	inline static int32_t get_offset_of_U3CpickingModeU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CpickingModeU3Ek__BackingField_27)); }
	inline int32_t get_U3CpickingModeU3Ek__BackingField_27() const { return ___U3CpickingModeU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CpickingModeU3Ek__BackingField_27() { return &___U3CpickingModeU3Ek__BackingField_27; }
	inline void set_U3CpickingModeU3Ek__BackingField_27(int32_t value)
	{
		___U3CpickingModeU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CyogaNodeU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CyogaNodeU3Ek__BackingField_28)); }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * get_U3CyogaNodeU3Ek__BackingField_28() const { return ___U3CyogaNodeU3Ek__BackingField_28; }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C ** get_address_of_U3CyogaNodeU3Ek__BackingField_28() { return &___U3CyogaNodeU3Ek__BackingField_28; }
	inline void set_U3CyogaNodeU3Ek__BackingField_28(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * value)
	{
		___U3CyogaNodeU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyogaNodeU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_29() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Style_29)); }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * get_m_Style_29() const { return ___m_Style_29; }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 ** get_address_of_m_Style_29() { return &___m_Style_29; }
	inline void set_m_Style_29(ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * value)
	{
		___m_Style_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_29), (void*)value);
	}

	inline static int32_t get_offset_of_imguiContainerDescendantCount_30() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___imguiContainerDescendantCount_30)); }
	inline int32_t get_imguiContainerDescendantCount_30() const { return ___imguiContainerDescendantCount_30; }
	inline int32_t* get_address_of_imguiContainerDescendantCount_30() { return &___imguiContainerDescendantCount_30; }
	inline void set_imguiContainerDescendantCount_30(int32_t value)
	{
		___imguiContainerDescendantCount_30 = value;
	}

	inline static int32_t get_offset_of_U3ChierarchyU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3ChierarchyU3Ek__BackingField_31)); }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  get_U3ChierarchyU3Ek__BackingField_31() const { return ___U3ChierarchyU3Ek__BackingField_31; }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * get_address_of_U3ChierarchyU3Ek__BackingField_31() { return &___U3ChierarchyU3Ek__BackingField_31; }
	inline void set_U3ChierarchyU3Ek__BackingField_31(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  value)
	{
		___U3ChierarchyU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ChierarchyU3Ek__BackingField_31))->___m_Owner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PhysicalParent_32() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PhysicalParent_32)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_PhysicalParent_32() const { return ___m_PhysicalParent_32; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_PhysicalParent_32() { return &___m_PhysicalParent_32; }
	inline void set_m_PhysicalParent_32(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_PhysicalParent_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhysicalParent_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogicalParent_33() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_LogicalParent_33)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_LogicalParent_33() const { return ___m_LogicalParent_33; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_LogicalParent_33() { return &___m_LogicalParent_33; }
	inline void set_m_LogicalParent_33(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_LogicalParent_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogicalParent_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_35() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Children_35)); }
	inline List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * get_m_Children_35() const { return ___m_Children_35; }
	inline List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 ** get_address_of_m_Children_35() { return &___m_Children_35; }
	inline void set_m_Children_35(List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * value)
	{
		___m_Children_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelementPanelU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CelementPanelU3Ek__BackingField_36)); }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * get_U3CelementPanelU3Ek__BackingField_36() const { return ___U3CelementPanelU3Ek__BackingField_36; }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 ** get_address_of_U3CelementPanelU3Ek__BackingField_36() { return &___U3CelementPanelU3Ek__BackingField_36; }
	inline void set_U3CelementPanelU3Ek__BackingField_36(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * value)
	{
		___U3CelementPanelU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementPanelU3Ek__BackingField_36), (void*)value);
	}
};

struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___s_EmptyClassList_4;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___userDataPropertyKey_5;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_6;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___s_InfiniteRect_25;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * ___s_EmptyList_34;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___s_InternalStyleSheetPath_37;

public:
	inline static int32_t get_offset_of_s_EmptyClassList_4() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyClassList_4)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_s_EmptyClassList_4() const { return ___s_EmptyClassList_4; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_s_EmptyClassList_4() { return &___s_EmptyClassList_4; }
	inline void set_s_EmptyClassList_4(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___s_EmptyClassList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyClassList_4), (void*)value);
	}

	inline static int32_t get_offset_of_userDataPropertyKey_5() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___userDataPropertyKey_5)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_userDataPropertyKey_5() const { return ___userDataPropertyKey_5; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_userDataPropertyKey_5() { return &___userDataPropertyKey_5; }
	inline void set_userDataPropertyKey_5(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___userDataPropertyKey_5 = value;
	}

	inline static int32_t get_offset_of_disabledUssClassName_6() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___disabledUssClassName_6)); }
	inline String_t* get_disabledUssClassName_6() const { return ___disabledUssClassName_6; }
	inline String_t** get_address_of_disabledUssClassName_6() { return &___disabledUssClassName_6; }
	inline void set_disabledUssClassName_6(String_t* value)
	{
		___disabledUssClassName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledUssClassName_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_InfiniteRect_25() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_InfiniteRect_25)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_s_InfiniteRect_25() const { return ___s_InfiniteRect_25; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_s_InfiniteRect_25() { return &___s_InfiniteRect_25; }
	inline void set_s_InfiniteRect_25(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___s_InfiniteRect_25 = value;
	}

	inline static int32_t get_offset_of_s_EmptyList_34() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyList_34)); }
	inline List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * get_s_EmptyList_34() const { return ___s_EmptyList_34; }
	inline List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 ** get_address_of_s_EmptyList_34() { return &___s_EmptyList_34; }
	inline void set_s_EmptyList_34(List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * value)
	{
		___s_EmptyList_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyList_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalStyleSheetPath_37() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_InternalStyleSheetPath_37)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_s_InternalStyleSheetPath_37() const { return ___s_InternalStyleSheetPath_37; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_s_InternalStyleSheetPath_37() { return &___s_InternalStyleSheetPath_37; }
	inline void set_s_InternalStyleSheetPath_37(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___s_InternalStyleSheetPath_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalStyleSheetPath_37), (void*)value);
	}
};


// UnityEngine.Yoga.BaselineFunction
struct  BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Yoga.MeasureFunction
struct  MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>
struct  MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16  : public EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmousePositionU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<localMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3ClocalMousePositionU3Ek__BackingField_20;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mouseDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmouseDeltaU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_22;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26;
	// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField
	RuntimeObject* ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CmousePositionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CmousePositionU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmousePositionU3Ek__BackingField_19() const { return ___U3CmousePositionU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmousePositionU3Ek__BackingField_19() { return &___U3CmousePositionU3Ek__BackingField_19; }
	inline void set_U3CmousePositionU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmousePositionU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClocalMousePositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3ClocalMousePositionU3Ek__BackingField_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3ClocalMousePositionU3Ek__BackingField_20() const { return ___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3ClocalMousePositionU3Ek__BackingField_20() { return &___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline void set_U3ClocalMousePositionU3Ek__BackingField_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3ClocalMousePositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CmouseDeltaU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CmouseDeltaU3Ek__BackingField_21)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmouseDeltaU3Ek__BackingField_21() const { return ___U3CmouseDeltaU3Ek__BackingField_21; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmouseDeltaU3Ek__BackingField_21() { return &___U3CmouseDeltaU3Ek__BackingField_21; }
	inline void set_U3CmouseDeltaU3Ek__BackingField_21(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmouseDeltaU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CclickCountU3Ek__BackingField_22)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_22() const { return ___U3CclickCountU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_22() { return &___U3CclickCountU3Ek__BackingField_22; }
	inline void set_U3CclickCountU3Ek__BackingField_22(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CpressedButtonsU3Ek__BackingField_24)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_24() const { return ___U3CpressedButtonsU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_24() { return &___U3CpressedButtonsU3Ek__BackingField_24; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_24(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27), (void*)value);
	}
};


// UnityEngine.UIElements.WheelEvent
struct  WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0  : public MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16
{
public:
	// UnityEngine.Vector3 UnityEngine.UIElements.WheelEvent::<delta>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CdeltaU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0, ___U3CdeltaU3Ek__BackingField_28)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CdeltaU3Ek__BackingField_28() const { return ___U3CdeltaU3Ek__BackingField_28; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CdeltaU3Ek__BackingField_28() { return &___U3CdeltaU3Ek__BackingField_28; }
	inline void set_U3CdeltaU3Ek__BackingField_28(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CdeltaU3Ek__BackingField_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// T UnityEngine.UIElements.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m8E7144E6F666EECA6B364CBBF737E9D33592267A_gshared (ObjectPool_1_t6E53D6A8D161E731FE74DD8A488DC5A126336CA5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mB976106DA11B4155CBC654A4FEAF355280834D8B_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m5E67DE1CEC89ADB8A82937E2D0CB48A78F962FA3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m6B91704E6EB227E90DE1035E7D619FFEAC936F82_gshared (ObjectPool_1_t6E53D6A8D161E731FE74DD8A488DC5A126336CA5 * __this, RuntimeObject * ___element0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mF6604E5A37C92383D2156CC2E167EEFF588E13A2_gshared (ObjectPool_1_t6E53D6A8D161E731FE74DD8A488DC5A126336CA5 * __this, int32_t ___maxSize0, const RuntimeMethod* method);
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m32B8C0ABE15CBC1B14A1AF12843C6E595985DB62_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_m847A195AD59073702028D018841F2549D0AB9F16_gshared (MouseEventBase_1_tF3CF2E851581AF56F9B0E543822EBD848420B1E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_m9EFD3CBB86329D9F1FBD4E1643979ABCE0610403_gshared (MouseEventBase_1_tF3CF2E851581AF56F9B0E543822EBD848420B1E8 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.UIElements.FocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusChangeDirection__ctor_mA3E043EE1BF9B942B8EB70F7A2399A13AE96AB6E (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::get_lastValue()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline (const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.FocusChangeDirection::op_Implicit(UnityEngine.UIElements.FocusChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FocusChangeDirection_op_Implicit_mBE43992496A7A2874699332568253DA6F8406EB8 (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___fcd0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__ctor_m555B15981C04776229466B1896CBE09ED4A8BD44 (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * __this, int32_t ___value0, const RuntimeMethod* method);
// T UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::Get()
inline List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * ObjectPool_1_Get_m2E3FE6ABD49E2BBB18503E8DE6FC7CB3775C1D45 (ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * (*) (ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 *, const RuntimeMethod*))ObjectPool_1_Get_m8E7144E6F666EECA6B364CBBF737E9D33592267A_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Capacity()
inline int32_t List_1_get_Capacity_mEC6CE86D5DDD35F832D0DAF915724F225F8F82D4 (List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 *, const RuntimeMethod*))List_1_get_Capacity_mB976106DA11B4155CBC654A4FEAF355280834D8B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m917B39C6D5E862135E8CB222566A2AC689FCBB5C (List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m5E67DE1CEC89ADB8A82937E2D0CB48A78F962FA3_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Clear()
inline void List_1_Clear_m91BBB6ED88B8E8F23A1E2E808B820FC9A9D243EB (List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::Release(T)
inline void ObjectPool_1_Release_mE0ECAA13E48A959FCDF43E8E516E82D50538B94C (ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * __this, List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * ___element0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 *, List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 *, const RuntimeMethod*))ObjectPool_1_Release_m6B91704E6EB227E90DE1035E7D619FFEAC936F82_gshared)(__this, ___element0, method);
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::.ctor(System.Int32)
inline void ObjectPool_1__ctor_m0E696C792FE43273B145B3054A9FADF7FC5E8CC5 (ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * __this, int32_t ___maxSize0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 *, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_mF6604E5A37C92383D2156CC2E167EEFF588E13A2_gshared)(__this, ___maxSize0, method);
}
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___phase0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m8220DCF08A3CA07B96CDABD76E2BA73D50BADEE2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m99FE5380E4D0CD34E2EBF54A407F440F573CCB13 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::GetPooled(UnityEngine.Event)
inline WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * MouseEventBase_1_GetPooled_mA26A7A573DE29DDE89CC74C356ACE019A3F8CAB5 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	return ((  WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * (*) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *, const RuntimeMethod*))MouseEventBase_1_GetPooled_m32B8C0ABE15CBC1B14A1AF12843C6E595985DB62_gshared)(___systemEvent0, method);
}
// System.Void UnityEngine.UIElements.EventBase::set_imguiEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_mE0A85A2D91025076516B028FE141A6A577E14A85 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F_inline (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.WheelEvent::set_delta(UnityEngine.Vector3)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m9C901CD1FB49754BB80402DEDE9CBA5C06F239C2_inline (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::Init()
inline void MouseEventBase_1_Init_m8FF1E6532E2798799A54EC75CD58EA9D690B767C (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 * __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 *, const RuntimeMethod*))MouseEventBase_1_Init_m847A195AD59073702028D018841F2549D0AB9F16_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.WheelEvent::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_LocalInit_m793C5A97367D6586B74E34F47B7FB50C1F2D1083 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::.ctor()
inline void MouseEventBase_1__ctor_m4F9CED3DE86FE15777DFBBABCF8C455EA66D1B95 (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 * __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 *, const RuntimeMethod*))MouseEventBase_1__ctor_m9EFD3CBB86329D9F1FBD4E1643979ABCE0610403_gshared)(__this, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m85038DB5BD01917DC54533B0D3BFA45EF3518E4D (intptr_t ___config0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_m84E6EFB1298C9DFE1C7BA097C982B8BB4BCE355E (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mA905C23C93548F48A3952D5B3AF967A2216162D0 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_mD7807A430BD2BFA5D5B1537A433C3549D6336F63 (YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m7215B958E7BC48CA3E5AA2A2EA6E96B45B3FA31D (intptr_t ___config0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_mA28B5267AADBC6C4334679D93A55F5AF648D35DC (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_mF33CDEB1EA2EF64EF51882D0F68137FD9E254F4C (const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_m20D5CEDCD194672A70F5CC1F1ECDF4AB9C8E3AE9 (YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * __this, intptr_t ___ygConfig0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_mEC63D468887DD44DD1B983D8A00440AC4485B9C7 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m74BA0445AEED063D675025D400B394B33E746DF0 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m11E72B749FC65999E80C7086569758FA5C25E397 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_m1F8A3A7AA973FD3468C0416E5D306ED3BF5C20C9 (intptr_t ___node0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mC141222B95F0C0576AF303CE2A928A8DF554CCBA (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m6CFD1FE361E4BF6276A21C08B86219CA1E6B01B1 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_mE1E8DD466E502C4F4E2CEF88607EF05C21D87228_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m942DE88F96B66EBCFBD11D3232F3C9AD57F0E4F6 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mFF1932FCD212A3D5CBBFF8AAC27CA1159DA3FB02_inline (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mEA9BD51C04F9807CAC440A6729FD93A9BDB3B362 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_0 = ((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->get_s_Left_4();
		return L_0;
	}
}
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_0 = ((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->get_s_Right_5();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__ctor_m555B15981C04776229466B1896CBE09ED4A8BD44 (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection__ctor_m555B15981C04776229466B1896CBE09ED4A8BD44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection__ctor_mA3E043EE1BF9B942B8EB70F7A2399A13AE96AB6E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__cctor_m6E6A3B0C8DF426637C80BA0EB68703F6B78B0740 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection__cctor_m6E6A3B0C8DF426637C80BA0EB68703F6B78B0740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline(/*hidden argument*/NULL);
		int32_t L_1 = FocusChangeDirection_op_Implicit_mBE43992496A7A2874699332568253DA6F8406EB8(L_0, /*hidden argument*/NULL);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_2 = (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 *)il2cpp_codegen_object_new(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection__ctor_m555B15981C04776229466B1896CBE09ED4A8BD44(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->set_s_Left_4(L_2);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_3 = FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline(/*hidden argument*/NULL);
		int32_t L_4 = FocusChangeDirection_op_Implicit_mBE43992496A7A2874699332568253DA6F8406EB8(L_3, /*hidden argument*/NULL);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_5 = (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 *)il2cpp_codegen_object_new(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection__ctor_m555B15981C04776229466B1896CBE09ED4A8BD44(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), /*hidden argument*/NULL);
		((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->set_s_Right_5(L_5);
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
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElementListPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * VisualElementListPool_Get_m4EFCBC136E4FEEBBCC9331C8887DFA542F9094B7 (int32_t ___initialCapacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementListPool_Get_m4EFCBC136E4FEEBBCC9331C8887DFA542F9094B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * V_0 = NULL;
	bool V_1 = false;
	List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var);
		ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * L_0 = ((VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var))->get_pool_0();
		NullCheck(L_0);
		List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * L_1 = ObjectPool_1_Get_m2E3FE6ABD49E2BBB18503E8DE6FC7CB3775C1D45(L_0, /*hidden argument*/ObjectPool_1_Get_m2E3FE6ABD49E2BBB18503E8DE6FC7CB3775C1D45_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___initialCapacity0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Capacity_mEC6CE86D5DDD35F832D0DAF915724F225F8F82D4(L_3, /*hidden argument*/List_1_get_Capacity_mEC6CE86D5DDD35F832D0DAF915724F225F8F82D4_RuntimeMethod_var);
		int32_t L_5 = ___initialCapacity0;
		G_B3_0 = ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * L_7 = V_0;
		int32_t L_8 = ___initialCapacity0;
		NullCheck(L_7);
		List_1_set_Capacity_m917B39C6D5E862135E8CB222566A2AC689FCBB5C(L_7, L_8, /*hidden argument*/List_1_set_Capacity_m917B39C6D5E862135E8CB222566A2AC689FCBB5C_RuntimeMethod_var);
	}

IL_002a:
	{
		List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * L_9 = V_0;
		V_2 = L_9;
		goto IL_002e;
	}

IL_002e:
	{
		List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualElementListPool::Release(System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_m0E7105DF4B76B02DCBD8C797F8AF060FE1DC2649 (List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * ___elements0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementListPool_Release_m0E7105DF4B76B02DCBD8C797F8AF060FE1DC2649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * L_0 = ___elements0;
		NullCheck(L_0);
		List_1_Clear_m91BBB6ED88B8E8F23A1E2E808B820FC9A9D243EB(L_0, /*hidden argument*/List_1_Clear_m91BBB6ED88B8E8F23A1E2E808B820FC9A9D243EB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var);
		ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * L_1 = ((VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var))->get_pool_0();
		List_1_tA779A294E9FF7400C1B0515C7E6B2DBAB410E926 * L_2 = ___elements0;
		NullCheck(L_1);
		ObjectPool_1_Release_mE0ECAA13E48A959FCDF43E8E516E82D50538B94C(L_1, L_2, /*hidden argument*/ObjectPool_1_Release_mE0ECAA13E48A959FCDF43E8E516E82D50538B94C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementListPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool__cctor_m4B7281095D5F1E7DAC1C9D87D864D11F79501498 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementListPool__cctor_m4B7281095D5F1E7DAC1C9D87D864D11F79501498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 * L_0 = (ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2 *)il2cpp_codegen_object_new(ObjectPool_1_t2A4239576D1EE3545DAED9608DD0C80EB3770DB2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m0E696C792FE43273B145B3054A9FADF7FC5E8CC5(L_0, ((int32_t)20), /*hidden argument*/ObjectPool_1__ctor_m0E696C792FE43273B145B3054A9FADF7FC5E8CC5_RuntimeMethod_var);
		((VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var))->set_pool_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.VisualTreeUpdater::UpdateVisualTreePhase(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_UpdateVisualTreePhase_m8DA9170DDE40DC13F1E38EA50F416C9AB1706DA9 (VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualTreeUpdater_UpdateVisualTreePhase_m8DA9170DDE40DC13F1E38EA50F416C9AB1706DA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2 = UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4 = InterfaceFuncInvoker0< ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  >::Invoke(0 /* Unity.Profiling.ProfilerMarker UnityEngine.UIElements.IVisualTreeUpdater::get_profilerMarker() */, IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_5 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::Update() */, IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var, L_6);
		IL2CPP_LEAVE(0x37, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m8220DCF08A3CA07B96CDABD76E2BA73D50BADEE2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_OnVersionChanged_mC9146D17EB89B63BBA489D6DB7C79C8DC956037C (VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00 * __this, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ve0, int32_t ___versionChangeType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualTreeUpdater_OnVersionChanged_mC9146D17EB89B63BBA489D6DB7C79C8DC956037C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = UpdaterArray_get_Item_m99FE5380E4D0CD34E2EBF54A407F440F573CCB13(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = ___ve0;
		int32_t L_5 = ___versionChangeType1;
		NullCheck(L_3);
		InterfaceActionInvoker2< VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *, int32_t >::Invoke(2 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType) */, IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater::GetUpdater(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeUpdater_GetUpdater_m98C6235BDEFB5BE0FA225C63C5D226244A430A53 (VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2 = UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
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
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* L_0 = __this->get_m_VisualTreeUpdaters_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m99FE5380E4D0CD34E2EBF54A407F440F573CCB13 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* L_0 = __this->get_m_VisualTreeUpdaters_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.UIElements.WheelEvent::set_delta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m9C901CD1FB49754BB80402DEDE9CBA5C06F239C2 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CdeltaU3Ek__BackingField_28(L_0);
		return;
	}
}
// UnityEngine.UIElements.WheelEvent UnityEngine.UIElements.WheelEvent::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * V_0 = NULL;
	bool V_1 = false;
	WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * V_2 = NULL;
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = ___systemEvent0;
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_1 = MouseEventBase_1_GetPooled_mA26A7A573DE29DDE89CC74C356ACE019A3F8CAB5(L_0, /*hidden argument*/MouseEventBase_1_GetPooled_mA26A7A573DE29DDE89CC74C356ACE019A3F8CAB5_RuntimeMethod_var);
		V_0 = L_1;
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_2 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		NullCheck(L_2);
		EventBase_set_imguiEvent_mE0A85A2D91025076516B028FE141A6A577E14A85(L_2, L_3, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_4 = ___systemEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_6 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_7 = ___systemEvent0;
		NullCheck(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		WheelEvent_set_delta_m9C901CD1FB49754BB80402DEDE9CBA5C06F239C2_inline(L_6, L_9, /*hidden argument*/NULL);
	}

IL_002c:
	{
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_10 = V_0;
		V_2 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_11 = V_2;
		return L_11;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_Init_m02F0A329F29B207070119B132F2FAD9921D65713 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent_Init_m02F0A329F29B207070119B132F2FAD9921D65713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MouseEventBase_1_Init_m8FF1E6532E2798799A54EC75CD58EA9D690B767C(__this, /*hidden argument*/MouseEventBase_1_Init_m8FF1E6532E2798799A54EC75CD58EA9D690B767C_RuntimeMethod_var);
		WheelEvent_LocalInit_m793C5A97367D6586B74E34F47B7FB50C1F2D1083(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_LocalInit_m793C5A97367D6586B74E34F47B7FB50C1F2D1083 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent_LocalInit_m793C5A97367D6586B74E34F47B7FB50C1F2D1083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		WheelEvent_set_delta_m9C901CD1FB49754BB80402DEDE9CBA5C06F239C2_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent__ctor_m5F9D92FBAF5FA3A1AD369ED9D56F98FD6DD91003 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent__ctor_m5F9D92FBAF5FA3A1AD369ED9D56F98FD6DD91003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MouseEventBase_1__ctor_m4F9CED3DE86FE15777DFBBABCF8C455EA66D1B95(__this, /*hidden argument*/MouseEventBase_1__ctor_m4F9CED3DE86FE15777DFBBABCF8C455EA66D1B95_RuntimeMethod_var);
		WheelEvent_LocalInit_m793C5A97367D6586B74E34F47B7FB50C1F2D1083(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m85B5913B239BC1753276DD076A7304A6F895FD73 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m6CFD1FE361E4BF6276A21C08B86219CA1E6B01B1 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	float result = 0.0f;
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
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___height2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___width1) - 1), ___height2, targetMethod);
				}
				else
				{
					typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___height2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef float (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___node0) - 1), ___width1, ___height2, targetMethod);
				}
				else
				{
					typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.BaselineFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaselineFunction_BeginInvoke_m8DC7A0610F3A3A2BE79C577284E0B6878BDF0B9C (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_BeginInvoke_m8DC7A0610F3A3A2BE79C577284E0B6878BDF0B9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single UnityEngine.Yoga.BaselineFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_EndInvoke_m38E7D3A3ABD3A875D4230ABA388542360BEC5FC5 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_mCF481EADF8492DBF33E76B2943380E7128133DE6 (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mC141222B95F0C0576AF303CE2A928A8DF554CCBA (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 5)
			{
				// open
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
			else
			{
				// closed
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (RuntimeObject*, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___width1) - 1), ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (RuntimeObject*, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___node0) - 1), ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.MeasureFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeasureFunction_BeginInvoke_m3012DF9368A4B39EAC99F52E66CAB8C2D3139092 (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_BeginInvoke_m3012DF9368A4B39EAC99F52E66CAB8C2D3139092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___widthMode2);
	__d_args[3] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___heightMode4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_EndInvoke_mAA6F921BD32B121D99AFB536B0C6FAECE1387EF5 (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_mF33CDEB1EA2EF64EF51882D0F68137FD9E254F4C (const RuntimeMethod* method)
{
	typedef intptr_t (*Native_YGConfigGetDefault_mF33CDEB1EA2EF64EF51882D0F68137FD9E254F4C_ftn) ();
	static Native_YGConfigGetDefault_mF33CDEB1EA2EF64EF51882D0F68137FD9E254F4C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetDefault_mF33CDEB1EA2EF64EF51882D0F68137FD9E254F4C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetDefault()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m7215B958E7BC48CA3E5AA2A2EA6E96B45B3FA31D (intptr_t ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGConfigFree_m7215B958E7BC48CA3E5AA2A2EA6E96B45B3FA31D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___config0;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		intptr_t L_3 = ___config0;
		Native_YGConfigFreeInternal_m85038DB5BD01917DC54533B0D3BFA45EF3518E4D((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m85038DB5BD01917DC54533B0D3BFA45EF3518E4D (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef void (*Native_YGConfigFreeInternal_m85038DB5BD01917DC54533B0D3BFA45EF3518E4D_ftn) (intptr_t);
	static Native_YGConfigFreeInternal_m85038DB5BD01917DC54533B0D3BFA45EF3518E4D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigFreeInternal_m85038DB5BD01917DC54533B0D3BFA45EF3518E4D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___config0);
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_mA28B5267AADBC6C4334679D93A55F5AF648D35DC (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method)
{
	typedef void (*Native_YGConfigSetPointScaleFactor_mA28B5267AADBC6C4334679D93A55F5AF648D35DC_ftn) (intptr_t, float);
	static Native_YGConfigSetPointScaleFactor_mA28B5267AADBC6C4334679D93A55F5AF648D35DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetPointScaleFactor_mA28B5267AADBC6C4334679D93A55F5AF648D35DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___config0, ___pixelsInPoint1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mE26E713E9C2652B543921FFE35A373651DA09D2F (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress5;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_7 = YogaNode_MeasureInternal_m84E6EFB1298C9DFE1C7BA097C982B8BB4BCE355E(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		*(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m502954F86DEAD2BCE1F373F2049DC4228B979A20 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress3;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		float L_5 = YogaNode_BaselineInternal_mA905C23C93548F48A3952D5B3AF967A2216162D0(L_2, L_3, L_4, /*hidden argument*/NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_mEC63D468887DD44DD1B983D8A00440AC4485B9C7 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetLeft_mEC63D468887DD44DD1B983D8A00440AC4485B9C7_ftn) (intptr_t);
	static Native_YGNodeLayoutGetLeft_mEC63D468887DD44DD1B983D8A00440AC4485B9C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetLeft_mEC63D468887DD44DD1B983D8A00440AC4485B9C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m74BA0445AEED063D675025D400B394B33E746DF0 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetTop_m74BA0445AEED063D675025D400B394B33E746DF0_ftn) (intptr_t);
	static Native_YGNodeLayoutGetTop_m74BA0445AEED063D675025D400B394B33E746DF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetTop_m74BA0445AEED063D675025D400B394B33E746DF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m11E72B749FC65999E80C7086569758FA5C25E397 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetWidth_m11E72B749FC65999E80C7086569758FA5C25E397_ftn) (intptr_t);
	static Native_YGNodeLayoutGetWidth_m11E72B749FC65999E80C7086569758FA5C25E397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetWidth_m11E72B749FC65999E80C7086569758FA5C25E397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_m1F8A3A7AA973FD3468C0416E5D306ED3BF5C20C9 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetHeight_m1F8A3A7AA973FD3468C0416E5D306ED3BF5C20C9_ftn) (intptr_t);
	static Native_YGNodeLayoutGetHeight_m1F8A3A7AA973FD3468C0416E5D306ED3BF5C20C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetHeight_m1F8A3A7AA973FD3468C0416E5D306ED3BF5C20C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float retVal = _il2cpp_icall_func(___node0, ___edge1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_m20D5CEDCD194672A70F5CC1F1ECDF4AB9C8E3AE9 (YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * __this, intptr_t ___ygConfig0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaConfig__ctor_m20D5CEDCD194672A70F5CC1F1ECDF4AB9C8E3AE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___ygConfig0;
		__this->set__ygConfig_1((intptr_t)L_0);
		intptr_t L_1 = __this->get__ygConfig_1();
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteral1BB9CF96A929EED6CE079D909FD8B53B92A1C333, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, YogaConfig__ctor_m20D5CEDCD194672A70F5CC1F1ECDF4AB9C8E3AE9_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_Finalize_m7E9C3167B22E3D63990ACAC52B31DBE4A5317D86 (YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaConfig_Finalize_m7E9C3167B22E3D63990ACAC52B31DBE4A5317D86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = YogaConfig_get_Handle_mD7807A430BD2BFA5D5B1537A433C3549D6336F63(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_il2cpp_TypeInfo_var);
			YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * L_1 = ((YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_il2cpp_TypeInfo_var))->get_Default_0();
			NullCheck(L_1);
			intptr_t L_2 = YogaConfig_get_Handle_mD7807A430BD2BFA5D5B1537A433C3549D6336F63(L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_001b:
		{
			intptr_t L_5 = YogaConfig_get_Handle_mD7807A430BD2BFA5D5B1537A433C3549D6336F63(__this, /*hidden argument*/NULL);
			Native_YGConfigFree_m7215B958E7BC48CA3E5AA2A2EA6E96B45B3FA31D((intptr_t)L_5, /*hidden argument*/NULL);
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_mD7807A430BD2BFA5D5B1537A433C3549D6336F63 (YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		V_0 = (intptr_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return (intptr_t)L_1;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_PointScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_PointScaleFactor_m0541B9A2F6EEC24CAA87A102B4161E90EF199871 (YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		float L_1 = ___value0;
		Native_YGConfigSetPointScaleFactor_mA28B5267AADBC6C4334679D93A55F5AF648D35DC((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__cctor_m8A28C090EAB912A0AB01076CF59A5254EBA279C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaConfig__cctor_m8A28C090EAB912A0AB01076CF59A5254EBA279C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = Native_YGConfigGetDefault_mF33CDEB1EA2EF64EF51882D0F68137FD9E254F4C(/*hidden argument*/NULL);
		YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 * L_1 = (YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60 *)il2cpp_codegen_object_new(YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_il2cpp_TypeInfo_var);
		YogaConfig__ctor_m20D5CEDCD194672A70F5CC1F1ECDF4AB9C8E3AE9(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		((YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tD192D4E4AB3FF8C4ED001FBD4396D9EB12E15A60_il2cpp_TypeInfo_var))->set_Default_0(L_1);
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
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutX_m5DE696D68955FBA9907F42A30D14C4A0C7C6D628 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetLeft_mEC63D468887DD44DD1B983D8A00440AC4485B9C7((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutY_m397630F8AA2D5384618CF03F6CB172F0A527B4E0 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetTop_m74BA0445AEED063D675025D400B394B33E746DF0((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutWidth_m8C5BB725927F87C956983ACF59BF6DF115DEDD73 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetWidth_m11E72B749FC65999E80C7086569758FA5C25E397((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutHeight_m10A6C59B82286124938BECF387F8B6FCB6442E53 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetHeight_m1F8A3A7AA973FD3468C0416E5D306ED3BF5C20C9((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_m84E6EFB1298C9DFE1C7BA097C982B8BB4BCE355E (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_MeasureInternal_m84E6EFB1298C9DFE1C7BA097C982B8BB4BCE355E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_2 = L_1->get__measureFunction_1();
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, YogaNode_MeasureInternal_m84E6EFB1298C9DFE1C7BA097C982B8BB4BCE355E_RuntimeMethod_var);
	}

IL_0020:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_5 = ___node0;
		NullCheck(L_5);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_6 = L_5->get__measureFunction_1();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_7 = ___node0;
		float L_8 = ___width1;
		int32_t L_9 = ___widthMode2;
		float L_10 = ___height3;
		int32_t L_11 = ___heightMode4;
		NullCheck(L_6);
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_12 = MeasureFunction_Invoke_mC141222B95F0C0576AF303CE2A928A8DF554CCBA(L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mA905C23C93548F48A3952D5B3AF967A2216162D0 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_BaselineInternal_mA905C23C93548F48A3952D5B3AF967A2216162D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_2 = L_1->get__baselineFunction_2();
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, YogaNode_BaselineInternal_mA905C23C93548F48A3952D5B3AF967A2216162D0_RuntimeMethod_var);
	}

IL_0020:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_5 = ___node0;
		NullCheck(L_5);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_6 = L_5->get__baselineFunction_2();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_7 = ___node0;
		float L_8 = ___width1;
		float L_9 = ___height2;
		NullCheck(L_6);
		float L_10 = BaselineFunction_Invoke_m6CFD1FE361E4BF6276A21C08B86219CA1E6B01B1(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		float L_11 = V_1;
		return L_11;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingLeft_m3CAE8572C64CFC27F3DA80CB9514CED5045FB2A8 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E((intptr_t)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingTop_mB944BC12FF263730F29350A6C2B1A3289A8A6108 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E((intptr_t)L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingRight_mBBAC0918BD5743ECC894E90758F8332CF33A89E7 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E((intptr_t)L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingBottom_m4EA6DDF42D9E393B5AA916FE5AAF2DBE42526B05 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetPadding_m7DC2672A97B5060D27EBB6D746923741A534BF9E((intptr_t)L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9UnityEngine_UIElementsModule2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = ((FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields*)il2cpp_codegen_static_fields_for(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var))->get_U3ClastValueU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mE1E8DD466E502C4F4E2CEF88607EF05C21D87228_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m8220DCF08A3CA07B96CDABD76E2BA73D50BADEE2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m942DE88F96B66EBCFBD11D3232F3C9AD57F0E4F6((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F_inline (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mFF1932FCD212A3D5CBBFF8AAC27CA1159DA3FB02_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m9C901CD1FB49754BB80402DEDE9CBA5C06F239C2_inline (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CdeltaU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_mE1E8DD466E502C4F4E2CEF88607EF05C21D87228_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mEA9BD51C04F9807CAC440A6729FD93A9BDB3B362((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mFF1932FCD212A3D5CBBFF8AAC27CA1159DA3FB02_inline (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
