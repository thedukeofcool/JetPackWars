#include "pch-cpp.hpp"

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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>[]
struct EntryU5BU5D_t8896891E9DDF11373E513B730F8BC3A1C1A511B2;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>[]
struct EntryU5BU5D_t7E283CE6C88BF1DF0DBCB399F07FA5BAFC6FF36A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct KeyCollection_tF822DE3DE36FAEB019C2C888342A459524FE7881;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct KeyCollection_t48F15C75109CC275713CDAF57187736A1C4DF873;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct ValueCollection_t22109FFFE1CF91E01266557639F934A3D1F3ED2A;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct ValueCollection_t4570917EBE5D4FD65BC458FAECE220E22C1A632A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord>
struct IEqualityComparer_1_tC2ACA0765678CF0F5621C65BA059D29D22EB4709;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/HeightmapChangedCallback
struct HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D;
// UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/TextureChangedCallback
struct TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups
struct TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap
struct TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter
struct TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Terrain
struct Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943;
// UnityEngine.TerrainData
struct TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2A2E27742C58AAEDD9D22D0117DA49FA64C8B658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD3F0EB5FA91806F263D90DDBC36A7A04E56295C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE277C8E1CB612482ED81C459D2E118E63F597813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m548F1852207722F7C98264E9DEDB65FB4111691A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mFFDF537C136F32AF3BC59B0E79FC2258A569E4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6A61D4908D106E35F398C251FB0A43355E2B21C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98F156DEE1EF4C5F0262F2ACB3EA477EE3D2959F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB21B65797609CC5295685B76483E7A350C3FB058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m31BCD673C55E11FEB43276C868D67B37D5E02854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m771947FC9A0F32357AD58AC37263F59C5032A904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mBA60D218F2C124916BAA534A4EEA9A1E3AE1EE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1AF30CB4B9D460F0CBE9944BBBE800205A8B84AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m49E0868CF374239FC10BCEED1A260C935FC1DE9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m97E08F7E3311A7E5DF4C2248DA39BE0540BE91A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2FF0CBBB767AD17166E3DA46EB9AFA6046FACB39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m541BE9783621E35A42C1461EA63CBC3D69C9CD93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFF4D43794B971FC90A2B47EF84A1FF34AB040B95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m508F8DCF999F7E47A12796EF27E3234486C64E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD176C21D2ACF5548F4D72472EA207D870099E2BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF0B89C56910CF10525BC633B349FE727F9A38090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m2D3F36C29F09DA9A52C30569F8F12E86ACEBBC75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m5BF4A3317EF17E15E6150BE58650741877B5756A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD46DD3109E29743E3836B6FD3EADF2190ECAB928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCreateFromPlacementU3Eb__0_m6B066523F804BB3ABD10772CA56DE923FD525526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CCollectTerrainsU3Eb__0_mD45D325EBC84DFF33AC7BAF4E765D6BC7E19A93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t HeightmapChangedCallback_BeginInvoke_mC8BABA393864B6E806E9C3CA08CD2F9D9DBD6580_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainCallbacks_InvokeHeightmapChangedCallback_m462967DB354DFDBCB483E71731C0F1438267A13A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainCallbacks_InvokeTextureChangedCallback_mF109EBB8B343C6134F55CFDF37AFEE940391CBC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainData__cctor_m45E4566CDE341BEAED3E65B4A7E400776DF62F46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainData__ctor_m3BBCD4C3B3B6BE91D51C237C3BA07334B3AAB982_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainGroups__ctor_m0F51F7F60FB4A366FDA7B9C880836631E56697C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap_AddTerrainInternal_m02FA165442196D07C2191BAE7C3EC84ADA0C7963_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap_CreateFromPlacement_m19C1F6399D389408B84D6C07E6BAC991042737C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap_CreateFromPlacement_mED572DA2F02D45277B339499C29D88F3770D1B50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap_TryToAddTerrain_m2ABC0D638EBDF557BEA162967D260C12C55A471B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap_ValidateTerrain_m3C60E8A81717716090643FFAAEA7E564B2723DBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainMap__ctor_m28A0633C8F985490C2F75F67E2C485432AA03F7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainUtility_AutoConnect_m2A841BB573F4B7511419D0D468D28F2EB51C4397_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainUtility_CollectTerrains_mC48DBF7A1976094C25915D3CABCB078F7685F70F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureChangedCallback_BeginInvoke_mD127790BAB43ABC0BA249E7F61F2FBC8492BAFD2_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF1895192DB0786D7B32E637E7538ADA625D10FB5 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,UnityEngine.Terrain>
struct  KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710, ___dictionary_0)); }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap>
struct  Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8896891E9DDF11373E513B730F8BC3A1C1A511B2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF822DE3DE36FAEB019C2C888342A459524FE7881 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t22109FFFE1CF91E01266557639F934A3D1F3ED2A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___entries_1)); }
	inline EntryU5BU5D_t8896891E9DDF11373E513B730F8BC3A1C1A511B2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8896891E9DDF11373E513B730F8BC3A1C1A511B2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8896891E9DDF11373E513B730F8BC3A1C1A511B2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___keys_7)); }
	inline KeyCollection_tF822DE3DE36FAEB019C2C888342A459524FE7881 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF822DE3DE36FAEB019C2C888342A459524FE7881 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF822DE3DE36FAEB019C2C888342A459524FE7881 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ___values_8)); }
	inline ValueCollection_t22109FFFE1CF91E01266557639F934A3D1F3ED2A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t22109FFFE1CF91E01266557639F934A3D1F3ED2A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t22109FFFE1CF91E01266557639F934A3D1F3ED2A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,UnityEngine.Terrain>
struct  Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7E283CE6C88BF1DF0DBCB399F07FA5BAFC6FF36A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4570917EBE5D4FD65BC458FAECE220E22C1A632A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___entries_1)); }
	inline EntryU5BU5D_t7E283CE6C88BF1DF0DBCB399F07FA5BAFC6FF36A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7E283CE6C88BF1DF0DBCB399F07FA5BAFC6FF36A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7E283CE6C88BF1DF0DBCB399F07FA5BAFC6FF36A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___keys_7)); }
	inline KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ___values_8)); }
	inline ValueCollection_t4570917EBE5D4FD65BC458FAECE220E22C1A632A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4570917EBE5D4FD65BC458FAECE220E22C1A632A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4570917EBE5D4FD65BC458FAECE220E22C1A632A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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

// UnityEngine.Experimental.TerrainAPI.TerrainCallbacks
struct  TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5  : public RuntimeObject
{
public:

public:
};

struct TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_StaticFields
{
public:
	// UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_HeightmapChangedCallback UnityEngine.Experimental.TerrainAPI.TerrainCallbacks::heightmapChanged
	HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * ___heightmapChanged_0;
	// UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_TextureChangedCallback UnityEngine.Experimental.TerrainAPI.TerrainCallbacks::textureChanged
	TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * ___textureChanged_1;

public:
	inline static int32_t get_offset_of_heightmapChanged_0() { return static_cast<int32_t>(offsetof(TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_StaticFields, ___heightmapChanged_0)); }
	inline HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * get_heightmapChanged_0() const { return ___heightmapChanged_0; }
	inline HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D ** get_address_of_heightmapChanged_0() { return &___heightmapChanged_0; }
	inline void set_heightmapChanged_0(HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * value)
	{
		___heightmapChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heightmapChanged_0), (void*)value);
	}

	inline static int32_t get_offset_of_textureChanged_1() { return static_cast<int32_t>(offsetof(TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_StaticFields, ___textureChanged_1)); }
	inline TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * get_textureChanged_1() const { return ___textureChanged_1; }
	inline TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E ** get_address_of_textureChanged_1() { return &___textureChanged_1; }
	inline void set_textureChanged_1(TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * value)
	{
		___textureChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureChanged_1), (void*)value);
	}
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility
struct  TerrainUtility_t82C295A06EAAEA3D755971EBE55084B993C7FC7B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_0::onlyAutoConnectedTerrains
	bool ___onlyAutoConnectedTerrains_0;

public:
	inline static int32_t get_offset_of_onlyAutoConnectedTerrains_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A, ___onlyAutoConnectedTerrains_0)); }
	inline bool get_onlyAutoConnectedTerrains_0() const { return ___onlyAutoConnectedTerrains_0; }
	inline bool* get_address_of_onlyAutoConnectedTerrains_0() { return &___onlyAutoConnectedTerrains_0; }
	inline void set_onlyAutoConnectedTerrains_0(bool value)
	{
		___onlyAutoConnectedTerrains_0 = value;
	}
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_1
struct  U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407  : public RuntimeObject
{
public:
	// UnityEngine.Terrain UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_1::t
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___t_0;
	// UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_0 UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407, ___t_0)); }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * get_t_0() const { return ___t_0; }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_<>c__DisplayClass4_0::groupID
	int32_t ___groupID_0;

public:
	inline static int32_t get_offset_of_groupID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002, ___groupID_0)); }
	inline int32_t get_groupID_0() const { return ___groupID_0; }
	inline int32_t* get_address_of_groupID_0() { return &___groupID_0; }
	inline void set_groupID_0(int32_t value)
	{
		___groupID_0 = value;
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap>
struct  KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819, ___value_1)); }
	inline TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * get_value_1() const { return ___value_1; }
	inline TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainGroups
struct  TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5  : public Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096
{
public:

public:
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord
struct  TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA 
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord::tileZ
	int32_t ___tileZ_1;

public:
	inline static int32_t get_offset_of_tileX_0() { return static_cast<int32_t>(offsetof(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA, ___tileX_0)); }
	inline int32_t get_tileX_0() const { return ___tileX_0; }
	inline int32_t* get_address_of_tileX_0() { return &___tileX_0; }
	inline void set_tileX_0(int32_t value)
	{
		___tileX_0 = value;
	}

	inline static int32_t get_offset_of_tileZ_1() { return static_cast<int32_t>(offsetof(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA, ___tileZ_1)); }
	inline int32_t get_tileZ_1() const { return ___tileZ_1; }
	inline int32_t* get_address_of_tileZ_1() { return &___tileZ_1; }
	inline void set_tileZ_1(int32_t value)
	{
		___tileZ_1 = value;
	}
};


// UnityEngine.RectInt
struct  RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
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


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,System.Object>
struct  Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___dictionary_0)); }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___current_3)); }
	inline KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap>
struct  Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF, ___dictionary_0)); }
	inline Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF, ___current_3)); }
	inline KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,System.Object>
struct  Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529, ___dictionary_0)); }
	inline Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529, ___currentKey_3)); }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  get_currentKey_3() const { return ___currentKey_3; }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  value)
	{
		___currentKey_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,UnityEngine.Terrain>
struct  Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C, ___dictionary_0)); }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C, ___currentKey_3)); }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  get_currentKey_3() const { return ___currentKey_3; }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  value)
	{
		___currentKey_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,System.Object>
struct  KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71, ___key_0)); }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  get_key_0() const { return ___key_0; }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,UnityEngine.Terrain>
struct  KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3, ___key_0)); }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  get_key_0() const { return ___key_0; }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3, ___value_1)); }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * get_value_1() const { return ___value_1; }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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

// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_ErrorCode
struct  ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A 
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_ErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.TerrainData_BoundaryValueType
struct  BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA 
{
public:
	// System.Int32 UnityEngine.TerrainData_BoundaryValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,System.Object>
struct  Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC, ___dictionary_0)); }
	inline Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC, ___current_3)); }
	inline KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,UnityEngine.Terrain>
struct  Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993, ___dictionary_0)); }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993, ___current_3)); }
	inline KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap
struct  TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::m_patchSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_patchSize_0;
	// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_ErrorCode UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::m_errorCode
	int32_t ___m_errorCode_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord,UnityEngine.Terrain> UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::m_terrainTiles
	Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * ___m_terrainTiles_2;

public:
	inline static int32_t get_offset_of_m_patchSize_0() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_patchSize_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_patchSize_0() const { return ___m_patchSize_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_patchSize_0() { return &___m_patchSize_0; }
	inline void set_m_patchSize_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_patchSize_0 = value;
	}

	inline static int32_t get_offset_of_m_errorCode_1() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_errorCode_1)); }
	inline int32_t get_m_errorCode_1() const { return ___m_errorCode_1; }
	inline int32_t* get_address_of_m_errorCode_1() { return &___m_errorCode_1; }
	inline void set_m_errorCode_1(int32_t value)
	{
		___m_errorCode_1 = value;
	}

	inline static int32_t get_offset_of_m_terrainTiles_2() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_terrainTiles_2)); }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * get_m_terrainTiles_2() const { return ___m_terrainTiles_2; }
	inline Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 ** get_address_of_m_terrainTiles_2() { return &___m_terrainTiles_2; }
	inline void set_m_terrainTiles_2(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * value)
	{
		___m_terrainTiles_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_terrainTiles_2), (void*)value);
	}
};


// UnityEngine.TerrainData
struct  TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_8;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_12;

public:
	inline static int32_t get_offset_of_k_MaximumResolution_4() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumResolution_4)); }
	inline int32_t get_k_MaximumResolution_4() const { return ___k_MaximumResolution_4; }
	inline int32_t* get_address_of_k_MaximumResolution_4() { return &___k_MaximumResolution_4; }
	inline void set_k_MaximumResolution_4(int32_t value)
	{
		___k_MaximumResolution_4 = value;
	}

	inline static int32_t get_offset_of_k_MinimumDetailResolutionPerPatch_5() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumDetailResolutionPerPatch_5)); }
	inline int32_t get_k_MinimumDetailResolutionPerPatch_5() const { return ___k_MinimumDetailResolutionPerPatch_5; }
	inline int32_t* get_address_of_k_MinimumDetailResolutionPerPatch_5() { return &___k_MinimumDetailResolutionPerPatch_5; }
	inline void set_k_MinimumDetailResolutionPerPatch_5(int32_t value)
	{
		___k_MinimumDetailResolutionPerPatch_5 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailResolutionPerPatch_6() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumDetailResolutionPerPatch_6)); }
	inline int32_t get_k_MaximumDetailResolutionPerPatch_6() const { return ___k_MaximumDetailResolutionPerPatch_6; }
	inline int32_t* get_address_of_k_MaximumDetailResolutionPerPatch_6() { return &___k_MaximumDetailResolutionPerPatch_6; }
	inline void set_k_MaximumDetailResolutionPerPatch_6(int32_t value)
	{
		___k_MaximumDetailResolutionPerPatch_6 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailPatchCount_7() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumDetailPatchCount_7)); }
	inline int32_t get_k_MaximumDetailPatchCount_7() const { return ___k_MaximumDetailPatchCount_7; }
	inline int32_t* get_address_of_k_MaximumDetailPatchCount_7() { return &___k_MaximumDetailPatchCount_7; }
	inline void set_k_MaximumDetailPatchCount_7(int32_t value)
	{
		___k_MaximumDetailPatchCount_7 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailsPerRes_8() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumDetailsPerRes_8)); }
	inline int32_t get_k_MaximumDetailsPerRes_8() const { return ___k_MaximumDetailsPerRes_8; }
	inline int32_t* get_address_of_k_MaximumDetailsPerRes_8() { return &___k_MaximumDetailsPerRes_8; }
	inline void set_k_MaximumDetailsPerRes_8(int32_t value)
	{
		___k_MaximumDetailsPerRes_8 = value;
	}

	inline static int32_t get_offset_of_k_MinimumAlphamapResolution_9() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumAlphamapResolution_9)); }
	inline int32_t get_k_MinimumAlphamapResolution_9() const { return ___k_MinimumAlphamapResolution_9; }
	inline int32_t* get_address_of_k_MinimumAlphamapResolution_9() { return &___k_MinimumAlphamapResolution_9; }
	inline void set_k_MinimumAlphamapResolution_9(int32_t value)
	{
		___k_MinimumAlphamapResolution_9 = value;
	}

	inline static int32_t get_offset_of_k_MaximumAlphamapResolution_10() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumAlphamapResolution_10)); }
	inline int32_t get_k_MaximumAlphamapResolution_10() const { return ___k_MaximumAlphamapResolution_10; }
	inline int32_t* get_address_of_k_MaximumAlphamapResolution_10() { return &___k_MaximumAlphamapResolution_10; }
	inline void set_k_MaximumAlphamapResolution_10(int32_t value)
	{
		___k_MaximumAlphamapResolution_10 = value;
	}

	inline static int32_t get_offset_of_k_MinimumBaseMapResolution_11() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumBaseMapResolution_11)); }
	inline int32_t get_k_MinimumBaseMapResolution_11() const { return ___k_MinimumBaseMapResolution_11; }
	inline int32_t* get_address_of_k_MinimumBaseMapResolution_11() { return &___k_MinimumBaseMapResolution_11; }
	inline void set_k_MinimumBaseMapResolution_11(int32_t value)
	{
		___k_MinimumBaseMapResolution_11 = value;
	}

	inline static int32_t get_offset_of_k_MaximumBaseMapResolution_12() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumBaseMapResolution_12)); }
	inline int32_t get_k_MaximumBaseMapResolution_12() const { return ___k_MaximumBaseMapResolution_12; }
	inline int32_t* get_address_of_k_MaximumBaseMapResolution_12() { return &___k_MaximumBaseMapResolution_12; }
	inline void set_k_MaximumBaseMapResolution_12(int32_t value)
	{
		___k_MaximumBaseMapResolution_12 = value;
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_HeightmapChangedCallback
struct  HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_TextureChangedCallback
struct  TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TerrainFilter
struct  TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Terrain
struct  Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * m_Items[1];

public:
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2AF545FF2F168855608215F8F1F692475C94FAED_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1645BFB62D1C6D053F16FA9B38B32EA6415C02A3_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF  Dictionary_2_GetEnumerator_m1AFB55593E014EE4BF89624643B1E2D6875335B6_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  Enumerator_get_Current_mA56503BE6C004270C14AEF4A7CB81681BE5AC5E6_gshared_inline (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m9B01C8256F7BED646EE29185D7981D4E7F9D5E78_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC  Dictionary_2_GetEnumerator_mA1554D2ACABE41FD704D4A476B75A878F019A152_gshared (Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Current()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71  Enumerator_get_Current_m8B20A69E792CACCABC998A9235B2758BBA756B71_gshared_inline (Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Key()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  KeyValuePair_2_get_Key_m489586A04E006E1FFB609DC5B8ED0AC76C94077E_gshared_inline (KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD77FA51D49AC6021A6F5AB647B03DDAB61753E91_gshared (Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA6D7A0EB6F1BEAA393690E05A51CF66C0A5FB89B_gshared (Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E3757A7C76D2E1DB0B77D03FF3DE7406334779A_gshared (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA0C519E84D909C2F0BEABF433D85E0EC6FB7C218_gshared (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6ADDCB87FFFEFF036AFA8BD1C3891CE9C6CA5F91_gshared (Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m40042E7D47D95C9B8F29B4FAAA2917528B612B34_gshared (Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD7161D9302459CDB0976D6050401B554FC44990E_gshared (Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7B483D20C1C1A4007A062DD022270EDB8B3336B2_gshared (Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t48F15C75109CC275713CDAF57187736A1C4DF873 * Dictionary_2_get_Keys_m87DD1460D87553B11C4809E15106D52A6DFE8DBC_gshared (Dictionary_2_tCEDD9C382FE6EB0644C0A97492A527B7E6498FB2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529  KeyCollection_GetEnumerator_m0AEB163C96FBF516D732F02F5EF591109FD51EBF_gshared (KeyCollection_t48F15C75109CC275713CDAF57187736A1C4DF873 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Current()
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  Enumerator_get_Current_m278DEBA811C3C38EB73A1739E0EDDE62599D12AA_gshared_inline (Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC25B1DCE70EF76D12BE7CDA1FE5F206C74C850FF_gshared (Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m20AE6316F208FE8F411DFCB9A75DA3E4144034AA_gshared (Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529 * __this, const RuntimeMethod* method);

// UnityEngine.Terrain[] UnityEngine.TerrainData::get_users()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* TerrainData_get_users_m8DC41DB242FD51BDA25CE01F0AC2C019E05F8F76 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/HeightmapChangedCallback::Invoke(UnityEngine.Terrain,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m448109C7B34CF2E85F8169EC6114B26BD6A26020 (HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___heightRegion1, bool ___synched2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/TextureChangedCallback::Invoke(UnityEngine.Terrain,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_mFDF242F3A48AEDFD11EAD04E58C6A72ECB9F00D6 (TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, String_t* ___textureName1, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___texelRegion2, bool ___synched3, const RuntimeMethod* method);
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA (const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_m6154CA9A0A36D91AAF20DE96C3EB6DFE82ED1915 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___left0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___top1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___right2, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___bottom3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mB038F4D9A4627591B0538620F34647540CFD82D7 (U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility::HasValidTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainUtility_HasValidTerrains_m2FFE4F426AD350C31BF37C7DDA9250C8CD72811A (const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainGroups__ctor_m0F51F7F60FB4A366FDA7B9C880836631E56697C6 (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m4A331E1FCBD6701DFDEC5CBA78D6D04E5A168399 (U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m870C1F088D05D0AEE9794DE5C726D21D3D324801 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Terrain::get_groupingID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mE277C8E1CB612482ED81C459D2E118E63F597813 (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2AF545FF2F168855608215F8F1F692475C94FAED_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainFilter__ctor_m910AB7323A854E3777E58F3BC04A72DD7D4DEDC9 (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::CreateFromPlacement(UnityEngine.Terrain,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_mED572DA2F02D45277B339499C29D88F3770D1B50 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___originTerrain0, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter1, bool ___fullValidation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::Add(!0,!1)
inline void Dictionary_2_Add_m2A2E27742C58AAEDD9D22D0117DA49FA64C8B658 (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * __this, int32_t ___key0, TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 *, int32_t, TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *, const RuntimeMethod*))Dictionary_2_Add_m1645BFB62D1C6D053F16FA9B38B32EA6415C02A3_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::get_Count()
inline int32_t Dictionary_2_get_Count_m31BCD673C55E11FEB43276C868D67B37D5E02854 (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 *, const RuntimeMethod*))Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility::ClearConnectivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_m4114C40B5DB74CAE940A42CC6BEE146165166982 (const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups UnityEngine.Experimental.TerrainAPI.TerrainUtility::CollectTerrains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * TerrainUtility_CollectTerrains_mC48DBF7A1976094C25915D3CABCB078F7685F70F (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::GetEnumerator()
inline Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF  Dictionary_2_GetEnumerator_mFFDF537C136F32AF3BC59B0E79FC2258A569E4E6 (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF  (*) (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1AFB55593E014EE4BF89624643B1E2D6875335B6_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::get_Current()
inline KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819  Enumerator_get_Current_mF0B89C56910CF10525BC633B349FE727F9A38090_inline (Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819  (*) (Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF *, const RuntimeMethod*))Enumerator_get_Current_mA56503BE6C004270C14AEF4A7CB81681BE5AC5E6_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::get_Value()
inline TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * KeyValuePair_2_get_Value_mD46DD3109E29743E3836B6FD3EADF2190ECAB928_inline (KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819 * __this, const RuntimeMethod* method)
{
	return ((  TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * (*) (KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9B01C8256F7BED646EE29185D7981D4E7F9D5E78_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993  Dictionary_2_GetEnumerator_m548F1852207722F7C98264E9DEDB65FB4111691A (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993  (*) (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA1554D2ACABE41FD704D4A476B75A878F019A152_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Current()
inline KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3  Enumerator_get_Current_m508F8DCF999F7E47A12796EF27E3234486C64E46_inline (Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3  (*) (Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 *, const RuntimeMethod*))Enumerator_get_Current_m8B20A69E792CACCABC998A9235B2758BBA756B71_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Key()
inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  KeyValuePair_2_get_Key_m5BF4A3317EF17E15E6150BE58650741877B5756A_inline (KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3 * __this, const RuntimeMethod* method)
{
	return ((  TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  (*) (KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m489586A04E006E1FFB609DC5B8ED0AC76C94077E_gshared_inline)(__this, method);
}
// UnityEngine.Terrain UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::GetTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m541BE9783621E35A42C1461EA63CBC3D69C9CD93 (Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 *, const RuntimeMethod*))Enumerator_MoveNext_mD77FA51D49AC6021A6F5AB647B03DDAB61753E91_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_m49E0868CF374239FC10BCEED1A260C935FC1DE9B (Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 *, const RuntimeMethod*))Enumerator_Dispose_mA6D7A0EB6F1BEAA393690E05A51CF66C0A5FB89B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::MoveNext()
inline bool Enumerator_MoveNext_mFF4D43794B971FC90A2B47EF84A1FF34AB040B95 (Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF *, const RuntimeMethod*))Enumerator_MoveNext_m2E3757A7C76D2E1DB0B77D03FF3DE7406334779A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::Dispose()
inline void Enumerator_Dispose_m97E08F7E3311A7E5DF4C2248DA39BE0540BE91A4 (Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF *, const RuntimeMethod*))Enumerator_Dispose_mA0C519E84D909C2F0BEABF433D85E0EC6FB7C218_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::.ctor()
inline void Dictionary_2__ctor_mB21B65797609CC5295685B76483E7A350C3FB058 (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t82EBED1333E48BE43917E367535603A311F8A096 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileCoord__ctor_m9286B4DDAF3A26580860116A44044FBA206BF4EF (TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m6A61D4908D106E35F398C251FB0A43355E2B21C8 (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 *, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA , Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m6ADDCB87FFFEFF036AFA8BD1C3891CE9C6CA5F91_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mCCC3EAC51BE2FF7446023BE774DC0BAB35A824BB (U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m5BACF6FAFF708F219FF5170704755B7B72764C72 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_mB00EAB46595A5ADD88721EFF88C74F866EFC4112_inline (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_m19C1F6399D389408B84D6C07E6BAC991042737C8 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridOrigin0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridSize1, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter2, bool ___fullValidation3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap__ctor_m28A0633C8F985490C2F75F67E2C485432AA03F7E (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::Invoke(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainFilter_Invoke_m54E82DB7C0285275D929796C2914EBB1217664FE (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m9CDB98445A9C17AAEAB9E7315DA472AFA8D62689 (float ___f0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m2ABC0D638EBDF557BEA162967D260C12C55A471B (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Count()
inline int32_t Dictionary_2_get_Count_m771947FC9A0F32357AD58AC37263F59C5032A904 (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 *, const RuntimeMethod*))Dictionary_2_get_Count_m40042E7D47D95C9B8F29B4FAAA2917528B612B34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::.ctor()
inline void Dictionary_2__ctor_m98F156DEE1EF4C5F0262F2ACB3EA477EE3D2959F (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 *, const RuntimeMethod*))Dictionary_2__ctor_mD7161D9302459CDB0976D6050401B554FC44990E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m27582853F23D2DE2A3CE4881CF77279EEA4E5BF6 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::Add(!0,!1)
inline void Dictionary_2_Add_mD3F0EB5FA91806F263D90DDBC36A7A04E56295C2 (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 *, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA , Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*))Dictionary_2_Add_m7B483D20C1C1A4007A062DD022270EDB8B3336B2_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mEFBC589592713623C4695D03FD4AD0842D094B42 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m02FA165442196D07C2191BAE7C3EC84ADA0C7963 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___x0, int32_t ___z1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B68ACB07599C24EF5B7B9DCED9B01A886661DA5 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Keys()
inline KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 * Dictionary_2_get_Keys_mBA60D218F2C124916BAA534A4EEA9A1E3AE1EE62 (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 * (*) (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 *, const RuntimeMethod*))Dictionary_2_get_Keys_m87DD1460D87553B11C4809E15106D52A6DFE8DBC_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C  KeyCollection_GetEnumerator_m2D3F36C29F09DA9A52C30569F8F12E86ACEBBC75 (KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C  (*) (KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m0AEB163C96FBF516D732F02F5EF591109FD51EBF_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Current()
inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  Enumerator_get_Current_mD176C21D2ACF5548F4D72472EA207D870099E2BC_inline (Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C * __this, const RuntimeMethod* method)
{
	return ((  TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  (*) (Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C *, const RuntimeMethod*))Enumerator_get_Current_m278DEBA811C3C38EB73A1739E0EDDE62599D12AA_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::ValidateTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m3C60E8A81717716090643FFAAEA7E564B2723DBC (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m2FF0CBBB767AD17166E3DA46EB9AFA6046FACB39 (Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C *, const RuntimeMethod*))Enumerator_MoveNext_mC25B1DCE70EF76D12BE7CDA1FE5F206C74C850FF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_m1AF30CB4B9D460F0CBE9944BBBE800205A8B84AF (Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C *, const RuntimeMethod*))Enumerator_Dispose_m20AE6316F208FE8F411DFCB9A75DA3E4144034AA_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_mD274BB8519E59AF1512EC245B1720CE9900120A8 (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m57E13D1462E1B352CF2B8D2F872FD78DB4AF89BD (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_mF425525DE2E72C06271D802716B45DA1DFFE2DED (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * ___terrainData0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_mD71B7B9445630FFF0ED877E2FAF62ED6F1688CA5 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E (int32_t ___type0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks::InvokeHeightmapChangedCallback(UnityEngine.TerrainData,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeHeightmapChangedCallback_m462967DB354DFDBCB483E71731C0F1438267A13A (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * ___terrainData0, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainCallbacks_InvokeHeightmapChangedCallback_m462967DB354DFDBCB483E71731C0F1438267A13A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_1 = NULL;
	int32_t V_2 = 0;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_3 = NULL;
	{
		HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * L_0 = ((TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_il2cpp_TypeInfo_var))->get_heightmapChanged_0();
		V_0 = (bool)((!(((RuntimeObject*)(HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_2 = ___terrainData0;
		NullCheck(L_2);
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_3 = TerrainData_get_users_m8DC41DB242FD51BDA25CE01F0AC2C019E05F8F76(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * L_8 = ((TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_il2cpp_TypeInfo_var))->get_heightmapChanged_0();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_9 = V_3;
		RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  L_10 = ___heightRegion1;
		bool L_11 = ___synched2;
		NullCheck(L_8);
		HeightmapChangedCallback_Invoke_m448109C7B34CF2E85F8169EC6114B26BD6A26020(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_2;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks::InvokeTextureChangedCallback(UnityEngine.TerrainData,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeTextureChangedCallback_mF109EBB8B343C6134F55CFDF37AFEE940391CBC5 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * ___terrainData0, String_t* ___textureName1, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainCallbacks_InvokeTextureChangedCallback_mF109EBB8B343C6134F55CFDF37AFEE940391CBC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_1 = NULL;
	int32_t V_2 = 0;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_3 = NULL;
	{
		TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * L_0 = ((TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_il2cpp_TypeInfo_var))->get_textureChanged_1();
		V_0 = (bool)((!(((RuntimeObject*)(TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_2 = ___terrainData0;
		NullCheck(L_2);
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_3 = TerrainData_get_users_m8DC41DB242FD51BDA25CE01F0AC2C019E05F8F76(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0031;
	}

IL_001a:
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * L_8 = ((TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_t5D6C605DD5B2D840575AD8A477DCEDF764BC9AB5_il2cpp_TypeInfo_var))->get_textureChanged_1();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_9 = V_3;
		String_t* L_10 = ___textureName1;
		RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  L_11 = ___texelRegion2;
		bool L_12 = ___synched3;
		NullCheck(L_8);
		TextureChangedCallback_Invoke_mFDF242F3A48AEDFD11EAD04E58C6A72ECB9F00D6(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_14 = V_2;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
	}

IL_0038:
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_HeightmapChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback__ctor_mCA1070375CC565AA72AA0EC90E9CF3FD1FDF2584 (HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_HeightmapChangedCallback::Invoke(UnityEngine.Terrain,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m448109C7B34CF2E85F8169EC6114B26BD6A26020 (HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___terrain0, ___heightRegion1, ___synched2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, ___heightRegion1, ___synched2, targetMethod);
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
						GenericInterfaceActionInvoker2< RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, ___terrain0, ___heightRegion1, ___synched2);
					else
						GenericVirtActionInvoker2< RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, ___terrain0, ___heightRegion1, ___synched2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___terrain0, ___heightRegion1, ___synched2);
					else
						VirtActionInvoker2< RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___terrain0, ___heightRegion1, ___synched2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___heightRegion1) - 1), ___synched2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___terrain0, ___heightRegion1, ___synched2, targetMethod);
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
					typedef void (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___terrain0, ___heightRegion1, ___synched2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, targetThis, ___terrain0, ___heightRegion1, ___synched2);
					else
						GenericVirtActionInvoker3< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, targetThis, ___terrain0, ___heightRegion1, ___synched2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___terrain0, ___heightRegion1, ___synched2);
					else
						VirtActionInvoker3< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___terrain0, ___heightRegion1, ___synched2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___terrain0) - 1), ___heightRegion1, ___synched2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, ___heightRegion1, ___synched2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_HeightmapChangedCallback::BeginInvoke(UnityEngine.Terrain,UnityEngine.RectInt,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeightmapChangedCallback_BeginInvoke_mC8BABA393864B6E806E9C3CA08CD2F9D9DBD6580 (HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___heightRegion1, bool ___synched2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeightmapChangedCallback_BeginInvoke_mC8BABA393864B6E806E9C3CA08CD2F9D9DBD6580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___terrain0;
	__d_args[1] = Box(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A_il2cpp_TypeInfo_var, &___heightRegion1);
	__d_args[2] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___synched2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_HeightmapChangedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback_EndInvoke_mEE3CA12076607C5388E2F08283FAA2CECCA9882E (HeightmapChangedCallback_t632AB8CCEEA7F63E16056E63E998974C878D1F5D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_TextureChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback__ctor_m69930A7D72FEC6E41CE3591054B4985FCFE103AD (TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_TextureChangedCallback::Invoke(UnityEngine.Terrain,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_mFDF242F3A48AEDFD11EAD04E58C6A72ECB9F00D6 (TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, String_t* ___textureName1, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___terrain0, ___textureName1, ___texelRegion2, ___synched3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
					else
						GenericVirtActionInvoker3< String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
					else
						VirtActionInvoker3< String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___textureName1) - 1), ___texelRegion2, ___synched3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___terrain0, ___textureName1, ___texelRegion2, ___synched3, targetMethod);
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
					typedef void (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___terrain0, ___textureName1, ___texelRegion2, ___synched3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, targetThis, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
					else
						GenericVirtActionInvoker4< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(targetMethod, targetThis, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
					else
						VirtActionInvoker4< Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___terrain0) - 1), ___textureName1, ___texelRegion2, ___synched3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, String_t*, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A , bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_TextureChangedCallback::BeginInvoke(UnityEngine.Terrain,System.String,UnityEngine.RectInt,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureChangedCallback_BeginInvoke_mD127790BAB43ABC0BA249E7F61F2FBC8492BAFD2 (TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, String_t* ___textureName1, RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___texelRegion2, bool ___synched3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureChangedCallback_BeginInvoke_mD127790BAB43ABC0BA249E7F61F2FBC8492BAFD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___terrain0;
	__d_args[1] = ___textureName1;
	__d_args[2] = Box(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A_il2cpp_TypeInfo_var, &___texelRegion2);
	__d_args[3] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___synched3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainCallbacks_TextureChangedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback_EndInvoke_m61C61AF6CEF0DB0E7197327A10A8842C342E411E (TextureChangedCallback_tC699198D2EACFE62AE42E8D2F4A7FD8B533A602E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility::HasValidTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainUtility_HasValidTerrains_m2FFE4F426AD350C31BF37C7DDA9250C8CD72811A (const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_0 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		NullCheck(L_1);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility::ClearConnectivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_m4114C40B5DB74CAE940A42CC6BEE146165166982 (const RuntimeMethod* method)
{
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_0 = NULL;
	int32_t V_1 = 0;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_2 = NULL;
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_0 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001f;
	}

IL_000c:
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = V_2;
		NullCheck(L_5);
		Terrain_SetNeighbors_m6154CA9A0A36D91AAF20DE96C3EB6DFE82ED1915(L_5, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_7 = V_1;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainGroups UnityEngine.Experimental.TerrainAPI.TerrainUtility::CollectTerrains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * TerrainUtility_CollectTerrains_mC48DBF7A1976094C25915D3CABCB078F7685F70F (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainUtility_CollectTerrains_mC48DBF7A1976094C25915D3CABCB078F7685F70F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * V_0 = NULL;
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * V_1 = NULL;
	bool V_2 = false;
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * V_3 = NULL;
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_4 = NULL;
	int32_t V_5 = 0;
	U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_9 = NULL;
	bool V_10 = false;
	int32_t G_B6_0 = 0;
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * G_B18_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * L_0 = (U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mB038F4D9A4627591B0538620F34647540CFD82D7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * L_1 = V_0;
		bool L_2 = ___onlyAutoConnectedTerrains0;
		NullCheck(L_1);
		L_1->set_onlyAutoConnectedTerrains_0(L_2);
		bool L_3 = TerrainUtility_HasValidTerrains_m2FFE4F426AD350C31BF37C7DDA9250C8CD72811A(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_3 = (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 *)NULL;
		goto IL_00f5;
	}

IL_0021:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_5 = (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 *)il2cpp_codegen_object_new(TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5_il2cpp_TypeInfo_var);
		TerrainGroups__ctor_m0F51F7F60FB4A366FDA7B9C880836631E56697C6(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_6 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		V_4 = L_6;
		V_5 = 0;
		goto IL_00db;
	}

IL_0037:
	{
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_7 = (U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_1__ctor_m4A331E1FCBD6701DFDEC5CBA78D6D04E5A168399(L_7, /*hidden argument*/NULL);
		V_6 = L_7;
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_8 = V_6;
		U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * L_9 = V_0;
		NullCheck(L_8);
		L_8->set_CSU24U3CU3E8__locals1_1(L_9);
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_10 = V_6;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		L_10->set_t_0(L_14);
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_15 = V_6;
		NullCheck(L_15);
		U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * L_16 = L_15->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_16);
		bool L_17 = L_16->get_onlyAutoConnectedTerrains_0();
		if (!L_17)
		{
			goto IL_0072;
		}
	}
	{
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_18 = V_6;
		NullCheck(L_18);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_19 = L_18->get_t_0();
		NullCheck(L_19);
		bool L_20 = Terrain_get_allowAutoConnect_m870C1F088D05D0AEE9794DE5C726D21D3D324801(L_19, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B6_0 = 0;
	}

IL_0073:
	{
		V_7 = (bool)G_B6_0;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00d5;
	}

IL_007b:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_22 = V_1;
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_23 = V_6;
		NullCheck(L_23);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_24 = L_23->get_t_0();
		NullCheck(L_24);
		int32_t L_25 = Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_26 = Dictionary_2_ContainsKey_mE277C8E1CB612482ED81C459D2E118E63F597813(L_22, L_25, /*hidden argument*/Dictionary_2_ContainsKey_mE277C8E1CB612482ED81C459D2E118E63F597813_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_28 = V_6;
		NullCheck(L_28);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_29 = L_28->get_t_0();
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_30 = V_6;
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_31 = (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B *)il2cpp_codegen_object_new(TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B_il2cpp_TypeInfo_var);
		TerrainFilter__ctor_m910AB7323A854E3777E58F3BC04A72DD7D4DEDC9(L_31, L_30, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_1_U3CCollectTerrainsU3Eb__0_mD45D325EBC84DFF33AC7BAF4E765D6BC7E19A93C_RuntimeMethod_var), /*hidden argument*/NULL);
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_32 = TerrainMap_CreateFromPlacement_mED572DA2F02D45277B339499C29D88F3770D1B50(L_29, L_31, (bool)1, /*hidden argument*/NULL);
		V_9 = L_32;
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_33 = V_9;
		V_10 = (bool)((!(((RuntimeObject*)(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)L_33) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00d3;
		}
	}
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_35 = V_1;
		U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * L_36 = V_6;
		NullCheck(L_36);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_37 = L_36->get_t_0();
		NullCheck(L_37);
		int32_t L_38 = Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496(L_37, /*hidden argument*/NULL);
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_39 = V_9;
		NullCheck(L_35);
		Dictionary_2_Add_m2A2E27742C58AAEDD9D22D0117DA49FA64C8B658(L_35, L_38, L_39, /*hidden argument*/Dictionary_2_Add_m2A2E27742C58AAEDD9D22D0117DA49FA64C8B658_RuntimeMethod_var);
	}

IL_00d3:
	{
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00db:
	{
		int32_t L_41 = V_5;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = Dictionary_2_get_Count_m31BCD673C55E11FEB43276C868D67B37D5E02854(L_43, /*hidden argument*/Dictionary_2_get_Count_m31BCD673C55E11FEB43276C868D67B37D5E02854_RuntimeMethod_var);
		if (L_44)
		{
			goto IL_00f1;
		}
	}
	{
		G_B18_0 = ((TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 *)(NULL));
		goto IL_00f2;
	}

IL_00f1:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_45 = V_1;
		G_B18_0 = L_45;
	}

IL_00f2:
	{
		V_3 = G_B18_0;
		goto IL_00f5;
	}

IL_00f5:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_46 = V_3;
		return L_46;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility::AutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_AutoConnect_m2A841BB573F4B7511419D0D468D28F2EB51C4397 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainUtility_AutoConnect_m2A841BB573F4B7511419D0D468D28F2EB51C4397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_5 = NULL;
	Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993  V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3  V_7;
	memset((&V_7), 0, sizeof(V_7));
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_9 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_10 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_11 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_12 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = TerrainUtility_HasValidTerrains_m2FFE4F426AD350C31BF37C7DDA9250C8CD72811A(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_013a;
	}

IL_0012:
	{
		TerrainUtility_ClearConnectivity_m4114C40B5DB74CAE940A42CC6BEE146165166982(/*hidden argument*/NULL);
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_2 = TerrainUtility_CollectTerrains_mC48DBF7A1976094C25915D3CABCB078F7685F70F((bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_3 = V_0;
		V_2 = (bool)((((RuntimeObject*)(TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_013a;
	}

IL_002c:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_5 = V_0;
		NullCheck(L_5);
		Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF  L_6 = Dictionary_2_GetEnumerator_mFFDF537C136F32AF3BC59B0E79FC2258A569E4E6(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_mFFDF537C136F32AF3BC59B0E79FC2258A569E4E6_RuntimeMethod_var);
		V_3 = L_6;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011d;
		}

IL_0039:
		{
			KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819  L_7 = Enumerator_get_Current_mF0B89C56910CF10525BC633B349FE727F9A38090_inline((Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF *)(&V_3), /*hidden argument*/Enumerator_get_Current_mF0B89C56910CF10525BC633B349FE727F9A38090_RuntimeMethod_var);
			V_4 = L_7;
			TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_8 = KeyValuePair_2_get_Value_mD46DD3109E29743E3836B6FD3EADF2190ECAB928_inline((KeyValuePair_2_t18912BDD0F33056C87B1DBE2AE04B3517E79F819 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_mD46DD3109E29743E3836B6FD3EADF2190ECAB928_RuntimeMethod_var);
			V_5 = L_8;
			TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_9 = V_5;
			NullCheck(L_9);
			Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * L_10 = L_9->get_m_terrainTiles_2();
			NullCheck(L_10);
			Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993  L_11 = Dictionary_2_GetEnumerator_m548F1852207722F7C98264E9DEDB65FB4111691A(L_10, /*hidden argument*/Dictionary_2_GetEnumerator_m548F1852207722F7C98264E9DEDB65FB4111691A_RuntimeMethod_var);
			V_6 = L_11;
		}

IL_005b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00ff;
			}

IL_0060:
			{
				KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3  L_12 = Enumerator_get_Current_m508F8DCF999F7E47A12796EF27E3234486C64E46_inline((Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m508F8DCF999F7E47A12796EF27E3234486C64E46_RuntimeMethod_var);
				V_7 = L_12;
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_13 = KeyValuePair_2_get_Key_m5BF4A3317EF17E15E6150BE58650741877B5756A_inline((KeyValuePair_2_t2AB2F5C2507577BB2A4DC100DB90AE3A5B3DB0E3 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Key_m5BF4A3317EF17E15E6150BE58650741877B5756A_RuntimeMethod_var);
				V_8 = L_13;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_14 = V_5;
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_15 = V_8;
				int32_t L_16 = L_15.get_tileX_0();
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_17 = V_8;
				int32_t L_18 = L_17.get_tileZ_1();
				NullCheck(L_14);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_19 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(L_14, L_16, L_18, /*hidden argument*/NULL);
				V_9 = L_19;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_20 = V_5;
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_21 = V_8;
				int32_t L_22 = L_21.get_tileX_0();
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_23 = V_8;
				int32_t L_24 = L_23.get_tileZ_1();
				NullCheck(L_20);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_25 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), L_24, /*hidden argument*/NULL);
				V_10 = L_25;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_26 = V_5;
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_27 = V_8;
				int32_t L_28 = L_27.get_tileX_0();
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_29 = V_8;
				int32_t L_30 = L_29.get_tileZ_1();
				NullCheck(L_26);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_31 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(L_26, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), L_30, /*hidden argument*/NULL);
				V_11 = L_31;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_32 = V_5;
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_33 = V_8;
				int32_t L_34 = L_33.get_tileX_0();
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_35 = V_8;
				int32_t L_36 = L_35.get_tileZ_1();
				NullCheck(L_32);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_37 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(L_32, L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)), /*hidden argument*/NULL);
				V_12 = L_37;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_38 = V_5;
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_39 = V_8;
				int32_t L_40 = L_39.get_tileX_0();
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_41 = V_8;
				int32_t L_42 = L_41.get_tileZ_1();
				NullCheck(L_38);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_43 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(L_38, L_40, ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1)), /*hidden argument*/NULL);
				V_13 = L_43;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_44 = V_9;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_45 = V_10;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_46 = V_12;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_47 = V_11;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_48 = V_13;
				NullCheck(L_44);
				Terrain_SetNeighbors_m6154CA9A0A36D91AAF20DE96C3EB6DFE82ED1915(L_44, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
			}

IL_00ff:
			{
				bool L_49 = Enumerator_MoveNext_m541BE9783621E35A42C1461EA63CBC3D69C9CD93((Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m541BE9783621E35A42C1461EA63CBC3D69C9CD93_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_0060;
				}
			}

IL_010b:
			{
				IL2CPP_LEAVE(0x11C, FINALLY_010d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_010d;
		}

FINALLY_010d:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m49E0868CF374239FC10BCEED1A260C935FC1DE9B((Enumerator_tC670DC37212927DF706430B4927F30BC1DDC0993 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m49E0868CF374239FC10BCEED1A260C935FC1DE9B_RuntimeMethod_var);
			IL2CPP_END_FINALLY(269)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(269)
		{
			IL2CPP_JUMP_TBL(0x11C, IL_011c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_011c:
		{
		}

IL_011d:
		{
			bool L_50 = Enumerator_MoveNext_mFF4D43794B971FC90A2B47EF84A1FF34AB040B95((Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mFF4D43794B971FC90A2B47EF84A1FF34AB040B95_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_0039;
			}
		}

IL_0129:
		{
			IL2CPP_LEAVE(0x13A, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m97E08F7E3311A7E5DF4C2248DA39BE0540BE91A4((Enumerator_t1537E77DAB090F2BB6D7A005F8E3AA8A8C9058CF *)(&V_3), /*hidden argument*/Enumerator_Dispose_m97E08F7E3311A7E5DF4C2248DA39BE0540BE91A4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(299)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013a:
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mB038F4D9A4627591B0538620F34647540CFD82D7 (U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m4A331E1FCBD6701DFDEC5CBA78D6D04E5A168399 (U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility_<>c__DisplayClass4_1::<CollectTerrains>b__0(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_1_U3CCollectTerrainsU3Eb__0_mD45D325EBC84DFF33AC7BAF4E765D6BC7E19A93C (U3CU3Ec__DisplayClass4_1_tC63A89C846069E68CAA87EA14D0149555C357407 * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___x0, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496(L_0, /*hidden argument*/NULL);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_2 = __this->get_t_0();
		NullCheck(L_2);
		int32_t L_3 = Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t79B6EBFB785C0608F276376E6D35800FA6574B4A * L_4 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_4);
		bool L_5 = L_4->get_onlyAutoConnectedTerrains_0();
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_6 = ___x0;
		NullCheck(L_6);
		bool L_7 = Terrain_get_allowAutoConnect_m870C1F088D05D0AEE9794DE5C726D21D3D324801(L_6, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		return (bool)G_B6_0;
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainGroups::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainGroups__ctor_m0F51F7F60FB4A366FDA7B9C880836631E56697C6 (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainGroups__ctor_m0F51F7F60FB4A366FDA7B9C880836631E56697C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_mB21B65797609CC5295685B76483E7A350C3FB058(__this, /*hidden argument*/Dictionary_2__ctor_mB21B65797609CC5295685B76483E7A350C3FB058_RuntimeMethod_var);
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
// UnityEngine.Terrain UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::GetTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_0 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_1 = NULL;
	{
		V_0 = (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL;
		Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * L_0 = __this->get_m_terrainTiles_2();
		int32_t L_1 = ___tileX0;
		int32_t L_2 = ___tileZ1;
		TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		TileCoord__ctor_m9286B4DDAF3A26580860116A44044FBA206BF4EF((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m6A61D4908D106E35F398C251FB0A43355E2B21C8(L_0, L_3, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m6A61D4908D106E35F398C251FB0A43355E2B21C8_RuntimeMethod_var);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::CreateFromPlacement(UnityEngine.Terrain,UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TerrainFilter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_mED572DA2F02D45277B339499C29D88F3770D1B50 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___originTerrain0, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter1, bool ___fullValidation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_CreateFromPlacement_mED572DA2F02D45277B339499C29D88F3770D1B50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	{
		U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 * L_0 = (U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mCCC3EAC51BE2FF7446023BE774DC0BAB35A824BB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_2 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_001f;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_3 = ___originTerrain0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m5BACF6FAFF708F219FF5170704755B7B72764C72(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
	}

IL_0020:
	{
		V_5 = (bool)G_B4_0;
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		V_6 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)NULL;
		goto IL_00cb;
	}

IL_002e:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_6 = ___originTerrain0;
		NullCheck(L_6);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_7 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m5BACF6FAFF708F219FF5170704755B7B72764C72(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_7 = L_8;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		V_6 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)NULL;
		goto IL_00cb;
	}

IL_0048:
	{
		U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 * L_10 = V_0;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_11 = ___originTerrain0;
		NullCheck(L_11);
		int32_t L_12 = Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_groupID_0(L_12);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_13 = ___originTerrain0;
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		V_1 = L_16;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_17 = ___originTerrain0;
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		V_2 = L_20;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_21 = ___originTerrain0;
		NullCheck(L_21);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_22 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		V_3 = L_24;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_25 = ___originTerrain0;
		NullCheck(L_25);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_26 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_z_4();
		V_4 = L_28;
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_29 = ___filter1;
		V_8 = (bool)((((RuntimeObject*)(TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B *)L_29) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 * L_31 = V_0;
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_32 = (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B *)il2cpp_codegen_object_new(TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B_il2cpp_TypeInfo_var);
		TerrainFilter__ctor_m910AB7323A854E3777E58F3BC04A72DD7D4DEDC9(L_32, L_31, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CCreateFromPlacementU3Eb__0_m6B066523F804BB3ABD10772CA56DE923FD525526_RuntimeMethod_var), /*hidden argument*/NULL);
		___filter1 = L_32;
	}

IL_00b1:
	{
		float L_33 = V_1;
		float L_34 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_mB00EAB46595A5ADD88721EFF88C74F866EFC4112_inline((&L_35), L_33, L_34, /*hidden argument*/NULL);
		float L_36 = V_3;
		float L_37 = V_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_mB00EAB46595A5ADD88721EFF88C74F866EFC4112_inline((&L_38), L_36, L_37, /*hidden argument*/NULL);
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_39 = ___filter1;
		bool L_40 = ___fullValidation2;
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_41 = TerrainMap_CreateFromPlacement_m19C1F6399D389408B84D6C07E6BAC991042737C8(L_35, L_38, L_39, L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		goto IL_00cb;
	}

IL_00cb:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_42 = V_6;
		return L_42;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TerrainFilter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_m19C1F6399D389408B84D6C07E6BAC991042737C8 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridOrigin0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridSize1, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter2, bool ___fullValidation3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_CreateFromPlacement_m19C1F6399D389408B84D6C07E6BAC991042737C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_4 = NULL;
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_5 = NULL;
	int32_t V_6 = 0;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * G_B21_0 = NULL;
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_0 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_4 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)NULL;
		goto IL_0102;
	}

IL_0020:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_3 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)il2cpp_codegen_object_new(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_il2cpp_TypeInfo_var);
		TerrainMap__ctor_m28A0633C8F985490C2F75F67E2C485432AA03F7E(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___gridSize1;
		float L_5 = L_4.get_x_0();
		V_1 = ((float)((float)(1.0f)/(float)L_5));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___gridSize1;
		float L_7 = L_6.get_y_1();
		V_2 = ((float)((float)(1.0f)/(float)L_7));
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_8 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		V_5 = L_8;
		V_6 = 0;
		goto IL_00d3;
	}

IL_0050:
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_13 = V_7;
		NullCheck(L_13);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_14 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_m5BACF6FAFF708F219FF5170704755B7B72764C72(L_14, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_15;
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00cd;
	}

IL_006d:
	{
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_17 = ___filter2;
		if (!L_17)
		{
			goto IL_007a;
		}
	}
	{
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_18 = ___filter2;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_19 = V_7;
		NullCheck(L_18);
		bool L_20 = TerrainFilter_Invoke_m54E82DB7C0285275D929796C2914EBB1217664FE(L_18, L_19, /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_20));
		goto IL_007b;
	}

IL_007a:
	{
		G_B11_0 = 1;
	}

IL_007b:
	{
		V_9 = (bool)G_B11_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_00cc;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_22 = V_7;
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_23, /*hidden argument*/NULL);
		V_10 = L_24;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_10;
		float L_26 = L_25.get_x_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = ___gridOrigin0;
		float L_28 = L_27.get_x_0();
		float L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_30 = Mathf_RoundToInt_m9CDB98445A9C17AAEAB9E7315DA472AFA8D62689(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_26, (float)L_28)), (float)L_29)), /*hidden argument*/NULL);
		V_11 = L_30;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_10;
		float L_32 = L_31.get_z_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = ___gridOrigin0;
		float L_34 = L_33.get_y_1();
		float L_35 = V_2;
		int32_t L_36 = Mathf_RoundToInt_m9CDB98445A9C17AAEAB9E7315DA472AFA8D62689(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_32, (float)L_34)), (float)L_35)), /*hidden argument*/NULL);
		V_12 = L_36;
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_37 = V_0;
		int32_t L_38 = V_11;
		int32_t L_39 = V_12;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_40 = V_7;
		NullCheck(L_37);
		TerrainMap_TryToAddTerrain_m2ABC0D638EBDF557BEA162967D260C12C55A471B(L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
	}

IL_00cc:
	{
	}

IL_00cd:
	{
		int32_t L_41 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00d3:
	{
		int32_t L_42 = V_6;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_43 = V_5;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))))
		{
			goto IL_0050;
		}
	}
	{
		bool L_44 = ___fullValidation3;
		V_13 = L_44;
		bool L_45 = V_13;
		if (!L_45)
		{
			goto IL_00ec;
		}
	}
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_46 = V_0;
		NullCheck(L_46);
		TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A(L_46, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_47 = V_0;
		NullCheck(L_47);
		Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * L_48 = L_47->get_m_terrainTiles_2();
		NullCheck(L_48);
		int32_t L_49 = Dictionary_2_get_Count_m771947FC9A0F32357AD58AC37263F59C5032A904(L_48, /*hidden argument*/Dictionary_2_get_Count_m771947FC9A0F32357AD58AC37263F59C5032A904_RuntimeMethod_var);
		if ((((int32_t)L_49) > ((int32_t)0)))
		{
			goto IL_00fd;
		}
	}
	{
		G_B21_0 = ((TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)(NULL));
		goto IL_00fe;
	}

IL_00fd:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_50 = V_0;
		G_B21_0 = L_50;
	}

IL_00fe:
	{
		V_4 = G_B21_0;
		goto IL_0102;
	}

IL_0102:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_51 = V_4;
		return L_51;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap__ctor_m28A0633C8F985490C2F75F67E2C485432AA03F7E (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap__ctor_m28A0633C8F985490C2F75F67E2C485432AA03F7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_errorCode_1(0);
		Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * L_0 = (Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 *)il2cpp_codegen_object_new(Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m98F156DEE1EF4C5F0262F2ACB3EA477EE3D2959F(L_0, /*hidden argument*/Dictionary_2__ctor_m98F156DEE1EF4C5F0262F2ACB3EA477EE3D2959F_RuntimeMethod_var);
		__this->set_m_terrainTiles_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m02FA165442196D07C2191BAE7C3EC84ADA0C7963 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___x0, int32_t ___z1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_AddTerrainInternal_m02FA165442196D07C2191BAE7C3EC84ADA0C7963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * L_0 = __this->get_m_terrainTiles_2();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m771947FC9A0F32357AD58AC37263F59C5032A904(L_0, /*hidden argument*/Dictionary_2_get_Count_m771947FC9A0F32357AD58AC37263F59C5032A904_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_3 = ___terrain2;
		NullCheck(L_3);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_4 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_4, /*hidden argument*/NULL);
		__this->set_m_patchSize_0(L_5);
		goto IL_0052;
	}

IL_0026:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_6 = ___terrain2;
		NullCheck(L_6);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_7 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = __this->get_m_patchSize_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_10 = Vector3_op_Inequality_m27582853F23D2DE2A3CE4881CF77279EEA4E5BF6(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_12 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_12|(int32_t)4)));
	}

IL_0051:
	{
	}

IL_0052:
	{
		Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * L_13 = __this->get_m_terrainTiles_2();
		int32_t L_14 = ___x0;
		int32_t L_15 = ___z1;
		TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_16;
		memset((&L_16), 0, sizeof(L_16));
		TileCoord__ctor_m9286B4DDAF3A26580860116A44044FBA206BF4EF((&L_16), L_14, L_15, /*hidden argument*/NULL);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_17 = ___terrain2;
		NullCheck(L_13);
		Dictionary_2_Add_mD3F0EB5FA91806F263D90DDBC36A7A04E56295C2(L_13, L_16, L_17, /*hidden argument*/Dictionary_2_Add_mD3F0EB5FA91806F263D90DDBC36A7A04E56295C2_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m2ABC0D638EBDF557BEA162967D260C12C55A471B (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_TryToAddTerrain_m2ABC0D638EBDF557BEA162967D260C12C55A471B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = (bool)0;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_0 = ___terrain2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mEFBC589592713623C4695D03FD4AD0842D094B42(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_3 = ___tileX0;
		int32_t L_4 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(__this, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_mEFBC589592713623C4695D03FD4AD0842D094B42(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_9 = V_2;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_10 = ___terrain2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_mEFBC589592713623C4695D03FD4AD0842D094B42(L_9, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_13 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_13|(int32_t)1)));
	}

IL_0041:
	{
		goto IL_0052;
	}

IL_0044:
	{
		int32_t L_14 = ___tileX0;
		int32_t L_15 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_16 = ___terrain2;
		TerrainMap_AddTerrainInternal_m02FA165442196D07C2191BAE7C3EC84ADA0C7963(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0052:
	{
	}

IL_0053:
	{
		bool L_17 = V_0;
		V_5 = L_17;
		goto IL_0058;
	}

IL_0058:
	{
		bool L_18 = V_5;
		return L_18;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::ValidateTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m3C60E8A81717716090643FFAAEA7E564B2723DBC (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_ValidateTerrain_m3C60E8A81717716090643FFAAEA7E564B2723DBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_0 = NULL;
	bool V_1 = false;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_2 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_3 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_4 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = ___tileX0;
		int32_t L_1 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_2 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mEFBC589592713623C4695D03FD4AD0842D094B42(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_6 = ___tileX0;
		int32_t L_7 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_8 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = ___tileX0;
		int32_t L_10 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_11 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = ___tileX0;
		int32_t L_13 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_14 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(__this, L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_14;
		int32_t L_15 = ___tileX0;
		int32_t L_16 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_17 = TerrainMap_GetTerrain_m1A774E5D4692B841C5A8EE07716E543683228307(__this, L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_17;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Implicit_m3B68ACB07599C24EF5B7B9DCED9B01A886661DA5(L_18, /*hidden argument*/NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_21 = V_0;
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_25 = V_2;
		NullCheck(L_25);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_29 = V_2;
		NullCheck(L_29);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_30 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_33 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(L_24, ((float)il2cpp_codegen_add((float)L_28, (float)L_32)), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00b7;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_34 = V_0;
		NullCheck(L_34);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_38 = V_2;
		NullCheck(L_38);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_42 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(L_37, L_41, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B5_0 = 1;
	}

IL_00b8:
	{
		V_7 = (bool)G_B5_0;
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_44 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_44|(int32_t)8)));
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Implicit_m3B68ACB07599C24EF5B7B9DCED9B01A886661DA5(L_45, /*hidden argument*/NULL);
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0156;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_48 = V_0;
		NullCheck(L_48);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_52 = V_0;
		NullCheck(L_52);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_53 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_56 = V_3;
		NullCheck(L_56);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_60 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(((float)il2cpp_codegen_add((float)L_51, (float)L_55)), L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_013e;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_61 = V_0;
		NullCheck(L_61);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_65 = V_3;
		NullCheck(L_65);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_66 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_69 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(L_64, L_68, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B12_0 = 1;
	}

IL_013f:
	{
		V_9 = (bool)G_B12_0;
		bool L_70 = V_9;
		if (!L_70)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_71 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_71|(int32_t)8)));
	}

IL_0155:
	{
	}

IL_0156:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_72 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_73 = Object_op_Implicit_m3B68ACB07599C24EF5B7B9DCED9B01A886661DA5(L_72, /*hidden argument*/NULL);
		V_10 = L_73;
		bool L_74 = V_10;
		if (!L_74)
		{
			goto IL_01e0;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_75 = V_0;
		NullCheck(L_75);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_76 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_77 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_76, /*hidden argument*/NULL);
		float L_78 = L_77.get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_79 = V_4;
		NullCheck(L_79);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_80 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_80, /*hidden argument*/NULL);
		float L_82 = L_81.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_83 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(L_78, L_82, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_01c8;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_84 = V_0;
		NullCheck(L_84);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_85 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_85, /*hidden argument*/NULL);
		float L_87 = L_86.get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_88 = V_0;
		NullCheck(L_88);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_89 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_89, /*hidden argument*/NULL);
		float L_91 = L_90.get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_92 = V_4;
		NullCheck(L_92);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_93 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_92, /*hidden argument*/NULL);
		NullCheck(L_93);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_93, /*hidden argument*/NULL);
		float L_95 = L_94.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_96 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(((float)il2cpp_codegen_add((float)L_87, (float)L_91)), L_95, /*hidden argument*/NULL);
		G_B19_0 = ((((int32_t)L_96) == ((int32_t)0))? 1 : 0);
		goto IL_01c9;
	}

IL_01c8:
	{
		G_B19_0 = 1;
	}

IL_01c9:
	{
		V_11 = (bool)G_B19_0;
		bool L_97 = V_11;
		if (!L_97)
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_98 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_98|(int32_t)8)));
	}

IL_01df:
	{
	}

IL_01e0:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_99 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_100 = Object_op_Implicit_m3B68ACB07599C24EF5B7B9DCED9B01A886661DA5(L_99, /*hidden argument*/NULL);
		V_12 = L_100;
		bool L_101 = V_12;
		if (!L_101)
		{
			goto IL_026b;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_102 = V_0;
		NullCheck(L_102);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_103 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_102, /*hidden argument*/NULL);
		NullCheck(L_103);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_104 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_103, /*hidden argument*/NULL);
		float L_105 = L_104.get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_106 = V_5;
		NullCheck(L_106);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_107 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_106, /*hidden argument*/NULL);
		NullCheck(L_107);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_108 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_107, /*hidden argument*/NULL);
		float L_109 = L_108.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_110 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(L_105, L_109, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_0253;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_111 = V_0;
		NullCheck(L_111);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_112 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_113 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_112, /*hidden argument*/NULL);
		float L_114 = L_113.get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_115 = V_5;
		NullCheck(L_115);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_116 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_115, /*hidden argument*/NULL);
		NullCheck(L_116);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_116, /*hidden argument*/NULL);
		float L_118 = L_117.get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_119 = V_5;
		NullCheck(L_119);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_120 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_121 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_120, /*hidden argument*/NULL);
		float L_122 = L_121.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_123 = Mathf_Approximately_mA68185C4FDBBD4CC4C91772E48E2878107072ECA(L_114, ((float)il2cpp_codegen_add((float)L_118, (float)L_122)), /*hidden argument*/NULL);
		G_B26_0 = ((((int32_t)L_123) == ((int32_t)0))? 1 : 0);
		goto IL_0254;
	}

IL_0253:
	{
		G_B26_0 = 1;
	}

IL_0254:
	{
		V_13 = (bool)G_B26_0;
		bool L_124 = V_13;
		if (!L_124)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_125 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_125|(int32_t)8)));
	}

IL_026a:
	{
	}

IL_026b:
	{
	}

IL_026d:
	{
		return;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_ErrorCode UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_t11432F65DA811596F2B4CB204116BDF822ED3E75 * L_0 = __this->get_m_terrainTiles_2();
		NullCheck(L_0);
		KeyCollection_t613BBD48535B7310B461FB29340466B5B8023710 * L_1 = Dictionary_2_get_Keys_mBA60D218F2C124916BAA534A4EEA9A1E3AE1EE62(L_0, /*hidden argument*/Dictionary_2_get_Keys_mBA60D218F2C124916BAA534A4EEA9A1E3AE1EE62_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C  L_2 = KeyCollection_GetEnumerator_m2D3F36C29F09DA9A52C30569F8F12E86ACEBBC75(L_1, /*hidden argument*/KeyCollection_GetEnumerator_m2D3F36C29F09DA9A52C30569F8F12E86ACEBBC75_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0015:
		{
			TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_3 = Enumerator_get_Current_mD176C21D2ACF5548F4D72472EA207D870099E2BC_inline((Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD176C21D2ACF5548F4D72472EA207D870099E2BC_RuntimeMethod_var);
			V_1 = L_3;
			TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_4 = V_1;
			int32_t L_5 = L_4.get_tileX_0();
			TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_6 = V_1;
			int32_t L_7 = L_6.get_tileZ_1();
			TerrainMap_ValidateTerrain_m3C60E8A81717716090643FFAAEA7E564B2723DBC(__this, L_5, L_7, /*hidden argument*/NULL);
		}

IL_0032:
		{
			bool L_8 = Enumerator_MoveNext_m2FF0CBBB767AD17166E3DA46EB9AFA6046FACB39((Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2FF0CBBB767AD17166E3DA46EB9AFA6046FACB39_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0015;
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
		Enumerator_Dispose_m1AF30CB4B9D460F0CBE9944BBBE800205A8B84AF((Enumerator_tDE4BFA4101F56688F148AF2CCCEDD41AD4F03E7C *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1AF30CB4B9D460F0CBE9944BBBE800205A8B84AF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		int32_t L_9 = __this->get_m_errorCode_1();
		V_2 = L_9;
		goto IL_0055;
	}

IL_0055:
	{
		int32_t L_10 = V_2;
		return L_10;
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mCCC3EAC51BE2FF7446023BE774DC0BAB35A824BB (U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_<>c__DisplayClass4_0::<CreateFromPlacement>b__0(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CCreateFromPlacementU3Eb__0_m6B066523F804BB3ABD10772CA56DE923FD525526 (U3CU3Ec__DisplayClass4_0_t0F8BF12DC466A9414D9AF02F686C301DBAFED002 * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___x0, const RuntimeMethod* method)
{
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_groupID_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TerrainFilter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainFilter__ctor_m910AB7323A854E3777E58F3BC04A72DD7D4DEDC9 (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TerrainFilter::Invoke(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainFilter_Invoke_m54E82DB7C0285275D929796C2914EBB1217664FE (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___terrain0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___terrain0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___terrain0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___terrain0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___terrain0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___terrain0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___terrain0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(targetMethod, targetThis, ___terrain0);
					else
						result = GenericVirtFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(targetMethod, targetThis, ___terrain0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___terrain0);
					else
						result = VirtFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___terrain0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___terrain0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TerrainFilter::BeginInvoke(UnityEngine.Terrain,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TerrainFilter_BeginInvoke_m345C325723D9AF0998D7595FE2C2D6819A155AF1 (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___terrain0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TerrainFilter::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainFilter_EndInvoke_mED61AD65085382B1E2803E964B6D831F53019FAF (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility_TerrainMap_TileCoord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileCoord__ctor_m9286B4DDAF3A26580860116A44044FBA206BF4EF (TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___tileX0;
		__this->set_tileX_0(L_0);
		int32_t L_1 = ___tileZ1;
		__this->set_tileZ_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TileCoord__ctor_m9286B4DDAF3A26580860116A44044FBA206BF4EF_AdjustorThunk (RuntimeObject * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * _thisAdjusted = reinterpret_cast<TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA *>(__this + _offset);
	TileCoord__ctor_m9286B4DDAF3A26580860116A44044FBA206BF4EF(_thisAdjusted, ___tileX0, ___tileZ1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	typedef TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * (*Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m870C1F088D05D0AEE9794DE5C726D21D3D324801 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	typedef bool (*Terrain_get_allowAutoConnect_m870C1F088D05D0AEE9794DE5C726D21D3D324801_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_get_allowAutoConnect_m870C1F088D05D0AEE9794DE5C726D21D3D324801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_allowAutoConnect_m870C1F088D05D0AEE9794DE5C726D21D3D324801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_allowAutoConnect()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Terrain::get_groupingID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_groupingID_m0B17FB21010A0D8EB71924846DEB0FD6D4AE0496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_groupingID()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_m6154CA9A0A36D91AAF20DE96C3EB6DFE82ED1915 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___left0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___top1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___right2, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___bottom3, const RuntimeMethod* method)
{
	typedef void (*Terrain_SetNeighbors_m6154CA9A0A36D91AAF20DE96C3EB6DFE82ED1915_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_SetNeighbors_m6154CA9A0A36D91AAF20DE96C3EB6DFE82ED1915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_SetNeighbors_m6154CA9A0A36D91AAF20DE96C3EB6DFE82ED1915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)");
	_il2cpp_icall_func(__this, ___left0, ___top1, ___right2, ___bottom3);
}
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA (const RuntimeMethod* method)
{
	typedef TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* (*Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA_ftn) ();
	static Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrains()");
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Terrain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain__ctor_m94C09A57A7A78EAF826FF43C7F78B79357F7D05A (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_mD274BB8519E59AF1512EC245B1720CE9900120A8(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData_BoundaryValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E (int32_t ___type0, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E_ftn) (int32_t);
	static TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)");
	int32_t retVal = _il2cpp_icall_func(___type0);
	return retVal;
}
// System.Void UnityEngine.TerrainData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData__ctor_m3BBCD4C3B3B6BE91D51C237C3BA07334B3AAB982 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__ctor_m3BBCD4C3B3B6BE91D51C237C3BA07334B3AAB982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m57E13D1462E1B352CF2B8D2F872FD78DB4AF89BD(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var);
		TerrainData_Internal_Create_mF425525DE2E72C06271D802716B45DA1DFFE2DED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_mF425525DE2E72C06271D802716B45DA1DFFE2DED (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * ___terrainData0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_Internal_Create_mF425525DE2E72C06271D802716B45DA1DFFE2DED_ftn) (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 *);
	static TerrainData_Internal_Create_mF425525DE2E72C06271D802716B45DA1DFFE2DED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_Create_mF425525DE2E72C06271D802716B45DA1DFFE2DED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)");
	_il2cpp_icall_func(___terrainData0);
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TerrainData_get_size_Injected_mD71B7B9445630FFF0ED877E2FAF62ED6F1688CA5(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetAlphamapResolutionInternal_m350DEF6E0B9C4D69AC314B84D58CE634434E17E2 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method)
{
	typedef float (*TerrainData_GetAlphamapResolutionInternal_m350DEF6E0B9C4D69AC314B84D58CE634434E17E2_ftn) (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 *);
	static TerrainData_GetAlphamapResolutionInternal_m350DEF6E0B9C4D69AC314B84D58CE634434E17E2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetAlphamapResolutionInternal_m350DEF6E0B9C4D69AC314B84D58CE634434E17E2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetAlphamapResolutionInternal()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Terrain[] UnityEngine.TerrainData::get_users()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* TerrainData_get_users_m8DC41DB242FD51BDA25CE01F0AC2C019E05F8F76 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method)
{
	typedef TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* (*TerrainData_get_users_m8DC41DB242FD51BDA25CE01F0AC2C019E05F8F76_ftn) (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 *);
	static TerrainData_get_users_m8DC41DB242FD51BDA25CE01F0AC2C019E05F8F76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_users_m8DC41DB242FD51BDA25CE01F0AC2C019E05F8F76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_users()");
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.TerrainData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData__cctor_m45E4566CDE341BEAED3E65B4A7E400776DF62F46 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__cctor_m45E4566CDE341BEAED3E65B4A7E400776DF62F46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(0, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumResolution_4(L_0);
		int32_t L_1 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(1, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MinimumDetailResolutionPerPatch_5(L_1);
		int32_t L_2 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(2, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumDetailResolutionPerPatch_6(L_2);
		int32_t L_3 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(3, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumDetailPatchCount_7(L_3);
		int32_t L_4 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(4, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumDetailsPerRes_8(L_4);
		int32_t L_5 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(5, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MinimumAlphamapResolution_9(L_5);
		int32_t L_6 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(6, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumAlphamapResolution_10(L_6);
		int32_t L_7 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(7, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MinimumBaseMapResolution_11(L_7);
		int32_t L_8 = TerrainData_GetBoundaryValue_m0B555D428F218379AAF2A6B295837A26E05AF73E(8, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumBaseMapResolution_12(L_8);
		return;
	}
}
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_mD71B7B9445630FFF0ED877E2FAF62ED6F1688CA5 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_get_size_Injected_mD71B7B9445630FFF0ED877E2FAF62ED6F1688CA5_ftn) (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TerrainData_get_size_Injected_mD71B7B9445630FFF0ED877E2FAF62ED6F1688CA5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_size_Injected_mD71B7B9445630FFF0ED877E2FAF62ED6F1688CA5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
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
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_mB00EAB46595A5ADD88721EFF88C74F866EFC4112_inline (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  Enumerator_get_Current_mA56503BE6C004270C14AEF4A7CB81681BE5AC5E6_gshared_inline (Enumerator_t9A2E00C583A23B1B5B7D051DF98EBA95FA7174AF * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE  L_0 = (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m9B01C8256F7BED646EE29185D7981D4E7F9D5E78_gshared_inline (KeyValuePair_2_t86464C52F9602337EAC68825E6BE06951D7530CE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71  Enumerator_get_Current_m8B20A69E792CACCABC998A9235B2758BBA756B71_gshared_inline (Enumerator_t4DDDF47DD4C87E44EC232DFA4AE96F84618DD4CC * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71  L_0 = (KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  KeyValuePair_2_get_Key_m489586A04E006E1FFB609DC5B8ED0AC76C94077E_gshared_inline (KeyValuePair_2_t67F6B91FB74B8D583D81D54E679D32898FD7BD71 * __this, const RuntimeMethod* method)
{
	{
		TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_0 = (TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA )__this->get_key_0();
		return L_0;
	}
}
IL2CPP_FORCE_INLINE IL2CPP_METHOD_ATTR TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  Enumerator_get_Current_m278DEBA811C3C38EB73A1739E0EDDE62599D12AA_gshared_inline (Enumerator_tD79D8F139149D650B09D2E38DCCEB4AC76A91529 * __this, const RuntimeMethod* method)
{
	{
		TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_0 = (TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA )__this->get_currentKey_3();
		return L_0;
	}
}
