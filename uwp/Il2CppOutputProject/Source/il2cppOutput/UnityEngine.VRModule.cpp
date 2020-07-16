#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t4109A209928375CA800C9D77C810A872B64E0632;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F;
// UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler
struct SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate
struct GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate
struct DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate
struct SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate
struct SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;
// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralE56BDFDA02CDB1AF069D764166DBFD5EF4DC1A56;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m02E7B395EAB9D87A1069C7D3D47F508D58E86131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m054B02D80AA8A155248277C0B0F7441552F91C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m0FA843B95BC3B0CBA5587BD16F14752EB437BF37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m11166A7C8C7C111548613292E4B0180485EE0C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m1450BF4814B5E94E45A46A102EBD16A8E5DF15DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m1E896EB893D67557323EAEAB7208747E555F68DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m20D6EFFA93F7B74FF4436073AC1C56CEC8A90883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3759E3FEF1391328A1DED1110D567F1969C4F91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4049ED1CC41C79988869E77C3BDFF0FB02924EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4808CF1C4119992200043B2EE181C309A9B7A3A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m5C0365B6A8027449FBE8ED256011D1398885C3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m5CCDEBC80BC1B7ABBF32C1F91843321BBFDA484A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6FD2E2B469A97D3774713093FFF935F692E468E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m73EBB65798423E4319E57E0DEB62402AD01A2E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7B0348DE788DDBA37B7813FBA9BBEA345390D646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m8BE4496DD506E2F0B37CEEA1C96FBC9B61DD0F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95945B93E884C0596EB91455C0AE975BDCE24040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mAE816D2FEA8384CE2DF88FA7ECCC574CDA45237B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB4720F2F8E65B00A295891324ACA79D4BC170F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mCF98F8CF9FE39CFEB7244F7CE942B2AF4ADC3CDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFF62AB17AC35C7B205D270CF24A9490E2FBD2588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionManager_OnSourceEvent_mB55EEF765E1D550286FD7D7880D3D5D33C247B7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m44A550F654882D71C63693155C4519BD024BC75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m9AE1CE771E31C8087AF29B633CBB4AC116A4F120_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DeserializationCompleteDelegate_BeginInvoke_m94ADEB74C6913D4EE08EE9CCA607315972BAB836_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureErrorDelegate_BeginInvoke_m0557D518B9663204C409C8F78942EC1100F3EFD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeErrorEvent_mCA4D0ED0CEA5F68CC9A99724A919A1C522037D4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldCanceled_mE8BACFA8FF23410B9BBB2085F944AFB5A1EC3249_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldCompleted_m5FB390955B208644ED3A2C04E009B9A42F74DB8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldStarted_m5B374F8171A9490074F7DD4AE08117635FBD1C38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationCanceled_mDD0D29803A7030F07149AD149C51011E59BD3325_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationCompleted_mCA5B970D00FD6DCFF68CF35E46C7AD770F4AE3F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationStarted_m81288DCF9D5F5D4EA64B7FEC5F4D583D38695E97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationUpdated_m6954158272575A892893B0112644F15B83C30CF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationCanceled_m036435EA6CF8195B9721D62CC8CB7D25CAB0BCE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationCompleted_m4EE64677E964CF28C105020EEA4B2FE0EC615732_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationStarted_m6F22C666EE1AB5465882E7A2B7B16A408507B1FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationUpdated_mDB9DD9CA51A3F88E4B290B67E52B9CB5B223456C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeRecognitionEnded_mF43E4544D48E8815352C6D8EC7F65466908C0A05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeRecognitionStarted_m3B2989CA75B369F170A4361445DFB0D429866640_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeTapped_mFD5A8D2E608BCA5B034AA23C2A60FCD27B67C501_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldCanceledEventDelegate_BeginInvoke_m5DF832B86380FFBA40B703B1970F8F18874179B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldCompletedEventDelegate_BeginInvoke_m7569336850B8F117018182C0DD59BC77F4F30A1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldStartedEventDelegate_BeginInvoke_m88350BEEC74C091DE086F2D48E9192307A870687_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_OnSourceEvent_mB55EEF765E1D550286FD7D7880D3D5D33C247B7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionSource_Equals_mBF3F19CE2AC11E5BC1824DD6B04C22BB63AA82DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationCanceledEventDelegate_BeginInvoke_mDF8F4B51F32BA3E90B93BD5EB3EB1E1664B0207F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationCompletedEventDelegate_BeginInvoke_mF4691288086A60FDAEB0B4680B10E5D53729F630_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationStartedEventDelegate_BeginInvoke_mB1EB3A31D871C1E03056E7C01BDE44AD160B8307_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationUpdatedEventDelegate_BeginInvoke_m425892ECA377035D6B0B08D858A3415FD6553737_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationCanceledEventDelegate_BeginInvoke_m4F55C35B64DDDC371CD7B28B7A77D721B1B2FF4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationCompletedEventDelegate_BeginInvoke_m0964FAD8D87624BF654EF6732392C76CE6A3A94E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationStartedEventDelegate_BeginInvoke_mC6BDFE832DE2DA91C373516644DF8CD4C7712335_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationUpdatedEventDelegate_BeginInvoke_m2E646F8DD4BDDFB6FFDE67A80E46B82620AE2370_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPositionalLocatorStateChangedDelegate_BeginInvoke_m13A0CD6DA98691DEC135C81A34036B05F1885041_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnTrackingChangedDelegate_BeginInvoke_m706FEA39D33F48783EB06F8CFC449FEBB50E1F3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionEndedEventDelegate_BeginInvoke_m8D4D70118F34D3BCCAC0EAE7840C7A720B33BEE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionStartedEventDelegate_BeginInvoke_m999F9ECB2B43AA0D470F56DB474E3C230136A7F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializationCompleteDelegate_BeginInvoke_m313D0F44768BEF200242DD2EB01FDEA4FDE4B4B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SourceEventHandler_BeginInvoke_m0315EE1544EA66979ECA93EB8BFA2ACB4ED3B3D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceChangedDelegate_BeginInvoke_m35FB4F7B04EEF4C1106C5CEC2E1D8C6258E95588_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceDataReadyDelegate_BeginInvoke_mCDCA0BE56D51A771AFB3E63E0B92B7B7C1E74D57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceObserver_InvokeSurfaceChangedEvent_mE44A8C368BF3A26C0A833BA5F7597BC0222162DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TappedEventDelegate_BeginInvoke_m2BC07DE5A8CE89AB9343FDC9FDD7189208944E69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_Dispose_m8EC471ED39714A14AE55267CA9E93C72B076E0A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_InvokeGetAsyncDelegate_m3A1F4176FFDBF3BCF1B35BCCDC359803AB298E90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore__cctor_m36A570239CCFA1258C8D8473AA0C9F031772B45A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_Dispose_m34D43542BD00391CB9CFC3302736E08271C75450_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_Finalize_m13324065F7816E771CEDE431CEEDC55A5762A52A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m57E0D2F2281DCE0C2EBB39DDAC97168CB2BDCC5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch__ctor_m2BACDFF6450151A0220B238815D11E90B73768A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchor_Internal_TriggerEventOnTrackingLost_m45D702037C7CC569FAED6391F8071D2CEF0F661F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldManager_Internal_TriggerPositionalLocatorStateChanged_m7E9FC71530741E56E12BC115989B3D6F19978983_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice_InvokeDeviceLoaded_mC97A03B3DFD626D9779653E5CE335163F85ECAF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice__cctor_m487620F9876D1B1BA401AC40F1EA2641DAE21A5B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke;;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96;;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke;;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB054F17A779AC945E3659AF119A96DB806541AF9 
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

// UnityEngine.XR.WSA.Input.InteractionManager
struct  InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4  : public RuntimeObject
{
public:

public:
};

struct InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetected
	Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * ___InteractionSourceDetected_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLost
	Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * ___InteractionSourceLost_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressed
	Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * ___InteractionSourcePressed_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleased
	Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * ___InteractionSourceReleased_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdated
	Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * ___InteractionSourceUpdated_4;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetectedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceDetectedLegacy_5;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLostLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceLostLegacy_6;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourcePressedLegacy_7;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleasedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceReleasedLegacy_8;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdatedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceUpdatedLegacy_9;

public:
	inline static int32_t get_offset_of_InteractionSourceDetected_0() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceDetected_0)); }
	inline Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * get_InteractionSourceDetected_0() const { return ___InteractionSourceDetected_0; }
	inline Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 ** get_address_of_InteractionSourceDetected_0() { return &___InteractionSourceDetected_0; }
	inline void set_InteractionSourceDetected_0(Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * value)
	{
		___InteractionSourceDetected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceDetected_0), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceLost_1() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceLost_1)); }
	inline Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * get_InteractionSourceLost_1() const { return ___InteractionSourceLost_1; }
	inline Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A ** get_address_of_InteractionSourceLost_1() { return &___InteractionSourceLost_1; }
	inline void set_InteractionSourceLost_1(Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * value)
	{
		___InteractionSourceLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressed_2() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourcePressed_2)); }
	inline Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * get_InteractionSourcePressed_2() const { return ___InteractionSourcePressed_2; }
	inline Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D ** get_address_of_InteractionSourcePressed_2() { return &___InteractionSourcePressed_2; }
	inline void set_InteractionSourcePressed_2(Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * value)
	{
		___InteractionSourcePressed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourcePressed_2), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleased_3() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceReleased_3)); }
	inline Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * get_InteractionSourceReleased_3() const { return ___InteractionSourceReleased_3; }
	inline Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E ** get_address_of_InteractionSourceReleased_3() { return &___InteractionSourceReleased_3; }
	inline void set_InteractionSourceReleased_3(Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * value)
	{
		___InteractionSourceReleased_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceReleased_3), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdated_4() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceUpdated_4)); }
	inline Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * get_InteractionSourceUpdated_4() const { return ___InteractionSourceUpdated_4; }
	inline Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F ** get_address_of_InteractionSourceUpdated_4() { return &___InteractionSourceUpdated_4; }
	inline void set_InteractionSourceUpdated_4(Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * value)
	{
		___InteractionSourceUpdated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceUpdated_4), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceDetectedLegacy_5() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceDetectedLegacy_5)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceDetectedLegacy_5() const { return ___InteractionSourceDetectedLegacy_5; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceDetectedLegacy_5() { return &___InteractionSourceDetectedLegacy_5; }
	inline void set_InteractionSourceDetectedLegacy_5(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceDetectedLegacy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceDetectedLegacy_5), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceLostLegacy_6() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceLostLegacy_6)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceLostLegacy_6() const { return ___InteractionSourceLostLegacy_6; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceLostLegacy_6() { return &___InteractionSourceLostLegacy_6; }
	inline void set_InteractionSourceLostLegacy_6(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceLostLegacy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceLostLegacy_6), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressedLegacy_7() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourcePressedLegacy_7)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourcePressedLegacy_7() const { return ___InteractionSourcePressedLegacy_7; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourcePressedLegacy_7() { return &___InteractionSourcePressedLegacy_7; }
	inline void set_InteractionSourcePressedLegacy_7(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourcePressedLegacy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourcePressedLegacy_7), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleasedLegacy_8() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceReleasedLegacy_8)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceReleasedLegacy_8() const { return ___InteractionSourceReleasedLegacy_8; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceReleasedLegacy_8() { return &___InteractionSourceReleasedLegacy_8; }
	inline void set_InteractionSourceReleasedLegacy_8(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceReleasedLegacy_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceReleasedLegacy_8), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdatedLegacy_9() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceUpdatedLegacy_9)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceUpdatedLegacy_9() const { return ___InteractionSourceUpdatedLegacy_9; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceUpdatedLegacy_9() { return &___InteractionSourceUpdatedLegacy_9; }
	inline void set_InteractionSourceUpdatedLegacy_9(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceUpdatedLegacy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceUpdatedLegacy_9), (void*)value);
	}
};


// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	int32_t ___m_Observer_0;

public:
	inline static int32_t get_offset_of_m_Observer_0() { return static_cast<int32_t>(offsetof(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864, ___m_Observer_0)); }
	inline int32_t get_m_Observer_0() const { return ___m_Observer_0; }
	inline int32_t* get_address_of_m_Observer_0() { return &___m_Observer_0; }
	inline void set_m_Observer_0(int32_t value)
	{
		___m_Observer_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke
{
	int32_t ___m_Observer_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com
{
	int32_t ___m_Observer_0;
};

// UnityEngine.XR.WSA.WorldManager
struct  WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863  : public RuntimeObject
{
public:

public:
};

struct WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields
{
public:
	// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate UnityEngine.XR.WSA.WorldManager::OnPositionalLocatorStateChanged
	OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * ___OnPositionalLocatorStateChanged_0;

public:
	inline static int32_t get_offset_of_OnPositionalLocatorStateChanged_0() { return static_cast<int32_t>(offsetof(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields, ___OnPositionalLocatorStateChanged_0)); }
	inline OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * get_OnPositionalLocatorStateChanged_0() const { return ___OnPositionalLocatorStateChanged_0; }
	inline OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B ** get_address_of_OnPositionalLocatorStateChanged_0() { return &___OnPositionalLocatorStateChanged_0; }
	inline void set_OnPositionalLocatorStateChanged_0(OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * value)
	{
		___OnPositionalLocatorStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionalLocatorStateChanged_0), (void*)value);
	}
};


// UnityEngine.XR.XRDevice
struct  XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A  : public RuntimeObject
{
public:

public:
};

struct XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields
{
public:
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t4109A209928375CA800C9D77C810A872B64E0632 * ___deviceLoaded_0;

public:
	inline static int32_t get_offset_of_deviceLoaded_0() { return static_cast<int32_t>(offsetof(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields, ___deviceLoaded_0)); }
	inline Action_1_t4109A209928375CA800C9D77C810A872B64E0632 * get_deviceLoaded_0() const { return ___deviceLoaded_0; }
	inline Action_1_t4109A209928375CA800C9D77C810A872B64E0632 ** get_address_of_deviceLoaded_0() { return &___deviceLoaded_0; }
	inline void set_deviceLoaded_0(Action_1_t4109A209928375CA800C9D77C810A872B64E0632 * value)
	{
		___deviceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceLoaded_0), (void*)value);
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct  GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C 
{
public:
	// System.String UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<error>k__BackingField
	String_t* ___U3CerrorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<hresult>k__BackingField
	int32_t ___U3ChresultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C, ___U3CerrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CerrorU3Ek__BackingField_0() const { return ___U3CerrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CerrorU3Ek__BackingField_0() { return &___U3CerrorU3Ek__BackingField_0; }
	inline void set_U3CerrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CerrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChresultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C, ___U3ChresultU3Ek__BackingField_1)); }
	inline int32_t get_U3ChresultU3Ek__BackingField_1() const { return ___U3ChresultU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ChresultU3Ek__BackingField_1() { return &___U3ChresultU3Ek__BackingField_1; }
	inline void set_U3ChresultU3Ek__BackingField_1(int32_t value)
	{
		___U3ChresultU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke
{
	char* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com
{
	Il2CppChar* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceled_1)); }
	inline Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceled_1), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompleted_2)); }
	inline Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStarted_3)); }
	inline Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___Tapped_4)); }
	inline Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tapped_4), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceled_5)); }
	inline Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceled_5), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompleted_6)); }
	inline Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStarted_7)); }
	inline Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdated_8)); }
	inline Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceled_9)); }
	inline Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceled_9), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompleted_10)); }
	inline Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompleted_10), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStarted_11)); }
	inline Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStarted_11), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdated_12)); }
	inline Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEnded_13)); }
	inline Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEnded_13), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStarted_14)); }
	inline Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureError_15)); }
	inline Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureError_15), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceledEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompletedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStartedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___TappedEvent_19)); }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TappedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceledEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompletedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStartedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdatedEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceledEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompletedEvent_25), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStartedEvent_26), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdatedEvent_27), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEndedEvent_28), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStartedEvent_29), (void*)value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureErrorEvent_30), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};

// UnityEngine.XR.WSA.Input.InteractionManager_EventType
struct  EventType_t9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager_EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePressType
struct  InteractionSourcePressType_tC4234E53B3E760D31EC9D35FF56FE667D33A182D 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePressType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePressType_tC4234E53B3E760D31EC9D35FF56FE667D33A182D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags
struct  InteractionSourceStateFlags_t44E9FA88305A647259525473BD922773CACB5905 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceStateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceStateFlags_t44E9FA88305A647259525473BD922773CACB5905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct  WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Persistence.WorldAnchorStore::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields
{
public:
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore UnityEngine.XR.WSA.Persistence.WorldAnchorStore::s_Instance
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___s_Instance_1;

public:
	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields, ___s_Instance_1)); }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.XR.WSA.PositionalLocatorState
struct  PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598 
{
public:
	// System.Int32 UnityEngine.XR.WSA.PositionalLocatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Sharing.SerializationCompletionReason
struct  SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Sharing.SerializationCompletionReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct  WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___id_0)); }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  get_id_0() const { return ___id_0; }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputMesh_1)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputAnchor_2)); }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputAnchor_2), (void*)value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputCollider_3)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputCollider_3), (void*)value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripRotation_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripPosition_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerPosition_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// System.Action`1<System.String>
struct  Action_1_t4109A209928375CA800C9D77C810A872B64E0632  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct  Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>
struct  Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A 
{
public:
	// T System.Nullable`1::value
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A, ___value_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_value_0() const { return ___value_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate
struct  GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate
struct  HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate
struct  HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate
struct  HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate
struct  ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate
struct  ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate
struct  ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate
struct  ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate
struct  NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate
struct  NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate
struct  NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate
struct  NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate
struct  RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate
struct  RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate
struct  TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.HoldCanceledEventArgs
struct  HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.HoldCompletedEventArgs
struct  HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.HoldStartedEventArgs
struct  HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceProperties
struct  InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A 
{
public:
	// System.Double UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossRisk
	double ___m_SourceLossRisk_0;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossMitigationDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_SourceLossMitigationDirection_1;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_2;

public:
	inline static int32_t get_offset_of_m_SourceLossRisk_0() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourceLossRisk_0)); }
	inline double get_m_SourceLossRisk_0() const { return ___m_SourceLossRisk_0; }
	inline double* get_address_of_m_SourceLossRisk_0() { return &___m_SourceLossRisk_0; }
	inline void set_m_SourceLossRisk_0(double value)
	{
		___m_SourceLossRisk_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceLossMitigationDirection_1() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourceLossMitigationDirection_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_SourceLossMitigationDirection_1() const { return ___m_SourceLossMitigationDirection_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_SourceLossMitigationDirection_1() { return &___m_SourceLossMitigationDirection_1; }
	inline void set_m_SourceLossMitigationDirection_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_SourceLossMitigationDirection_1 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_2() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourcePose_2)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_2() const { return ___m_SourcePose_2; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_2() { return &___m_SourcePose_2; }
	inline void set_m_SourcePose_2(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs
struct  ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs
struct  ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_CumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_CumulativeDelta_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs
struct  ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs
struct  ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_CumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_CumulativeDelta_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs
struct  NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs
struct  NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationStartedEventArgs
struct  NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs
struct  NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs
struct  RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs
struct  RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};


// UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate
struct  GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate
struct  DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate
struct  SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate
struct  SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingChanged_4), (void*)value);
	}
};


// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate
struct  OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct  Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct  Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct  Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct  Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct  Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct  Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct  Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct  Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct  Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct  Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct  Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct  Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct  Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSourceState
struct  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceProperties UnityEngine.XR.WSA.Input.InteractionSourceState::m_Properties
	InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  ___m_Properties_0;
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.InteractionSourceState::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.InteractionSourceState::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_ThumbstickPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_ThumbstickPosition_3;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_TouchpadPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TouchpadPosition_4;
	// System.Single UnityEngine.XR.WSA.Input.InteractionSourceState::m_SelectPressedAmount
	float ___m_SelectPressedAmount_5;
	// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags UnityEngine.XR.WSA.Input.InteractionSourceState::m_Flags
	int32_t ___m_Flags_6;

public:
	inline static int32_t get_offset_of_m_Properties_0() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Properties_0)); }
	inline InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  get_m_Properties_0() const { return ___m_Properties_0; }
	inline InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A * get_address_of_m_Properties_0() { return &___m_Properties_0; }
	inline void set_m_Properties_0(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  value)
	{
		___m_Properties_0 = value;
	}

	inline static int32_t get_offset_of_m_Source_1() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Source_1)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_1() const { return ___m_Source_1; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_1() { return &___m_Source_1; }
	inline void set_m_Source_1(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_ThumbstickPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_ThumbstickPosition_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_ThumbstickPosition_3() const { return ___m_ThumbstickPosition_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_ThumbstickPosition_3() { return &___m_ThumbstickPosition_3; }
	inline void set_m_ThumbstickPosition_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_ThumbstickPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_TouchpadPosition_4() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_TouchpadPosition_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TouchpadPosition_4() const { return ___m_TouchpadPosition_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TouchpadPosition_4() { return &___m_TouchpadPosition_4; }
	inline void set_m_TouchpadPosition_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TouchpadPosition_4 = value;
	}

	inline static int32_t get_offset_of_m_SelectPressedAmount_5() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_SelectPressedAmount_5)); }
	inline float get_m_SelectPressedAmount_5() const { return ___m_SelectPressedAmount_5; }
	inline float* get_address_of_m_SelectPressedAmount_5() { return &___m_SelectPressedAmount_5; }
	inline void set_m_SelectPressedAmount_5(float value)
	{
		___m_SelectPressedAmount_5 = value;
	}

	inline static int32_t get_offset_of_m_Flags_6() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Flags_6)); }
	inline int32_t get_m_Flags_6() const { return ___m_Flags_6; }
	inline int32_t* get_address_of_m_Flags_6() { return &___m_Flags_6; }
	inline void set_m_Flags_6(int32_t value)
	{
		___m_Flags_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler
struct  SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs
struct  InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs
struct  InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs
struct  InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs
struct  InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs
struct  InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct  Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct  Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct  Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct  Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct  Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F  : public MulticastDelegate_t
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
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled);
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled);

// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m5CCDEBC80BC1B7ABBF32C1F91843321BBFDA484A_gshared (Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * __this, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m6FD2E2B469A97D3774713093FFF935F692E468E5_gshared (Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * __this, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m73EBB65798423E4319E57E0DEB62402AD01A2E51_gshared (Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * __this, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m5C0365B6A8027449FBE8ED256011D1398885C3D3_gshared (Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m7B0348DE788DDBA37B7813FBA9BBEA345390D646_gshared (Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * __this, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m8BE4496DD506E2F0B37CEEA1C96FBC9B61DD0F22_gshared (Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * __this, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m3759E3FEF1391328A1DED1110D567F1969C4F91E_gshared (Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * __this, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m4808CF1C4119992200043B2EE181C309A9B7A3A4_gshared (Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * __this, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95945B93E884C0596EB91455C0AE975BDCE24040_gshared (Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * __this, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m20D6EFFA93F7B74FF4436073AC1C56CEC8A90883_gshared (Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * __this, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m0FA843B95BC3B0CBA5587BD16F14752EB437BF37_gshared (Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * __this, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mCF98F8CF9FE39CFEB7244F7CE942B2AF4ADC3CDC_gshared (Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * __this, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m02E7B395EAB9D87A1069C7D3D47F508D58E86131_gshared (Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * __this, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAE816D2FEA8384CE2DF88FA7ECCC574CDA45237B_gshared (Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * __this, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mFF62AB17AC35C7B205D270CF24A9490E2FBD2588_gshared (Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * __this, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m1450BF4814B5E94E45A46A102EBD16A8E5DF15DD_gshared (Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * __this, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m11166A7C8C7C111548613292E4B0180485EE0C85_gshared (Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * __this, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m054B02D80AA8A155248277C0B0F7441552F91C5F_gshared (Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * __this, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m1E896EB893D67557323EAEAB7208747E555F68DA_gshared (Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * __this, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB4720F2F8E65B00A295891324ACA79D4BC170F43_gshared (Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * __this, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m44A550F654882D71C63693155C4519BD024BC75A_gshared_inline (Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  Nullable_1_get_Value_m9AE1CE771E31C8087AF29B633CBB4AC116A4F120_gshared (Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2B0001D4983B49230808246228BE5553FF7A624F_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m5312BF445ECAE6AE377CB058AC59E653EDECE180_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m23D672EFF8FAE036DBA40375F9397146B6C0DDC5_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_m64245E479F4C531C875AE1C477CBFA3C7375D45C (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m740642A3340A025F286E39A57D3B542F1B71869D (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m5CCDEBC80BC1B7ABBF32C1F91843321BBFDA484A (Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * __this, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 *, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 , const RuntimeMethod*))Action_1_Invoke_m5CCDEBC80BC1B7ABBF32C1F91843321BBFDA484A_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m2082BE543E35C41773116F0FE10720D3906CAC30 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m6FD2E2B469A97D3774713093FFF935F692E468E5 (Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * __this, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A *, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 , const RuntimeMethod*))Action_1_Invoke_m6FD2E2B469A97D3774713093FFF935F692E468E5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_mC21AA808077698E33A6CCEB95A5166353C7F35E6 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m73EBB65798423E4319E57E0DEB62402AD01A2E51 (Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * __this, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D *, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 , const RuntimeMethod*))Action_1_Invoke_m73EBB65798423E4319E57E0DEB62402AD01A2E51_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_mA3F9719FDAFEDB4E55E3AE00E4FA68EE24025371 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m5C0365B6A8027449FBE8ED256011D1398885C3D3 (Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F *, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 , const RuntimeMethod*))Action_1_Invoke_m5C0365B6A8027449FBE8ED256011D1398885C3D3_gshared)(__this, ___obj0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m9AE1DD6088C9A16321EAEE3414876083776189D0 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m7B0348DE788DDBA37B7813FBA9BBEA345390D646 (Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * __this, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 *, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 , const RuntimeMethod*))Action_1_Invoke_m7B0348DE788DDBA37B7813FBA9BBEA345390D646_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m8567D853001A07763E9DF75F62923F69F9A71A8D (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m8BE4496DD506E2F0B37CEEA1C96FBC9B61DD0F22 (Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * __this, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 *, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 , const RuntimeMethod*))Action_1_Invoke_m8BE4496DD506E2F0B37CEEA1C96FBC9B61DD0F22_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_mE5B9DCCA2BF178661E9060FF1C69332C646E6866 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m3759E3FEF1391328A1DED1110D567F1969C4F91E (Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * __this, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 *, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 , const RuntimeMethod*))Action_1_Invoke_m3759E3FEF1391328A1DED1110D567F1969C4F91E_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_mD98BB6055DF5C06B4622DEEB586E667CF535C787 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m4808CF1C4119992200043B2EE181C309A9B7A3A4 (Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * __this, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C *, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E , const RuntimeMethod*))Action_1_Invoke_m4808CF1C4119992200043B2EE181C309A9B7A3A4_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mC418E67E2FB78E077C64013DE0F70393FFB3D2FA (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m95945B93E884C0596EB91455C0AE975BDCE24040 (Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * __this, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 *, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 , const RuntimeMethod*))Action_1_Invoke_m95945B93E884C0596EB91455C0AE975BDCE24040_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_m6B8FAD2A1160B4CF61655AE9A3D2730DF26A3A24 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m20D6EFFA93F7B74FF4436073AC1C56CEC8A90883 (Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * __this, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 *, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 , const RuntimeMethod*))Action_1_Invoke_m20D6EFFA93F7B74FF4436073AC1C56CEC8A90883_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_m247C17503814A223F308CB91CA752D6557EA7BE9 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m0FA843B95BC3B0CBA5587BD16F14752EB437BF37 (Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * __this, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 *, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 , const RuntimeMethod*))Action_1_Invoke_m0FA843B95BC3B0CBA5587BD16F14752EB437BF37_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_mC8AD6E6BE457ED97D29EBEFBFA9DE6F599154408 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mCF98F8CF9FE39CFEB7244F7CE942B2AF4ADC3CDC (Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * __this, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 *, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA , const RuntimeMethod*))Action_1_Invoke_mCF98F8CF9FE39CFEB7244F7CE942B2AF4ADC3CDC_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_m2AEDB0459FB24BC335262AAC0D507C1A9F1C4A71 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m02E7B395EAB9D87A1069C7D3D47F508D58E86131 (Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * __this, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 *, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB , const RuntimeMethod*))Action_1_Invoke_m02E7B395EAB9D87A1069C7D3D47F508D58E86131_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_m58CCC5D2DBD36023B7F80E5666506750B6BA024D (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mAE816D2FEA8384CE2DF88FA7ECCC574CDA45237B (Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * __this, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C *, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65 , const RuntimeMethod*))Action_1_Invoke_mAE816D2FEA8384CE2DF88FA7ECCC574CDA45237B_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m7AE1B0A993EE69347A5DF2CFEA43EA83213C0BBC (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mFF62AB17AC35C7B205D270CF24A9490E2FBD2588 (Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * __this, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 *, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C , const RuntimeMethod*))Action_1_Invoke_mFF62AB17AC35C7B205D270CF24A9490E2FBD2588_gshared)(__this, ___obj0, method);
}
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_m163F01C96B33EB47472C45CC162C917E48AE8A18 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m55F8A82983CB5A79B70B8BD39741881DA8E6E611 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1450BF4814B5E94E45A46A102EBD16A8E5DF15DD (Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * __this, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 *, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 , const RuntimeMethod*))Action_1_Invoke_m1450BF4814B5E94E45A46A102EBD16A8E5DF15DD_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_mC481895F17456F17EB8372CAB0EDC5B9989B546C (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m11166A7C8C7C111548613292E4B0180485EE0C85 (Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * __this, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A *, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC , const RuntimeMethod*))Action_1_Invoke_m11166A7C8C7C111548613292E4B0180485EE0C85_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_m353AFEE49D4D2694117D0822C2CEB42EA5BB0AF1 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m054B02D80AA8A155248277C0B0F7441552F91C5F (Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * __this, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F *, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 , const RuntimeMethod*))Action_1_Invoke_m054B02D80AA8A155248277C0B0F7441552F91C5F_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m924AC3E376255E74EFE8A9ED5E2B4B224E549D93 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1E896EB893D67557323EAEAB7208747E555F68DA (Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * __this, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D *, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B , const RuntimeMethod*))Action_1_Invoke_m1E896EB893D67557323EAEAB7208747E555F68DA_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_m0EF51D53929B41C743EDD821CEE530002E9EB813 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mB4720F2F8E65B00A295891324ACA79D4BC170F43 (Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * __this, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E *, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 , const RuntimeMethod*))Action_1_Invoke_mB4720F2F8E65B00A295891324ACA79D4BC170F43_gshared)(__this, ___obj0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
inline bool Nullable_1_get_HasValue_m44A550F654882D71C63693155C4519BD024BC75A_inline (Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A *, const RuntimeMethod*))Nullable_1_get_HasValue_m44A550F654882D71C63693155C4519BD024BC75A_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  Nullable_1_get_Value_m9AE1CE771E31C8087AF29B633CBB4AC116A4F120 (Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A * __this, const RuntimeMethod* method)
{
	return ((  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  (*) (Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A *, const RuntimeMethod*))Nullable_1_get_Value_m9AE1CE771E31C8087AF29B633CBB4AC116A4F120_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m5BEEBC6B0407DBF58C2272554FF1F020CB29939D (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_mBF3F19CE2AC11E5BC1824DD6B04C22BB63AA82DC (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m221E9FE4C80372B6EB7D4E794798CDC880B3B7F7 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_m6D7D7333353F739BEC5F7F3F8A65EB85C3C63527_inline (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m7041EE5109E7F200AADA34928F13A233A224B4AA_inline (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_m97D0EBF13AF69E6D335F6370B432CEFFBD9B906B_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_mEB14B6518D14C32A06EACEE69BC92EBBAC09464C_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mCB41DD881C5684C41424B7C520309687F91594C8_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m2BAA15BC545B9E42B2435142F92E420D899CE58B_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_m20ED7684DB97BB49996493461AF60C3CC25A6DBD_inline (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_mE231A9CDD03943B5E8F171C977313B3F956ED2ED (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_mCA3B7BA14A79F0D59096607F38F3D8CBFAD3E351 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m514015751178D82F76BABB111CCFE14BBE493B62 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m359D92541AE512D01ED4DCD2194969701748D4BC (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m91DECC289EF54AEE478286BC6FB3DFBD6CA3BF5D (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m9917C362E207EE225AF3C332447394307A46B30B (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m1BF94B8AE9414E794852F2F6DD61FB4328A9B82D (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m2BACDFF6450151A0220B238815D11E90B73768A0 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_mCEA98ECCC45B09FA4F4162E1AE8C28CA02A78804 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method);
// System.DateTime System.DateTime::FromFileTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676 (int64_t ___fileTime0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_m5AAAB0934142DE3AAF6CAA5E0471B716897E6D0C (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m88521E2CBDDBEF5DF71275D9E2389FBA3B1776EC (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mEFBC589592713623C4695D03FD4AD0842D094B42 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_m980F10AD6C9B67FFABA5AD2D21D0013E868C57B6 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_m1B077FD5236215B4B1BA99225F00688523A52213 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m4049ED1CC41C79988869E77C3BDFF0FB02924EF7 (Action_1_t4109A209928375CA800C9D77C810A872B64E0632 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4109A209928375CA800C9D77C810A872B64E0632 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m2B0001D4983B49230808246228BE5553FF7A624F_gshared)(__this, ___obj0, method);
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke_back(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke_cleanup(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com_back(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com_cleanup(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m5312BF445ECAE6AE377CB058AC59E653EDECE180 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs_set_error_m5312BF445ECAE6AE377CB058AC59E653EDECE180_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + _offset);
	GestureErrorEventArgs_set_error_m5312BF445ECAE6AE377CB058AC59E653EDECE180_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m23D672EFF8FAE036DBA40375F9397146B6C0DDC5 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs_set_hresult_m23D672EFF8FAE036DBA40375F9397146B6C0DDC5_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + _offset);
	GestureErrorEventArgs_set_hresult_m23D672EFF8FAE036DBA40375F9397146B6C0DDC5_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_m64245E479F4C531C875AE1C477CBFA3C7375D45C (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C ));
		String_t* L_0 = ___error0;
		GestureErrorEventArgs_set_error_m5312BF445ECAE6AE377CB058AC59E653EDECE180_inline((GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___hresult1;
		GestureErrorEventArgs_set_hresult_m23D672EFF8FAE036DBA40375F9397146B6C0DDC5_inline((GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs__ctor_m64245E479F4C531C875AE1C477CBFA3C7375D45C_AdjustorThunk (RuntimeObject * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + _offset);
	GestureErrorEventArgs__ctor_m64245E479F4C531C875AE1C477CBFA3C7375D45C(_thisAdjusted, ___error0, ___hresult1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke_back(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset((&unmarshaled_m_Recognizer_temp_0), 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1>(marshaled.___HoldCanceled_1, Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A>(marshaled.___HoldCompleted_2, Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D>(marshaled.___HoldStarted_3, Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F>(marshaled.___Tapped_4, Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5>(marshaled.___ManipulationCanceled_5, Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07>(marshaled.___ManipulationCompleted_6, Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303>(marshaled.___ManipulationStarted_7, Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C>(marshaled.___ManipulationUpdated_8, Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29>(marshaled.___NavigationCanceled_9, Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762>(marshaled.___NavigationCompleted_10, Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280>(marshaled.___NavigationStarted_11, Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5>(marshaled.___NavigationUpdated_12, Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487>(marshaled.___RecognitionEnded_13, Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C>(marshaled.___RecognitionStarted_14, Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501>(marshaled.___GestureError_15, Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F>(marshaled.___TappedEvent_19, TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke_cleanup(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com_back(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset((&unmarshaled_m_Recognizer_temp_0), 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1>(marshaled.___HoldCanceled_1, Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A>(marshaled.___HoldCompleted_2, Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D>(marshaled.___HoldStarted_3, Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F>(marshaled.___Tapped_4, Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5>(marshaled.___ManipulationCanceled_5, Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07>(marshaled.___ManipulationCompleted_6, Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303>(marshaled.___ManipulationStarted_7, Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C>(marshaled.___ManipulationUpdated_8, Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29>(marshaled.___NavigationCanceled_9, Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762>(marshaled.___NavigationCompleted_10, Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280>(marshaled.___NavigationStarted_11, Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5>(marshaled.___NavigationUpdated_12, Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487>(marshaled.___RecognitionEnded_13, Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C>(marshaled.___RecognitionStarted_14, Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501>(marshaled.___GestureError_15, Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F>(marshaled.___TappedEvent_19, TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com_cleanup(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCanceled_mE8BACFA8FF23410B9BBB2085F944AFB5A1EC3249 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCanceled_mE8BACFA8FF23410B9BBB2085F944AFB5A1EC3249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * V_0 = NULL;
	Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_0 = __this->get_HoldCanceledEvent_16();
		V_0 = L_0;
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_9, L_10, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoldCanceledEventDelegate_Invoke_m740642A3340A025F286E39A57D3B542F1B71869D(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * L_13 = __this->get_HoldCanceled_1();
		V_1 = L_13;
		Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_t8872DC56C01108D1F7EB77EB95201B4E608A72E1 * L_19 = V_1;
		HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_m5CCDEBC80BC1B7ABBF32C1F91843321BBFDA484A(L_19, L_20, /*hidden argument*/Action_1_Invoke_m5CCDEBC80BC1B7ABBF32C1F91843321BBFDA484A_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCompleted_m5FB390955B208644ED3A2C04E009B9A42F74DB8A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCompleted_m5FB390955B208644ED3A2C04E009B9A42F74DB8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * V_0 = NULL;
	Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_0 = __this->get_HoldCompletedEvent_17();
		V_0 = L_0;
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_9, L_10, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoldCompletedEventDelegate_Invoke_m2082BE543E35C41773116F0FE10720D3906CAC30(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * L_13 = __this->get_HoldCompleted_2();
		V_1 = L_13;
		Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_t60F72089CBBA03236F744DE1B182DE0A2A06F63A * L_19 = V_1;
		HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_m6FD2E2B469A97D3774713093FFF935F692E468E5(L_19, L_20, /*hidden argument*/Action_1_Invoke_m6FD2E2B469A97D3774713093FFF935F692E468E5_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldStarted_m5B374F8171A9490074F7DD4AE08117635FBD1C38 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldStarted_m5B374F8171A9490074F7DD4AE08117635FBD1C38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * V_0 = NULL;
	Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_0 = __this->get_HoldStartedEvent_18();
		V_0 = L_0;
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_9, L_10, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoldStartedEventDelegate_Invoke_mC21AA808077698E33A6CCEB95A5166353C7F35E6(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * L_13 = __this->get_HoldStarted_3();
		V_1 = L_13;
		Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_t24DC7F701B0323B09AA78D06B9F573CFF8FA5D6D * L_19 = V_1;
		HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_m73EBB65798423E4319E57E0DEB62402AD01A2E51(L_19, L_20, /*hidden argument*/Action_1_Invoke_m73EBB65798423E4319E57E0DEB62402AD01A2E51_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeTapped(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeTapped_mFD5A8D2E608BCA5B034AA23C2A60FCD27B67C501 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, int32_t ___tapCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeTapped_mFD5A8D2E608BCA5B034AA23C2A60FCD27B67C501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * V_0 = NULL;
	Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_0 = __this->get_TappedEvent_19();
		V_0 = L_0;
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		int32_t L_6 = ___tapCount3;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		TappedEventDelegate_Invoke_mA3F9719FDAFEDB4E55E3AE00E4FA68EE24025371(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * L_14 = __this->get_Tapped_4();
		V_1 = L_14;
		Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		int32_t L_20 = ___tapCount3;
		(&V_4)->set_m_TapCount_3(L_20);
		Action_1_t0FBBC8F7F3738D9EF13F772E97A7301907B59D8F * L_21 = V_1;
		TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_m5C0365B6A8027449FBE8ED256011D1398885C3D3(L_21, L_22, /*hidden argument*/Action_1_Invoke_m5C0365B6A8027449FBE8ED256011D1398885C3D3_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCanceled_mDD0D29803A7030F07149AD149C51011E59BD3325 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCanceled_mDD0D29803A7030F07149AD149C51011E59BD3325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * V_0 = NULL;
	Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_0 = __this->get_ManipulationCanceledEvent_20();
		V_0 = L_0;
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationCanceledEventDelegate_Invoke_m9AE1DD6088C9A16321EAEE3414876083776189D0(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * L_14 = __this->get_ManipulationCanceled_5();
		V_1 = L_14;
		Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_t673AB9927569BB5255ACB5915025A56F8C7F22F5 * L_20 = V_1;
		ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_m7B0348DE788DDBA37B7813FBA9BBEA345390D646(L_20, L_21, /*hidden argument*/Action_1_Invoke_m7B0348DE788DDBA37B7813FBA9BBEA345390D646_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCompleted_mCA5B970D00FD6DCFF68CF35E46C7AD770F4AE3F3 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCompleted_mCA5B970D00FD6DCFF68CF35E46C7AD770F4AE3F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * V_0 = NULL;
	Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_0 = __this->get_ManipulationCompletedEvent_21();
		V_0 = L_0;
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___cumulativeDelta3;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationCompletedEventDelegate_Invoke_m8567D853001A07763E9DF75F62923F69F9A71A8D(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * L_14 = __this->get_ManipulationCompleted_6();
		V_1 = L_14;
		Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___cumulativeDelta3;
		(&V_4)->set_m_CumulativeDelta_3(L_20);
		Action_1_t4DB6D9A9CFA45A02BD51E3C79AF262F5540D5E07 * L_21 = V_1;
		ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_m8BE4496DD506E2F0B37CEEA1C96FBC9B61DD0F22(L_21, L_22, /*hidden argument*/Action_1_Invoke_m8BE4496DD506E2F0B37CEEA1C96FBC9B61DD0F22_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationStarted_m81288DCF9D5F5D4EA64B7FEC5F4D583D38695E97 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationStarted_m81288DCF9D5F5D4EA64B7FEC5F4D583D38695E97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * V_0 = NULL;
	Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_0 = __this->get_ManipulationStartedEvent_22();
		V_0 = L_0;
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationStartedEventDelegate_Invoke_mE5B9DCCA2BF178661E9060FF1C69332C646E6866(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * L_14 = __this->get_ManipulationStarted_7();
		V_1 = L_14;
		Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_t0EEA737C885CE3A94BB36F45111BF7FAF8765303 * L_20 = V_1;
		ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_m3759E3FEF1391328A1DED1110D567F1969C4F91E(L_20, L_21, /*hidden argument*/Action_1_Invoke_m3759E3FEF1391328A1DED1110D567F1969C4F91E_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationUpdated_m6954158272575A892893B0112644F15B83C30CF7 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationUpdated_m6954158272575A892893B0112644F15B83C30CF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * V_0 = NULL;
	Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_0 = __this->get_ManipulationUpdatedEvent_23();
		V_0 = L_0;
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___cumulativeDelta3;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationUpdatedEventDelegate_Invoke_mD98BB6055DF5C06B4622DEEB586E667CF535C787(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * L_14 = __this->get_ManipulationUpdated_8();
		V_1 = L_14;
		Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___cumulativeDelta3;
		(&V_4)->set_m_CumulativeDelta_3(L_20);
		Action_1_tB0F4073D219262687A8941DC2AE1FE4CCB71984C * L_21 = V_1;
		ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_m4808CF1C4119992200043B2EE181C309A9B7A3A4(L_21, L_22, /*hidden argument*/Action_1_Invoke_m4808CF1C4119992200043B2EE181C309A9B7A3A4_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCanceled_m036435EA6CF8195B9721D62CC8CB7D25CAB0BCE9 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCanceled_m036435EA6CF8195B9721D62CC8CB7D25CAB0BCE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * V_0 = NULL;
	Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_0 = __this->get_NavigationCanceledEvent_24();
		V_0 = L_0;
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationCanceledEventDelegate_Invoke_mC418E67E2FB78E077C64013DE0F70393FFB3D2FA(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * L_14 = __this->get_NavigationCanceled_9();
		V_1 = L_14;
		Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_t05C39A6A5A4930CC00CDD712C7DB558EB1173F29 * L_20 = V_1;
		NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_m95945B93E884C0596EB91455C0AE975BDCE24040(L_20, L_21, /*hidden argument*/Action_1_Invoke_m95945B93E884C0596EB91455C0AE975BDCE24040_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCompleted_m4EE64677E964CF28C105020EEA4B2FE0EC615732 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCompleted_m4EE64677E964CF28C105020EEA4B2FE0EC615732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * V_0 = NULL;
	Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_0 = __this->get_NavigationCompletedEvent_25();
		V_0 = L_0;
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___normalizedOffset3;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationCompletedEventDelegate_Invoke_m6B8FAD2A1160B4CF61655AE9A3D2730DF26A3A24(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * L_14 = __this->get_NavigationCompleted_10();
		V_1 = L_14;
		Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___normalizedOffset3;
		(&V_4)->set_m_NormalizedOffset_3(L_20);
		Action_1_t24AFF46173273FFABBD08CA5380E37D8AE42D762 * L_21 = V_1;
		NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_m20D6EFFA93F7B74FF4436073AC1C56CEC8A90883(L_21, L_22, /*hidden argument*/Action_1_Invoke_m20D6EFFA93F7B74FF4436073AC1C56CEC8A90883_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationStarted_m6F22C666EE1AB5465882E7A2B7B16A408507B1FD (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationStarted_m6F22C666EE1AB5465882E7A2B7B16A408507B1FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * V_0 = NULL;
	Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_0 = __this->get_NavigationStartedEvent_26();
		V_0 = L_0;
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationStartedEventDelegate_Invoke_m247C17503814A223F308CB91CA752D6557EA7BE9(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * L_14 = __this->get_NavigationStarted_11();
		V_1 = L_14;
		Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_t1DC22449B4457EE4BC592B6A814A5F64F2933280 * L_20 = V_1;
		NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_m0FA843B95BC3B0CBA5587BD16F14752EB437BF37(L_20, L_21, /*hidden argument*/Action_1_Invoke_m0FA843B95BC3B0CBA5587BD16F14752EB437BF37_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationUpdated_mDB9DD9CA51A3F88E4B290B67E52B9CB5B223456C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationUpdated_mDB9DD9CA51A3F88E4B290B67E52B9CB5B223456C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * V_0 = NULL;
	Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_0 = __this->get_NavigationUpdatedEvent_27();
		V_0 = L_0;
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___normalizedOffset3;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationUpdatedEventDelegate_Invoke_mC8AD6E6BE457ED97D29EBEFBFA9DE6F599154408(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * L_14 = __this->get_NavigationUpdated_12();
		V_1 = L_14;
		Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___normalizedOffset3;
		(&V_4)->set_m_NormalizedOffset_3(L_20);
		Action_1_t2E247A8848F3A63E832C3622A8B15112D41F1EC5 * L_21 = V_1;
		NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_mCF98F8CF9FE39CFEB7244F7CE942B2AF4ADC3CDC(L_21, L_22, /*hidden argument*/Action_1_Invoke_mCF98F8CF9FE39CFEB7244F7CE942B2AF4ADC3CDC_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionEnded(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionEnded_mF43E4544D48E8815352C6D8EC7F65466908C0A05 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionEnded_mF43E4544D48E8815352C6D8EC7F65466908C0A05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * V_0 = NULL;
	Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_0 = __this->get_RecognitionEndedEvent_28();
		V_0 = L_0;
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_9, L_10, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		RecognitionEndedEventDelegate_Invoke_m2AEDB0459FB24BC335262AAC0D507C1A9F1C4A71(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * L_13 = __this->get_RecognitionEnded_13();
		V_1 = L_13;
		Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_tD1767718355ECCB79E5B22DE077BED0A51401487 * L_19 = V_1;
		RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_m02E7B395EAB9D87A1069C7D3D47F508D58E86131(L_19, L_20, /*hidden argument*/Action_1_Invoke_m02E7B395EAB9D87A1069C7D3D47F508D58E86131_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionStarted_m3B2989CA75B369F170A4361445DFB0D429866640 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionStarted_m3B2989CA75B369F170A4361445DFB0D429866640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * V_0 = NULL;
	Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_0 = __this->get_RecognitionStartedEvent_29();
		V_0 = L_0;
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_3 = V_0;
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = ___headPose2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = ___headPose2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_9, L_10, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m438641D545CC52C8C523EDFD8EA89ECADAD91BC9((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		RecognitionStartedEventDelegate_Invoke_m58CCC5D2DBD36023B7F80E5666506750B6BA024D(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * L_13 = __this->get_RecognitionStarted_14();
		V_1 = L_13;
		Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_t8262D1A2BD2BB47F847335F55C1C72CD4D0CC15C * L_19 = V_1;
		RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_mAE816D2FEA8384CE2DF88FA7ECCC574CDA45237B(L_19, L_20, /*hidden argument*/Action_1_Invoke_mAE816D2FEA8384CE2DF88FA7ECCC574CDA45237B_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeErrorEvent(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeErrorEvent_mCA4D0ED0CEA5F68CC9A99724A919A1C522037D4F (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeErrorEvent_mCA4D0ED0CEA5F68CC9A99724A919A1C522037D4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * V_0 = NULL;
	Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_0 = __this->get_GestureErrorEvent_30();
		V_0 = L_0;
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_3 = V_0;
		String_t* L_4 = ___error0;
		int32_t L_5 = ___hresult1;
		NullCheck(L_3);
		GestureErrorDelegate_Invoke_m7AE1B0A993EE69347A5DF2CFEA43EA83213C0BBC(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * L_6 = __this->get_GestureError_15();
		V_1 = L_6;
		Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * L_7 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		Action_1_t7C3950C1F8C17FCD9C499DF8E6C3113825E77501 * L_9 = V_1;
		String_t* L_10 = ___error0;
		int32_t L_11 = ___hresult1;
		GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  L_12;
		memset((&L_12), 0, sizeof(L_12));
		GestureErrorEventArgs__ctor_m64245E479F4C531C875AE1C477CBFA3C7375D45C((&L_12), L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_1_Invoke_mFF62AB17AC35C7B205D270CF24A9490E2FBD2588(L_9, L_12, /*hidden argument*/Action_1_Invoke_mFF62AB17AC35C7B205D270CF24A9490E2FBD2588_RuntimeMethod_var);
	}

IL_0036:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled, ___hresult1);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate__ctor_m42454DB396A9BF9F60871E823AF44921825F25A9 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m7AE1B0A993EE69347A5DF2CFEA43EA83213C0BBC (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___hresult1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
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
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___error0) - 1), ___hresult1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GestureErrorDelegate_BeginInvoke_m0557D518B9663204C409C8F78942EC1100F3EFD6 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureErrorDelegate_BeginInvoke_m0557D518B9663204C409C8F78942EC1100F3EFD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___error0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___hresult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_EndInvoke_m6D94A7A4682BD9EB396F44CC38940240B6A459C9 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate__ctor_mE6027C16CF4D8733F4109672E6B56D834D944405 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m740642A3340A025F286E39A57D3B542F1B71869D (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldCanceledEventDelegate_BeginInvoke_m5DF832B86380FFBA40B703B1970F8F18874179B5 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCanceledEventDelegate_BeginInvoke_m5DF832B86380FFBA40B703B1970F8F18874179B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_EndInvoke_m739229EB9423DA658B96D0042ABC33A7ED559824 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate__ctor_m033BCD20125E01E588E3C37E7D82346F51E2A712 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m2082BE543E35C41773116F0FE10720D3906CAC30 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldCompletedEventDelegate_BeginInvoke_m7569336850B8F117018182C0DD59BC77F4F30A1E (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCompletedEventDelegate_BeginInvoke_m7569336850B8F117018182C0DD59BC77F4F30A1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_EndInvoke_m5EB7C37A4A7464569258EA4D1EB698E9545F4F58 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate__ctor_mDA36E8C350816F4C962B48EC697D5C45E6F1349B (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_mC21AA808077698E33A6CCEB95A5166353C7F35E6 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldStartedEventDelegate_BeginInvoke_m88350BEEC74C091DE086F2D48E9192307A870687 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldStartedEventDelegate_BeginInvoke_m88350BEEC74C091DE086F2D48E9192307A870687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_EndInvoke_mDF4D169D22B0FACF8EC7FF942568701AC63D5F8A (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate__ctor_m6E2D54DC730D92762E320EAD94EBFE7944E2F81C (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m9AE1DD6088C9A16321EAEE3414876083776189D0 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCanceledEventDelegate_BeginInvoke_mDF8F4B51F32BA3E90B93BD5EB3EB1E1664B0207F (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCanceledEventDelegate_BeginInvoke_mDF8F4B51F32BA3E90B93BD5EB3EB1E1664B0207F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_EndInvoke_mE65EE3FE7820EE0348CBE19DBBD578CC5AA29677 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate__ctor_m6E4971E1145711A7C7E4C2ECE79E9D27D380895A (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m8567D853001A07763E9DF75F62923F69F9A71A8D (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCompletedEventDelegate_BeginInvoke_mF4691288086A60FDAEB0B4680B10E5D53729F630 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCompletedEventDelegate_BeginInvoke_mF4691288086A60FDAEB0B4680B10E5D53729F630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_EndInvoke_m0B05B90D5805435730B5505A9C61B3F0F237B58B (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate__ctor_m25467360BB768822D7017ECEB843C6714AE5AF17 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_mE5B9DCCA2BF178661E9060FF1C69332C646E6866 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationStartedEventDelegate_BeginInvoke_mB1EB3A31D871C1E03056E7C01BDE44AD160B8307 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationStartedEventDelegate_BeginInvoke_mB1EB3A31D871C1E03056E7C01BDE44AD160B8307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_EndInvoke_mE25A1BE5AE9E32D052DB56A7DEC27E59F4DBBE05 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate__ctor_m9BD0EBDDCBEBB21C0A9A8BB7DA915F89649412F9 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_mD98BB6055DF5C06B4622DEEB586E667CF535C787 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationUpdatedEventDelegate_BeginInvoke_m425892ECA377035D6B0B08D858A3415FD6553737 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationUpdatedEventDelegate_BeginInvoke_m425892ECA377035D6B0B08D858A3415FD6553737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_EndInvoke_mFF39F333E497D4179D9231EF011A94B8375FE5FD (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate__ctor_m15954FD3927CE76B7C6292A41CFC128662E553E5 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mC418E67E2FB78E077C64013DE0F70393FFB3D2FA (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationCanceledEventDelegate_BeginInvoke_m4F55C35B64DDDC371CD7B28B7A77D721B1B2FF4E (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCanceledEventDelegate_BeginInvoke_m4F55C35B64DDDC371CD7B28B7A77D721B1B2FF4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_EndInvoke_m66BD2D70EEE38BADCEBB5CA356DFBA12B85F3576 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate__ctor_m88F8BCF7225E869A52ECDA771BF38B251AE4794A (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_m6B8FAD2A1160B4CF61655AE9A3D2730DF26A3A24 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationCompletedEventDelegate_BeginInvoke_m0964FAD8D87624BF654EF6732392C76CE6A3A94E (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCompletedEventDelegate_BeginInvoke_m0964FAD8D87624BF654EF6732392C76CE6A3A94E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_EndInvoke_mAD0836BC7659BFA7742564941AB7A9D1A924F1AD (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate__ctor_mB87568C4611B250CB992259F7A4644B8D4F85AD0 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_m247C17503814A223F308CB91CA752D6557EA7BE9 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationStartedEventDelegate_BeginInvoke_mC6BDFE832DE2DA91C373516644DF8CD4C7712335 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationStartedEventDelegate_BeginInvoke_mC6BDFE832DE2DA91C373516644DF8CD4C7712335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_EndInvoke_m88069F4EF8542C7CD50649A3A52F00A17E1E82E9 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate__ctor_m3813553467C3E57CEFBA5A5FE847D073E98C2C2D (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_mC8AD6E6BE457ED97D29EBEFBFA9DE6F599154408 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationUpdatedEventDelegate_BeginInvoke_m2E646F8DD4BDDFB6FFDE67A80E46B82620AE2370 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationUpdatedEventDelegate_BeginInvoke_m2E646F8DD4BDDFB6FFDE67A80E46B82620AE2370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_EndInvoke_m6020E4328B07BA7774E78E4538C2EAA76A74DEAC (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate__ctor_m0FBB4291B89DD5CA334A95B384FCEFC3537950B1 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_m2AEDB0459FB24BC335262AAC0D507C1A9F1C4A71 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionEndedEventDelegate_BeginInvoke_m8D4D70118F34D3BCCAC0EAE7840C7A720B33BEE6 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionEndedEventDelegate_BeginInvoke_m8D4D70118F34D3BCCAC0EAE7840C7A720B33BEE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_EndInvoke_m0681A648DBB573F9B6BA09D761A623170D690FE9 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate__ctor_mF034EE408548A02AF73518C2C503B7C532C5F8B3 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_m58CCC5D2DBD36023B7F80E5666506750B6BA024D (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionStartedEventDelegate_BeginInvoke_m999F9ECB2B43AA0D470F56DB474E3C230136A7F2 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionStartedEventDelegate_BeginInvoke_m999F9ECB2B43AA0D470F56DB474E3C230136A7F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_EndInvoke_m0CDEFB9AE48D941D39343C50AF090ADBBFD5B1DD (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___tapCount1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate__ctor_mC7700F396565037D8A80227710C2C5FC471F9C73 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_mA3F9719FDAFEDB4E55E3AE00E4FA68EE24025371 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___tapCount1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TappedEventDelegate_BeginInvoke_m2BC07DE5A8CE89AB9343FDC9FDD7189208944E69 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TappedEventDelegate_BeginInvoke_m2BC07DE5A8CE89AB9343FDC9FDD7189208944E69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___tapCount1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_EndInvoke_mF0F073461F437498538E2EA3944F2753D93AC80A (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager__cctor_m8473AC137A7F2CE0DB1AD44C42BCE095DEE04050 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::OnSourceEvent(UnityEngine.XR.WSA.Input.InteractionManager_EventType,System.IntPtr,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_OnSourceEvent_mB55EEF765E1D550286FD7D7880D3D5D33C247B7A (int32_t ___eventType0, intptr_t ___statePtr1, int32_t ___pressType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_OnSourceEvent_mB55EEF765E1D550286FD7D7880D3D5D33C247B7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_2 = NULL;
	Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_6 = NULL;
	Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_10 = NULL;
	Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_14 = NULL;
	Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_18 = NULL;
	Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	{
		intptr_t L_0 = ___statePtr1;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_2 = (*(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *)L_1);
		V_0 = L_2;
		int32_t L_3 = ___eventType0;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_00ac;
			}
			case 3:
			{
				goto IL_00ee;
			}
			case 4:
			{
				goto IL_012e;
			}
		}
	}
	{
		goto IL_016e;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_5 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetectedLegacy_5();
		V_2 = L_5;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_6 = V_2;
		V_4 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_8 = V_2;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_9 = V_0;
		NullCheck(L_8);
		SourceEventHandler_Invoke_m163F01C96B33EB47472C45CC162C917E48AE8A18(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * L_10 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetected_0();
		V_3 = L_10;
		Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * L_11 = V_3;
		V_5 = (bool)((!(((RuntimeObject*)(Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		Action_1_tC6BDC3A35AE7D01C20F88C5714C24E9F47431796 * L_13 = V_3;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_14 = V_0;
		InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  L_15;
		memset((&L_15), 0, sizeof(L_15));
		InteractionSourceDetectedEventArgs__ctor_m55F8A82983CB5A79B70B8BD39741881DA8E6E611((&L_15), L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Action_1_Invoke_m1450BF4814B5E94E45A46A102EBD16A8E5DF15DD(L_13, L_15, /*hidden argument*/Action_1_Invoke_m1450BF4814B5E94E45A46A102EBD16A8E5DF15DD_RuntimeMethod_var);
	}

IL_0064:
	{
		goto IL_0179;
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_16 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLostLegacy_6();
		V_6 = L_16;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_17 = V_6;
		V_8 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_0086;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_19 = V_6;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_20 = V_0;
		NullCheck(L_19);
		SourceEventHandler_Invoke_m163F01C96B33EB47472C45CC162C917E48AE8A18(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0086:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * L_21 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLost_1();
		V_7 = L_21;
		Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * L_22 = V_7;
		V_9 = (bool)((!(((RuntimeObject*)(Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A *)L_22) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a6;
		}
	}
	{
		Action_1_t9CEF9F59EFD01B5848327A30EB3DAF45A675383A * L_24 = V_7;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_25 = V_0;
		InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  L_26;
		memset((&L_26), 0, sizeof(L_26));
		InteractionSourceLostEventArgs__ctor_mC481895F17456F17EB8372CAB0EDC5B9989B546C((&L_26), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Action_1_Invoke_m11166A7C8C7C111548613292E4B0180485EE0C85(L_24, L_26, /*hidden argument*/Action_1_Invoke_m11166A7C8C7C111548613292E4B0180485EE0C85_RuntimeMethod_var);
	}

IL_00a6:
	{
		goto IL_0179;
	}

IL_00ac:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_27 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdatedLegacy_9();
		V_10 = L_27;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_28 = V_10;
		V_12 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 *)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_29 = V_12;
		if (!L_29)
		{
			goto IL_00c8;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_30 = V_10;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_31 = V_0;
		NullCheck(L_30);
		SourceEventHandler_Invoke_m163F01C96B33EB47472C45CC162C917E48AE8A18(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * L_32 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdated_4();
		V_11 = L_32;
		Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * L_33 = V_11;
		V_13 = (bool)((!(((RuntimeObject*)(Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F *)L_33) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_34 = V_13;
		if (!L_34)
		{
			goto IL_00e8;
		}
	}
	{
		Action_1_t1139EA6D3AAEA4268299B03354F9AAFA6FF4501F * L_35 = V_11;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_36 = V_0;
		InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  L_37;
		memset((&L_37), 0, sizeof(L_37));
		InteractionSourceUpdatedEventArgs__ctor_m353AFEE49D4D2694117D0822C2CEB42EA5BB0AF1((&L_37), L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Action_1_Invoke_m054B02D80AA8A155248277C0B0F7441552F91C5F(L_35, L_37, /*hidden argument*/Action_1_Invoke_m054B02D80AA8A155248277C0B0F7441552F91C5F_RuntimeMethod_var);
	}

IL_00e8:
	{
		goto IL_0179;
	}

IL_00ee:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_38 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressedLegacy_7();
		V_14 = L_38;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_39 = V_14;
		V_16 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 *)L_39) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_40 = V_16;
		if (!L_40)
		{
			goto IL_010a;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_41 = V_14;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_42 = V_0;
		NullCheck(L_41);
		SourceEventHandler_Invoke_m163F01C96B33EB47472C45CC162C917E48AE8A18(L_41, L_42, /*hidden argument*/NULL);
	}

IL_010a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * L_43 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressed_2();
		V_15 = L_43;
		Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * L_44 = V_15;
		V_17 = (bool)((!(((RuntimeObject*)(Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D *)L_44) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_45 = V_17;
		if (!L_45)
		{
			goto IL_012b;
		}
	}
	{
		Action_1_t5AE521F28438238D49C5EA9C15D41A9C5874004D * L_46 = V_15;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_47 = V_0;
		int32_t L_48 = ___pressType2;
		InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  L_49;
		memset((&L_49), 0, sizeof(L_49));
		InteractionSourcePressedEventArgs__ctor_m924AC3E376255E74EFE8A9ED5E2B4B224E549D93((&L_49), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Action_1_Invoke_m1E896EB893D67557323EAEAB7208747E555F68DA(L_46, L_49, /*hidden argument*/Action_1_Invoke_m1E896EB893D67557323EAEAB7208747E555F68DA_RuntimeMethod_var);
	}

IL_012b:
	{
		goto IL_0179;
	}

IL_012e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_50 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleasedLegacy_8();
		V_18 = L_50;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_51 = V_18;
		V_20 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 *)L_51) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_52 = V_20;
		if (!L_52)
		{
			goto IL_014a;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_53 = V_18;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_54 = V_0;
		NullCheck(L_53);
		SourceEventHandler_Invoke_m163F01C96B33EB47472C45CC162C917E48AE8A18(L_53, L_54, /*hidden argument*/NULL);
	}

IL_014a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * L_55 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleased_3();
		V_19 = L_55;
		Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * L_56 = V_19;
		V_21 = (bool)((!(((RuntimeObject*)(Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E *)L_56) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_016b;
		}
	}
	{
		Action_1_t21D806B3AD18A9A24228822CFB4115C251978D5E * L_58 = V_19;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_59 = V_0;
		int32_t L_60 = ___pressType2;
		InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  L_61;
		memset((&L_61), 0, sizeof(L_61));
		InteractionSourceReleasedEventArgs__ctor_m0EF51D53929B41C743EDD821CEE530002E9EB813((&L_61), L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		Action_1_Invoke_mB4720F2F8E65B00A295891324ACA79D4BC170F43(L_58, L_61, /*hidden argument*/Action_1_Invoke_mB4720F2F8E65B00A295891324ACA79D4BC170F43_RuntimeMethod_var);
	}

IL_016b:
	{
		goto IL_0179;
	}

IL_016e:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_62 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_62, _stringLiteralE56BDFDA02CDB1AF069D764166DBFD5EF4DC1A56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, InteractionManager_OnSourceEvent_mB55EEF765E1D550286FD7D7880D3D5D33C247B7A_RuntimeMethod_var);
	}

IL_0179:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler__ctor_mCD940E9C34D52D0376EB4699EEE72803837CB3FC (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_m163F01C96B33EB47472C45CC162C917E48AE8A18 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
					else
						GenericVirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
					else
						VirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___state0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SourceEventHandler_BeginInvoke_m0315EE1544EA66979ECA93EB8BFA2ACB4ED3B3D0 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SourceEventHandler_BeginInvoke_m0315EE1544EA66979ECA93EB8BFA2ACB4ED3B3D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_EndInvoke_m4E3A50E9A530C8998D0B34D5B7583446DE840F36 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_mBF3F19CE2AC11E5BC1824DD6B04C22BB63AA82DC (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionSource_Equals_mBF3F19CE2AC11E5BC1824DD6B04C22BB63AA82DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		void* L_1 = alloca(sizeof(Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A ));
		UnBoxNullable(((RuntimeObject *)IsInst((RuntimeObject*)L_0, Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A_il2cpp_TypeInfo_var)), InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A *)((Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A *)L_1)));
		bool L_2 = Nullable_1_get_HasValue_m44A550F654882D71C63693155C4519BD024BC75A_inline((Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m44A550F654882D71C63693155C4519BD024BC75A_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_002f;
	}

IL_001f:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_4 = Nullable_1_get_Value_m9AE1CE771E31C8087AF29B633CBB4AC116A4F120((Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m9AE1CE771E31C8087AF29B633CBB4AC116A4F120_RuntimeMethod_var);
		bool L_5 = InteractionSource_Equals_m5BEEBC6B0407DBF58C2272554FF1F020CB29939D((InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *)__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool InteractionSource_Equals_mBF3F19CE2AC11E5BC1824DD6B04C22BB63AA82DC_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + _offset);
	return InteractionSource_Equals_mBF3F19CE2AC11E5BC1824DD6B04C22BB63AA82DC(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m5BEEBC6B0407DBF58C2272554FF1F020CB29939D (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = ___other0;
		uint32_t L_1 = L_0.get_m_Id_0();
		uint32_t L_2 = __this->get_m_Id_0();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool InteractionSource_Equals_m5BEEBC6B0407DBF58C2272554FF1F020CB29939D_AdjustorThunk (RuntimeObject * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + _offset);
	return InteractionSource_Equals_m5BEEBC6B0407DBF58C2272554FF1F020CB29939D(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m221E9FE4C80372B6EB7D4E794798CDC880B3B7F7 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t InteractionSource_GetHashCode_m221E9FE4C80372B6EB7D4E794798CDC880B3B7F7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + _offset);
	return InteractionSource_GetHashCode_m221E9FE4C80372B6EB7D4E794798CDC880B3B7F7(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_m6D7D7333353F739BEC5F7F3F8A65EB85C3C63527 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceDetectedEventArgs_set_state_m6D7D7333353F739BEC5F7F3F8A65EB85C3C63527_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *>(__this + _offset);
	InteractionSourceDetectedEventArgs_set_state_m6D7D7333353F739BEC5F7F3F8A65EB85C3C63527_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m55F8A82983CB5A79B70B8BD39741881DA8E6E611 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceDetectedEventArgs_set_state_m6D7D7333353F739BEC5F7F3F8A65EB85C3C63527_inline((InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceDetectedEventArgs__ctor_m55F8A82983CB5A79B70B8BD39741881DA8E6E611_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *>(__this + _offset);
	InteractionSourceDetectedEventArgs__ctor_m55F8A82983CB5A79B70B8BD39741881DA8E6E611(_thisAdjusted, ___state0, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m7041EE5109E7F200AADA34928F13A233A224B4AA (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceLostEventArgs_set_state_m7041EE5109E7F200AADA34928F13A233A224B4AA_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *>(__this + _offset);
	InteractionSourceLostEventArgs_set_state_m7041EE5109E7F200AADA34928F13A233A224B4AA_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_mC481895F17456F17EB8372CAB0EDC5B9989B546C (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceLostEventArgs_set_state_m7041EE5109E7F200AADA34928F13A233A224B4AA_inline((InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceLostEventArgs__ctor_mC481895F17456F17EB8372CAB0EDC5B9989B546C_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *>(__this + _offset);
	InteractionSourceLostEventArgs__ctor_mC481895F17456F17EB8372CAB0EDC5B9989B546C(_thisAdjusted, ___state0, method);
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_m97D0EBF13AF69E6D335F6370B432CEFFBD9B906B (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs_set_state_m97D0EBF13AF69E6D335F6370B432CEFFBD9B906B_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + _offset);
	InteractionSourcePressedEventArgs_set_state_m97D0EBF13AF69E6D335F6370B432CEFFBD9B906B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_mEB14B6518D14C32A06EACEE69BC92EBBAC09464C (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs_set_pressType_mEB14B6518D14C32A06EACEE69BC92EBBAC09464C_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + _offset);
	InteractionSourcePressedEventArgs_set_pressType_mEB14B6518D14C32A06EACEE69BC92EBBAC09464C_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m924AC3E376255E74EFE8A9ED5E2B4B224E549D93 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourcePressedEventArgs_set_state_m97D0EBF13AF69E6D335F6370B432CEFFBD9B906B_inline((InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourcePressedEventArgs_set_pressType_mEB14B6518D14C32A06EACEE69BC92EBBAC09464C_inline((InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs__ctor_m924AC3E376255E74EFE8A9ED5E2B4B224E549D93_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + _offset);
	InteractionSourcePressedEventArgs__ctor_m924AC3E376255E74EFE8A9ED5E2B4B224E549D93(_thisAdjusted, ___state0, ___pressType1, method);
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mCB41DD881C5684C41424B7C520309687F91594C8 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs_set_state_mCB41DD881C5684C41424B7C520309687F91594C8_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + _offset);
	InteractionSourceReleasedEventArgs_set_state_mCB41DD881C5684C41424B7C520309687F91594C8_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m2BAA15BC545B9E42B2435142F92E420D899CE58B (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs_set_pressType_m2BAA15BC545B9E42B2435142F92E420D899CE58B_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + _offset);
	InteractionSourceReleasedEventArgs_set_pressType_m2BAA15BC545B9E42B2435142F92E420D899CE58B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_m0EF51D53929B41C743EDD821CEE530002E9EB813 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceReleasedEventArgs_set_state_mCB41DD881C5684C41424B7C520309687F91594C8_inline((InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourceReleasedEventArgs_set_pressType_m2BAA15BC545B9E42B2435142F92E420D899CE58B_inline((InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs__ctor_m0EF51D53929B41C743EDD821CEE530002E9EB813_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + _offset);
	InteractionSourceReleasedEventArgs__ctor_m0EF51D53929B41C743EDD821CEE530002E9EB813(_thisAdjusted, ___state0, ___pressType1, method);
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_m20ED7684DB97BB49996493461AF60C3CC25A6DBD (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceUpdatedEventArgs_set_state_m20ED7684DB97BB49996493461AF60C3CC25A6DBD_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *>(__this + _offset);
	InteractionSourceUpdatedEventArgs_set_state_m20ED7684DB97BB49996493461AF60C3CC25A6DBD_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_m353AFEE49D4D2694117D0822C2CEB42EA5BB0AF1 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceUpdatedEventArgs_set_state_m20ED7684DB97BB49996493461AF60C3CC25A6DBD_inline((InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceUpdatedEventArgs__ctor_m353AFEE49D4D2694117D0822C2CEB42EA5BB0AF1_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *>(__this + _offset);
	InteractionSourceUpdatedEventArgs__ctor_m353AFEE49D4D2694117D0822C2CEB42EA5BB0AF1(_thisAdjusted, ___state0, method);
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_mE231A9CDD03943B5E8F171C977313B3F956ED2ED (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::InvokeGetAsyncDelegate(UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_InvokeGetAsyncDelegate_m3A1F4176FFDBF3BCF1B35BCCDC359803AB298E90 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * ___handler0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_InvokeGetAsyncDelegate_m3A1F4176FFDBF3BCF1B35BCCDC359803AB298E90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_1 = (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *)il2cpp_codegen_object_new(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		WorldAnchorStore__ctor_mE231A9CDD03943B5E8F171C977313B3F956ED2ED(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->set_s_Instance_1(L_1);
		GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * L_2 = ___handler0;
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_3 = ((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->get_s_Instance_1();
		NullCheck(L_2);
		GetAsyncDelegate_Invoke_mCA3B7BA14A79F0D59096607F38F3D8CBFAD3E351(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Dispose_m8EC471ED39714A14AE55267CA9E93C72B076E0A1 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Dispose_m8EC471ED39714A14AE55267CA9E93C72B076E0A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		WorldAnchorStore_Internal_Destroy_m514015751178D82F76BABB111CCFE14BBE493B62(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m514015751178D82F76BABB111CCFE14BBE493B62 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorStore_Internal_Destroy_m514015751178D82F76BABB111CCFE14BBE493B62_ftn) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *);
	static WorldAnchorStore_Internal_Destroy_m514015751178D82F76BABB111CCFE14BBE493B62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Internal_Destroy_m514015751178D82F76BABB111CCFE14BBE493B62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__cctor_m36A570239CCFA1258C8D8473AA0C9F031772B45A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore__cctor_m36A570239CCFA1258C8D8473AA0C9F031772B45A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->set_s_Instance_1((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *)NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___store0' to native representation
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke ____store0_marshaled = {};
	if (___store0 != NULL)
	{
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(*___store0, ____store0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___store0 != NULL ? (&____store0_marshaled) : NULL);

	// Marshaling cleanup of parameter '___store0' native representation
	if ((&____store0_marshaled) != NULL)
	{
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(____store0_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate__ctor_mA88A924E48160837AB27479B06B484A66B233A69 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_mCA3B7BA14A79F0D59096607F38F3D8CBFAD3E351 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___store0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___store0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___store0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___store0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
					else
						GenericVirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___store0);
					else
						VirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___store0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___store0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::BeginInvoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetAsyncDelegate_BeginInvoke_m75173E0B32C27F82966F5B5FDB894D73C1DA6154 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___store0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_EndInvoke_mE79DA714B744A7E982CF7E66C104D6E503537A10 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m2BACDFF6450151A0220B238815D11E90B73768A0 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch__ctor_m2BACDFF6450151A0220B238815D11E90B73768A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Finalize_m13324065F7816E771CEDE431CEEDC55A5762A52A (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Finalize_m13324065F7816E771CEDE431CEEDC55A5762A52A_MetadataUsageId);
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
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_0016:
		{
			WorldAnchorTransferBatch_DisposeThreaded_Internal_m359D92541AE512D01ED4DCD2194969701748D4BC(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x34, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m359D92541AE512D01ED4DCD2194969701748D4BC (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_DisposeThreaded_Internal_m359D92541AE512D01ED4DCD2194969701748D4BC_ftn) (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *);
	static WorldAnchorTransferBatch_DisposeThreaded_Internal_m359D92541AE512D01ED4DCD2194969701748D4BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_DisposeThreaded_Internal_m359D92541AE512D01ED4DCD2194969701748D4BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_m34D43542BD00391CB9CFC3302736E08271C75450 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Dispose_m34D43542BD00391CB9CFC3302736E08271C75450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		WorldAnchorTransferBatch_Dispose_Internal_m91DECC289EF54AEE478286BC6FB3DFBD6CA3BF5D(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m91DECC289EF54AEE478286BC6FB3DFBD6CA3BF5D (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_Dispose_Internal_m91DECC289EF54AEE478286BC6FB3DFBD6CA3BF5D_ftn) (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *);
	static WorldAnchorTransferBatch_Dispose_Internal_m91DECC289EF54AEE478286BC6FB3DFBD6CA3BF5D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_Dispose_Internal_m91DECC289EF54AEE478286BC6FB3DFBD6CA3BF5D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationDataAvailableDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationDataAvailableDelegate_mBEE04DC058543309BC196AF492DEF5D9EF9ACA3A (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * ___onSerializationDataAvailable0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	{
		SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * L_0 = ___onSerializationDataAvailable0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data1;
		NullCheck(L_0);
		SerializationDataAvailableDelegate_Invoke_m9917C362E207EE225AF3C332447394307A46B30B(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationCompleteDelegate_mE698A65E1CD3EA6CA2F3A8DCE8AD1B4CFE50EC8C (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * ___onSerializationComplete0, int32_t ___completionReason1, const RuntimeMethod* method)
{
	{
		SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * L_0 = ___onSerializationComplete0;
		int32_t L_1 = ___completionReason1;
		NullCheck(L_0);
		SerializationCompleteDelegate_Invoke_m1BF94B8AE9414E794852F2F6DD61FB4328A9B82D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorDeserializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m57E0D2F2281DCE0C2EBB39DDAC97168CB2BDCC5E (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * ___onDeserializationComplete0, int32_t ___completionReason1, intptr_t ___nativePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m57E0D2F2281DCE0C2EBB39DDAC97168CB2BDCC5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * V_0 = NULL;
	{
		intptr_t L_0 = ___nativePtr2;
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * L_1 = (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *)il2cpp_codegen_object_new(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_il2cpp_TypeInfo_var);
		WorldAnchorTransferBatch__ctor_m2BACDFF6450151A0220B238815D11E90B73768A0(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * L_2 = ___onDeserializationComplete0;
		int32_t L_3 = ___completionReason1;
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * L_4 = V_0;
		NullCheck(L_2);
		DeserializationCompleteDelegate_Invoke_mCEA98ECCC45B09FA4F4162E1AE8C28CA02A78804(L_2, L_3, L_4, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___deserializedTransferBatch1' to native representation
	WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke ____deserializedTransferBatch1_marshaled = {};
	if (___deserializedTransferBatch1 != NULL)
	{
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(*___deserializedTransferBatch1, ____deserializedTransferBatch1_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0, ___deserializedTransferBatch1 != NULL ? (&____deserializedTransferBatch1_marshaled) : NULL);

	// Marshaling cleanup of parameter '___deserializedTransferBatch1' native representation
	if ((&____deserializedTransferBatch1_marshaled) != NULL)
	{
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(____deserializedTransferBatch1_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate__ctor_mDAE0A9554E1891858470A8424EDB23EC274148B4 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_mCEA98ECCC45B09FA4F4162E1AE8C28CA02A78804 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
					else
						GenericVirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
					else
						VirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___completionReason0) - 1), ___deserializedTransferBatch1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeserializationCompleteDelegate_BeginInvoke_m94ADEB74C6913D4EE08EE9CCA607315972BAB836 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeserializationCompleteDelegate_BeginInvoke_m94ADEB74C6913D4EE08EE9CCA607315972BAB836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var, &___completionReason0);
	__d_args[1] = ___deserializedTransferBatch1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_EndInvoke_m489D29A41009A5A4C51A972A89FCBA6652FD4942 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate__ctor_m46860365720AFB0FD92AC2C66DD018B9E9785F12 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m1BF94B8AE9414E794852F2F6DD61FB4328A9B82D (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___completionReason0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationCompleteDelegate_BeginInvoke_m313D0F44768BEF200242DD2EB01FDEA4FDE4B4B1 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationCompleteDelegate_BeginInvoke_m313D0F44768BEF200242DD2EB01FDEA4FDE4B4B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var, &___completionReason0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_EndInvoke_m27E069835ADFBF5462E146BD800565CFCAB10147 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate__ctor_m508F0AC628F9C306559FA9B784C29BC47E8C5C85 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m9917C362E207EE225AF3C332447394307A46B30B (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___data0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationDataAvailableDelegate_BeginInvoke_mF54B3437BAA965C8E4DC2BACFD1888A80F543A2B (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_EndInvoke_mB02B9688EC803A7CBA71EECD653D74EED30EEA3B (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled)
{
	int32_t unmarshaled_m_Observer_temp_0 = 0;
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled)
{
	int32_t unmarshaled_m_Observer_temp_0 = 0;
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceChangedEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate,System.Int32,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceChangedEvent_mE44A8C368BF3A26C0A833BA5F7597BC0222162DA (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged0, int32_t ___surfaceId1, int32_t ___changeType2, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds3, int64_t ___updateTime4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_InvokeSurfaceChangedEvent_mE44A8C368BF3A26C0A833BA5F7597BC0222162DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_0 = ___onSurfaceChanged0;
		V_0 = (bool)((!(((RuntimeObject*)(SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___surfaceId1;
		(&V_1)->set_handle_0(L_2);
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_3 = ___onSurfaceChanged0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_4 = V_1;
		int32_t L_5 = ___changeType2;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_6 = ___bounds3;
		int64_t L_7 = ___updateTime4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8 = DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676(L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		SurfaceChangedDelegate_Invoke_m5AAAB0934142DE3AAF6CAA5E0471B716897E6D0C(L_3, L_4, L_5, L_6, L_8, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceDataReadyEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceDataReadyEvent_m108C2FEB49C3DE7BACCF5B3AE1F698041B40A433 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady0, int32_t ___surfaceId1, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh2, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor3, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider4, float ___trisPerCubicMeter5, bool ___bakeCollider6, bool ___outputWritten7, float ___elapsedBakeTimeSeconds8, const RuntimeMethod* method)
{
	bool V_0 = false;
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_0 = ___onDataReady0;
		V_0 = (bool)((!(((RuntimeObject*)(SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_2 = (&V_1)->get_address_of_id_0();
		int32_t L_3 = ___surfaceId1;
		L_2->set_handle_0(L_3);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_4 = ___outputMesh2;
		(&V_1)->set_outputMesh_1(L_4);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_5 = ___outputAnchor3;
		(&V_1)->set_outputAnchor_2(L_5);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_6 = ___outputCollider4;
		(&V_1)->set_outputCollider_3(L_6);
		float L_7 = ___trisPerCubicMeter5;
		(&V_1)->set_trianglesPerCubicMeter_4(L_7);
		bool L_8 = ___bakeCollider6;
		(&V_1)->set_bakeCollider_5(L_8);
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_9 = ___onDataReady0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_10 = V_1;
		bool L_11 = ___outputWritten7;
		float L_12 = ___elapsedBakeTimeSeconds8;
		NullCheck(L_9);
		SurfaceDataReadyDelegate_Invoke_m88521E2CBDDBEF5DF71275D9E2389FBA3B1776EC(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_004f:
	{
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
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_m6E9620751EFADC66E5714E9FC73D25DB8BBFD6C6 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_m5AAAB0934142DE3AAF6CAA5E0471B716897E6D0C (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					else
						GenericVirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					else
						VirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___surfaceId0) - 1), ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceChangedDelegate_BeginInvoke_m35FB4F7B04EEF4C1106C5CEC2E1D8C6258E95588 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceChangedDelegate_BeginInvoke_m35FB4F7B04EEF4C1106C5CEC2E1D8C6258E95588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_il2cpp_TypeInfo_var, &___surfaceId0);
	__d_args[1] = Box(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var, &___bounds2);
	__d_args[3] = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &___updateTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_EndInvoke_m2D8268CA0390543BDAD1CF550FA380769FC6F1CE (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_m895C85F78ADBA5530DA9863212A92A91B03494F4 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m88521E2CBDDBEF5DF71275D9E2389FBA3B1776EC (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					else
						GenericVirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					else
						VirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___bakedData0) - 1), ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyDelegate_BeginInvoke_mCDCA0BE56D51A771AFB3E63E0B92B7B7C1E74D57 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyDelegate_BeginInvoke_mCDCA0BE56D51A771AFB3E63E0B92B7B7C1E74D57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var, &___bakedData0);
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___outputWritten1);
	__d_args[2] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_EndInvoke_m33AD2E01CE7C79A9D163A8372D769E606E32272A (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor::Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchor_Internal_TriggerEventOnTrackingLost_m45D702037C7CC569FAED6391F8071D2CEF0F661F (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_Internal_TriggerEventOnTrackingLost_m45D702037C7CC569FAED6391F8071D2CEF0F661F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___worldAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mEFBC589592713623C4695D03FD4AD0842D094B42(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_2 = ___worldAnchor0;
		NullCheck(L_2);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_3 = L_2->get_OnTrackingChanged_4();
		G_B3_0 = ((!(((RuntimeObject*)(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_5 = ___worldAnchor0;
		NullCheck(L_5);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_6 = L_5->get_OnTrackingChanged_4();
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_7 = ___worldAnchor0;
		bool L_8 = ___located1;
		NullCheck(L_6);
		OnTrackingChangedDelegate_Invoke_m980F10AD6C9B67FFABA5AD2D21D0013E868C57B6(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_002a:
	{
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
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_mE36B339F2D4C21BFCA89B2400BA60CBEA4657166 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_m980F10AD6C9B67FFABA5AD2D21D0013E868C57B6 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___located1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
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
					typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
					else
						VirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___worldAnchor0) - 1), ___located1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTrackingChangedDelegate_BeginInvoke_m706FEA39D33F48783EB06F8CFC449FEBB50E1F3E (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnTrackingChangedDelegate_BeginInvoke_m706FEA39D33F48783EB06F8CFC449FEBB50E1F3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___worldAnchor0;
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___located1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_EndInvoke_m659E6E0878D6FE2700CF740EA67D608A810DFCE7 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldManager::Internal_TriggerPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManager_Internal_TriggerPositionalLocatorStateChanged_m7E9FC71530741E56E12BC115989B3D6F19978983 (int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldManager_Internal_TriggerPositionalLocatorStateChanged_m7E9FC71530741E56E12BC115989B3D6F19978983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_0 = ((WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		V_0 = (bool)((!(((RuntimeObject*)(OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_2 = ((WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		int32_t L_3 = ___oldState0;
		int32_t L_4 = ___newState1;
		NullCheck(L_2);
		OnPositionalLocatorStateChangedDelegate_Invoke_m1B077FD5236215B4B1BA99225F00688523A52213(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___oldState0, ___newState1);

}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate__ctor_m0272438DD35D91ED879EFC4B5AB5D9F1D74454EC (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_m1B077FD5236215B4B1BA99225F00688523A52213 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldState0, ___newState1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldState0, ___newState1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___oldState0) - 1), ___newState1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPositionalLocatorStateChangedDelegate_BeginInvoke_m13A0CD6DA98691DEC135C81A34036B05F1885041 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPositionalLocatorStateChangedDelegate_BeginInvoke_m13A0CD6DA98691DEC135C81A34036B05F1885041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var, &___oldState0);
	__d_args[1] = Box(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var, &___newState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_EndInvoke_mA0AB74CF03526F76C249E2EF2933897A208508A2 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_InvokeDeviceLoaded_mC97A03B3DFD626D9779653E5CE335163F85ECAF4 (String_t* ___loadedDeviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_InvokeDeviceLoaded_mC97A03B3DFD626D9779653E5CE335163F85ECAF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t4109A209928375CA800C9D77C810A872B64E0632 * L_0 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t4109A209928375CA800C9D77C810A872B64E0632 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t4109A209928375CA800C9D77C810A872B64E0632 * L_2 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		String_t* L_3 = ___loadedDeviceName0;
		NullCheck(L_2);
		Action_1_Invoke_m4049ED1CC41C79988869E77C3BDFF0FB02924EF7(L_2, L_3, /*hidden argument*/Action_1_Invoke_m4049ED1CC41C79988869E77C3BDFF0FB02924EF7_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice__cctor_m487620F9876D1B1BA401AC40F1EA2641DAE21A5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice__cctor_m487620F9876D1B1BA401AC40F1EA2641DAE21A5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->set_deviceLoaded_0((Action_1_t4109A209928375CA800C9D77C810A872B64E0632 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m5312BF445ECAE6AE377CB058AC59E653EDECE180_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m23D672EFF8FAE036DBA40375F9397146B6C0DDC5_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_m6D7D7333353F739BEC5F7F3F8A65EB85C3C63527_inline (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m7041EE5109E7F200AADA34928F13A233A224B4AA_inline (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_m97D0EBF13AF69E6D335F6370B432CEFFBD9B906B_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_mEB14B6518D14C32A06EACEE69BC92EBBAC09464C_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mCB41DD881C5684C41424B7C520309687F91594C8_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m2BAA15BC545B9E42B2435142F92E420D899CE58B_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_m20ED7684DB97BB49996493461AF60C3CC25A6DBD_inline (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m44A550F654882D71C63693155C4519BD024BC75A_gshared_inline (Nullable_1_t58792BC69D663C7682DBA90CB5F4E98EBC0CF71A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
