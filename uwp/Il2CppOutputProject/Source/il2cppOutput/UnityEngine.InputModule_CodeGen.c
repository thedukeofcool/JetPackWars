#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
extern void NativeUpdateCallback__ctor_mD33D51CCB8192018082E8B6CFC552E5BC6D23512 ();
// 0x00000002 System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
extern void NativeUpdateCallback_Invoke_mE82D2994A5D407825C267886E58586A60959E9C3 ();
// 0x00000003 System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*,System.AsyncCallback,System.Object)
extern void NativeUpdateCallback_BeginInvoke_mDE0F8231E8BD932DAAD0CFE06CAECDE4CF46D08C ();
// 0x00000004 System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult)
extern void NativeUpdateCallback_EndInvoke_mC5CBF699E4F0792A8516529FB0AD40D59CA27674 ();
// 0x00000005 System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
extern void NativeInputSystem__cctor_mD8309B8A85FBA303AAA31417962E01ECE64B6F29 ();
// 0x00000006 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern void NativeInputSystem_NotifyBeforeUpdate_m65673A1CA957016CDC49780FBB2E2EAF1B55D633 ();
// 0x00000007 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr)
extern void NativeInputSystem_NotifyUpdate_mA66010686BB71BD57BD71F20C418ECCB750232E6 ();
// 0x00000008 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
extern void NativeInputSystem_NotifyDeviceDiscovered_m5C7F0337EC7557A9F5B5CCC3EEE6CB183988F059 ();
// 0x00000009 System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&)
extern void NativeInputSystem_ShouldRunUpdate_mCD7DAB04F17B45C217E768E68971E8EA105A4B26 ();
// 0x0000000A System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern void NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A ();
static Il2CppMethodPointer s_methodPointers[10] = 
{
	NativeUpdateCallback__ctor_mD33D51CCB8192018082E8B6CFC552E5BC6D23512,
	NativeUpdateCallback_Invoke_mE82D2994A5D407825C267886E58586A60959E9C3,
	NativeUpdateCallback_BeginInvoke_mDE0F8231E8BD932DAAD0CFE06CAECDE4CF46D08C,
	NativeUpdateCallback_EndInvoke_mC5CBF699E4F0792A8516529FB0AD40D59CA27674,
	NativeInputSystem__cctor_mD8309B8A85FBA303AAA31417962E01ECE64B6F29,
	NativeInputSystem_NotifyBeforeUpdate_m65673A1CA957016CDC49780FBB2E2EAF1B55D633,
	NativeInputSystem_NotifyUpdate_mA66010686BB71BD57BD71F20C418ECCB750232E6,
	NativeInputSystem_NotifyDeviceDiscovered_m5C7F0337EC7557A9F5B5CCC3EEE6CB183988F059,
	NativeInputSystem_ShouldRunUpdate_mCD7DAB04F17B45C217E768E68971E8EA105A4B26,
	NativeInputSystem_set_hasDeviceDiscoveredCallback_mD592FCA9AD7E6E14A465A6DFA0BD2B42E227011A,
};
static const int32_t s_InvokerIndices[10] = 
{
	111,
	772,
	1421,
	26,
	3,
	140,
	1242,
	530,
	1339,
	799,
};
extern const Il2CppCodeGenModule g_UnityEngine_InputModuleCodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_InputModuleCodeGenModule = 
{
	"UnityEngine.InputModule.dll",
	10,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
