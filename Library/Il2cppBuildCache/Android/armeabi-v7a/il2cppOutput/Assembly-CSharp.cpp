#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// GoogleMapLocation[]
struct GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A;
// GoogleMapMarker[]
struct GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C;
// GoogleMapPath[]
struct GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60;
// ApplicationChrome
struct ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// GoogleMap
struct GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD;
// GoogleMapLocation
struct GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499;
// GoogleMapMarker
struct GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9;
// GoogleMapPath
struct GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// LoadAPI
struct LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6;
// Manager
struct Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// GoogleMap/<_Refresh>d__13
struct U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A;
// LoadAPI/<LoadData>d__3
struct U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleMapColor_t098E6F70FC9AA542035F5589E1BE91D504BE6463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleMapMarkerSize_t01048FFA3CEC13D89CB66B72B8A814FB0BC4C6F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapType_t8716D5D7B60A501EBA511306392BBAB3B43DD02E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00A3E985B4C35F7420C779966888D3AB71BC14C0;
IL2CPP_EXTERN_C String_t* _stringLiteral01F1B441381501E7159931B11687EB16BA522F11;
IL2CPP_EXTERN_C String_t* _stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF62D1FFEBA465FE622B6596519BB41F15F3790;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2CE74EBEC696E86838AE43A9E4D9760701FF08F1;
IL2CPP_EXTERN_C String_t* _stringLiteral339D3D3C0F775F203EF271D34EAB3682229A4359;
IL2CPP_EXTERN_C String_t* _stringLiteral399D53910A1D409FC056D2815165B37E4CEA860A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC3EAE057610815EE937CFB2D7DF177AAD1EA87;
IL2CPP_EXTERN_C String_t* _stringLiteral6B4C8E1CCD3177E31DDC3723D9CF8A12FA971B01;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral788A220E8C00A2F11359D49CDEE22514550178B9;
IL2CPP_EXTERN_C String_t* _stringLiteral7C05C726882CE6220C654BEECD0BB1C4D41B477D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteral96342667E84A47E1C8224FC89496B9991DE4C87E;
IL2CPP_EXTERN_C String_t* _stringLiteralA40ED89A7E2598990635907AC1DC2BDFF7F10478;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralAFFDF3E8715066A839709147FC18BAE20E9982DE;
IL2CPP_EXTERN_C String_t* _stringLiteralB0DD7F745D89B7DC6E82BDFEA83AF83539A1F11B;
IL2CPP_EXTERN_C String_t* _stringLiteralB43946FDB8F8232766F035C8E375B503E9A21229;
IL2CPP_EXTERN_C String_t* _stringLiteralB581E1CAE6ACA56AC76CCDBAE049D0A3961A06E6;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBC88FD4DFD69CAC316A992A553AE75233796C28F;
IL2CPP_EXTERN_C String_t* _stringLiteralBF2479EC9ADF40A9D5DADA9A0F321A32E85E0E58;
IL2CPP_EXTERN_C String_t* _stringLiteralC0ED58E45A956AD509E712D42948DDA4CD92B0FB;
IL2CPP_EXTERN_C String_t* _stringLiteralD0C9C0047E2D991162C10E919BF5DC4944259BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD11A9C60D474B27E2D5804346B9DD66A2385EA09;
IL2CPP_EXTERN_C String_t* _stringLiteralD24B5EDBA9A55E8EDDDF9AE87C62C755F4638669;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB949543DB5795363E321048BBCADE8E57C6225;
IL2CPP_EXTERN_C String_t* _stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120;
IL2CPP_EXTERN_C String_t* _stringLiteralE330D73E00FAB4EC646814C598B67F3BE6870C53;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationChrome_applyUIColorsAndroidInThread_m9BCE6A2E7F27AB6FF6EF6F0F434517182124BD44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationChrome_setFlagsInThread_mEAC27CA5F13CCB850AE65F7C3B6A2EF350DF593F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationChrome_setSystemUiVisibilityInThread_mE34D57BA2D5C2529E100CC0893DCF34240690746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadDataU3Ed__3_System_Collections_IEnumerator_Reset_m7D14A77BE20FFE988B6FEC375EF6A1F7CE391776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_RefreshU3Ed__13_System_Collections_IEnumerator_Reset_m2D15B3767DD81F4C054C51B9621554786E1002D0_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A;
struct GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C;
struct GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// GoogleMapLocation
struct GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499  : public RuntimeObject
{
public:
	// System.String GoogleMapLocation::address
	String_t* ___address_0;
	// System.Single GoogleMapLocation::latitude
	float ___latitude_1;
	// System.Single GoogleMapLocation::longitude
	float ___longitude_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499, ___address_0)); }
	inline String_t* get_address_0() const { return ___address_0; }
	inline String_t** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(String_t* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_0), (void*)value);
	}

	inline static int32_t get_offset_of_latitude_1() { return static_cast<int32_t>(offsetof(GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499, ___latitude_1)); }
	inline float get_latitude_1() const { return ___latitude_1; }
	inline float* get_address_of_latitude_1() { return &___latitude_1; }
	inline void set_latitude_1(float value)
	{
		___latitude_1 = value;
	}

	inline static int32_t get_offset_of_longitude_2() { return static_cast<int32_t>(offsetof(GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499, ___longitude_2)); }
	inline float get_longitude_2() const { return ___longitude_2; }
	inline float* get_address_of_longitude_2() { return &___longitude_2; }
	inline void set_longitude_2(float value)
	{
		___longitude_2 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GoogleMap/<_Refresh>d__13
struct U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A  : public RuntimeObject
{
public:
	// System.Int32 GoogleMap/<_Refresh>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GoogleMap/<_Refresh>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GoogleMap GoogleMap/<_Refresh>d__13::<>4__this
	GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * ___U3CU3E4__this_2;
	// UnityEngine.WWW GoogleMap/<_Refresh>d__13::<req>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CreqU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A, ___U3CU3E4__this_2)); }
	inline GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreqU3E5__2_3() { return static_cast<int32_t>(offsetof(U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A, ___U3CreqU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CreqU3E5__2_3() const { return ___U3CreqU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CreqU3E5__2_3() { return &___U3CreqU3E5__2_3; }
	inline void set_U3CreqU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CreqU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreqU3E5__2_3), (void*)value);
	}
};


// LoadAPI/<LoadData>d__3
struct U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E  : public RuntimeObject
{
public:
	// System.Int32 LoadAPI/<LoadData>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadAPI/<LoadData>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LoadAPI LoadAPI/<LoadData>d__3::<>4__this
	LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest LoadAPI/<LoadData>d__3::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E, ___U3CU3E4__this_2)); }
	inline LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// GoogleMapColor
struct GoogleMapColor_t098E6F70FC9AA542035F5589E1BE91D504BE6463 
{
public:
	// System.Int32 GoogleMapColor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GoogleMapColor_t098E6F70FC9AA542035F5589E1BE91D504BE6463, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// ApplicationChrome/States
struct States_tFAE9F66D4A774F44720C18D95D808D6505B21380 
{
public:
	// System.Int32 ApplicationChrome/States::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(States_tFAE9F66D4A774F44720C18D95D808D6505B21380, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMap/MapType
struct MapType_t8716D5D7B60A501EBA511306392BBAB3B43DD02E 
{
public:
	// System.Int32 GoogleMap/MapType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapType_t8716D5D7B60A501EBA511306392BBAB3B43DD02E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMapMarker/GoogleMapMarkerSize
struct GoogleMapMarkerSize_t01048FFA3CEC13D89CB66B72B8A814FB0BC4C6F8 
{
public:
	// System.Int32 GoogleMapMarker/GoogleMapMarkerSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GoogleMapMarkerSize_t01048FFA3CEC13D89CB66B72B8A814FB0BC4C6F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ApplicationChrome
struct ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2  : public RuntimeObject
{
public:

public:
};

struct ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields
{
public:
	// System.Int32 ApplicationChrome::WINDOW_FLAG_FULLSCREEN
	int32_t ___WINDOW_FLAG_FULLSCREEN_10;
	// System.Int32 ApplicationChrome::WINDOW_FLAG_FORCE_NOT_FULLSCREEN
	int32_t ___WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11;
	// System.Int32 ApplicationChrome::WINDOW_FLAG_LAYOUT_IN_SCREEN
	int32_t ___WINDOW_FLAG_LAYOUT_IN_SCREEN_12;
	// System.Int32 ApplicationChrome::WINDOW_FLAG_TRANSLUCENT_STATUS
	int32_t ___WINDOW_FLAG_TRANSLUCENT_STATUS_13;
	// System.Int32 ApplicationChrome::WINDOW_FLAG_TRANSLUCENT_NAVIGATION
	int32_t ___WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14;
	// System.Int32 ApplicationChrome::WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS
	int32_t ___WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15;
	// System.Int32 ApplicationChrome::systemUiVisibilityValue
	int32_t ___systemUiVisibilityValue_16;
	// System.Int32 ApplicationChrome::flagsValue
	int32_t ___flagsValue_17;
	// ApplicationChrome/States ApplicationChrome::_statusBarState
	int32_t ____statusBarState_18;
	// ApplicationChrome/States ApplicationChrome::_navigationBarState
	int32_t ____navigationBarState_19;
	// System.UInt32 ApplicationChrome::_statusBarColor
	uint32_t ____statusBarColor_20;
	// System.UInt32 ApplicationChrome::_navigationBarColor
	uint32_t ____navigationBarColor_21;
	// System.Boolean ApplicationChrome::_isStatusBarTranslucent
	bool ____isStatusBarTranslucent_22;
	// System.Boolean ApplicationChrome::_isNavigationBarTranslucent
	bool ____isNavigationBarTranslucent_23;
	// System.Boolean ApplicationChrome::_dimmed
	bool ____dimmed_24;

public:
	inline static int32_t get_offset_of_WINDOW_FLAG_FULLSCREEN_10() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___WINDOW_FLAG_FULLSCREEN_10)); }
	inline int32_t get_WINDOW_FLAG_FULLSCREEN_10() const { return ___WINDOW_FLAG_FULLSCREEN_10; }
	inline int32_t* get_address_of_WINDOW_FLAG_FULLSCREEN_10() { return &___WINDOW_FLAG_FULLSCREEN_10; }
	inline void set_WINDOW_FLAG_FULLSCREEN_10(int32_t value)
	{
		___WINDOW_FLAG_FULLSCREEN_10 = value;
	}

	inline static int32_t get_offset_of_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11)); }
	inline int32_t get_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11() const { return ___WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11; }
	inline int32_t* get_address_of_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11() { return &___WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11; }
	inline void set_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11(int32_t value)
	{
		___WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11 = value;
	}

	inline static int32_t get_offset_of_WINDOW_FLAG_LAYOUT_IN_SCREEN_12() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___WINDOW_FLAG_LAYOUT_IN_SCREEN_12)); }
	inline int32_t get_WINDOW_FLAG_LAYOUT_IN_SCREEN_12() const { return ___WINDOW_FLAG_LAYOUT_IN_SCREEN_12; }
	inline int32_t* get_address_of_WINDOW_FLAG_LAYOUT_IN_SCREEN_12() { return &___WINDOW_FLAG_LAYOUT_IN_SCREEN_12; }
	inline void set_WINDOW_FLAG_LAYOUT_IN_SCREEN_12(int32_t value)
	{
		___WINDOW_FLAG_LAYOUT_IN_SCREEN_12 = value;
	}

	inline static int32_t get_offset_of_WINDOW_FLAG_TRANSLUCENT_STATUS_13() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___WINDOW_FLAG_TRANSLUCENT_STATUS_13)); }
	inline int32_t get_WINDOW_FLAG_TRANSLUCENT_STATUS_13() const { return ___WINDOW_FLAG_TRANSLUCENT_STATUS_13; }
	inline int32_t* get_address_of_WINDOW_FLAG_TRANSLUCENT_STATUS_13() { return &___WINDOW_FLAG_TRANSLUCENT_STATUS_13; }
	inline void set_WINDOW_FLAG_TRANSLUCENT_STATUS_13(int32_t value)
	{
		___WINDOW_FLAG_TRANSLUCENT_STATUS_13 = value;
	}

	inline static int32_t get_offset_of_WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14)); }
	inline int32_t get_WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14() const { return ___WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14; }
	inline int32_t* get_address_of_WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14() { return &___WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14; }
	inline void set_WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14(int32_t value)
	{
		___WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14 = value;
	}

	inline static int32_t get_offset_of_WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15)); }
	inline int32_t get_WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15() const { return ___WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15; }
	inline int32_t* get_address_of_WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15() { return &___WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15; }
	inline void set_WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15(int32_t value)
	{
		___WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15 = value;
	}

	inline static int32_t get_offset_of_systemUiVisibilityValue_16() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___systemUiVisibilityValue_16)); }
	inline int32_t get_systemUiVisibilityValue_16() const { return ___systemUiVisibilityValue_16; }
	inline int32_t* get_address_of_systemUiVisibilityValue_16() { return &___systemUiVisibilityValue_16; }
	inline void set_systemUiVisibilityValue_16(int32_t value)
	{
		___systemUiVisibilityValue_16 = value;
	}

	inline static int32_t get_offset_of_flagsValue_17() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ___flagsValue_17)); }
	inline int32_t get_flagsValue_17() const { return ___flagsValue_17; }
	inline int32_t* get_address_of_flagsValue_17() { return &___flagsValue_17; }
	inline void set_flagsValue_17(int32_t value)
	{
		___flagsValue_17 = value;
	}

	inline static int32_t get_offset_of__statusBarState_18() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ____statusBarState_18)); }
	inline int32_t get__statusBarState_18() const { return ____statusBarState_18; }
	inline int32_t* get_address_of__statusBarState_18() { return &____statusBarState_18; }
	inline void set__statusBarState_18(int32_t value)
	{
		____statusBarState_18 = value;
	}

	inline static int32_t get_offset_of__navigationBarState_19() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ____navigationBarState_19)); }
	inline int32_t get__navigationBarState_19() const { return ____navigationBarState_19; }
	inline int32_t* get_address_of__navigationBarState_19() { return &____navigationBarState_19; }
	inline void set__navigationBarState_19(int32_t value)
	{
		____navigationBarState_19 = value;
	}

	inline static int32_t get_offset_of__statusBarColor_20() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ____statusBarColor_20)); }
	inline uint32_t get__statusBarColor_20() const { return ____statusBarColor_20; }
	inline uint32_t* get_address_of__statusBarColor_20() { return &____statusBarColor_20; }
	inline void set__statusBarColor_20(uint32_t value)
	{
		____statusBarColor_20 = value;
	}

	inline static int32_t get_offset_of__navigationBarColor_21() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ____navigationBarColor_21)); }
	inline uint32_t get__navigationBarColor_21() const { return ____navigationBarColor_21; }
	inline uint32_t* get_address_of__navigationBarColor_21() { return &____navigationBarColor_21; }
	inline void set__navigationBarColor_21(uint32_t value)
	{
		____navigationBarColor_21 = value;
	}

	inline static int32_t get_offset_of__isStatusBarTranslucent_22() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ____isStatusBarTranslucent_22)); }
	inline bool get__isStatusBarTranslucent_22() const { return ____isStatusBarTranslucent_22; }
	inline bool* get_address_of__isStatusBarTranslucent_22() { return &____isStatusBarTranslucent_22; }
	inline void set__isStatusBarTranslucent_22(bool value)
	{
		____isStatusBarTranslucent_22 = value;
	}

	inline static int32_t get_offset_of__isNavigationBarTranslucent_23() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ____isNavigationBarTranslucent_23)); }
	inline bool get__isNavigationBarTranslucent_23() const { return ____isNavigationBarTranslucent_23; }
	inline bool* get_address_of__isNavigationBarTranslucent_23() { return &____isNavigationBarTranslucent_23; }
	inline void set__isNavigationBarTranslucent_23(bool value)
	{
		____isNavigationBarTranslucent_23 = value;
	}

	inline static int32_t get_offset_of__dimmed_24() { return static_cast<int32_t>(offsetof(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields, ____dimmed_24)); }
	inline bool get__dimmed_24() const { return ____dimmed_24; }
	inline bool* get_address_of__dimmed_24() { return &____dimmed_24; }
	inline void set__dimmed_24(bool value)
	{
		____dimmed_24 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GoogleMapMarker
struct GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9  : public RuntimeObject
{
public:
	// GoogleMapMarker/GoogleMapMarkerSize GoogleMapMarker::size
	int32_t ___size_0;
	// GoogleMapColor GoogleMapMarker::color
	int32_t ___color_1;
	// System.String GoogleMapMarker::label
	String_t* ___label_2;
	// GoogleMapLocation[] GoogleMapMarker::locations
	GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* ___locations_3;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9, ___color_1)); }
	inline int32_t get_color_1() const { return ___color_1; }
	inline int32_t* get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(int32_t value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9, ___label_2)); }
	inline String_t* get_label_2() const { return ___label_2; }
	inline String_t** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(String_t* value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_2), (void*)value);
	}

	inline static int32_t get_offset_of_locations_3() { return static_cast<int32_t>(offsetof(GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9, ___locations_3)); }
	inline GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* get_locations_3() const { return ___locations_3; }
	inline GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A** get_address_of_locations_3() { return &___locations_3; }
	inline void set_locations_3(GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* value)
	{
		___locations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locations_3), (void*)value);
	}
};


// GoogleMapPath
struct GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54  : public RuntimeObject
{
public:
	// System.Int32 GoogleMapPath::weight
	int32_t ___weight_0;
	// GoogleMapColor GoogleMapPath::color
	int32_t ___color_1;
	// System.Boolean GoogleMapPath::fill
	bool ___fill_2;
	// GoogleMapColor GoogleMapPath::fillColor
	int32_t ___fillColor_3;
	// GoogleMapLocation[] GoogleMapPath::locations
	GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* ___locations_4;

public:
	inline static int32_t get_offset_of_weight_0() { return static_cast<int32_t>(offsetof(GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54, ___weight_0)); }
	inline int32_t get_weight_0() const { return ___weight_0; }
	inline int32_t* get_address_of_weight_0() { return &___weight_0; }
	inline void set_weight_0(int32_t value)
	{
		___weight_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54, ___color_1)); }
	inline int32_t get_color_1() const { return ___color_1; }
	inline int32_t* get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(int32_t value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fill_2() { return static_cast<int32_t>(offsetof(GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54, ___fill_2)); }
	inline bool get_fill_2() const { return ___fill_2; }
	inline bool* get_address_of_fill_2() { return &___fill_2; }
	inline void set_fill_2(bool value)
	{
		___fill_2 = value;
	}

	inline static int32_t get_offset_of_fillColor_3() { return static_cast<int32_t>(offsetof(GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54, ___fillColor_3)); }
	inline int32_t get_fillColor_3() const { return ___fillColor_3; }
	inline int32_t* get_address_of_fillColor_3() { return &___fillColor_3; }
	inline void set_fillColor_3(int32_t value)
	{
		___fillColor_3 = value;
	}

	inline static int32_t get_offset_of_locations_4() { return static_cast<int32_t>(offsetof(GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54, ___locations_4)); }
	inline GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* get_locations_4() const { return ___locations_4; }
	inline GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A** get_address_of_locations_4() { return &___locations_4; }
	inline void set_locations_4(GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* value)
	{
		___locations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locations_4), (void*)value);
	}
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GoogleMap
struct GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String GoogleMap::GoogleApiKey
	String_t* ___GoogleApiKey_4;
	// System.Boolean GoogleMap::loadOnStart
	bool ___loadOnStart_5;
	// System.Boolean GoogleMap::autoLocateCenter
	bool ___autoLocateCenter_6;
	// GoogleMapLocation GoogleMap::centerLocation
	GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * ___centerLocation_7;
	// System.Int32 GoogleMap::zoom
	int32_t ___zoom_8;
	// GoogleMap/MapType GoogleMap::mapType
	int32_t ___mapType_9;
	// System.Int32 GoogleMap::size
	int32_t ___size_10;
	// System.Boolean GoogleMap::doubleResolution
	bool ___doubleResolution_11;
	// GoogleMapMarker[] GoogleMap::markers
	GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* ___markers_12;
	// GoogleMapPath[] GoogleMap::paths
	GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* ___paths_13;

public:
	inline static int32_t get_offset_of_GoogleApiKey_4() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___GoogleApiKey_4)); }
	inline String_t* get_GoogleApiKey_4() const { return ___GoogleApiKey_4; }
	inline String_t** get_address_of_GoogleApiKey_4() { return &___GoogleApiKey_4; }
	inline void set_GoogleApiKey_4(String_t* value)
	{
		___GoogleApiKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GoogleApiKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_loadOnStart_5() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___loadOnStart_5)); }
	inline bool get_loadOnStart_5() const { return ___loadOnStart_5; }
	inline bool* get_address_of_loadOnStart_5() { return &___loadOnStart_5; }
	inline void set_loadOnStart_5(bool value)
	{
		___loadOnStart_5 = value;
	}

	inline static int32_t get_offset_of_autoLocateCenter_6() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___autoLocateCenter_6)); }
	inline bool get_autoLocateCenter_6() const { return ___autoLocateCenter_6; }
	inline bool* get_address_of_autoLocateCenter_6() { return &___autoLocateCenter_6; }
	inline void set_autoLocateCenter_6(bool value)
	{
		___autoLocateCenter_6 = value;
	}

	inline static int32_t get_offset_of_centerLocation_7() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___centerLocation_7)); }
	inline GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * get_centerLocation_7() const { return ___centerLocation_7; }
	inline GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 ** get_address_of_centerLocation_7() { return &___centerLocation_7; }
	inline void set_centerLocation_7(GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * value)
	{
		___centerLocation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerLocation_7), (void*)value);
	}

	inline static int32_t get_offset_of_zoom_8() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___zoom_8)); }
	inline int32_t get_zoom_8() const { return ___zoom_8; }
	inline int32_t* get_address_of_zoom_8() { return &___zoom_8; }
	inline void set_zoom_8(int32_t value)
	{
		___zoom_8 = value;
	}

	inline static int32_t get_offset_of_mapType_9() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___mapType_9)); }
	inline int32_t get_mapType_9() const { return ___mapType_9; }
	inline int32_t* get_address_of_mapType_9() { return &___mapType_9; }
	inline void set_mapType_9(int32_t value)
	{
		___mapType_9 = value;
	}

	inline static int32_t get_offset_of_size_10() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___size_10)); }
	inline int32_t get_size_10() const { return ___size_10; }
	inline int32_t* get_address_of_size_10() { return &___size_10; }
	inline void set_size_10(int32_t value)
	{
		___size_10 = value;
	}

	inline static int32_t get_offset_of_doubleResolution_11() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___doubleResolution_11)); }
	inline bool get_doubleResolution_11() const { return ___doubleResolution_11; }
	inline bool* get_address_of_doubleResolution_11() { return &___doubleResolution_11; }
	inline void set_doubleResolution_11(bool value)
	{
		___doubleResolution_11 = value;
	}

	inline static int32_t get_offset_of_markers_12() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___markers_12)); }
	inline GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* get_markers_12() const { return ___markers_12; }
	inline GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C** get_address_of_markers_12() { return &___markers_12; }
	inline void set_markers_12(GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* value)
	{
		___markers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markers_12), (void*)value);
	}

	inline static int32_t get_offset_of_paths_13() { return static_cast<int32_t>(offsetof(GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD, ___paths_13)); }
	inline GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* get_paths_13() const { return ___paths_13; }
	inline GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768** get_address_of_paths_13() { return &___paths_13; }
	inline void set_paths_13(GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* value)
	{
		___paths_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paths_13), (void*)value);
	}
};


// LoadAPI
struct LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String LoadAPI::jsonResult
	String_t* ___jsonResult_4;
	// System.Boolean LoadAPI::isOnLoading
	bool ___isOnLoading_5;

public:
	inline static int32_t get_offset_of_jsonResult_4() { return static_cast<int32_t>(offsetof(LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6, ___jsonResult_4)); }
	inline String_t* get_jsonResult_4() const { return ___jsonResult_4; }
	inline String_t** get_address_of_jsonResult_4() { return &___jsonResult_4; }
	inline void set_jsonResult_4(String_t* value)
	{
		___jsonResult_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonResult_4), (void*)value);
	}

	inline static int32_t get_offset_of_isOnLoading_5() { return static_cast<int32_t>(offsetof(LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6, ___isOnLoading_5)); }
	inline bool get_isOnLoading_5() const { return ___isOnLoading_5; }
	inline bool* get_address_of_isOnLoading_5() { return &___isOnLoading_5; }
	inline void set_isOnLoading_5(bool value)
	{
		___isOnLoading_5 = value;
	}
};


// Manager
struct Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt32 Manager::exitCountValue
	uint32_t ___exitCountValue_4;

public:
	inline static int32_t get_offset_of_exitCountValue_4() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___exitCountValue_4)); }
	inline uint32_t get_exitCountValue_4() const { return ___exitCountValue_4; }
	inline uint32_t* get_address_of_exitCountValue_4() { return &___exitCountValue_4; }
	inline void set_exitCountValue_4(uint32_t value)
	{
		___exitCountValue_4 = value;
	}
};


// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// GoogleMapMarker[]
struct GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * m_Items[1];

public:
	inline GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GoogleMapPath[]
struct GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * m_Items[1];

public:
	inline GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GoogleMapLocation[]
struct GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * m_Items[1];

public:
	inline GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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


// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void ApplicationChrome::applyUIStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0 (const RuntimeMethod* method);
// System.Void ApplicationChrome::applyUIColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIColors_mFA42BCEAD396B5C052D0C9065E58B051D9213BEE (const RuntimeMethod* method);
// System.Void ApplicationChrome::applyUIStatesAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIStatesAndroid_m3C681B4D91B56785964C000BD5069A125D6F975A (const RuntimeMethod* method);
// System.Void ApplicationChrome::applyUIColorsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIColorsAndroid_mCB1BABA0C99B577F06E5AF6FEFF2494F34D637FA (const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_fullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A (const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_fullScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB (bool ___value0, const RuntimeMethod* method);
// System.Void ApplicationChrome::setFlags(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_setFlags_mA7EA011D69AFFF5FB969CC0BB6411A254163CF24 (int32_t ___value0, const RuntimeMethod* method);
// System.Void ApplicationChrome::setSystemUiVisibility(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_setSystemUiVisibility_m3AA65A4D426F841A1EACF15EE6899186AE0DB9FE (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ApplicationChrome::runOnAndroidUiThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_runOnAndroidUiThread_m42888CFAF4C04FFCE496BFF19CB1B3EADDA6C05A (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___target0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GoogleMap::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMap_Refresh_m2F5F56403A77E3DD56AE1E7BC0AB1CF7ADE6D1FC (GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.IEnumerator GoogleMap::_Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleMap__Refresh_mD17B4CE9DCB0A180C0634AA8E7F0EACE3BE12415 (GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GoogleMap/<_Refresh>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_RefreshU3Ed__13__ctor_m2B840FAE445FF21376D2C933236B399C8B2240C0 (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator LoadAPI::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadAPI_LoadData_mF005641800DD29E4D53E5876334A18658DBF713F (LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * __this, const RuntimeMethod* method);
// System.Void LoadAPI/<LoadData>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__3__ctor_m6C481B496607CB52D7542307F3BBD6742D96A4AC (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ApplicationChrome::set_statusBarState(ApplicationChrome/States)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_set_statusBarState_m8DB2E0DB0A29637345566BC1E7AE19B22258AFDA (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.WWW::UnEscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::LoadImageIntoTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW_LoadImageIntoTexture_m20D481E8B0502D37528B5C648818D9983C1BDFEE (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void LoadAPI/<LoadData>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__3_U3CU3Em__Finally1_m37B7E7D2901033F8620D2C861DD1AC9DAE873E68 (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * UnityWebRequest_Send_mCE6413FFF8346F6A03B4F785D22F11887021EE22 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void LoadAPI/<LoadData>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__3_System_IDisposable_Dispose_m65DBF7BAAE731C052DEFCB30ECC7ED07B4E1EEA7 (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method);
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
// System.Void ApplicationChrome::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome__cctor_m6909A1137009CAC2DCD7405D507757C7CBA88329 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int WINDOW_FLAG_FULLSCREEN = 0x00000400;
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_WINDOW_FLAG_FULLSCREEN_10(((int32_t)1024));
		// private static int WINDOW_FLAG_FORCE_NOT_FULLSCREEN = 0x00000800;
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11(((int32_t)2048));
		// private static int WINDOW_FLAG_LAYOUT_IN_SCREEN = 0x00000100;
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_WINDOW_FLAG_LAYOUT_IN_SCREEN_12(((int32_t)256));
		// private static int WINDOW_FLAG_TRANSLUCENT_STATUS = 0x04000000;
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_WINDOW_FLAG_TRANSLUCENT_STATUS_13(((int32_t)67108864));
		// private static int WINDOW_FLAG_TRANSLUCENT_NAVIGATION = 0x08000000;
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14(((int32_t)134217728));
		// private static int WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS = -2147483648; // 0x80000000; // Added in API 21 (Android 5.0): tells the Window is responsible for drawing the background for the system bars. If set, the system bars are drawn with a transparent background and the corresponding areas in this window are filled with the colors specified in getStatusBarColor() and getNavigationBarColor()
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15(((int32_t)-2147483648LL));
		// private static uint _statusBarColor = DEFAULT_BACKGROUND_COLOR;
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__statusBarColor_20(((int32_t)-16777216));
		// private static uint _navigationBarColor = DEFAULT_BACKGROUND_COLOR;
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__navigationBarColor_21(((int32_t)-16777216));
		// applyUIStates();
		ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0(/*hidden argument*/NULL);
		// applyUIColors();
		ApplicationChrome_applyUIColors_mFA42BCEAD396B5C052D0C9065E58B051D9213BEE(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ApplicationChrome::applyUIStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// applyUIStatesAndroid();
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		ApplicationChrome_applyUIStatesAndroid_m3C681B4D91B56785964C000BD5069A125D6F975A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ApplicationChrome::applyUIColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIColors_mFA42BCEAD396B5C052D0C9065E58B051D9213BEE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// applyUIColorsAndroid();
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		ApplicationChrome_applyUIColorsAndroid_mCB1BABA0C99B577F06E5AF6FEFF2494F34D637FA(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ApplicationChrome::applyUIStatesAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIStatesAndroid_m3C681B4D91B56785964C000BD5069A125D6F975A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int newFlagsValue = 0;
		V_0 = 0;
		// int newSystemUiVisibilityValue = 0;
		V_1 = 0;
		// if (_dimmed) newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_LOW_PROFILE;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		bool L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__dimmed_24();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (_dimmed) newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_LOW_PROFILE;
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1|(int32_t)1));
	}

IL_000f:
	{
		// if (_navigationBarColor != DEFAULT_BACKGROUND_COLOR || _statusBarColor != DEFAULT_BACKGROUND_COLOR) newFlagsValue |= WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		uint32_t L_2 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__navigationBarColor_21();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-16777216)))))
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		uint32_t L_3 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__statusBarColor_20();
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-16777216))))
		{
			goto IL_002f;
		}
	}

IL_0027:
	{
		// if (_navigationBarColor != DEFAULT_BACKGROUND_COLOR || _statusBarColor != DEFAULT_BACKGROUND_COLOR) newFlagsValue |= WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS;
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_5 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS_15();
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)L_5));
	}

IL_002f:
	{
		// switch (_statusBarState) {
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__statusBarState_18();
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_007d;
			}
			case 3:
			{
				goto IL_00a1;
			}
		}
	}
	{
		goto IL_00be;
	}

IL_004f:
	{
		// _isStatusBarTranslucent = false;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__isStatusBarTranslucent_22((bool)0);
		// newFlagsValue |= WINDOW_FLAG_FORCE_NOT_FULLSCREEN;
		int32_t L_8 = V_0;
		int32_t L_9 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11();
		V_0 = ((int32_t)((int32_t)L_8|(int32_t)L_9));
		// break;
		goto IL_00be;
	}

IL_005f:
	{
		// _isStatusBarTranslucent = false;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__isStatusBarTranslucent_22((bool)0);
		// newFlagsValue |= WINDOW_FLAG_FORCE_NOT_FULLSCREEN | WINDOW_FLAG_LAYOUT_IN_SCREEN;
		int32_t L_10 = V_0;
		int32_t L_11 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11();
		int32_t L_12 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_LAYOUT_IN_SCREEN_12();
		V_0 = ((int32_t)((int32_t)L_10|(int32_t)((int32_t)((int32_t)L_11|(int32_t)L_12))));
		// newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)1024)));
		// break;
		goto IL_00be;
	}

IL_007d:
	{
		// _isStatusBarTranslucent = true;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__isStatusBarTranslucent_22((bool)1);
		// newFlagsValue |= WINDOW_FLAG_FORCE_NOT_FULLSCREEN | WINDOW_FLAG_LAYOUT_IN_SCREEN | WINDOW_FLAG_TRANSLUCENT_STATUS;
		int32_t L_14 = V_0;
		int32_t L_15 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_FORCE_NOT_FULLSCREEN_11();
		int32_t L_16 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_LAYOUT_IN_SCREEN_12();
		int32_t L_17 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_TRANSLUCENT_STATUS_13();
		V_0 = ((int32_t)((int32_t)L_14|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15|(int32_t)L_16))|(int32_t)L_17))));
		// newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18|(int32_t)((int32_t)1024)));
		// break;
		goto IL_00be;
	}

IL_00a1:
	{
		// newFlagsValue |= WINDOW_FLAG_FULLSCREEN | WINDOW_FLAG_LAYOUT_IN_SCREEN;
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_20 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_FULLSCREEN_10();
		int32_t L_21 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_LAYOUT_IN_SCREEN_12();
		V_0 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)((int32_t)L_20|(int32_t)L_21))));
		// if (_isStatusBarTranslucent) newFlagsValue |= WINDOW_FLAG_TRANSLUCENT_STATUS;
		bool L_22 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__isStatusBarTranslucent_22();
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		// if (_isStatusBarTranslucent) newFlagsValue |= WINDOW_FLAG_TRANSLUCENT_STATUS;
		int32_t L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_24 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_TRANSLUCENT_STATUS_13();
		V_0 = ((int32_t)((int32_t)L_23|(int32_t)L_24));
	}

IL_00be:
	{
		// switch (_navigationBarState) {
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_25 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__navigationBarState_19();
		V_2 = L_25;
		int32_t L_26 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00de;
			}
			case 1:
			{
				goto IL_00ee;
			}
			case 2:
			{
				goto IL_00fe;
			}
			case 3:
			{
				goto IL_0116;
			}
		}
	}
	{
		goto IL_012d;
	}

IL_00de:
	{
		// _isNavigationBarTranslucent = false;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__isNavigationBarTranslucent_23((bool)0);
		// newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_LAYOUT_STABLE;
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27|(int32_t)((int32_t)256)));
		// break;
		goto IL_012d;
	}

IL_00ee:
	{
		// _isNavigationBarTranslucent = false;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__isNavigationBarTranslucent_23((bool)0);
		// newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_LAYOUT_STABLE | VIEW_SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION;
		int32_t L_28 = V_1;
		V_1 = ((int32_t)((int32_t)L_28|(int32_t)((int32_t)768)));
		// break;
		goto IL_012d;
	}

IL_00fe:
	{
		// _isNavigationBarTranslucent = true;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__isNavigationBarTranslucent_23((bool)1);
		// newFlagsValue |= WINDOW_FLAG_TRANSLUCENT_NAVIGATION;
		int32_t L_29 = V_0;
		int32_t L_30 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14();
		V_0 = ((int32_t)((int32_t)L_29|(int32_t)L_30));
		// newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_LAYOUT_STABLE | VIEW_SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION;
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31|(int32_t)((int32_t)768)));
		// break;
		goto IL_012d;
	}

IL_0116:
	{
		// newSystemUiVisibilityValue |= VIEW_SYSTEM_UI_FLAG_FULLSCREEN | VIEW_SYSTEM_UI_FLAG_HIDE_NAVIGATION | VIEW_SYSTEM_UI_FLAG_IMMERSIVE_STICKY;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)4102)));
		// if (_isNavigationBarTranslucent) newFlagsValue |= WINDOW_FLAG_TRANSLUCENT_NAVIGATION;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		bool L_33 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__isNavigationBarTranslucent_23();
		if (!L_33)
		{
			goto IL_012d;
		}
	}
	{
		// if (_isNavigationBarTranslucent) newFlagsValue |= WINDOW_FLAG_TRANSLUCENT_NAVIGATION;
		int32_t L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_35 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_WINDOW_FLAG_TRANSLUCENT_NAVIGATION_14();
		V_0 = ((int32_t)((int32_t)L_34|(int32_t)L_35));
	}

IL_012d:
	{
		// if (Screen.fullScreen) Screen.fullScreen = false;
		bool L_36;
		L_36 = Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A(/*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_013a;
		}
	}
	{
		// if (Screen.fullScreen) Screen.fullScreen = false;
		Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB((bool)0, /*hidden argument*/NULL);
	}

IL_013a:
	{
		// setFlags(newFlagsValue);
		int32_t L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		ApplicationChrome_setFlags_mA7EA011D69AFFF5FB969CC0BB6411A254163CF24(L_37, /*hidden argument*/NULL);
		// setSystemUiVisibility(newSystemUiVisibilityValue);
		int32_t L_38 = V_1;
		ApplicationChrome_setSystemUiVisibility_m3AA65A4D426F841A1EACF15EE6899186AE0DB9FE(L_38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ApplicationChrome::runOnAndroidUiThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_runOnAndroidUiThread_m42888CFAF4C04FFCE496BFF19CB1B3EADDA6C05A (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			// using (var activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity")) {
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
			NullCheck(L_1);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
			L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0017:
		try
		{ // begin try (depth: 2)
			// activity.Call("runOnUiThread", new AndroidJavaRunnable(target));
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = V_1;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___target0;
			AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_7 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
			AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_7, L_6, (intptr_t)((intptr_t)Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_7);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
			NullCheck(L_3);
			AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_3, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_5, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x4D, FINALLY_0039);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = V_1;
				if (!L_8)
				{
					goto IL_0042;
				}
			}

IL_003c:
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = V_1;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
			}

IL_0042:
			{
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x4D, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void ApplicationChrome::setSystemUiVisibility(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_setSystemUiVisibility_m3AA65A4D426F841A1EACF15EE6899186AE0DB9FE (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_setSystemUiVisibilityInThread_mE34D57BA2D5C2529E100CC0893DCF34240690746_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (systemUiVisibilityValue != value) {
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_systemUiVisibilityValue_16();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		// systemUiVisibilityValue = value;
		int32_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_systemUiVisibilityValue_16(L_2);
		// runOnAndroidUiThread(setSystemUiVisibilityInThread);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, NULL, (intptr_t)((intptr_t)ApplicationChrome_setSystemUiVisibilityInThread_mE34D57BA2D5C2529E100CC0893DCF34240690746_RuntimeMethod_var), /*hidden argument*/NULL);
		ApplicationChrome_runOnAndroidUiThread_m42888CFAF4C04FFCE496BFF19CB1B3EADDA6C05A(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void ApplicationChrome::setSystemUiVisibilityInThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_setSystemUiVisibilityInThread_mE34D57BA2D5C2529E100CC0893DCF34240690746 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CC3EAE057610815EE937CFB2D7DF177AAD1EA87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB43946FDB8F8232766F035C8E375B503E9A21229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB581E1CAE6ACA56AC76CCDBAE049D0A3961A06E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0ED58E45A956AD509E712D42948DDA4CD92B0FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			// using (var activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity")) {
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
			NullCheck(L_1);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
			L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0017:
		try
		{ // begin try (depth: 2)
			{
				// using (var window = activity.Call<AndroidJavaObject>("getWindow")) {
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = V_1;
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
				L_4 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
				NullCheck(L_3);
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
				L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_3, _stringLiteralB43946FDB8F8232766F035C8E375B503E9A21229, L_4, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
				V_2 = L_5;
			}

IL_0028:
			try
			{ // begin try (depth: 3)
				{
					// using (var view = window.Call<AndroidJavaObject>("getDecorView")) {
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = V_2;
					ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
					L_7 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
					NullCheck(L_6);
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
					L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_6, _stringLiteralB581E1CAE6ACA56AC76CCDBAE049D0A3961A06E6, L_7, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
					V_3 = L_8;
				}

IL_0039:
				try
				{ // begin try (depth: 4)
					// view.Call("setOnSystemUiVisibilityChangeListener", null);
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = V_3;
					NullCheck(L_9);
					AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_9, _stringLiteralC0ED58E45A956AD509E712D42948DDA4CD92B0FB, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
					// view.Call("setSystemUiVisibility", systemUiVisibilityValue);
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10 = V_3;
					ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
					ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
					IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
					int32_t L_13 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_systemUiVisibilityValue_16();
					int32_t L_14 = L_13;
					RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
					NullCheck(L_12);
					ArrayElementTypeCheck (L_12, L_15);
					(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
					NullCheck(L_10);
					AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_10, _stringLiteral5CC3EAE057610815EE937CFB2D7DF177AAD1EA87, L_12, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x8D, FINALLY_0065);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0065;
				}

FINALLY_0065:
				{ // begin finally (depth: 4)
					{
						AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = V_3;
						if (!L_16)
						{
							goto IL_006e;
						}
					}

IL_0068:
					{
						AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = V_3;
						NullCheck(L_17);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
					}

IL_006e:
					{
						IL2CPP_END_FINALLY(101)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(101)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_END_CLEANUP(0x8D, FINALLY_006f);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_006f;
			}

FINALLY_006f:
			{ // begin finally (depth: 3)
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = V_2;
					if (!L_18)
					{
						goto IL_0078;
					}
				}

IL_0072:
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = V_2;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
				}

IL_0078:
				{
					IL2CPP_END_FINALLY(111)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(111)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x8D, FINALLY_0079);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0079;
		}

FINALLY_0079:
		{ // begin finally (depth: 2)
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_20 = V_1;
				if (!L_20)
				{
					goto IL_0082;
				}
			}

IL_007c:
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21 = V_1;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
			}

IL_0082:
			{
				IL2CPP_END_FINALLY(121)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(121)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x8D, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_22 = V_0;
			if (!L_22)
			{
				goto IL_008c;
			}
		}

IL_0086:
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_23 = V_0;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_23);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void ApplicationChrome::setFlags(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_setFlags_mA7EA011D69AFFF5FB969CC0BB6411A254163CF24 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_setFlagsInThread_mEAC27CA5F13CCB850AE65F7C3B6A2EF350DF593F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flagsValue != value) {
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_flagsValue_17();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		// flagsValue = value;
		int32_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set_flagsValue_17(L_2);
		// runOnAndroidUiThread(setFlagsInThread);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, NULL, (intptr_t)((intptr_t)ApplicationChrome_setFlagsInThread_mEAC27CA5F13CCB850AE65F7C3B6A2EF350DF593F_RuntimeMethod_var), /*hidden argument*/NULL);
		ApplicationChrome_runOnAndroidUiThread_m42888CFAF4C04FFCE496BFF19CB1B3EADDA6C05A(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void ApplicationChrome::setFlagsInThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_setFlagsInThread_mEAC27CA5F13CCB850AE65F7C3B6A2EF350DF593F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB43946FDB8F8232766F035C8E375B503E9A21229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			// using (var activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity")) {
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
			NullCheck(L_1);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
			L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0017:
		try
		{ // begin try (depth: 2)
			{
				// using (var window = activity.Call<AndroidJavaObject>("getWindow")) {
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = V_1;
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
				L_4 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
				NullCheck(L_3);
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
				L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_3, _stringLiteralB43946FDB8F8232766F035C8E375B503E9A21229, L_4, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
				V_2 = L_5;
			}

IL_0028:
			try
			{ // begin try (depth: 3)
				// window.Call("setFlags", flagsValue, -1); // (int)0x7FFFFFFF
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = V_2;
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
				IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
				int32_t L_9 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get_flagsValue_17();
				int32_t L_10 = L_9;
				RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, L_11);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
				int32_t L_13 = (-1);
				RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_14);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
				NullCheck(L_6);
				AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_6, _stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A, L_12, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x6F, FINALLY_0051);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0051;
			}

FINALLY_0051:
			{ // begin finally (depth: 3)
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = V_2;
					if (!L_15)
					{
						goto IL_005a;
					}
				}

IL_0054:
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = V_2;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
				}

IL_005a:
				{
					IL2CPP_END_FINALLY(81)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(81)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x6F, FINALLY_005b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_005b;
		}

FINALLY_005b:
		{ // begin finally (depth: 2)
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = V_1;
				if (!L_17)
				{
					goto IL_0064;
				}
			}

IL_005e:
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = V_1;
				NullCheck(L_18);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
			}

IL_0064:
			{
				IL2CPP_END_FINALLY(91)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(91)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x6F, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_19 = V_0;
			if (!L_19)
			{
				goto IL_006e;
			}
		}

IL_0068:
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_20 = V_0;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_20);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void ApplicationChrome::applyUIColorsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIColorsAndroid_mCB1BABA0C99B577F06E5AF6FEFF2494F34D637FA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_applyUIColorsAndroidInThread_m9BCE6A2E7F27AB6FF6EF6F0F434517182124BD44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// runOnAndroidUiThread(applyUIColorsAndroidInThread);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, NULL, (intptr_t)((intptr_t)ApplicationChrome_applyUIColorsAndroidInThread_m9BCE6A2E7F27AB6FF6EF6F0F434517182124BD44_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		ApplicationChrome_runOnAndroidUiThread_m42888CFAF4C04FFCE496BFF19CB1B3EADDA6C05A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ApplicationChrome::applyUIColorsAndroidInThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_applyUIColorsAndroidInThread_m9BCE6A2E7F27AB6FF6EF6F0F434517182124BD44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB43946FDB8F8232766F035C8E375B503E9A21229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD11A9C60D474B27E2D5804346B9DD66A2385EA09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB949543DB5795363E321048BBCADE8E57C6225);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			// using (var activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity")) {
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
			NullCheck(L_1);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
			L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0017:
		try
		{ // begin try (depth: 2)
			{
				// using (var window = activity.Call<AndroidJavaObject>("getWindow")) {
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = V_1;
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
				L_4 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
				NullCheck(L_3);
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
				L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_3, _stringLiteralB43946FDB8F8232766F035C8E375B503E9A21229, L_4, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
				V_2 = L_5;
			}

IL_0028:
			try
			{ // begin try (depth: 3)
				// window.Call("setStatusBarColor", unchecked((int)_statusBarColor));
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = V_2;
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
				IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
				uint32_t L_9 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__statusBarColor_20();
				int32_t L_10 = ((int32_t)L_9);
				RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, L_11);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
				NullCheck(L_6);
				AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_6, _stringLiteralDFB949543DB5795363E321048BBCADE8E57C6225, L_8, /*hidden argument*/NULL);
				// window.Call("setNavigationBarColor", unchecked((int)_navigationBarColor));
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12 = V_2;
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
				uint32_t L_15 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__navigationBarColor_21();
				int32_t L_16 = ((int32_t)L_15);
				RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_17);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
				NullCheck(L_12);
				AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_12, _stringLiteralD11A9C60D474B27E2D5804346B9DD66A2385EA09, L_14, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x84, FINALLY_0066);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0066;
			}

FINALLY_0066:
			{ // begin finally (depth: 3)
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = V_2;
					if (!L_18)
					{
						goto IL_006f;
					}
				}

IL_0069:
				{
					AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = V_2;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
				}

IL_006f:
				{
					IL2CPP_END_FINALLY(102)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(102)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x84, FINALLY_0070);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0070;
		}

FINALLY_0070:
		{ // begin finally (depth: 2)
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_20 = V_1;
				if (!L_20)
				{
					goto IL_0079;
				}
			}

IL_0073:
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21 = V_1;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
			}

IL_0079:
			{
				IL2CPP_END_FINALLY(112)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(112)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x84, FINALLY_007a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_22 = V_0;
			if (!L_22)
			{
				goto IL_0083;
			}
		}

IL_007d:
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_23 = V_0;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_23);
		}

IL_0083:
		{
			IL2CPP_END_FINALLY(122)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
	}

IL_0084:
	{
		// }
		return;
	}
}
// ApplicationChrome/States ApplicationChrome::get_navigationBarState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApplicationChrome_get_navigationBarState_mA854576EA7987863F6EFD213B7F3CAEDD9DA0268 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _navigationBarState; }
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__navigationBarState_19();
		return L_0;
	}
}
// System.Void ApplicationChrome::set_navigationBarState(ApplicationChrome/States)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_set_navigationBarState_mE5A365281B5807642036C8599D6D71FE6B9DC988 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_navigationBarState != value)
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__navigationBarState_19();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		// _navigationBarState = value;
		int32_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__navigationBarState_19(L_2);
		// applyUIStates();
		ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0(/*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// ApplicationChrome/States ApplicationChrome::get_statusBarState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApplicationChrome_get_statusBarState_m36B855EF2824C563B0043B3E72C0DD555FEF0B40 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _statusBarState; }
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__statusBarState_18();
		return L_0;
	}
}
// System.Void ApplicationChrome::set_statusBarState(ApplicationChrome/States)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_set_statusBarState_m8DB2E0DB0A29637345566BC1E7AE19B22258AFDA (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_statusBarState != value)
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__statusBarState_18();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		// _statusBarState = value;
		int32_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__statusBarState_18(L_2);
		// applyUIStates();
		ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0(/*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean ApplicationChrome::get_dimmed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApplicationChrome_get_dimmed_m405C3F95A116C443226EEE30353B8BFA9D28110F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _dimmed; }
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		bool L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__dimmed_24();
		return L_0;
	}
}
// System.Void ApplicationChrome::set_dimmed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_set_dimmed_mE0B3CB7A806A16BC47D5F705E65CDA146A169C29 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dimmed != value)
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		bool L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__dimmed_24();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		// _dimmed = value;
		bool L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__dimmed_24(L_2);
		// applyUIStates();
		ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0(/*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.UInt32 ApplicationChrome::get_statusBarColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ApplicationChrome_get_statusBarColor_m8E1F41E7C0387FB214FB68992AAA71726D0268A4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _statusBarColor; }
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__statusBarColor_20();
		return L_0;
	}
}
// System.Void ApplicationChrome::set_statusBarColor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_set_statusBarColor_m6C5705EBD68623FB32E990AE2FFCEF7BD9DD3DAE (uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_statusBarColor != value)
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__statusBarColor_20();
		uint32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		// _statusBarColor = value;
		uint32_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__statusBarColor_20(L_2);
		// applyUIColors();
		ApplicationChrome_applyUIColors_mFA42BCEAD396B5C052D0C9065E58B051D9213BEE(/*hidden argument*/NULL);
		// applyUIStates();
		ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0(/*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.UInt32 ApplicationChrome::get_navigationBarColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ApplicationChrome_get_navigationBarColor_mC5F05B846AA80A827C46B6B8002204DDFE90ED9F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _navigationBarColor; }
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__navigationBarColor_21();
		return L_0;
	}
}
// System.Void ApplicationChrome::set_navigationBarColor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome_set_navigationBarColor_mF5C508174D9F53F8F19BA1579D428F8525D71EFB (uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_navigationBarColor != value)
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->get__navigationBarColor_21();
		uint32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		// _navigationBarColor = value;
		uint32_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		((ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var))->set__navigationBarColor_21(L_2);
		// applyUIColors();
		ApplicationChrome_applyUIColors_mFA42BCEAD396B5C052D0C9065E58B051D9213BEE(/*hidden argument*/NULL);
		// applyUIStates();
		ApplicationChrome_applyUIStates_mD2B9ACFC934A227B04815695103E2F5CA60FFFA0(/*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ApplicationChrome::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationChrome__ctor_m8BB8C42369132FC28B53A87D6677C5D2803EDCCE (ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GoogleMap::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMap_Start_m3B81192D26B7538F15FE18A4108D90995E8501D5 (GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * __this, const RuntimeMethod* method)
{
	{
		// if (loadOnStart)
		bool L_0 = __this->get_loadOnStart_5();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Refresh();
		GoogleMap_Refresh_m2F5F56403A77E3DD56AE1E7BC0AB1CF7ADE6D1FC(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void GoogleMap::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMap_Refresh_m2F5F56403A77E3DD56AE1E7BC0AB1CF7ADE6D1FC (GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C05C726882CE6220C654BEECD0BB1C4D41B477D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (autoLocateCenter && (markers.Length == 0 && paths.Length == 0))
		bool L_0 = __this->get_autoLocateCenter_6();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* L_1 = __this->get_markers_12();
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* L_2 = __this->get_paths_13();
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		// Debug.LogError("Auto Center will only work if paths or markers are used.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral7C05C726882CE6220C654BEECD0BB1C4D41B477D, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// StartCoroutine(_Refresh());
		RuntimeObject* L_3;
		L_3 = GoogleMap__Refresh_mD17B4CE9DCB0A180C0634AA8E7F0EACE3BE12415(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GoogleMap::_Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleMap__Refresh_mD17B4CE9DCB0A180C0634AA8E7F0EACE3BE12415 (GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * L_0 = (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A *)il2cpp_codegen_object_new(U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A_il2cpp_TypeInfo_var);
		U3C_RefreshU3Ed__13__ctor_m2B840FAE445FF21376D2C933236B399C8B2240C0(L_0, 0, /*hidden argument*/NULL);
		U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GoogleMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMap__ctor_m7A455F11A67AD30B38A0981C97F4EC74C7F3E45F (GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * __this, const RuntimeMethod* method)
{
	{
		// public bool loadOnStart = true;
		__this->set_loadOnStart_5((bool)1);
		// public bool autoLocateCenter = true;
		__this->set_autoLocateCenter_6((bool)1);
		// public int zoom = 13;
		__this->set_zoom_8(((int32_t)13));
		// public int size = 512;
		__this->set_size_10(((int32_t)512));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GoogleMapLocation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapLocation__ctor_m55EACD332351F45FFDD8F6AD2B81F972508C0D34 (GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GoogleMapMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapMarker__ctor_mCED8D827BB135B43593FED4183ACC1C7C02A0DDA (GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GoogleMapPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMapPath__ctor_mCCEC252024CDD9215AADAACB267B4C9421FB43C2 (GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * __this, const RuntimeMethod* method)
{
	{
		// public int weight = 5;
		__this->set_weight_0(5);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void LoadAPI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAPI_Start_mD1109BAE13AAC2C9CFB62C2A6FE97A84FEAEC8A0 (LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(LoadData());
		RuntimeObject* L_0;
		L_0 = LoadAPI_LoadData_mF005641800DD29E4D53E5876334A18658DBF713F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadAPI::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadAPI_LoadData_mF005641800DD29E4D53E5876334A18658DBF713F (LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * L_0 = (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E *)il2cpp_codegen_object_new(U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E_il2cpp_TypeInfo_var);
		U3CLoadDataU3Ed__3__ctor_m6C481B496607CB52D7542307F3BBD6742D96A4AC(L_0, 0, /*hidden argument*/NULL);
		U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void LoadAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAPI__ctor_m0438416BA4E17E3B46CF2815A649B651BD576CF0 (LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * __this, const RuntimeMethod* method)
{
	{
		// bool isOnLoading = true;
		__this->set_isOnLoading_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Start_mD3C29E49C67909A303603541E6CE9BC5C26796CD (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApplicationChrome.statusBarState = ApplicationChrome.States.TranslucentOverContent;
		IL2CPP_RUNTIME_CLASS_INIT(ApplicationChrome_tBA37AF8427213D1D02F5CE2015C6D40D833466F2_il2cpp_TypeInfo_var);
		ApplicationChrome_set_statusBarState_m8DB2E0DB0A29637345566BC1E7AE19B22258AFDA(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Update_m75BF2DFC9C300743E190F02E9D8427F36DB70780 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Manager::GotoMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GotoMain_m2585756FE6792C34A0AF322CC72939631CD8B74D (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Manager::GotoCityState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GotoCityState_mAA010B0A85DC445C209B49C3310326B58F174678 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE330D73E00FAB4EC646814C598B67F3BE6870C53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CoronaCityState");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE330D73E00FAB4EC646814C598B67F3BE6870C53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Manager::GotoCenterMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GotoCenterMap_mEA2466DD0EFF276CDF081E61FFBC792312CB1584 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC88FD4DFD69CAC316A992A553AE75233796C28F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CoronaCenterMap");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBC88FD4DFD69CAC316A992A553AE75233796C28F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Manager::GotoStatistics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GotoStatistics_m8EC96B849ACD1839440EC42CDBF73A720621DDD5 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral399D53910A1D409FC056D2815165B37E4CEA860A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CoronaStatistics");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral399D53910A1D409FC056D2815165B37E4CEA860A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__ctor_m5B9F7AAE653DB0466943D59D3579FFCCFC32631E (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_m783F84A617DADC4574B0BF1524481E6B96C65661 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m411C4D5C2D993FD70092FDA0FE2AC4786F8AC001 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_m437970EA37D66BDF32972F4CC0F65B95E5961FAA (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GoogleMap/<_Refresh>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_RefreshU3Ed__13__ctor_m2B840FAE445FF21376D2C933236B399C8B2240C0 (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GoogleMap/<_Refresh>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_RefreshU3Ed__13_System_IDisposable_Dispose_m615BA0FA3EE09BA271A26AE545A886A4643A6CDA (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GoogleMap/<_Refresh>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_RefreshU3Ed__13_MoveNext_m5759944127B4E681E531656613A0CB1D42D9FC9A (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleMapColor_t098E6F70FC9AA542035F5589E1BE91D504BE6463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleMapMarkerSize_t01048FFA3CEC13D89CB66B72B8A814FB0BC4C6F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapType_t8716D5D7B60A501EBA511306392BBAB3B43DD02E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00A3E985B4C35F7420C779966888D3AB71BC14C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01F1B441381501E7159931B11687EB16BA522F11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF62D1FFEBA465FE622B6596519BB41F15F3790);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral339D3D3C0F775F203EF271D34EAB3682229A4359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B4C8E1CCD3177E31DDC3723D9CF8A12FA971B01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788A220E8C00A2F11359D49CDEE22514550178B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96342667E84A47E1C8224FC89496B9991DE4C87E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA40ED89A7E2598990635907AC1DC2BDFF7F10478);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFFDF3E8715066A839709147FC18BAE20E9982DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0DD7F745D89B7DC6E82BDFEA83AF83539A1F11B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF2479EC9ADF40A9D5DADA9A0F321A32E85E0E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0C9C0047E2D991162C10E919BF5DC4944259BEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD24B5EDBA9A55E8EDDDF9AE87C62C755F4638669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* V_5 = NULL;
	int32_t V_6 = 0;
	GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * V_7 = NULL;
	GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* V_8 = NULL;
	int32_t V_9 = 0;
	GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * V_10 = NULL;
	GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* V_11 = NULL;
	GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * V_12 = NULL;
	GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * V_13 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B11_2 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_03a6;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// string url = "http://maps.googleapis.com/maps/api/staticmap";
		V_2 = _stringLiteral6B4C8E1CCD3177E31DDC3723D9CF8A12FA971B01;
		// string qs = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (!autoLocateCenter)
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_autoLocateCenter_6();
		if (L_5)
		{
			goto IL_00bf;
		}
	}
	{
		// if (centerLocation.address != "")
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_6 = V_1;
		NullCheck(L_6);
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_7 = L_6->get_centerLocation_7();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_address_0();
		bool L_9;
		L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		// qs += "center=" + WWW.UnEscapeURL(centerLocation.address);
		String_t* L_10 = V_3;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_11 = V_1;
		NullCheck(L_11);
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_12 = L_11->get_centerLocation_7();
		NullCheck(L_12);
		String_t* L_13 = L_12->get_address_0();
		String_t* L_14;
		L_14 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_10, _stringLiteral00A3E985B4C35F7420C779966888D3AB71BC14C0, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		goto IL_00a8;
	}

IL_006d:
	{
		// qs += "center=" + WWW.UnEscapeURL(string.Format("{0},{1}", centerLocation.latitude, centerLocation.longitude));
		String_t* L_16 = V_3;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_17 = V_1;
		NullCheck(L_17);
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_18 = L_17->get_centerLocation_7();
		NullCheck(L_18);
		float L_19 = L_18->get_latitude_1();
		float L_20 = L_19;
		RuntimeObject * L_21 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_20);
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_22 = V_1;
		NullCheck(L_22);
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_23 = L_22->get_centerLocation_7();
		NullCheck(L_23);
		float L_24 = L_23->get_longitude_2();
		float L_25 = L_24;
		RuntimeObject * L_26 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_21, L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_16, _stringLiteral00A3E985B4C35F7420C779966888D3AB71BC14C0, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
	}

IL_00a8:
	{
		// qs += "&zoom=" + zoom.ToString();
		String_t* L_30 = V_3;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_31 = V_1;
		NullCheck(L_31);
		int32_t* L_32 = L_31->get_address_of_zoom_8();
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_32, /*hidden argument*/NULL);
		String_t* L_34;
		L_34 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_30, _stringLiteral01F1B441381501E7159931B11687EB16BA522F11, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
	}

IL_00bf:
	{
		// qs += "&size=" + WWW.UnEscapeURL(string.Format("{0}x{0}", size));
		String_t* L_35 = V_3;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_size_10();
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralBF2479EC9ADF40A9D5DADA9A0F321A32E85E0E58, L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_40, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_35, _stringLiteral788A220E8C00A2F11359D49CDEE22514550178B9, L_41, /*hidden argument*/NULL);
		V_3 = L_42;
		// qs += "&scale=" + (doubleResolution ? "2" : "1");
		String_t* L_43 = V_3;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_44 = V_1;
		NullCheck(L_44);
		bool L_45 = L_44->get_doubleResolution_11();
		G_B9_0 = _stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120;
		G_B9_1 = L_43;
		if (L_45)
		{
			G_B10_0 = _stringLiteralE18DFE45F06EEBEBD21AEF9B569F077A08A8B120;
			G_B10_1 = L_43;
			goto IL_00fa;
		}
	}
	{
		G_B11_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00ff;
	}

IL_00fa:
	{
		G_B11_0 = _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00ff:
	{
		String_t* L_46;
		L_46 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B11_2, G_B11_1, G_B11_0, /*hidden argument*/NULL);
		V_3 = L_46;
		// qs += "&maptype=" + mapType.ToString().ToLower();
		String_t* L_47 = V_3;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_48 = V_1;
		NullCheck(L_48);
		int32_t* L_49 = L_48->get_address_of_mapType_9();
		RuntimeObject * L_50 = Box(MapType_t8716D5D7B60A501EBA511306392BBAB3B43DD02E_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		*L_49 = *(int32_t*)UnBox(L_50);
		NullCheck(L_51);
		String_t* L_52;
		L_52 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_51, /*hidden argument*/NULL);
		String_t* L_53;
		L_53 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_47, _stringLiteralD0C9C0047E2D991162C10E919BF5DC4944259BEA, L_52, /*hidden argument*/NULL);
		V_3 = L_53;
		// var usingSensor = false;
		V_4 = (bool)0;
		// qs += "&sensor=" + (usingSensor ? "true" : "false");
		String_t* L_54 = V_3;
		bool L_55 = V_4;
		G_B12_0 = _stringLiteralA40ED89A7E2598990635907AC1DC2BDFF7F10478;
		G_B12_1 = L_54;
		if (L_55)
		{
			G_B13_0 = _stringLiteralA40ED89A7E2598990635907AC1DC2BDFF7F10478;
			G_B13_1 = L_54;
			goto IL_013b;
		}
	}
	{
		G_B14_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_0140;
	}

IL_013b:
	{
		G_B14_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_0140:
	{
		String_t* L_56;
		L_56 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B14_2, G_B14_1, G_B14_0, /*hidden argument*/NULL);
		V_3 = L_56;
		// foreach (var i in markers)
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_57 = V_1;
		NullCheck(L_57);
		GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* L_58 = L_57->get_markers_12();
		V_5 = L_58;
		V_6 = 0;
		goto IL_0226;
	}

IL_0156:
	{
		// foreach (var i in markers)
		GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* L_59 = V_5;
		int32_t L_60 = V_6;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_7 = L_62;
		// qs += "&markers=" + string.Format("size:{0}|color:{1}|label:{2}", i.size.ToString().ToLower(), i.color, i.label);
		String_t* L_63 = V_3;
		GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * L_64 = V_7;
		NullCheck(L_64);
		int32_t* L_65 = L_64->get_address_of_size_0();
		RuntimeObject * L_66 = Box(GoogleMapMarkerSize_t01048FFA3CEC13D89CB66B72B8A814FB0BC4C6F8_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_66);
		*L_65 = *(int32_t*)UnBox(L_66);
		NullCheck(L_67);
		String_t* L_68;
		L_68 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_67, /*hidden argument*/NULL);
		GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * L_69 = V_7;
		NullCheck(L_69);
		int32_t L_70 = L_69->get_color_1();
		int32_t L_71 = L_70;
		RuntimeObject * L_72 = Box(GoogleMapColor_t098E6F70FC9AA542035F5589E1BE91D504BE6463_il2cpp_TypeInfo_var, &L_71);
		GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * L_73 = V_7;
		NullCheck(L_73);
		String_t* L_74 = L_73->get_label_2();
		String_t* L_75;
		L_75 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral1EF62D1FFEBA465FE622B6596519BB41F15F3790, L_68, L_72, L_74, /*hidden argument*/NULL);
		String_t* L_76;
		L_76 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_63, _stringLiteralAFFDF3E8715066A839709147FC18BAE20E9982DE, L_75, /*hidden argument*/NULL);
		V_3 = L_76;
		// foreach (var loc in i.locations)
		GoogleMapMarker_t2E40BA9AD4DE15A1F24D5263D207E1F825B479E9 * L_77 = V_7;
		NullCheck(L_77);
		GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* L_78 = L_77->get_locations_3();
		V_8 = L_78;
		V_9 = 0;
		goto IL_0218;
	}

IL_01ab:
	{
		// foreach (var loc in i.locations)
		GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* L_79 = V_8;
		int32_t L_80 = V_9;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_10 = L_82;
		// if (loc.address != "")
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_83 = V_10;
		NullCheck(L_83);
		String_t* L_84 = L_83->get_address_0();
		bool L_85;
		L_85 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_84, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_01df;
		}
	}
	{
		// qs += "|" + WWW.UnEscapeURL(loc.address);
		String_t* L_86 = V_3;
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_87 = V_10;
		NullCheck(L_87);
		String_t* L_88 = L_87->get_address_0();
		String_t* L_89;
		L_89 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_88, /*hidden argument*/NULL);
		String_t* L_90;
		L_90 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_86, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_89, /*hidden argument*/NULL);
		V_3 = L_90;
		goto IL_0212;
	}

IL_01df:
	{
		// qs += "|" + WWW.UnEscapeURL(string.Format("{0},{1}", loc.latitude, loc.longitude));
		String_t* L_91 = V_3;
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_92 = V_10;
		NullCheck(L_92);
		float L_93 = L_92->get_latitude_1();
		float L_94 = L_93;
		RuntimeObject * L_95 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_94);
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_96 = V_10;
		NullCheck(L_96);
		float L_97 = L_96->get_longitude_2();
		float L_98 = L_97;
		RuntimeObject * L_99 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_98);
		String_t* L_100;
		L_100 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_95, L_99, /*hidden argument*/NULL);
		String_t* L_101;
		L_101 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_100, /*hidden argument*/NULL);
		String_t* L_102;
		L_102 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_91, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_101, /*hidden argument*/NULL);
		V_3 = L_102;
	}

IL_0212:
	{
		int32_t L_103 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0218:
	{
		// foreach (var loc in i.locations)
		int32_t L_104 = V_9;
		GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* L_105 = V_8;
		NullCheck(L_105);
		if ((((int32_t)L_104) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length))))))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_106 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_0226:
	{
		// foreach (var i in markers)
		int32_t L_107 = V_6;
		GoogleMapMarkerU5BU5D_t5FDE06D6459DD5474F3D8EF8AF6532DE90A40F4C* L_108 = V_5;
		NullCheck(L_108);
		if ((((int32_t)L_107) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_108)->max_length))))))
		{
			goto IL_0156;
		}
	}
	{
		// foreach (var i in paths)
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_109 = V_1;
		NullCheck(L_109);
		GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* L_110 = L_109->get_paths_13();
		V_11 = L_110;
		V_6 = 0;
		goto IL_0326;
	}

IL_0241:
	{
		// foreach (var i in paths)
		GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* L_111 = V_11;
		int32_t L_112 = V_6;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_12 = L_114;
		// qs += "&path=" + string.Format("weight:{0}|color:{1}", i.weight, i.color);
		String_t* L_115 = V_3;
		GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * L_116 = V_12;
		NullCheck(L_116);
		int32_t L_117 = L_116->get_weight_0();
		int32_t L_118 = L_117;
		RuntimeObject * L_119 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_118);
		GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * L_120 = V_12;
		NullCheck(L_120);
		int32_t L_121 = L_120->get_color_1();
		int32_t L_122 = L_121;
		RuntimeObject * L_123 = Box(GoogleMapColor_t098E6F70FC9AA542035F5589E1BE91D504BE6463_il2cpp_TypeInfo_var, &L_122);
		String_t* L_124;
		L_124 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD24B5EDBA9A55E8EDDDF9AE87C62C755F4638669, L_119, L_123, /*hidden argument*/NULL);
		String_t* L_125;
		L_125 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_115, _stringLiteral339D3D3C0F775F203EF271D34EAB3682229A4359, L_124, /*hidden argument*/NULL);
		V_3 = L_125;
		// if (i.fill)
		GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * L_126 = V_12;
		NullCheck(L_126);
		bool L_127 = L_126->get_fill_2();
		if (!L_127)
		{
			goto IL_029d;
		}
	}
	{
		// qs += "|fillcolor:" + i.fillColor;
		String_t* L_128 = V_3;
		GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * L_129 = V_12;
		NullCheck(L_129);
		int32_t* L_130 = L_129->get_address_of_fillColor_3();
		RuntimeObject * L_131 = Box(GoogleMapColor_t098E6F70FC9AA542035F5589E1BE91D504BE6463_il2cpp_TypeInfo_var, L_130);
		NullCheck(L_131);
		String_t* L_132;
		L_132 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_131);
		*L_130 = *(int32_t*)UnBox(L_131);
		String_t* L_133;
		L_133 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_128, _stringLiteralB0DD7F745D89B7DC6E82BDFEA83AF83539A1F11B, L_132, /*hidden argument*/NULL);
		V_3 = L_133;
	}

IL_029d:
	{
		// foreach (var loc in i.locations)
		GoogleMapPath_tC8EEF016463F24E12AC76C40D0A037BA62484A54 * L_134 = V_12;
		NullCheck(L_134);
		GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* L_135 = L_134->get_locations_4();
		V_8 = L_135;
		V_9 = 0;
		goto IL_0318;
	}

IL_02ab:
	{
		// foreach (var loc in i.locations)
		GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* L_136 = V_8;
		int32_t L_137 = V_9;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		V_13 = L_139;
		// if (loc.address != "")
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_140 = V_13;
		NullCheck(L_140);
		String_t* L_141 = L_140->get_address_0();
		bool L_142;
		L_142 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_141, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_142)
		{
			goto IL_02df;
		}
	}
	{
		// qs += "|" + WWW.UnEscapeURL(loc.address);
		String_t* L_143 = V_3;
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_144 = V_13;
		NullCheck(L_144);
		String_t* L_145 = L_144->get_address_0();
		String_t* L_146;
		L_146 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_145, /*hidden argument*/NULL);
		String_t* L_147;
		L_147 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_143, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_146, /*hidden argument*/NULL);
		V_3 = L_147;
		goto IL_0312;
	}

IL_02df:
	{
		// qs += "|" + WWW.UnEscapeURL(string.Format("{0},{1}", loc.latitude, loc.longitude));
		String_t* L_148 = V_3;
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_149 = V_13;
		NullCheck(L_149);
		float L_150 = L_149->get_latitude_1();
		float L_151 = L_150;
		RuntimeObject * L_152 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_151);
		GoogleMapLocation_tA5ACC542F08539A80889762478C5AFBEA267A499 * L_153 = V_13;
		NullCheck(L_153);
		float L_154 = L_153->get_longitude_2();
		float L_155 = L_154;
		RuntimeObject * L_156 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_155);
		String_t* L_157;
		L_157 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_152, L_156, /*hidden argument*/NULL);
		String_t* L_158;
		L_158 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_157, /*hidden argument*/NULL);
		String_t* L_159;
		L_159 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_148, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_158, /*hidden argument*/NULL);
		V_3 = L_159;
	}

IL_0312:
	{
		int32_t L_160 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1));
	}

IL_0318:
	{
		// foreach (var loc in i.locations)
		int32_t L_161 = V_9;
		GoogleMapLocationU5BU5D_t8672E3BEAE84C4F69AF005E11A2D00B5871CEC3A* L_162 = V_8;
		NullCheck(L_162);
		if ((((int32_t)L_161) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_162)->max_length))))))
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_163 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
	}

IL_0326:
	{
		// foreach (var i in paths)
		int32_t L_164 = V_6;
		GoogleMapPathU5BU5D_tDF68F1B9EC5791680DF62CB15D7C4C7B23BA9768* L_165 = V_11;
		NullCheck(L_165);
		if ((((int32_t)L_164) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_165)->max_length))))))
		{
			goto IL_0241;
		}
	}
	{
		// qs += "&key=" + WWW.UnEscapeURL(GoogleApiKey);
		String_t* L_166 = V_3;
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_167 = V_1;
		NullCheck(L_167);
		String_t* L_168 = L_167->get_GoogleApiKey_4();
		String_t* L_169;
		L_169 = WWW_UnEscapeURL_mD975E845691DE2589A7346F8A84FC7648A9FB75A(L_168, /*hidden argument*/NULL);
		String_t* L_170;
		L_170 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_166, _stringLiteral96342667E84A47E1C8224FC89496B9991DE4C87E, L_169, /*hidden argument*/NULL);
		V_3 = L_170;
		// WWW req = new WWW(url + "?" + qs);
		String_t* L_171 = V_2;
		String_t* L_172 = V_3;
		String_t* L_173;
		L_173 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_171, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, L_172, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_174 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_174, L_173, /*hidden argument*/NULL);
		__this->set_U3CreqU3E5__2_3(L_174);
		// Debug.Log(url + "?" + qs);
		String_t* L_175 = V_2;
		String_t* L_176 = V_3;
		String_t* L_177;
		L_177 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_175, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, L_176, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_177, /*hidden argument*/NULL);
		// GetComponent<RawImage>().material.mainTexture = new Texture2D(size, size, TextureFormat.DXT1, false);
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_178 = V_1;
		NullCheck(L_178);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_179;
		L_179 = Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A(L_178, /*hidden argument*/Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		NullCheck(L_179);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_180;
		L_180 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_179);
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_181 = V_1;
		NullCheck(L_181);
		int32_t L_182 = L_181->get_size_10();
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_183 = V_1;
		NullCheck(L_183);
		int32_t L_184 = L_183->get_size_10();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_185 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_185, L_182, L_184, ((int32_t)10), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_180);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_180, L_185, /*hidden argument*/NULL);
		goto IL_03ad;
	}

IL_0396:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_03a6:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_03ad:
	{
		// while (!req.isDone)
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_186 = __this->get_U3CreqU3E5__2_3();
		NullCheck(L_186);
		bool L_187;
		L_187 = WWW_get_isDone_m916B54D53395990DB59C64413798FBCAFB08E0E3(L_186, /*hidden argument*/NULL);
		if (!L_187)
		{
			goto IL_0396;
		}
	}
	{
		// if (req.error == null)
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_188 = __this->get_U3CreqU3E5__2_3();
		NullCheck(L_188);
		String_t* L_189;
		L_189 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_188, /*hidden argument*/NULL);
		if (L_189)
		{
			goto IL_03e7;
		}
	}
	{
		// req.LoadImageIntoTexture((Texture2D)GetComponent<RawImage>().material.mainTexture);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_190 = __this->get_U3CreqU3E5__2_3();
		GoogleMap_tA38B0D489065CD0AFBE33C95ADE7DEDECB84E2DD * L_191 = V_1;
		NullCheck(L_191);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_192;
		L_192 = Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A(L_191, /*hidden argument*/Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		NullCheck(L_192);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_193;
		L_193 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_192);
		NullCheck(L_193);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_194;
		L_194 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_193, /*hidden argument*/NULL);
		NullCheck(L_190);
		WWW_LoadImageIntoTexture_m20D481E8B0502D37528B5C648818D9983C1BDFEE(L_190, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_194, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_03e7:
	{
		// }
		return (bool)0;
	}
}
// System.Object GoogleMap/<_Refresh>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_RefreshU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2D5854A33346D22C694C063D020B5A9069E67043 (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GoogleMap/<_Refresh>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_RefreshU3Ed__13_System_Collections_IEnumerator_Reset_m2D15B3767DD81F4C054C51B9621554786E1002D0 (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_RefreshU3Ed__13_System_Collections_IEnumerator_Reset_m2D15B3767DD81F4C054C51B9621554786E1002D0_RuntimeMethod_var)));
	}
}
// System.Object GoogleMap/<_Refresh>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_RefreshU3Ed__13_System_Collections_IEnumerator_get_Current_mEEDAECA241737B8B57305D4AB7C927B8C18F7F0D (U3C_RefreshU3Ed__13_t8795185358EECE9141954CE172C124DD4412D97A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void LoadAPI/<LoadData>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__3__ctor_m6C481B496607CB52D7542307F3BBD6742D96A4AC (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadAPI/<LoadData>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__3_System_IDisposable_Dispose_m65DBF7BAAE731C052DEFCB30ECC7ED07B4E1EEA7 (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CLoadDataU3Ed__3_U3CU3Em__Finally1_m37B7E7D2901033F8620D2C861DD1AC9DAE873E68(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean LoadAPI/<LoadData>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadDataU3Ed__3_MoveNext_mC11B02EDBECB98D0D48A40076EC3607CD31D1C9F (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CE74EBEC696E86838AE43A9E4D9760701FF08F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005c;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00e7;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=json";
			V_3 = _stringLiteral2CE74EBEC696E86838AE43A9E4D9760701FF08F1;
			// using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl))
			String_t* L_4 = V_3;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5;
			L_5 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_4, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www.Send();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = __this->get_U3CwwwU3E5__2_3();
			NullCheck(L_6);
			AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_7;
			L_7 = UnityWebRequest_Send_mCE6413FFF8346F6A03B4F785D22F11887021EE22(L_6, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_7);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00e7;
		}

IL_005c:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (www.isNetworkError || www.isHttpError) //�ҷ����� ���� ��
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CwwwU3E5__2_3();
			NullCheck(L_8);
			bool L_9;
			L_9 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_007e;
			}
		}

IL_0071:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CwwwU3E5__2_3();
			NullCheck(L_10);
			bool L_11;
			L_11 = UnityWebRequest_get_isHttpError_m23ADCBE1CF082A940EF6AA75A15051583228B616(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0090;
			}
		}

IL_007e:
		{
			// Debug.Log(www.error);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CwwwU3E5__2_3();
			NullCheck(L_12);
			String_t* L_13;
			L_13 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
			// }
			goto IL_00cf;
		}

IL_0090:
		{
			// if (www.isDone)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CwwwU3E5__2_3();
			NullCheck(L_14);
			bool L_15;
			L_15 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00cf;
			}
		}

IL_009d:
		{
			// isOnLoading = false;
			LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * L_16 = V_2;
			NullCheck(L_16);
			L_16->set_isOnLoading_5((bool)0);
			// jsonResult =
			//     System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);
			LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * L_17 = V_2;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_18;
			L_18 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_19 = __this->get_U3CwwwU3E5__2_3();
			NullCheck(L_19);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_20;
			L_20 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
			L_21 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_22;
			L_22 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_18, L_21);
			NullCheck(L_17);
			L_17->set_jsonResult_4(L_22);
			// Debug.Log(jsonResult);
			LoadAPI_tDDF809BE4D0512144CCDE78E97883370DC7C51E6 * L_23 = V_2;
			NullCheck(L_23);
			String_t* L_24 = L_23->get_jsonResult_4();
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		}

IL_00cf:
		{
			// }
			U3CLoadDataU3Ed__3_U3CU3Em__Finally1_m37B7E7D2901033F8620D2C861DD1AC9DAE873E68(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00e7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00e0;
	}

FAULT_00e0:
	{ // begin fault (depth: 1)
		U3CLoadDataU3Ed__3_System_IDisposable_Dispose_m65DBF7BAAE731C052DEFCB30ECC7ED07B4E1EEA7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(224)
	} // end fault
	IL2CPP_CLEANUP(224)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e7:
	{
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Void LoadAPI/<LoadData>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__3_U3CU3Em__Finally1_m37B7E7D2901033F8620D2C861DD1AC9DAE873E68 (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwwwU3E5__2_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object LoadAPI/<LoadData>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadDataU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA1D825602658C7F81EC3FC41770E13777BABC7E7 (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadAPI/<LoadData>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__3_System_Collections_IEnumerator_Reset_m7D14A77BE20FFE988B6FEC375EF6A1F7CE391776 (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadDataU3Ed__3_System_Collections_IEnumerator_Reset_m7D14A77BE20FFE988B6FEC375EF6A1F7CE391776_RuntimeMethod_var)));
	}
}
// System.Object LoadAPI/<LoadData>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadDataU3Ed__3_System_Collections_IEnumerator_get_Current_m89B172F43835C3FFC388FD73CF31AB4A604E8358 (U3CLoadDataU3Ed__3_t318D0D34C398C86DE61936241E2085EF7A531A6E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
