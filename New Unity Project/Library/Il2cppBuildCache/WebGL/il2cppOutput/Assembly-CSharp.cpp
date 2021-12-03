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

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t6642D08E578C77292ED5537CF3192269131C189C;
// System.Collections.Generic.List`1<Assets.Scripts.Personajes.AprendeAtaque>
struct List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6;
// System.Collections.Generic.List`1<Ataque>
struct List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t15050E83C4C051CA706B3489C75EBD1038966135;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4;
// Assets.Scripts.Personajes.AprendeAtaque[]
struct AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E;
// Ataque[]
struct AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Assets.Scripts.Personajes.AprendeAtaque
struct AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Ataque
struct Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54;
// AtaqueBase
struct AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BarraVida
struct BarraVida_t3BC98C5CB313E4820B45EFF491C42796FD40F25E;
// BattleDialogBox
struct BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B;
// BattleHud
struct BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890;
// BattleManager
struct BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7;
// BattleUnit
struct BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HealBar
struct HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Juego
struct Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C;
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
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Assets.Scripts.Personajes.Personajes
struct Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SonidoBoton
struct SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// BattleDialogBox/<SetDialog>d__11
struct U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF;
// BattleManager/<EnemyAction>d__13
struct U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA;
// BattleManager/<PerformPlayerMove>d__25
struct U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C;
// BattleManager/<SetupBattle>d__10
struct U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193;
// BattleManager/<TryEscape>d__26
struct U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// HealBar/<SetSmoothHP>d__4
struct U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00DD0E26B82207FD2F76765FE2804699F6296BDD;
IL2CPP_EXTERN_C String_t* _stringLiteral04515E78021D960C8AACAE5BFC9C9E894928D6FF;
IL2CPP_EXTERN_C String_t* _stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544;
IL2CPP_EXTERN_C String_t* _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral35ECD4BA74F66F9F1410574F7A1F7F26BEDE605A;
IL2CPP_EXTERN_C String_t* _stringLiteral40779F319207B94505852B1A186E02B4BDA43CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral4272E6E1DD4620A09981F911A42D1C03390C6642;
IL2CPP_EXTERN_C String_t* _stringLiteral4B3CCEBB569BF3B0AF17637AFB6E567997A80658;
IL2CPP_EXTERN_C String_t* _stringLiteral6B645154D3050F782001C70752D7916A43CB580E;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2DCB90632710D2B7A5CCA564EA16DD10D2AAAA;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral85B7EDC1CD85C62B72E1D6F4221D8F81543AAA6C;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD14A3E8D12ADD16A7FD70CBB5A865595B5368E;
IL2CPP_EXTERN_C String_t* _stringLiteral9CC404015F167B5841C453654DD2D8EC0F2C0E1F;
IL2CPP_EXTERN_C String_t* _stringLiteralA4ABB8626A275094EEAC14D62D5CAEAB5027E805;
IL2CPP_EXTERN_C String_t* _stringLiteralB022E012BBD5778EA54C7EDC76BA8D8A3C880860;
IL2CPP_EXTERN_C String_t* _stringLiteralBA6CFD0285B9271FDCC1700EA5BBC5491BAD3230;
IL2CPP_EXTERN_C String_t* _stringLiteralC45A3576ABD00989B744FB60C36D10AF25286716;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE31BBCD7C76A286393AC97B7B932CB3244FAE4B7;
IL2CPP_EXTERN_C String_t* _stringLiteralE88D0028B280E8F7137CB0E8E61EB53FBE1F6DCB;
IL2CPP_EXTERN_C String_t* _stringLiteralFAADFC19C21B2582E499E91EFAEDEA6F732621F1;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7F88CB0FC6CF3D3D7611CDF67E949CED9DA0A4DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC070E539A6068EBCC6C47E1A83F55461895B6576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF7341B0A340C01893AB5FD542128CE5D750859F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_EndBattle_mD7D11F92F0A00892150D09FD82AC8D7676AB32FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_StartBatalla_m199D8FFF24B9CBA044B86D1848453E79F396469D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m517AAF9638EA2BC9BA847BDC71BD07B24F420099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFA4EB168FCEC89631D1993A00D1E66E6F1B0BA2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m918A8EC93DDA3BAB267F5FEF0A5931121D10F3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MenuManager_BotonQuit_mFF2893031DD34F2F8B4BE62BDE090CF6A1AA2637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MenuManager_BotonStart_mEC35EDFA5F364498D43D37C543EFA29E5FAAC9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SonidoBoton_PlaySound_mBB226B935F4FE9300EB474E588780CC3E3BEBC51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnemyActionU3Ed__13_System_Collections_IEnumerator_Reset_m389E6485048EFAB192ABEB645366445711BA0AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPerformPlayerMoveU3Ed__25_System_Collections_IEnumerator_Reset_mD9D805F307FEA7963884603966EB22C9A9721CC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetDialogU3Ed__11_System_Collections_IEnumerator_Reset_mF10A86E9493C626E37A404625DF53ED7E2CC2430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetSmoothHPU3Ed__4_System_Collections_IEnumerator_Reset_mD5D11081968F8F57AF7D3A8A650B685E30B92EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetupBattleU3Ed__10_System_Collections_IEnumerator_Reset_mC49E965BD998993994E579D42F8014FEFA7EC923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryEscapeU3Ed__26_System_Collections_IEnumerator_Reset_m46395AB0341FE70DCDFCD05A212AD3A5683C3090_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
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


// System.Collections.Generic.List`1<Assets.Scripts.Personajes.AprendeAtaque>
struct List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6, ____items_1)); }
	inline AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E* get__items_1() const { return ____items_1; }
	inline AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6_StaticFields, ____emptyArray_5)); }
	inline AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AprendeAtaqueU5BU5D_tD3B1ACEDCE9C54BA2D809422DC57155DE7FEB77E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Ataque>
struct List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA, ____items_1)); }
	inline AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E* get__items_1() const { return ____items_1; }
	inline AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA_StaticFields, ____emptyArray_5)); }
	inline AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AtaqueU5BU5D_t121193C65A4FAFCA3A539B94679F2046433C522E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t15050E83C4C051CA706B3489C75EBD1038966135  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t15050E83C4C051CA706B3489C75EBD1038966135, ____items_1)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get__items_1() const { return ____items_1; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t15050E83C4C051CA706B3489C75EBD1038966135, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t15050E83C4C051CA706B3489C75EBD1038966135, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t15050E83C4C051CA706B3489C75EBD1038966135, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t15050E83C4C051CA706B3489C75EBD1038966135_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t15050E83C4C051CA706B3489C75EBD1038966135_StaticFields, ____emptyArray_5)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Assets.Scripts.Personajes.AprendeAtaque
struct AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2  : public RuntimeObject
{
public:
	// AtaqueBase Assets.Scripts.Personajes.AprendeAtaque::ataque
	AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * ___ataque_0;
	// System.Int32 Assets.Scripts.Personajes.AprendeAtaque::level
	int32_t ___level_1;

public:
	inline static int32_t get_offset_of_ataque_0() { return static_cast<int32_t>(offsetof(AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2, ___ataque_0)); }
	inline AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * get_ataque_0() const { return ___ataque_0; }
	inline AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C ** get_address_of_ataque_0() { return &___ataque_0; }
	inline void set_ataque_0(AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * value)
	{
		___ataque_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ataque_0), (void*)value);
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Ataque
struct Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54  : public RuntimeObject
{
public:
	// AtaqueBase Ataque::_base
	AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * ____base_0;

public:
	inline static int32_t get_offset_of__base_0() { return static_cast<int32_t>(offsetof(Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54, ____base_0)); }
	inline AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * get__base_0() const { return ____base_0; }
	inline AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C ** get_address_of__base_0() { return &____base_0; }
	inline void set__base_0(AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * value)
	{
		____base_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base_0), (void*)value);
	}
};


// Juego
struct Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442  : public RuntimeObject
{
public:
	// Assets.Scripts.Personajes.Personajes Juego::_personajes
	Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * ____personajes_0;
	// System.Int32 Juego::_level
	int32_t ____level_1;
	// System.Collections.Generic.List`1<Ataque> Juego::_ataque
	List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * ____ataque_2;
	// System.Int32 Juego::_hp
	int32_t ____hp_3;

public:
	inline static int32_t get_offset_of__personajes_0() { return static_cast<int32_t>(offsetof(Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442, ____personajes_0)); }
	inline Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * get__personajes_0() const { return ____personajes_0; }
	inline Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E ** get_address_of__personajes_0() { return &____personajes_0; }
	inline void set__personajes_0(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * value)
	{
		____personajes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____personajes_0), (void*)value);
	}

	inline static int32_t get_offset_of__level_1() { return static_cast<int32_t>(offsetof(Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442, ____level_1)); }
	inline int32_t get__level_1() const { return ____level_1; }
	inline int32_t* get_address_of__level_1() { return &____level_1; }
	inline void set__level_1(int32_t value)
	{
		____level_1 = value;
	}

	inline static int32_t get_offset_of__ataque_2() { return static_cast<int32_t>(offsetof(Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442, ____ataque_2)); }
	inline List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * get__ataque_2() const { return ____ataque_2; }
	inline List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA ** get_address_of__ataque_2() { return &____ataque_2; }
	inline void set__ataque_2(List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * value)
	{
		____ataque_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ataque_2), (void*)value);
	}

	inline static int32_t get_offset_of__hp_3() { return static_cast<int32_t>(offsetof(Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442, ____hp_3)); }
	inline int32_t get__hp_3() const { return ____hp_3; }
	inline int32_t* get_address_of__hp_3() { return &____hp_3; }
	inline void set__hp_3(int32_t value)
	{
		____hp_3 = value;
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// BattleDialogBox/<SetDialog>d__11
struct U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF  : public RuntimeObject
{
public:
	// System.Int32 BattleDialogBox/<SetDialog>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BattleDialogBox/<SetDialog>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BattleDialogBox BattleDialogBox/<SetDialog>d__11::<>4__this
	BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * ___U3CU3E4__this_2;
	// System.String BattleDialogBox/<SetDialog>d__11::message
	String_t* ___message_3;
	// System.String BattleDialogBox/<SetDialog>d__11::<>7__wrap1
	String_t* ___U3CU3E7__wrap1_4;
	// System.Int32 BattleDialogBox/<SetDialog>d__11::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF, ___U3CU3E4__this_2)); }
	inline BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF, ___U3CU3E7__wrap1_4)); }
	inline String_t* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline String_t** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(String_t* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF, ___U3CU3E7__wrap2_5)); }
	inline int32_t get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(int32_t value)
	{
		___U3CU3E7__wrap2_5 = value;
	}
};


// BattleManager/<EnemyAction>d__13
struct U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA  : public RuntimeObject
{
public:
	// System.Int32 BattleManager/<EnemyAction>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BattleManager/<EnemyAction>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BattleManager BattleManager/<EnemyAction>d__13::<>4__this
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * ___U3CU3E4__this_2;
	// Ataque BattleManager/<EnemyAction>d__13::<move>5__2
	Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * ___U3CmoveU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA, ___U3CU3E4__this_2)); }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmoveU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA, ___U3CmoveU3E5__2_3)); }
	inline Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * get_U3CmoveU3E5__2_3() const { return ___U3CmoveU3E5__2_3; }
	inline Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 ** get_address_of_U3CmoveU3E5__2_3() { return &___U3CmoveU3E5__2_3; }
	inline void set_U3CmoveU3E5__2_3(Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * value)
	{
		___U3CmoveU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmoveU3E5__2_3), (void*)value);
	}
};


// BattleManager/<PerformPlayerMove>d__25
struct U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C  : public RuntimeObject
{
public:
	// System.Int32 BattleManager/<PerformPlayerMove>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BattleManager/<PerformPlayerMove>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BattleManager BattleManager/<PerformPlayerMove>d__25::<>4__this
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * ___U3CU3E4__this_2;
	// Ataque BattleManager/<PerformPlayerMove>d__25::<move>5__2
	Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * ___U3CmoveU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C, ___U3CU3E4__this_2)); }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmoveU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C, ___U3CmoveU3E5__2_3)); }
	inline Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * get_U3CmoveU3E5__2_3() const { return ___U3CmoveU3E5__2_3; }
	inline Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 ** get_address_of_U3CmoveU3E5__2_3() { return &___U3CmoveU3E5__2_3; }
	inline void set_U3CmoveU3E5__2_3(Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * value)
	{
		___U3CmoveU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmoveU3E5__2_3), (void*)value);
	}
};


// BattleManager/<SetupBattle>d__10
struct U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193  : public RuntimeObject
{
public:
	// System.Int32 BattleManager/<SetupBattle>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BattleManager/<SetupBattle>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BattleManager BattleManager/<SetupBattle>d__10::<>4__this
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193, ___U3CU3E4__this_2)); }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// BattleManager/<TryEscape>d__26
struct U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1  : public RuntimeObject
{
public:
	// System.Int32 BattleManager/<TryEscape>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BattleManager/<TryEscape>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BattleManager BattleManager/<TryEscape>d__26::<>4__this
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1, ___U3CU3E4__this_2)); }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// HealBar/<SetSmoothHP>d__4
struct U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59  : public RuntimeObject
{
public:
	// System.Int32 HealBar/<SetSmoothHP>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HealBar/<SetSmoothHP>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// HealBar HealBar/<SetSmoothHP>d__4::<>4__this
	HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * ___U3CU3E4__this_2;
	// System.Single HealBar/<SetSmoothHP>d__4::normalizedValue
	float ___normalizedValue_3;
	// System.Single HealBar/<SetSmoothHP>d__4::<currenScale>5__2
	float ___U3CcurrenScaleU3E5__2_4;
	// System.Single HealBar/<SetSmoothHP>d__4::<updateQuantity>5__3
	float ___U3CupdateQuantityU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59, ___U3CU3E4__this_2)); }
	inline HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_normalizedValue_3() { return static_cast<int32_t>(offsetof(U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59, ___normalizedValue_3)); }
	inline float get_normalizedValue_3() const { return ___normalizedValue_3; }
	inline float* get_address_of_normalizedValue_3() { return &___normalizedValue_3; }
	inline void set_normalizedValue_3(float value)
	{
		___normalizedValue_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurrenScaleU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59, ___U3CcurrenScaleU3E5__2_4)); }
	inline float get_U3CcurrenScaleU3E5__2_4() const { return ___U3CcurrenScaleU3E5__2_4; }
	inline float* get_address_of_U3CcurrenScaleU3E5__2_4() { return &___U3CcurrenScaleU3E5__2_4; }
	inline void set_U3CcurrenScaleU3E5__2_4(float value)
	{
		___U3CcurrenScaleU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CupdateQuantityU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59, ___U3CupdateQuantityU3E5__3_5)); }
	inline float get_U3CupdateQuantityU3E5__3_5() const { return ___U3CupdateQuantityU3E5__3_5; }
	inline float* get_address_of_U3CupdateQuantityU3E5__3_5() { return &___U3CupdateQuantityU3E5__3_5; }
	inline void set_U3CupdateQuantityU3E5__3_5(float value)
	{
		___U3CupdateQuantityU3E5__3_5 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Assets.Scripts.Personajes.AprendeAtaque>
struct Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2, ___list_0)); }
	inline List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * get_list_0() const { return ___list_0; }
	inline List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2, ___current_3)); }
	inline AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * get_current_3() const { return ___current_3; }
	inline AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;

public:
	inline static int32_t get_offset_of_alphaOnly_0() { return static_cast<int32_t>(offsetof(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A, ___alphaOnly_0)); }
	inline bool get_alphaOnly_0() const { return ___alphaOnly_0; }
	inline bool* get_address_of_alphaOnly_0() { return &___alphaOnly_0; }
	inline void set_alphaOnly_0(bool value)
	{
		___alphaOnly_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// DG.Tweening.AxisConstraint
struct AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BattleState
struct BattleState_t0E30060264AF51E3668B8C6887B55C71F386B5B1 
{
public:
	// System.Int32 BattleState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BattleState_t0E30060264AF51E3668B8C6887B55C71F386B5B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
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

// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// GameState
struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE 
{
public:
	// System.Int32 GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
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

// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// AtaqueBase
struct AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String AtaqueBase::nombre
	String_t* ___nombre_4;
	// System.String AtaqueBase::descripcion
	String_t* ___descripcion_5;
	// System.Int32 AtaqueBase::poder
	int32_t ___poder_6;
	// System.Int32 AtaqueBase::accuracy
	int32_t ___accuracy_7;

public:
	inline static int32_t get_offset_of_nombre_4() { return static_cast<int32_t>(offsetof(AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C, ___nombre_4)); }
	inline String_t* get_nombre_4() const { return ___nombre_4; }
	inline String_t** get_address_of_nombre_4() { return &___nombre_4; }
	inline void set_nombre_4(String_t* value)
	{
		___nombre_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nombre_4), (void*)value);
	}

	inline static int32_t get_offset_of_descripcion_5() { return static_cast<int32_t>(offsetof(AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C, ___descripcion_5)); }
	inline String_t* get_descripcion_5() const { return ___descripcion_5; }
	inline String_t** get_address_of_descripcion_5() { return &___descripcion_5; }
	inline void set_descripcion_5(String_t* value)
	{
		___descripcion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descripcion_5), (void*)value);
	}

	inline static int32_t get_offset_of_poder_6() { return static_cast<int32_t>(offsetof(AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C, ___poder_6)); }
	inline int32_t get_poder_6() const { return ___poder_6; }
	inline int32_t* get_address_of_poder_6() { return &___poder_6; }
	inline void set_poder_6(int32_t value)
	{
		___poder_6 = value;
	}

	inline static int32_t get_offset_of_accuracy_7() { return static_cast<int32_t>(offsetof(AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C, ___accuracy_7)); }
	inline int32_t get_accuracy_7() const { return ___accuracy_7; }
	inline int32_t* get_address_of_accuracy_7() { return &___accuracy_7; }
	inline void set_accuracy_7(int32_t value)
	{
		___accuracy_7 = value;
	}
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


// Assets.Scripts.Personajes.Personajes
struct Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 Assets.Scripts.Personajes.Personajes::ID
	int32_t ___ID_4;
	// System.String Assets.Scripts.Personajes.Personajes::nombre
	String_t* ___nombre_5;
	// System.String Assets.Scripts.Personajes.Personajes::descripcion
	String_t* ___descripcion_6;
	// UnityEngine.Sprite Assets.Scripts.Personajes.Personajes::personajeSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___personajeSprite_7;
	// System.Int32 Assets.Scripts.Personajes.Personajes::maxHP
	int32_t ___maxHP_8;
	// System.Int32 Assets.Scripts.Personajes.Personajes::attack
	int32_t ___attack_9;
	// System.Collections.Generic.List`1<Assets.Scripts.Personajes.AprendeAtaque> Assets.Scripts.Personajes.Personajes::aprendeAtaque
	List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * ___aprendeAtaque_10;

public:
	inline static int32_t get_offset_of_ID_4() { return static_cast<int32_t>(offsetof(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E, ___ID_4)); }
	inline int32_t get_ID_4() const { return ___ID_4; }
	inline int32_t* get_address_of_ID_4() { return &___ID_4; }
	inline void set_ID_4(int32_t value)
	{
		___ID_4 = value;
	}

	inline static int32_t get_offset_of_nombre_5() { return static_cast<int32_t>(offsetof(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E, ___nombre_5)); }
	inline String_t* get_nombre_5() const { return ___nombre_5; }
	inline String_t** get_address_of_nombre_5() { return &___nombre_5; }
	inline void set_nombre_5(String_t* value)
	{
		___nombre_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nombre_5), (void*)value);
	}

	inline static int32_t get_offset_of_descripcion_6() { return static_cast<int32_t>(offsetof(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E, ___descripcion_6)); }
	inline String_t* get_descripcion_6() const { return ___descripcion_6; }
	inline String_t** get_address_of_descripcion_6() { return &___descripcion_6; }
	inline void set_descripcion_6(String_t* value)
	{
		___descripcion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descripcion_6), (void*)value);
	}

	inline static int32_t get_offset_of_personajeSprite_7() { return static_cast<int32_t>(offsetof(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E, ___personajeSprite_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_personajeSprite_7() const { return ___personajeSprite_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_personajeSprite_7() { return &___personajeSprite_7; }
	inline void set_personajeSprite_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___personajeSprite_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___personajeSprite_7), (void*)value);
	}

	inline static int32_t get_offset_of_maxHP_8() { return static_cast<int32_t>(offsetof(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E, ___maxHP_8)); }
	inline int32_t get_maxHP_8() const { return ___maxHP_8; }
	inline int32_t* get_address_of_maxHP_8() { return &___maxHP_8; }
	inline void set_maxHP_8(int32_t value)
	{
		___maxHP_8 = value;
	}

	inline static int32_t get_offset_of_attack_9() { return static_cast<int32_t>(offsetof(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E, ___attack_9)); }
	inline int32_t get_attack_9() const { return ___attack_9; }
	inline int32_t* get_address_of_attack_9() { return &___attack_9; }
	inline void set_attack_9(int32_t value)
	{
		___attack_9 = value;
	}

	inline static int32_t get_offset_of_aprendeAtaque_10() { return static_cast<int32_t>(offsetof(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E, ___aprendeAtaque_10)); }
	inline List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * get_aprendeAtaque_10() const { return ___aprendeAtaque_10; }
	inline List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 ** get_address_of_aprendeAtaque_10() { return &___aprendeAtaque_10; }
	inline void set_aprendeAtaque_10(List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * value)
	{
		___aprendeAtaque_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aprendeAtaque_10), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * ___sequencedTweens_55;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t6642D08E578C77292ED5537CF3192269131C189C * ____sequencedObjs_56;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_57;

public:
	inline static int32_t get_offset_of_sequencedTweens_55() { return static_cast<int32_t>(offsetof(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E, ___sequencedTweens_55)); }
	inline List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * get_sequencedTweens_55() const { return ___sequencedTweens_55; }
	inline List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 ** get_address_of_sequencedTweens_55() { return &___sequencedTweens_55; }
	inline void set_sequencedTweens_55(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * value)
	{
		___sequencedTweens_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequencedTweens_55), (void*)value);
	}

	inline static int32_t get_offset_of__sequencedObjs_56() { return static_cast<int32_t>(offsetof(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E, ____sequencedObjs_56)); }
	inline List_1_t6642D08E578C77292ED5537CF3192269131C189C * get__sequencedObjs_56() const { return ____sequencedObjs_56; }
	inline List_1_t6642D08E578C77292ED5537CF3192269131C189C ** get_address_of__sequencedObjs_56() { return &____sequencedObjs_56; }
	inline void set__sequencedObjs_56(List_1_t6642D08E578C77292ED5537CF3192269131C189C * value)
	{
		____sequencedObjs_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequencedObjs_56), (void*)value);
	}

	inline static int32_t get_offset_of_lastTweenInsertTime_57() { return static_cast<int32_t>(offsetof(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E, ___lastTweenInsertTime_57)); }
	inline float get_lastTweenInsertTime_57() const { return ___lastTweenInsertTime_57; }
	inline float* get_address_of_lastTweenInsertTime_57() { return &___lastTweenInsertTime_57; }
	inline void set_lastTweenInsertTime_57(float value)
	{
		___lastTweenInsertTime_57 = value;
	}
};


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___startValue_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_startValue_57() const { return ___startValue_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___endValue_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endValue_58() const { return ___endValue_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___changeValue_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_changeValue_59() const { return ___changeValue_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___plugOptions_60)); }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___getter_61)); }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___setter_62)); }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BarraVida
struct BarraVida_t3BC98C5CB313E4820B45EFF491C42796FD40F25E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image BarraVida::vida
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___vida_4;
	// System.Single BarraVida::vidaActual
	float ___vidaActual_5;
	// System.Single BarraVida::vidaMaxima
	float ___vidaMaxima_6;

public:
	inline static int32_t get_offset_of_vida_4() { return static_cast<int32_t>(offsetof(BarraVida_t3BC98C5CB313E4820B45EFF491C42796FD40F25E, ___vida_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_vida_4() const { return ___vida_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_vida_4() { return &___vida_4; }
	inline void set_vida_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___vida_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vida_4), (void*)value);
	}

	inline static int32_t get_offset_of_vidaActual_5() { return static_cast<int32_t>(offsetof(BarraVida_t3BC98C5CB313E4820B45EFF491C42796FD40F25E, ___vidaActual_5)); }
	inline float get_vidaActual_5() const { return ___vidaActual_5; }
	inline float* get_address_of_vidaActual_5() { return &___vidaActual_5; }
	inline void set_vidaActual_5(float value)
	{
		___vidaActual_5 = value;
	}

	inline static int32_t get_offset_of_vidaMaxima_6() { return static_cast<int32_t>(offsetof(BarraVida_t3BC98C5CB313E4820B45EFF491C42796FD40F25E, ___vidaMaxima_6)); }
	inline float get_vidaMaxima_6() const { return ___vidaMaxima_6; }
	inline float* get_address_of_vidaMaxima_6() { return &___vidaMaxima_6; }
	inline void set_vidaMaxima_6(float value)
	{
		___vidaMaxima_6 = value;
	}
};


// BattleDialogBox
struct BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text BattleDialogBox::dialogText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dialogText_4;
	// UnityEngine.GameObject BattleDialogBox::actionSelect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___actionSelect_5;
	// UnityEngine.GameObject BattleDialogBox::moveSelect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___moveSelect_6;
	// UnityEngine.GameObject BattleDialogBox::moveDescripcion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___moveDescripcion_7;
	// System.Collections.Generic.List`1<UnityEngine.UI.Text> BattleDialogBox::actiontext
	List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * ___actiontext_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.Text> BattleDialogBox::movetext
	List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * ___movetext_9;
	// UnityEngine.UI.Text BattleDialogBox::da?otext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___daUF1otext_10;
	// UnityEngine.Color BattleDialogBox::selectColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___selectColor_11;
	// System.Single BattleDialogBox::charactersPerSecond
	float ___charactersPerSecond_12;
	// System.Boolean BattleDialogBox::isWriting
	bool ___isWriting_13;
	// UnityEngine.AudioClip[] BattleDialogBox::characterSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___characterSounds_14;

public:
	inline static int32_t get_offset_of_dialogText_4() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___dialogText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dialogText_4() const { return ___dialogText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dialogText_4() { return &___dialogText_4; }
	inline void set_dialogText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dialogText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogText_4), (void*)value);
	}

	inline static int32_t get_offset_of_actionSelect_5() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___actionSelect_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_actionSelect_5() const { return ___actionSelect_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_actionSelect_5() { return &___actionSelect_5; }
	inline void set_actionSelect_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___actionSelect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSelect_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSelect_6() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___moveSelect_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_moveSelect_6() const { return ___moveSelect_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_moveSelect_6() { return &___moveSelect_6; }
	inline void set_moveSelect_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___moveSelect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSelect_6), (void*)value);
	}

	inline static int32_t get_offset_of_moveDescripcion_7() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___moveDescripcion_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_moveDescripcion_7() const { return ___moveDescripcion_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_moveDescripcion_7() { return &___moveDescripcion_7; }
	inline void set_moveDescripcion_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___moveDescripcion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveDescripcion_7), (void*)value);
	}

	inline static int32_t get_offset_of_actiontext_8() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___actiontext_8)); }
	inline List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * get_actiontext_8() const { return ___actiontext_8; }
	inline List_1_t15050E83C4C051CA706B3489C75EBD1038966135 ** get_address_of_actiontext_8() { return &___actiontext_8; }
	inline void set_actiontext_8(List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * value)
	{
		___actiontext_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actiontext_8), (void*)value);
	}

	inline static int32_t get_offset_of_movetext_9() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___movetext_9)); }
	inline List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * get_movetext_9() const { return ___movetext_9; }
	inline List_1_t15050E83C4C051CA706B3489C75EBD1038966135 ** get_address_of_movetext_9() { return &___movetext_9; }
	inline void set_movetext_9(List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * value)
	{
		___movetext_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movetext_9), (void*)value);
	}

	inline static int32_t get_offset_of_daUF1otext_10() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___daUF1otext_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_daUF1otext_10() const { return ___daUF1otext_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_daUF1otext_10() { return &___daUF1otext_10; }
	inline void set_daUF1otext_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___daUF1otext_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___daUF1otext_10), (void*)value);
	}

	inline static int32_t get_offset_of_selectColor_11() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___selectColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_selectColor_11() const { return ___selectColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_selectColor_11() { return &___selectColor_11; }
	inline void set_selectColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___selectColor_11 = value;
	}

	inline static int32_t get_offset_of_charactersPerSecond_12() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___charactersPerSecond_12)); }
	inline float get_charactersPerSecond_12() const { return ___charactersPerSecond_12; }
	inline float* get_address_of_charactersPerSecond_12() { return &___charactersPerSecond_12; }
	inline void set_charactersPerSecond_12(float value)
	{
		___charactersPerSecond_12 = value;
	}

	inline static int32_t get_offset_of_isWriting_13() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___isWriting_13)); }
	inline bool get_isWriting_13() const { return ___isWriting_13; }
	inline bool* get_address_of_isWriting_13() { return &___isWriting_13; }
	inline void set_isWriting_13(bool value)
	{
		___isWriting_13 = value;
	}

	inline static int32_t get_offset_of_characterSounds_14() { return static_cast<int32_t>(offsetof(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B, ___characterSounds_14)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_characterSounds_14() const { return ___characterSounds_14; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_characterSounds_14() { return &___characterSounds_14; }
	inline void set_characterSounds_14(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___characterSounds_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterSounds_14), (void*)value);
	}
};


// BattleHud
struct BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text BattleHud::personajeNombre
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___personajeNombre_4;
	// HealBar BattleHud::healBar
	HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * ___healBar_5;
	// Juego BattleHud::_personaje
	Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * ____personaje_6;

public:
	inline static int32_t get_offset_of_personajeNombre_4() { return static_cast<int32_t>(offsetof(BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890, ___personajeNombre_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_personajeNombre_4() const { return ___personajeNombre_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_personajeNombre_4() { return &___personajeNombre_4; }
	inline void set_personajeNombre_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___personajeNombre_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___personajeNombre_4), (void*)value);
	}

	inline static int32_t get_offset_of_healBar_5() { return static_cast<int32_t>(offsetof(BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890, ___healBar_5)); }
	inline HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * get_healBar_5() const { return ___healBar_5; }
	inline HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 ** get_address_of_healBar_5() { return &___healBar_5; }
	inline void set_healBar_5(HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * value)
	{
		___healBar_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healBar_5), (void*)value);
	}

	inline static int32_t get_offset_of__personaje_6() { return static_cast<int32_t>(offsetof(BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890, ____personaje_6)); }
	inline Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * get__personaje_6() const { return ____personaje_6; }
	inline Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 ** get_address_of__personaje_6() { return &____personaje_6; }
	inline void set__personaje_6(Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * value)
	{
		____personaje_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____personaje_6), (void*)value);
	}
};


// BattleManager
struct BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BattleUnit BattleManager::playerUnit
	BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * ___playerUnit_4;
	// BattleHud BattleManager::playerHud
	BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * ___playerHud_5;
	// BattleUnit BattleManager::enemyplayerUnit
	BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * ___enemyplayerUnit_6;
	// BattleHud BattleManager::enemyplayerHud
	BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * ___enemyplayerHud_7;
	// BattleDialogBox BattleManager::battleDialogBox
	BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * ___battleDialogBox_8;
	// System.Action`1<System.Boolean> BattleManager::OnBattleFinish
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnBattleFinish_9;
	// BattleState BattleManager::state
	int32_t ___state_10;
	// System.Int32 BattleManager::currentSelecteAction
	int32_t ___currentSelecteAction_11;
	// System.Single BattleManager::timeSinceLastClick
	float ___timeSinceLastClick_12;
	// System.Single BattleManager::timeBetweenClicks
	float ___timeBetweenClicks_13;
	// UnityEngine.AudioClip BattleManager::attacClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___attacClip_14;
	// UnityEngine.AudioClip BattleManager::damageClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___damageClip_15;
	// UnityEngine.AudioClip BattleManager::endClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___endClip_16;
	// UnityEngine.AudioClip BattleManager::escapeClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___escapeClip_17;
	// System.Int32 BattleManager::currentSelectedMove
	int32_t ___currentSelectedMove_18;

public:
	inline static int32_t get_offset_of_playerUnit_4() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___playerUnit_4)); }
	inline BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * get_playerUnit_4() const { return ___playerUnit_4; }
	inline BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 ** get_address_of_playerUnit_4() { return &___playerUnit_4; }
	inline void set_playerUnit_4(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * value)
	{
		___playerUnit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerUnit_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerHud_5() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___playerHud_5)); }
	inline BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * get_playerHud_5() const { return ___playerHud_5; }
	inline BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 ** get_address_of_playerHud_5() { return &___playerHud_5; }
	inline void set_playerHud_5(BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * value)
	{
		___playerHud_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerHud_5), (void*)value);
	}

	inline static int32_t get_offset_of_enemyplayerUnit_6() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___enemyplayerUnit_6)); }
	inline BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * get_enemyplayerUnit_6() const { return ___enemyplayerUnit_6; }
	inline BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 ** get_address_of_enemyplayerUnit_6() { return &___enemyplayerUnit_6; }
	inline void set_enemyplayerUnit_6(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * value)
	{
		___enemyplayerUnit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyplayerUnit_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyplayerHud_7() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___enemyplayerHud_7)); }
	inline BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * get_enemyplayerHud_7() const { return ___enemyplayerHud_7; }
	inline BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 ** get_address_of_enemyplayerHud_7() { return &___enemyplayerHud_7; }
	inline void set_enemyplayerHud_7(BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * value)
	{
		___enemyplayerHud_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyplayerHud_7), (void*)value);
	}

	inline static int32_t get_offset_of_battleDialogBox_8() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___battleDialogBox_8)); }
	inline BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * get_battleDialogBox_8() const { return ___battleDialogBox_8; }
	inline BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B ** get_address_of_battleDialogBox_8() { return &___battleDialogBox_8; }
	inline void set_battleDialogBox_8(BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * value)
	{
		___battleDialogBox_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___battleDialogBox_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnBattleFinish_9() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___OnBattleFinish_9)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnBattleFinish_9() const { return ___OnBattleFinish_9; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnBattleFinish_9() { return &___OnBattleFinish_9; }
	inline void set_OnBattleFinish_9(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnBattleFinish_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBattleFinish_9), (void*)value);
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___state_10)); }
	inline int32_t get_state_10() const { return ___state_10; }
	inline int32_t* get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(int32_t value)
	{
		___state_10 = value;
	}

	inline static int32_t get_offset_of_currentSelecteAction_11() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___currentSelecteAction_11)); }
	inline int32_t get_currentSelecteAction_11() const { return ___currentSelecteAction_11; }
	inline int32_t* get_address_of_currentSelecteAction_11() { return &___currentSelecteAction_11; }
	inline void set_currentSelecteAction_11(int32_t value)
	{
		___currentSelecteAction_11 = value;
	}

	inline static int32_t get_offset_of_timeSinceLastClick_12() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___timeSinceLastClick_12)); }
	inline float get_timeSinceLastClick_12() const { return ___timeSinceLastClick_12; }
	inline float* get_address_of_timeSinceLastClick_12() { return &___timeSinceLastClick_12; }
	inline void set_timeSinceLastClick_12(float value)
	{
		___timeSinceLastClick_12 = value;
	}

	inline static int32_t get_offset_of_timeBetweenClicks_13() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___timeBetweenClicks_13)); }
	inline float get_timeBetweenClicks_13() const { return ___timeBetweenClicks_13; }
	inline float* get_address_of_timeBetweenClicks_13() { return &___timeBetweenClicks_13; }
	inline void set_timeBetweenClicks_13(float value)
	{
		___timeBetweenClicks_13 = value;
	}

	inline static int32_t get_offset_of_attacClip_14() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___attacClip_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_attacClip_14() const { return ___attacClip_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_attacClip_14() { return &___attacClip_14; }
	inline void set_attacClip_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___attacClip_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attacClip_14), (void*)value);
	}

	inline static int32_t get_offset_of_damageClip_15() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___damageClip_15)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_damageClip_15() const { return ___damageClip_15; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_damageClip_15() { return &___damageClip_15; }
	inline void set_damageClip_15(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___damageClip_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___damageClip_15), (void*)value);
	}

	inline static int32_t get_offset_of_endClip_16() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___endClip_16)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_endClip_16() const { return ___endClip_16; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_endClip_16() { return &___endClip_16; }
	inline void set_endClip_16(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___endClip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endClip_16), (void*)value);
	}

	inline static int32_t get_offset_of_escapeClip_17() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___escapeClip_17)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_escapeClip_17() const { return ___escapeClip_17; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_escapeClip_17() { return &___escapeClip_17; }
	inline void set_escapeClip_17(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___escapeClip_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___escapeClip_17), (void*)value);
	}

	inline static int32_t get_offset_of_currentSelectedMove_18() { return static_cast<int32_t>(offsetof(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7, ___currentSelectedMove_18)); }
	inline int32_t get_currentSelectedMove_18() const { return ___currentSelectedMove_18; }
	inline int32_t* get_address_of_currentSelectedMove_18() { return &___currentSelectedMove_18; }
	inline void set_currentSelectedMove_18(int32_t value)
	{
		___currentSelectedMove_18 = value;
	}
};


// BattleUnit
struct BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Assets.Scripts.Personajes.Personajes BattleUnit::_base
	Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * ____base_4;
	// System.Int32 BattleUnit::_level
	int32_t ____level_5;
	// System.Boolean BattleUnit::isPlayer
	bool ___isPlayer_6;
	// Juego BattleUnit::<Personaje>k__BackingField
	Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * ___U3CPersonajeU3Ek__BackingField_7;
	// UnityEngine.UI.Image BattleUnit::perosnajeImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___perosnajeImage_8;
	// UnityEngine.Sprite BattleUnit::perosnajeImages
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___perosnajeImages_9;
	// UnityEngine.Vector3 BattleUnit::initial
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initial_10;
	// UnityEngine.Color BattleUnit::initialColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___initialColor_11;

public:
	inline static int32_t get_offset_of__base_4() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ____base_4)); }
	inline Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * get__base_4() const { return ____base_4; }
	inline Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E ** get_address_of__base_4() { return &____base_4; }
	inline void set__base_4(Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * value)
	{
		____base_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base_4), (void*)value);
	}

	inline static int32_t get_offset_of__level_5() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ____level_5)); }
	inline int32_t get__level_5() const { return ____level_5; }
	inline int32_t* get_address_of__level_5() { return &____level_5; }
	inline void set__level_5(int32_t value)
	{
		____level_5 = value;
	}

	inline static int32_t get_offset_of_isPlayer_6() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ___isPlayer_6)); }
	inline bool get_isPlayer_6() const { return ___isPlayer_6; }
	inline bool* get_address_of_isPlayer_6() { return &___isPlayer_6; }
	inline void set_isPlayer_6(bool value)
	{
		___isPlayer_6 = value;
	}

	inline static int32_t get_offset_of_U3CPersonajeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ___U3CPersonajeU3Ek__BackingField_7)); }
	inline Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * get_U3CPersonajeU3Ek__BackingField_7() const { return ___U3CPersonajeU3Ek__BackingField_7; }
	inline Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 ** get_address_of_U3CPersonajeU3Ek__BackingField_7() { return &___U3CPersonajeU3Ek__BackingField_7; }
	inline void set_U3CPersonajeU3Ek__BackingField_7(Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * value)
	{
		___U3CPersonajeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPersonajeU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_perosnajeImage_8() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ___perosnajeImage_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_perosnajeImage_8() const { return ___perosnajeImage_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_perosnajeImage_8() { return &___perosnajeImage_8; }
	inline void set_perosnajeImage_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___perosnajeImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perosnajeImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_perosnajeImages_9() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ___perosnajeImages_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_perosnajeImages_9() const { return ___perosnajeImages_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_perosnajeImages_9() { return &___perosnajeImages_9; }
	inline void set_perosnajeImages_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___perosnajeImages_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perosnajeImages_9), (void*)value);
	}

	inline static int32_t get_offset_of_initial_10() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ___initial_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initial_10() const { return ___initial_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initial_10() { return &___initial_10; }
	inline void set_initial_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initial_10 = value;
	}

	inline static int32_t get_offset_of_initialColor_11() { return static_cast<int32_t>(offsetof(BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8, ___initialColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_initialColor_11() const { return ___initialColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_initialColor_11() { return &___initialColor_11; }
	inline void set_initialColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___initialColor_11 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MenuManager GameManager::playerMenu
	MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * ___playerMenu_4;
	// BattleManager GameManager::battleManager
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * ___battleManager_5;
	// UnityEngine.Camera GameManager::worldMainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___worldMainCamera_6;
	// GameState GameManager::_gameState
	int32_t ____gameState_7;
	// UnityEngine.AudioClip GameManager::WorldClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___WorldClip_8;
	// UnityEngine.AudioClip GameManager::BattleClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___BattleClip_9;

public:
	inline static int32_t get_offset_of_playerMenu_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerMenu_4)); }
	inline MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * get_playerMenu_4() const { return ___playerMenu_4; }
	inline MenuManager_tD52BB657312ED53913E423A985CACC86F900124C ** get_address_of_playerMenu_4() { return &___playerMenu_4; }
	inline void set_playerMenu_4(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * value)
	{
		___playerMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_battleManager_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___battleManager_5)); }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * get_battleManager_5() const { return ___battleManager_5; }
	inline BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 ** get_address_of_battleManager_5() { return &___battleManager_5; }
	inline void set_battleManager_5(BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * value)
	{
		___battleManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___battleManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldMainCamera_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___worldMainCamera_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_worldMainCamera_6() const { return ___worldMainCamera_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_worldMainCamera_6() { return &___worldMainCamera_6; }
	inline void set_worldMainCamera_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___worldMainCamera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldMainCamera_6), (void*)value);
	}

	inline static int32_t get_offset_of__gameState_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____gameState_7)); }
	inline int32_t get__gameState_7() const { return ____gameState_7; }
	inline int32_t* get_address_of__gameState_7() { return &____gameState_7; }
	inline void set__gameState_7(int32_t value)
	{
		____gameState_7 = value;
	}

	inline static int32_t get_offset_of_WorldClip_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___WorldClip_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_WorldClip_8() const { return ___WorldClip_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_WorldClip_8() { return &___WorldClip_8; }
	inline void set_WorldClip_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___WorldClip_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WorldClip_8), (void*)value);
	}

	inline static int32_t get_offset_of_BattleClip_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___BattleClip_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_BattleClip_9() const { return ___BattleClip_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_BattleClip_9() { return &___BattleClip_9; }
	inline void set_BattleClip_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___BattleClip_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BattleClip_9), (void*)value);
	}
};


// HealBar
struct HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject HealBar::healthBar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___healthBar_4;

public:
	inline static int32_t get_offset_of_healthBar_4() { return static_cast<int32_t>(offsetof(HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606, ___healthBar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_healthBar_4() const { return ___healthBar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_healthBar_4() { return &___healthBar_4; }
	inline void set_healthBar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___healthBar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBar_4), (void*)value);
	}
};


// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button MenuManager::ButtonExit
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___ButtonExit_4;
	// UnityEngine.UI.Button MenuManager::ButtonStart
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___ButtonStart_5;
	// System.Action MenuManager::OnPersonajeEncontrado
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnPersonajeEncontrado_6;

public:
	inline static int32_t get_offset_of_ButtonExit_4() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___ButtonExit_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_ButtonExit_4() const { return ___ButtonExit_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_ButtonExit_4() { return &___ButtonExit_4; }
	inline void set_ButtonExit_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___ButtonExit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonExit_4), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonStart_5() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___ButtonStart_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_ButtonStart_5() const { return ___ButtonStart_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_ButtonStart_5() { return &___ButtonStart_5; }
	inline void set_ButtonStart_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___ButtonStart_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonStart_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnPersonajeEncontrado_6() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___OnPersonajeEncontrado_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnPersonajeEncontrado_6() const { return ___OnPersonajeEncontrado_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnPersonajeEncontrado_6() { return &___OnPersonajeEncontrado_6; }
	inline void set_OnPersonajeEncontrado_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnPersonajeEncontrado_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPersonajeEncontrado_6), (void*)value);
	}
};


// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator NewBehaviourScript::AnimCam
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___AnimCam_4;

public:
	inline static int32_t get_offset_of_AnimCam_4() { return static_cast<int32_t>(offsetof(NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB, ___AnimCam_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_AnimCam_4() const { return ___AnimCam_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_AnimCam_4() { return &___AnimCam_4; }
	inline void set_AnimCam_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___AnimCam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimCam_4), (void*)value);
	}
};


// SonidoBoton
struct SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip SonidoBoton::clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip_4;

public:
	inline static int32_t get_offset_of_clip_4() { return static_cast<int32_t>(offsetof(SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA, ___clip_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_clip_4() const { return ___clip_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_clip_4() { return &___clip_4; }
	inline void set_clip_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___clip_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_4), (void*)value);
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource SoundManager::effectSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___effectSource_4;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___musicSource_5;
	// UnityEngine.Vector2 SoundManager::pitchRange
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pitchRange_6;
	// UnityEngine.UI.Slider SoundManager::sliderMusic
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sliderMusic_8;
	// UnityEngine.UI.Slider SoundManager::sliderSFX
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sliderSFX_9;

public:
	inline static int32_t get_offset_of_effectSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___effectSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_effectSource_4() const { return ___effectSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_effectSource_4() { return &___effectSource_4; }
	inline void set_effectSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___effectSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effectSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_musicSource_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___musicSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_musicSource_5() const { return ___musicSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_musicSource_5() { return &___musicSource_5; }
	inline void set_musicSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___musicSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_pitchRange_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___pitchRange_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pitchRange_6() const { return ___pitchRange_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pitchRange_6() { return &___pitchRange_6; }
	inline void set_pitchRange_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pitchRange_6 = value;
	}

	inline static int32_t get_offset_of_sliderMusic_8() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___sliderMusic_8)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sliderMusic_8() const { return ___sliderMusic_8; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sliderMusic_8() { return &___sliderMusic_8; }
	inline void set_sliderMusic_8(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sliderMusic_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliderMusic_8), (void*)value);
	}

	inline static int32_t get_offset_of_sliderSFX_9() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___sliderSFX_9)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sliderSFX_9() const { return ___sliderSFX_9; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sliderSFX_9() { return &___sliderSFX_9; }
	inline void set_sliderSFX_9(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sliderSFX_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliderSFX_9), (void*)value);
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::SharedInstance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___SharedInstance_7;

public:
	inline static int32_t get_offset_of_SharedInstance_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___SharedInstance_7)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_SharedInstance_7() const { return ___SharedInstance_7; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_SharedInstance_7() { return &___SharedInstance_7; }
	inline void set_SharedInstance_7(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___SharedInstance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SharedInstance_7), (void*)value);
	}
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
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


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Ataque::set_Base(AtaqueBase)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Ataque_set_Base_m9FF0734799A53DFD7F1A9703F31E8E844A127079_inline (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void BattleDialogBox/<SetDialog>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDialogU3Ed__11__ctor_m5EF19622A268D95D678EB9EEBF743F7622E20F44 (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_inline (List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (List_1_t15050E83C4C051CA706B3489C75EBD1038966135 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
inline int32_t List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_inline (List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t15050E83C4C051CA706B3489C75EBD1038966135 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Ataque>::get_Count()
inline int32_t List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_inline (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Ataque>::get_Item(System.Int32)
inline Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_inline (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * (*) (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// AtaqueBase Ataque::get_Base()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3_inline (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, const RuntimeMethod* method);
// System.String AtaqueBase::get_Nombre()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AtaqueBase_get_Nombre_m0E7AF4D0DE71163BB85DBAC3F76F4152C4F0C9E5_inline (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method);
// System.Int32 AtaqueBase::get_Poder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AtaqueBase_get_Poder_m56639B0556F15ACECEFACF2DEDF41044911A9A35_inline (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// Assets.Scripts.Personajes.Personajes Juego::get_Personajes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method);
// System.String Assets.Scripts.Personajes.Personajes::get_Nombre()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method);
// System.Void HealBar::SetHP(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealBar_SetHP_mB4839E9F07017B9513BE95A441A69BEA8AE0341D (HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * __this, float ___normalizedValue0, const RuntimeMethod* method);
// System.Int32 Juego::get_HP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Juego_get_HP_m980B13E14FC6DE93F85D389523FF2C97A4029965_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method);
// System.Int32 Juego::get_MaxHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Juego_get_MaxHP_mDE6075CF46E1B9669FF2B8DD7FEB024022EFEC24 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator HealBar::SetSmoothHP(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealBar_SetSmoothHP_m49403D4B534959B2DE3A8AA9816D66842B8729AD (HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * __this, float ___normalizedValue0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator BattleManager::SetupBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_SetupBattle_mAD9702C3D5CF34A8035CC0488342C86CEAF269D0 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Void BattleManager/<SetupBattle>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBattleU3Ed__10__ctor_m78D140BB96FE24FD1E78768D8FF528BD88A914AD (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator BattleDialogBox::SetDialog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void BattleDialogBox::ToggleDialogText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_ToggleDialogText_mC6A19BF09664D5FE0D1C14BD116AA6F284E521AF (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void BattleDialogBox::ToggleAction(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_ToggleAction_m906DD84B29BB0D0586EC32D7794AF7D8159F25A0 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void BattleDialogBox::ToggleMove(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_ToggleMove_m345949A4DDD2BF00EA8CA7DC78E6ADAFA8C49E66 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void BattleDialogBox::SelectAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_SelectAction_m3A4719B27A545EAD1C4D92D1C5FE89A6D0FBF025 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, int32_t ___selectAction0, const RuntimeMethod* method);
// Juego BattleUnit::get_Personaje()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Ataque> Juego::get_Ataques()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method);
// System.Void BattleDialogBox::SelectMove(System.Int32,Ataque)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_SelectMove_m7C4E92216866B3403A263A9669FA6AFBC404814C (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, int32_t ___selectmove0, Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * ___move1, const RuntimeMethod* method);
// System.Void BattleManager/<EnemyAction>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemyActionU3Ed__13__ctor_mFE4A5A1A6FDB5732FA1B1CA2C05BA753963717BE (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void BattleManager::HandeldPlayerSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandeldPlayerSelection_m1711110F1736B5E83CCA70A06C189C267198AEBE (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Void BattleManager::HandeldPlayerMoveSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandeldPlayerMoveSelection_m001606EFBEF62CFB5E77C6BDA0B72CA2B9D815C7 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void BattleManager::PlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_PlayerMovement_m6D6DB01A48E61FFE74181840475975F98FEF072A (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BattleManager::TryEscape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_TryEscape_m4C592455D78EDDBF0F801128ED772C6DB0CF1E77 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BattleManager::PerformPlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_PerformPlayerMove_mBFF732647E4717F2BB32EFE010686CF541EADCC5 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Void BattleManager/<PerformPlayerMove>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformPlayerMoveU3Ed__25__ctor_m5B16DAA91F3BB6DBB2C81C91AED65EBA4DCBBBF0 (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void BattleManager/<TryEscape>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryEscapeU3Ed__26__ctor_m314CB40C6C9A9E0F66E533F10C3E051E4A69733A (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Juego::.ctor(Assets.Scripts.Personajes.Personajes,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Juego__ctor_m6E28A09CE7EA723D0083748BC5EF6489E0334126 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * ___personaje0, int32_t ___level1, const RuntimeMethod* method);
// System.Void BattleUnit::set_Personaje(Juego)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BattleUnit_set_Personaje_m53574C6FE15F63866E55112A92DEF24DE00DDDF4_inline (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * ___value0, const RuntimeMethod* method);
// UnityEngine.Sprite Assets.Scripts.Personajes.Personajes::get_PersonajeSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Personajes_get_PersonajeSprite_m3FF6768E5FF03E98FEB7CCF52F510EFBA4208A01_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void BattleUnit::PlayStartAnimiation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayStartAnimiation_mDD73D7A2D116F9282A74499941B8693EF3AA7907 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMoveX(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOLocalMoveX_m18CECD5F41FFE2D23D0E29770BE3728431D0DDA2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.DOTween::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * DOTween_Sequence_m83221E315CE42CCE7B80D126A549114C86BC388D (const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5 (Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___s0, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOColor_mFB279C1658A0C33E18B893B56EB5918AF6B197E2 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMoveY(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOLocalMoveY_m758574147287D8B39618F852682E1E03BDC7A696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOFade_mC5103EC42ADFFC9414B8124AE06A78EEC6CB15E8 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Join(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * TweenSettingsExtensions_Join_m33E665745C1F091AAD10AD2C3FDD91017861D89F (Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___s0, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t1, const RuntimeMethod* method);
// System.Void SoundManager::PlayMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayMusic_m3264968E597EA6ECE72CBBD20DB8DB907DA2F9E0 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MenuManager::add_OnPersonajeEncontrado(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_add_OnPersonajeEncontrado_m2BEC2E14E26F923D51FF0671F6F9A88D74B02152 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void BattleManager::add_OnBattleFinish(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_add_OnBattleFinish_m1FC569C6AE6FB61954F35CC0C647400F74F84286 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void BattleManager::HandleStartBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandleStartBattle_m1E077C826FA958A9D823370C8A1FCC1B1D236F31 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Void BattleManager::HandleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandleUpdate_m906B7D7B8ADDB606FFA745BE86F288EA85BBEC2F (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Void MenuManager::HandleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_HandleUpdate_m0D896E5FC07D8420561D337DE8595C2FCEDB4661 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Color HealBar::get_BarColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  HealBar_get_BarColor_m94C282AC28C847CC2EEDDF39D9FEC90F14062609 (HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * __this, const RuntimeMethod* method);
// System.Void HealBar/<SetSmoothHP>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSmoothHPU3Ed__4__ctor_m4FDFEB15912AB0D52FE2398ED2660A6A7396D54A (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Ataque>::.ctor()
inline void List_1__ctor_m918A8EC93DDA3BAB267F5FEF0A5931121D10F3D0 (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Assets.Scripts.Personajes.AprendeAtaque> Assets.Scripts.Personajes.Personajes::get_AprendeAtaques()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * Personajes_get_AprendeAtaques_m504056430B1E7E35900F79B033575069AF5CB8D7_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Assets.Scripts.Personajes.AprendeAtaque>::GetEnumerator()
inline Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2  List_1_GetEnumerator_mFA4EB168FCEC89631D1993A00D1E66E6F1B0BA2C (List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2  (*) (List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Assets.Scripts.Personajes.AprendeAtaque>::get_Current()
inline AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * Enumerator_get_Current_mF7341B0A340C01893AB5FD542128CE5D750859F1_inline (Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 * __this, const RuntimeMethod* method)
{
	return ((  AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * (*) (Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Int32 Assets.Scripts.Personajes.AprendeAtaque::get_Level()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AprendeAtaque_get_Level_mACC4C0617D54581FEF8B7B770C142EC7FA055485_inline (AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * __this, const RuntimeMethod* method);
// AtaqueBase Assets.Scripts.Personajes.AprendeAtaque::get_Ataque()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * AprendeAtaque_get_Ataque_m2AED464D681A10567C01337B587381D792C96E6B_inline (AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * __this, const RuntimeMethod* method);
// System.Void Ataque::.ctor(AtaqueBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ataque__ctor_m018DD1680BED28F849F6C61BA301841E19DCA9FA (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * ___mBase0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Ataque>::Add(!0)
inline void List_1_Add_m517AAF9638EA2BC9BA847BDC71BD07B24F420099 (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * __this, Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA *, Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Assets.Scripts.Personajes.AprendeAtaque>::MoveNext()
inline bool Enumerator_MoveNext_mC070E539A6068EBCC6C47E1A83F55461895B6576 (Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Assets.Scripts.Personajes.AprendeAtaque>::Dispose()
inline void Enumerator_Dispose_m7F88CB0FC6CF3D3D7611CDF67E949CED9DA0A4DB (Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 Assets.Scripts.Personajes.Personajes::get_Attack()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Personajes_get_Attack_m1139207F2542C98F815CD615D9C39CE01E758C9E_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method);
// System.Int32 Assets.Scripts.Personajes.Personajes::get_MaxHP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Personajes_get_MaxHP_m8B6EDED74031B110983161C19E2882448EF35288_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void Juego::set_HP(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Juego_set_HP_mABA449B0BE34836396369F643037A76CC9886C3F_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.UI.Button SonidoBoton::get_btn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * SonidoBoton_get_btn_m997051C40EAD8A33A99EAA47C0907767E1112B45 (SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA * __this, const RuntimeMethod* method);
// UnityEngine.AudioSource SonidoBoton::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * SonidoBoton_get_source_m60F8F9E9802D2B46C5D75C44AF00446CBBD8CA66 (SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void SoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void SoundManager::RandomSoundEffect(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomSoundEffect_mF3DC4FFE182E958BF0DE75BFF5FC1F86BCAEF0A9 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clip0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// Ataque Juego::RandomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * Juego_RandomMove_m8942847D16CAF233B731DBC9E562DDA4AB358AD2 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void BattleUnit::PlayAttackAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayAttackAnimation_m8316228CAD0085A5B62D2EE4AC0E0A2F1E6AD7E6 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method);
// System.Void BattleUnit::PlayReciveAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayReciveAttack_m884324B8FA129113F6276C759992BB82775927EC (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method);
// System.Boolean Juego::Damage(Ataque,Assets.Scripts.Personajes.Personajes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Juego_Damage_mC379655239B63CB444F8695AF386CD22558B5F57 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * ___move0, Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * ___attacker1, const RuntimeMethod* method);
// System.Void BattleHud::UpdatePersonajeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHud_UpdatePersonajeData_m387F0CFF768792818B0D0F794CA75345AA27E387 (BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * __this, const RuntimeMethod* method);
// System.Void BattleUnit::PlayFaintAnimiation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayFaintAnimiation_m770C3951A95F3F70CC9641937D31652F5DB7417B (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void BattleManager::PlayerAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_PlayerAction_mCEE1DC13C4B0EA33A451C85FD1C4CA1FB0A87044 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BattleManager::EnemyAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_EnemyAction_m0D26EEA475C337141777D4F5624647242C14440C (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method);
// System.Void BattleUnit::SetupPersonaje()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_SetupPersonaje_m3F341DC3058DAB2A202CEEF9E43992EFCC6DEC02 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method);
// System.Void BattleHud::SetPersonajeData(Juego)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHud_SetPersonajeData_m39EFEF6B21C250362AF51F8DC307BC81721984D3 (BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * __this, Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * ___personaje0, const RuntimeMethod* method);
// System.Void BattleDialogBox::SetPersonajeMove(System.Collections.Generic.List`1<Ataque>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_SetPersonajeMove_mE7F53BF0D127A856BC6B859F55C8895A67304025 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * ___moves0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// AtaqueBase Assets.Scripts.Personajes.AprendeAtaque::get_Ataque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * AprendeAtaque_get_Ataque_m2AED464D681A10567C01337B587381D792C96E6B (AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * __this, const RuntimeMethod* method)
{
	{
		// public AtaqueBase Ataque => ataque;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_0 = __this->get_ataque_0();
		return L_0;
	}
}
// System.Int32 Assets.Scripts.Personajes.AprendeAtaque::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AprendeAtaque_get_Level_mACC4C0617D54581FEF8B7B770C142EC7FA055485 (AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * __this, const RuntimeMethod* method)
{
	{
		// public int Level => level;
		int32_t L_0 = __this->get_level_1();
		return L_0;
	}
}
// System.Void Assets.Scripts.Personajes.AprendeAtaque::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AprendeAtaque__ctor_m3ABACCFE4A82A893154B0848A91733E5A5F5A7CD (AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * __this, const RuntimeMethod* method)
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
// AtaqueBase Ataque::get_Base()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3 (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, const RuntimeMethod* method)
{
	{
		// get => _base;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_0 = __this->get__base_0();
		return L_0;
	}
}
// System.Void Ataque::set_Base(AtaqueBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ataque_set_Base_m9FF0734799A53DFD7F1A9703F31E8E844A127079 (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * ___value0, const RuntimeMethod* method)
{
	{
		// set => _base = value;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_0 = ___value0;
		__this->set__base_0(L_0);
		return;
	}
}
// System.Void Ataque::.ctor(AtaqueBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ataque__ctor_m018DD1680BED28F849F6C61BA301841E19DCA9FA (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * ___mBase0, const RuntimeMethod* method)
{
	{
		// public Ataque(AtaqueBase mBase)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Base = mBase;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_0 = ___mBase0;
		Ataque_set_Base_m9FF0734799A53DFD7F1A9703F31E8E844A127079_inline(__this, L_0, /*hidden argument*/NULL);
		// }
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
// System.String AtaqueBase::get_Nombre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AtaqueBase_get_Nombre_m0E7AF4D0DE71163BB85DBAC3F76F4152C4F0C9E5 (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method)
{
	{
		// public string Nombre => nombre;
		String_t* L_0 = __this->get_nombre_4();
		return L_0;
	}
}
// System.String AtaqueBase::get_Descripcion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AtaqueBase_get_Descripcion_mDD22A75A4AE72A4A409B1BEB94DFD8098751B099 (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method)
{
	{
		// public string Descripcion => descripcion;
		String_t* L_0 = __this->get_descripcion_5();
		return L_0;
	}
}
// System.Int32 AtaqueBase::get_Poder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AtaqueBase_get_Poder_m56639B0556F15ACECEFACF2DEDF41044911A9A35 (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method)
{
	{
		// public int Poder => poder;
		int32_t L_0 = __this->get_poder_6();
		return L_0;
	}
}
// System.Int32 AtaqueBase::get_Accuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AtaqueBase_get_Accuracy_m04C30FA7C6545C1FC1C4C7BD22A40235C71AC861 (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method)
{
	{
		// public int Accuracy => accuracy;
		int32_t L_0 = __this->get_accuracy_7();
		return L_0;
	}
}
// System.Void AtaqueBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtaqueBase__ctor_mD04582CBEF0FFC143434C1A72D3D702FDD1F84CA (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void BarraVida::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarraVida_Update_mCCCEC28FD0D4CB03F9248814982B40357A53C785 (BarraVida_t3BC98C5CB313E4820B45EFF491C42796FD40F25E * __this, const RuntimeMethod* method)
{
	{
		// vida.fillAmount = vidaActual / vidaMaxima;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_vida_4();
		float L_1 = __this->get_vidaActual_5();
		float L_2 = __this->get_vidaMaxima_6();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, ((float)((float)L_1/(float)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BarraVida::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarraVida__ctor_m478A30B63EDB7F96E8B3731A1AEFB7A8DB7D8AB8 (BarraVida_t3BC98C5CB313E4820B45EFF491C42796FD40F25E * __this, const RuntimeMethod* method)
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
// System.Collections.IEnumerator BattleDialogBox::SetDialog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * L_0 = (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF *)il2cpp_codegen_object_new(U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF_il2cpp_TypeInfo_var);
		U3CSetDialogU3Ed__11__ctor_m5EF19622A268D95D678EB9EEBF743F7622E20F44(L_0, 0, /*hidden argument*/NULL);
		U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * L_2 = L_1;
		String_t* L_3 = ___message0;
		L_2->set_message_3(L_3);
		return L_2;
	}
}
// System.Void BattleDialogBox::ToggleDialogText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_ToggleDialogText_mC6A19BF09664D5FE0D1C14BD116AA6F284E521AF (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// dialogText.enabled = activated;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_dialogText_4();
		bool L_1 = ___activated0;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleDialogBox::ToggleAction(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_ToggleAction_m906DD84B29BB0D0586EC32D7794AF7D8159F25A0 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// actionSelect.SetActive(activated);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_actionSelect_5();
		bool L_1 = ___activated0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleDialogBox::ToggleMove(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_ToggleMove_m345949A4DDD2BF00EA8CA7DC78E6ADAFA8C49E66 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// moveSelect.SetActive(activated);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_moveSelect_6();
		bool L_1 = ___activated0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// moveDescripcion.SetActive(activated);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_moveDescripcion_7();
		bool L_3 = ___activated0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleDialogBox::SelectAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_SelectAction_m3A4719B27A545EAD1C4D92D1C5FE89A6D0FBF025 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, int32_t ___selectAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < actiontext.Count; i++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// if (i == selectAction)
		int32_t L_0 = V_0;
		int32_t L_1 = ___selectAction0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		// actiontext[i].color = selectColor;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_2 = __this->get_actiontext_8();
		int32_t L_3 = V_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_selectColor_11();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		goto IL_0037;
	}

IL_0021:
	{
		// actiontext[i].color = Color.black;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_6 = __this->get_actiontext_8();
		int32_t L_7 = V_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
	}

IL_0037:
	{
		// for (int i = 0; i < actiontext.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < actiontext.Count; i++)
		int32_t L_11 = V_0;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_12 = __this->get_actiontext_8();
		int32_t L_13;
		L_13 = List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_inline(L_12, /*hidden argument*/List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleDialogBox::SetPersonajeMove(System.Collections.Generic.List`1<Ataque>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_SetPersonajeMove_mE7F53BF0D127A856BC6B859F55C8895A67304025 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * ___moves0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < movetext.Count; i++)
		V_0 = 0;
		goto IL_004b;
	}

IL_0004:
	{
		// if (i < moves.Count)
		int32_t L_0 = V_0;
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_1 = ___moves0;
		int32_t L_2;
		L_2 = List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_inline(L_1, /*hidden argument*/List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		// movetext[i].text = moves[i].Base.Nombre;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_3 = __this->get_movetext_9();
		int32_t L_4 = V_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_6 = ___moves0;
		int32_t L_7 = V_0;
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_8;
		L_8 = List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_9;
		L_9 = Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3_inline(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = AtaqueBase_get_Nombre_m0E7AF4D0DE71163BB85DBAC3F76F4152C4F0C9E5_inline(L_9, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		// }
		goto IL_0047;
	}

IL_0031:
	{
		// movetext[i].text = "---";
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_11 = __this->get_movetext_9();
		int32_t L_12 = V_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13;
		L_13 = List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544);
	}

IL_0047:
	{
		// for (int i = 0; i < movetext.Count; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004b:
	{
		// for (int i = 0; i < movetext.Count; i++)
		int32_t L_15 = V_0;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_16 = __this->get_movetext_9();
		int32_t L_17;
		L_17 = List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_inline(L_16, /*hidden argument*/List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleDialogBox::SelectMove(System.Int32,Ataque)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox_SelectMove_m7C4E92216866B3403A263A9669FA6AFBC404814C (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, int32_t ___selectmove0, Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * ___move1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85B7EDC1CD85C62B72E1D6F4221D8F81543AAA6C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < movetext.Count; i++)
		V_0 = 0;
		goto IL_0060;
	}

IL_0004:
	{
		// if (i == selectmove)
		int32_t L_0 = V_0;
		int32_t L_1 = ___selectmove0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		// movetext[i].color = selectColor;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_2 = __this->get_movetext_9();
		int32_t L_3 = V_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_selectColor_11();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		goto IL_0037;
	}

IL_0021:
	{
		// movetext[i].color = Color.black;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_6 = __this->get_movetext_9();
		int32_t L_7 = V_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m4491ED62CDADC23D1CD475DA52448DF38D14B007_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
	}

IL_0037:
	{
		// da�otext.text = $"Da�o {move.Base.Poder}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_daUF1otext_10();
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_11 = ___move1;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_12;
		L_12 = Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = AtaqueBase_get_Poder_m56639B0556F15ACECEFACF2DEDF41044911A9A35_inline(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral85B7EDC1CD85C62B72E1D6F4221D8F81543AAA6C, L_15, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_16);
		// for (int i = 0; i < movetext.Count; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < movetext.Count; i++)
		int32_t L_18 = V_0;
		List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * L_19 = __this->get_movetext_9();
		int32_t L_20;
		L_20 = List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_inline(L_19, /*hidden argument*/List_1_get_Count_m3E95704A65452FF48304AA83326C732006F32607_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleDialogBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleDialogBox__ctor_m053F289044079D2478011CA3CF5BB6B7983462B0 (BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] Color selectColor = Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		__this->set_selectColor_11(L_0);
		// public float charactersPerSecond = 80.0f;
		__this->set_charactersPerSecond_12((80.0f));
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
// System.Void BattleHud::SetPersonajeData(Juego)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHud_SetPersonajeData_m39EFEF6B21C250362AF51F8DC307BC81721984D3 (BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * __this, Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * ___personaje0, const RuntimeMethod* method)
{
	{
		// _personaje = personaje;
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_0 = ___personaje0;
		__this->set__personaje_6(L_0);
		// personajeNombre.text = personaje.Personajes.Nombre;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_personajeNombre_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_2 = ___personaje0;
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_3;
		L_3 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// healBar.SetHP(1);
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_5 = __this->get_healBar_5();
		HealBar_SetHP_mB4839E9F07017B9513BE95A441A69BEA8AE0341D(L_5, (1.0f), /*hidden argument*/NULL);
		// healBar.SetHP((float)(personaje.HP/personaje.MaxHP));
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_6 = __this->get_healBar_5();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_7 = ___personaje0;
		int32_t L_8;
		L_8 = Juego_get_HP_m980B13E14FC6DE93F85D389523FF2C97A4029965_inline(L_7, /*hidden argument*/NULL);
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_9 = ___personaje0;
		int32_t L_10;
		L_10 = Juego_get_MaxHP_mDE6075CF46E1B9669FF2B8DD7FEB024022EFEC24(L_9, /*hidden argument*/NULL);
		HealBar_SetHP_mB4839E9F07017B9513BE95A441A69BEA8AE0341D(L_6, ((float)((float)((int32_t)((int32_t)L_8/(int32_t)L_10)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleHud::UpdatePersonajeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHud_UpdatePersonajeData_m387F0CFF768792818B0D0F794CA75345AA27E387 (BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(healBar.SetSmoothHP((float)_personaje.HP / _personaje.MaxHP));
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_0 = __this->get_healBar_5();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_1 = __this->get__personaje_6();
		int32_t L_2;
		L_2 = Juego_get_HP_m980B13E14FC6DE93F85D389523FF2C97A4029965_inline(L_1, /*hidden argument*/NULL);
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_3 = __this->get__personaje_6();
		int32_t L_4;
		L_4 = Juego_get_MaxHP_mDE6075CF46E1B9669FF2B8DD7FEB024022EFEC24(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5;
		L_5 = HealBar_SetSmoothHP_m49403D4B534959B2DE3A8AA9816D66842B8729AD(L_0, ((float)((float)((float)((float)L_2))/(float)((float)((float)L_4)))), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleHud::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHud__ctor_m3846DD309B63E89C342F920DD76EE992832FE03B (BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * __this, const RuntimeMethod* method)
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
// System.Void BattleManager::add_OnBattleFinish(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_add_OnBattleFinish_m1FC569C6AE6FB61954F35CC0C647400F74F84286 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_OnBattleFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_OnBattleFinish_9();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BattleManager::remove_OnBattleFinish(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_remove_OnBattleFinish_m9B2DC29B5382CA1CE6ADB456918DA2AF440990FE (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_OnBattleFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_OnBattleFinish_9();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BattleManager::HandleStartBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandleStartBattle_m1E077C826FA958A9D823370C8A1FCC1B1D236F31 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine( SetupBattle());
		RuntimeObject* L_0;
		L_0 = BattleManager_SetupBattle_mAD9702C3D5CF34A8035CC0488342C86CEAF269D0(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BattleManager::SetupBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_SetupBattle_mAD9702C3D5CF34A8035CC0488342C86CEAF269D0 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * L_0 = (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 *)il2cpp_codegen_object_new(U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193_il2cpp_TypeInfo_var);
		U3CSetupBattleU3Ed__10__ctor_m78D140BB96FE24FD1E78768D8FF528BD88A914AD(L_0, 0, /*hidden argument*/NULL);
		U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void BattleManager::PlayerAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_PlayerAction_mCEE1DC13C4B0EA33A451C85FD1C4CA1FB0A87044 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE31BBCD7C76A286393AC97B7B932CB3244FAE4B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state = BattleState.PlayerSelectAction;
		__this->set_state_10(1);
		// StartCoroutine(battleDialogBox.SetDialog("Selecciona una accion"));
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_0 = __this->get_battleDialogBox_8();
		RuntimeObject* L_1;
		L_1 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_0, _stringLiteralE31BBCD7C76A286393AC97B7B932CB3244FAE4B7, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// battleDialogBox.ToggleDialogText(true);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_3 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleDialogText_mC6A19BF09664D5FE0D1C14BD116AA6F284E521AF(L_3, (bool)1, /*hidden argument*/NULL);
		// battleDialogBox.ToggleAction(true);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_4 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleAction_m906DD84B29BB0D0586EC32D7794AF7D8159F25A0(L_4, (bool)1, /*hidden argument*/NULL);
		// battleDialogBox.ToggleMove(false);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_5 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleMove_m345949A4DDD2BF00EA8CA7DC78E6ADAFA8C49E66(L_5, (bool)0, /*hidden argument*/NULL);
		// currentSelecteAction = 0;
		__this->set_currentSelecteAction_11(0);
		// battleDialogBox.SelectAction(currentSelecteAction);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_6 = __this->get_battleDialogBox_8();
		int32_t L_7 = __this->get_currentSelecteAction_11();
		BattleDialogBox_SelectAction_m3A4719B27A545EAD1C4D92D1C5FE89A6D0FBF025(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleManager::PlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_PlayerMovement_m6D6DB01A48E61FFE74181840475975F98FEF072A (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state = BattleState.PlayerMove;
		__this->set_state_10(2);
		// battleDialogBox.ToggleDialogText(false);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_0 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleDialogText_mC6A19BF09664D5FE0D1C14BD116AA6F284E521AF(L_0, (bool)0, /*hidden argument*/NULL);
		// battleDialogBox.ToggleAction(false);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_1 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleAction_m906DD84B29BB0D0586EC32D7794AF7D8159F25A0(L_1, (bool)0, /*hidden argument*/NULL);
		// battleDialogBox.ToggleMove(true);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_2 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleMove_m345949A4DDD2BF00EA8CA7DC78E6ADAFA8C49E66(L_2, (bool)1, /*hidden argument*/NULL);
		// currentSelectedMove = 0;
		__this->set_currentSelectedMove_18(0);
		// battleDialogBox.SelectMove(currentSelectedMove, playerUnit.Personaje.Ataques[currentSelectedMove]);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_3 = __this->get_battleDialogBox_8();
		int32_t L_4 = __this->get_currentSelectedMove_18();
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_5 = __this->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_6;
		L_6 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_5, /*hidden argument*/NULL);
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_7;
		L_7 = Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_currentSelectedMove_18();
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_9;
		L_9 = List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		BattleDialogBox_SelectMove_m7C4E92216866B3403A263A9669FA6AFBC404814C(L_3, L_4, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BattleManager::EnemyAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_EnemyAction_m0D26EEA475C337141777D4F5624647242C14440C (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * L_0 = (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA *)il2cpp_codegen_object_new(U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA_il2cpp_TypeInfo_var);
		U3CEnemyActionU3Ed__13__ctor_mFE4A5A1A6FDB5732FA1B1CA2C05BA753963717BE(L_0, 0, /*hidden argument*/NULL);
		U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void BattleManager::HandleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandleUpdate_m906B7D7B8ADDB606FFA745BE86F288EA85BBEC2F (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	{
		// timeSinceLastClick += Time.deltaTime;
		float L_0 = __this->get_timeSinceLastClick_12();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeSinceLastClick_12(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (battleDialogBox.isWriting)
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_2 = __this->get_battleDialogBox_8();
		bool L_3 = L_2->get_isWriting_13();
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// if(state == BattleState.PlayerSelectAction)
		int32_t L_4 = __this->get_state_10();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// HandeldPlayerSelection();
		BattleManager_HandeldPlayerSelection_m1711110F1736B5E83CCA70A06C189C267198AEBE(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// else if (state == BattleState.PlayerMove)
		int32_t L_5 = __this->get_state_10();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_003f;
		}
	}
	{
		// HandeldPlayerMoveSelection();
		BattleManager_HandeldPlayerMoveSelection_m001606EFBEF62CFB5E77C6BDA0B72CA2B9D815C7(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void BattleManager::HandeldPlayerSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandeldPlayerSelection_m1711110F1736B5E83CCA70A06C189C267198AEBE (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeSinceLastClick < timeBetweenClicks)
		float L_0 = __this->get_timeSinceLastClick_12();
		float L_1 = __this->get_timeBetweenClicks_13();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (Input.GetAxisRaw("Vertical")!=0)
		float L_2;
		L_2 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_006b;
		}
	}
	{
		// timeSinceLastClick = 0;
		__this->set_timeSinceLastClick_12((0.0f));
		// if (currentSelecteAction == 0)
		int32_t L_3 = __this->get_currentSelecteAction_11();
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		// currentSelecteAction ++;
		int32_t L_4 = __this->get_currentSelecteAction_11();
		__this->set_currentSelecteAction_11(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// }
		goto IL_005a;
	}

IL_0043:
	{
		// else if (currentSelecteAction == 1)
		int32_t L_5 = __this->get_currentSelecteAction_11();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_005a;
		}
	}
	{
		// currentSelecteAction--;
		int32_t L_6 = __this->get_currentSelecteAction_11();
		__this->set_currentSelecteAction_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
	}

IL_005a:
	{
		// battleDialogBox.SelectAction(currentSelecteAction);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_7 = __this->get_battleDialogBox_8();
		int32_t L_8 = __this->get_currentSelecteAction_11();
		BattleDialogBox_SelectAction_m3A4719B27A545EAD1C4D92D1C5FE89A6D0FBF025(L_7, L_8, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// if (Input.GetAxisRaw("Submit")!=0)
		float L_9;
		L_9 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895, /*hidden argument*/NULL);
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_00ac;
		}
	}
	{
		// timeSinceLastClick = 0;
		__this->set_timeSinceLastClick_12((0.0f));
		// if (currentSelecteAction == 0)
		int32_t L_10 = __this->get_currentSelecteAction_11();
		if (L_10)
		{
			goto IL_0096;
		}
	}
	{
		// PlayerMovement();
		BattleManager_PlayerMovement_m6D6DB01A48E61FFE74181840475975F98FEF072A(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0096:
	{
		// else if (currentSelecteAction == 1)
		int32_t L_11 = __this->get_currentSelecteAction_11();
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00ac;
		}
	}
	{
		// StartCoroutine(TryEscape());
		RuntimeObject* L_12;
		L_12 = BattleManager_TryEscape_m4C592455D78EDDBF0F801128ED772C6DB0CF1E77(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void BattleManager::HandeldPlayerMoveSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager_HandeldPlayerMoveSelection_m001606EFBEF62CFB5E77C6BDA0B72CA2B9D815C7 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeSinceLastClick < timeBetweenClicks)
		float L_0 = __this->get_timeSinceLastClick_12();
		float L_1 = __this->get_timeBetweenClicks_13();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (Input.GetAxisRaw("Vertical") != 0)
		float L_2;
		L_2 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0069;
		}
	}
	{
		// timeSinceLastClick = 0;
		__this->set_timeSinceLastClick_12((0.0f));
		// currentSelectedMove = (currentSelectedMove + 2) % 4;
		int32_t L_3 = __this->get_currentSelectedMove_18();
		__this->set_currentSelectedMove_18(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2))%(int32_t)4)));
		// battleDialogBox.SelectMove(currentSelectedMove, playerUnit.Personaje.Ataques[currentSelectedMove]);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_4 = __this->get_battleDialogBox_8();
		int32_t L_5 = __this->get_currentSelectedMove_18();
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_6 = __this->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_7;
		L_7 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_6, /*hidden argument*/NULL);
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_8;
		L_8 = Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_currentSelectedMove_18();
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_10;
		L_10 = List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		BattleDialogBox_SelectMove_m7C4E92216866B3403A263A9669FA6AFBC404814C(L_4, L_5, L_10, /*hidden argument*/NULL);
		// } else
		goto IL_00de;
	}

IL_0069:
	{
		// if (Input.GetAxisRaw("Horizontal") != 0)
		float L_11;
		L_11 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_00de;
		}
	}
	{
		// timeSinceLastClick = 0;
		__this->set_timeSinceLastClick_12((0.0f));
		// if (currentSelectedMove<=1)
		int32_t L_12 = __this->get_currentSelectedMove_18();
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		// currentSelectedMove = (currentSelectedMove + 1) % 2;
		int32_t L_13 = __this->get_currentSelectedMove_18();
		__this->set_currentSelectedMove_18(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1))%(int32_t)2)));
		// }
		goto IL_00b2;
	}

IL_00a0:
	{
		// currentSelectedMove = (currentSelectedMove - 1) % 2 + 2;
		int32_t L_14 = __this->get_currentSelectedMove_18();
		__this->set_currentSelectedMove_18(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1))%(int32_t)2)), (int32_t)2)));
	}

IL_00b2:
	{
		// battleDialogBox.SelectMove(currentSelectedMove, playerUnit.Personaje.Ataques[currentSelectedMove]);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_15 = __this->get_battleDialogBox_8();
		int32_t L_16 = __this->get_currentSelectedMove_18();
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_17 = __this->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_18;
		L_18 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_17, /*hidden argument*/NULL);
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_19;
		L_19 = Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline(L_18, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_currentSelectedMove_18();
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_21;
		L_21 = List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		BattleDialogBox_SelectMove_m7C4E92216866B3403A263A9669FA6AFBC404814C(L_15, L_16, L_21, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if (Input.GetAxisRaw("Submit")!=0)
		float L_22;
		L_22 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895, /*hidden argument*/NULL);
		if ((((float)L_22) == ((float)(0.0f))))
		{
			goto IL_011f;
		}
	}
	{
		// timeSinceLastClick = 0;
		__this->set_timeSinceLastClick_12((0.0f));
		// battleDialogBox.ToggleMove(false);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_23 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleMove_m345949A4DDD2BF00EA8CA7DC78E6ADAFA8C49E66(L_23, (bool)0, /*hidden argument*/NULL);
		// battleDialogBox.ToggleDialogText(true);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_24 = __this->get_battleDialogBox_8();
		BattleDialogBox_ToggleDialogText_mC6A19BF09664D5FE0D1C14BD116AA6F284E521AF(L_24, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(PerformPlayerMove());
		RuntimeObject* L_25;
		L_25 = BattleManager_PerformPlayerMove_mBFF732647E4717F2BB32EFE010686CF541EADCC5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_26;
		L_26 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_25, /*hidden argument*/NULL);
	}

IL_011f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BattleManager::PerformPlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_PerformPlayerMove_mBFF732647E4717F2BB32EFE010686CF541EADCC5 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * L_0 = (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C *)il2cpp_codegen_object_new(U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C_il2cpp_TypeInfo_var);
		U3CPerformPlayerMoveU3Ed__25__ctor_m5B16DAA91F3BB6DBB2C81C91AED65EBA4DCBBBF0(L_0, 0, /*hidden argument*/NULL);
		U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator BattleManager::TryEscape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleManager_TryEscape_m4C592455D78EDDBF0F801128ED772C6DB0CF1E77 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * L_0 = (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 *)il2cpp_codegen_object_new(U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1_il2cpp_TypeInfo_var);
		U3CTryEscapeU3Ed__26__ctor_m314CB40C6C9A9E0F66E533F10C3E051E4A69733A(L_0, 0, /*hidden argument*/NULL);
		U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void BattleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleManager__ctor_m07CAEC6C1F887F70FC3580C408994B4C8BA8D3F8 (BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * __this, const RuntimeMethod* method)
{
	{
		// public float timeBetweenClicks = 0.1f;
		__this->set_timeBetweenClicks_13((0.100000001f));
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
// Juego BattleUnit::get_Personaje()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	{
		// public Juego Personaje { get; set; }
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_0 = __this->get_U3CPersonajeU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void BattleUnit::set_Personaje(Juego)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_set_Personaje_m53574C6FE15F63866E55112A92DEF24DE00DDDF4 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * ___value0, const RuntimeMethod* method)
{
	{
		// public Juego Personaje { get; set; }
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_0 = ___value0;
		__this->set_U3CPersonajeU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void BattleUnit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_Awake_m9547BE3DB01768B12CD8F99D3180C508D8FD056A (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// perosnajeImage = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_perosnajeImage_8(L_0);
		// initial = perosnajeImage.transform.localPosition;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_perosnajeImage_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_2, /*hidden argument*/NULL);
		__this->set_initial_10(L_3);
		// initialColor = perosnajeImage.color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_perosnajeImage_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->set_initialColor_11(L_5);
		// }
		return;
	}
}
// System.Void BattleUnit::SetupPersonaje()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_SetupPersonaje_m3F341DC3058DAB2A202CEEF9E43992EFCC6DEC02 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B1_0 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * G_B3_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_1 = NULL;
	{
		// Personaje =  new Juego(_base, _level);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_0 = __this->get__base_4();
		int32_t L_1 = __this->get__level_5();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_2 = (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 *)il2cpp_codegen_object_new(Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442_il2cpp_TypeInfo_var);
		Juego__ctor_m6E28A09CE7EA723D0083748BC5EF6489E0334126(L_2, L_0, L_1, /*hidden argument*/NULL);
		BattleUnit_set_Personaje_m53574C6FE15F63866E55112A92DEF24DE00DDDF4_inline(__this, L_2, /*hidden argument*/NULL);
		// perosnajeImage.sprite = (isPlayer ? Personaje.Personajes.PersonajeSprite : Personaje.Personajes.PersonajeSprite);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_perosnajeImage_8();
		bool L_4 = __this->get_isPlayer_6();
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_0037;
		}
	}
	{
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_5;
		L_5 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(__this, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_6;
		L_6 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_5, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7;
		L_7 = Personajes_get_PersonajeSprite_m3FF6768E5FF03E98FEB7CCF52F510EFBA4208A01_inline(L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0047;
	}

IL_0037:
	{
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_8;
		L_8 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(__this, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_9;
		L_9 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_8, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10;
		L_10 = Personajes_get_PersonajeSprite_m3FF6768E5FF03E98FEB7CCF52F510EFBA4208A01_inline(L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_0047:
	{
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// perosnajeImage.color = initialColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_perosnajeImage_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = __this->get_initialColor_11();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// PlayStartAnimiation();
		BattleUnit_PlayStartAnimiation_mDD73D7A2D116F9282A74499941B8693EF3AA7907(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUnit::PlayStartAnimiation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayStartAnimiation_mDD73D7A2D116F9282A74499941B8693EF3AA7907 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	float G_B2_0 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_2 = NULL;
	{
		// perosnajeImage.transform.localPosition = new Vector3(initial.x + (isPlayer ? -1 : 1) * 400, initial.y);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_perosnajeImage_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_initial_10();
		float L_3 = L_2->get_x_2();
		bool L_4 = __this->get_isPlayer_6();
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0022:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_initial_10();
		float L_6 = L_5->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_7), ((float)il2cpp_codegen_add((float)G_B3_1, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)400))))))), L_6, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(G_B3_2, L_7, /*hidden argument*/NULL);
		// perosnajeImage.transform.DOLocalMoveX(initial.x, 1.0f);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_perosnajeImage_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_initial_10();
		float L_11 = L_10->get_x_2();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_12;
		L_12 = ShortcutExtensions_DOLocalMoveX_m18CECD5F41FFE2D23D0E29770BE3728431D0DDA2(L_9, L_11, (1.0f), (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUnit::PlayAttackAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayAttackAnimation_m8316228CAD0085A5B62D2EE4AC0E0A2F1E6AD7E6 (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B2_1 = NULL;
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * G_B2_2 = NULL;
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * G_B2_3 = NULL;
	float G_B1_0 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B1_1 = NULL;
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * G_B1_2 = NULL;
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_2 = NULL;
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * G_B3_3 = NULL;
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * G_B3_4 = NULL;
	{
		// var seq = DOTween.Sequence();
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_0;
		L_0 = DOTween_Sequence_m83221E315CE42CCE7B80D126A549114C86BC388D(/*hidden argument*/NULL);
		// seq.Append(perosnajeImage.transform.DOLocalMoveX(initial.x + (isPlayer?1:-1) * 250, 0.3f));
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_1 = L_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_perosnajeImage_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_initial_10();
		float L_5 = L_4->get_x_2();
		bool L_6 = __this->get_isPlayer_6();
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
		if (L_6)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_1;
			goto IL_0027;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0028:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_7;
		L_7 = ShortcutExtensions_DOLocalMoveX_m18CECD5F41FFE2D23D0E29770BE3728431D0DDA2(G_B3_2, ((float)il2cpp_codegen_add((float)G_B3_1, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)250))))))), (0.300000012f), (bool)0, /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_8;
		L_8 = TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5(G_B3_3, L_7, /*hidden argument*/NULL);
		// seq.Append(perosnajeImage.transform.DOLocalMoveX(initial.x, 0.3f));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_perosnajeImage_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_initial_10();
		float L_12 = L_11->get_x_2();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_13;
		L_13 = ShortcutExtensions_DOLocalMoveX_m18CECD5F41FFE2D23D0E29770BE3728431D0DDA2(L_10, L_12, (0.300000012f), (bool)0, /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_14;
		L_14 = TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5(G_B3_4, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUnit::PlayReciveAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayReciveAttack_m884324B8FA129113F6276C759992BB82775927EC (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var seq = DOTween.Sequence();
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_0;
		L_0 = DOTween_Sequence_m83221E315CE42CCE7B80D126A549114C86BC388D(/*hidden argument*/NULL);
		// seq.Append(perosnajeImage.DOColor(Color.red, 0.13f));
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_1 = L_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_perosnajeImage_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_4;
		L_4 = DOTweenModuleUI_DOColor_mFB279C1658A0C33E18B893B56EB5918AF6B197E2(L_2, L_3, (0.129999995f), /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_5;
		L_5 = TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5(L_1, L_4, /*hidden argument*/NULL);
		// seq.Append(perosnajeImage.DOColor(initialColor, 0.13f));
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_6 = L_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_perosnajeImage_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = __this->get_initialColor_11();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_9;
		L_9 = DOTweenModuleUI_DOColor_mFB279C1658A0C33E18B893B56EB5918AF6B197E2(L_7, L_8, (0.129999995f), /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_10;
		L_10 = TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5(L_6, L_9, /*hidden argument*/NULL);
		// seq.Append(perosnajeImage.DOColor(Color.red, 0.13f));
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_11 = L_6;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_perosnajeImage_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_14;
		L_14 = DOTweenModuleUI_DOColor_mFB279C1658A0C33E18B893B56EB5918AF6B197E2(L_12, L_13, (0.129999995f), /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_15;
		L_15 = TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5(L_11, L_14, /*hidden argument*/NULL);
		// seq.Append(perosnajeImage.DOColor(initialColor, 0.13f));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = __this->get_perosnajeImage_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = __this->get_initialColor_11();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_18;
		L_18 = DOTweenModuleUI_DOColor_mFB279C1658A0C33E18B893B56EB5918AF6B197E2(L_16, L_17, (0.129999995f), /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_19;
		L_19 = TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5(L_11, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUnit::PlayFaintAnimiation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit_PlayFaintAnimiation_m770C3951A95F3F70CC9641937D31652F5DB7417B (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var seq = DOTween.Sequence();
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_0;
		L_0 = DOTween_Sequence_m83221E315CE42CCE7B80D126A549114C86BC388D(/*hidden argument*/NULL);
		// seq.Append(perosnajeImage.transform.DOLocalMoveY(initial.y - 200, 1f));
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_1 = L_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_perosnajeImage_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_initial_10();
		float L_5 = L_4->get_y_3();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_6;
		L_6 = ShortcutExtensions_DOLocalMoveY_m758574147287D8B39618F852682E1E03BDC7A696(L_3, ((float)il2cpp_codegen_subtract((float)L_5, (float)(200.0f))), (1.0f), (bool)0, /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_7;
		L_7 = TweenSettingsExtensions_Append_m045B3A5C557D2007A05A55F1D5B86A26AA5F13D5(L_1, L_6, /*hidden argument*/NULL);
		// seq.Join(perosnajeImage.DOFade(0f, 1f));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_perosnajeImage_8();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_9;
		L_9 = DOTweenModuleUI_DOFade_mC5103EC42ADFFC9414B8124AE06A78EEC6CB15E8(L_8, (0.0f), (1.0f), /*hidden argument*/NULL);
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_10;
		L_10 = TweenSettingsExtensions_Join_m33E665745C1F091AAD10AD2C3FDD91017861D89F(L_1, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUnit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUnit__ctor_m25A425D03AA6DC0E066BDBE5A4CBD7B21C64909C (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// _gameState = GameState.Travel;
		__this->set__gameState_7(0);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_EndBattle_mD7D11F92F0A00892150D09FD82AC8D7676AB32FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_StartBatalla_m199D8FFF24B9CBA044B86D1848453E79F396469D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.SharedInstance.PlayMusic(WorldClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_WorldClip_8();
		SoundManager_PlayMusic_m3264968E597EA6ECE72CBBD20DB8DB907DA2F9E0(L_0, L_1, /*hidden argument*/NULL);
		// playerMenu.OnPersonajeEncontrado += StartBatalla;
		MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * L_2 = __this->get_playerMenu_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)GameManager_StartBatalla_m199D8FFF24B9CBA044B86D1848453E79F396469D_RuntimeMethod_var), /*hidden argument*/NULL);
		MenuManager_add_OnPersonajeEncontrado_m2BEC2E14E26F923D51FF0671F6F9A88D74B02152(L_2, L_3, /*hidden argument*/NULL);
		// battleManager.OnBattleFinish += EndBattle;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_4 = __this->get_battleManager_5();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_5 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_5, __this, (intptr_t)((intptr_t)GameManager_EndBattle_mD7D11F92F0A00892150D09FD82AC8D7676AB32FE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		BattleManager_add_OnBattleFinish_m1FC569C6AE6FB61954F35CC0C647400F74F84286(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartBatalla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartBatalla_m199D8FFF24B9CBA044B86D1848453E79F396469D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.SharedInstance.PlayMusic(BattleClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_BattleClip_9();
		SoundManager_PlayMusic_m3264968E597EA6ECE72CBBD20DB8DB907DA2F9E0(L_0, L_1, /*hidden argument*/NULL);
		// _gameState = GameState.Battle;
		__this->set__gameState_7(1);
		// battleManager.gameObject.SetActive(true);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_2 = __this->get_battleManager_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// worldMainCamera.gameObject.SetActive(false);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_worldMainCamera_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// battleManager.HandleStartBattle();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_6 = __this->get_battleManager_5();
		BattleManager_HandleStartBattle_m1E077C826FA958A9D823370C8A1FCC1B1D236F31(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::EndBattle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndBattle_mD7D11F92F0A00892150D09FD82AC8D7676AB32FE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, bool ___hasWon0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.SharedInstance.PlayMusic(WorldClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_WorldClip_8();
		SoundManager_PlayMusic_m3264968E597EA6ECE72CBBD20DB8DB907DA2F9E0(L_0, L_1, /*hidden argument*/NULL);
		// _gameState = GameState.Travel;
		__this->set__gameState_7(0);
		// battleManager.gameObject.SetActive(false);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_2 = __this->get_battleManager_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// worldMainCamera.gameObject.SetActive(true);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_worldMainCamera_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// if (!hasWon)
		bool L_6 = ___hasWon0;
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if (_gameState == GameState.Battle)
		int32_t L_0 = __this->get__gameState_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// battleManager.HandleUpdate();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_1 = __this->get_battleManager_5();
		BattleManager_HandleUpdate_m906B7D7B8ADDB606FFA745BE86F288EA85BBEC2F(L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if (_gameState == GameState.Travel)
		int32_t L_2 = __this->get__gameState_7();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// playerMenu.HandleUpdate();
		MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * L_3 = __this->get_playerMenu_4();
		MenuManager_HandleUpdate_m0D896E5FC07D8420561D337DE8595C2FCEDB4661(L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
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
// UnityEngine.Color HealBar::get_BarColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  HealBar_get_BarColor_m94C282AC28C847CC2EEDDF39D9FEC90F14062609 (HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var localScale = healthBar.transform.localScale.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_healthBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		V_0 = L_3;
		// if (localScale < 0.15f)
		float L_4 = V_0;
		if ((!(((float)L_4) < ((float)(0.150000006f)))))
		{
			goto IL_0033;
		}
	}
	{
		// return new Color(210f / 255, 2f / 255, 1f / 255);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_5), (0.823529422f), (0.00784313772f), (0.00392156886f), /*hidden argument*/NULL);
		return L_5;
	}

IL_0033:
	{
		// else if (localScale < 0.5f)
		float L_6 = V_0;
		if ((!(((float)L_6) < ((float)(0.5f)))))
		{
			goto IL_0050;
		}
	}
	{
		// return new Color(223f / 255, 223f / 255, 0f / 255);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_7), (0.874509811f), (0.874509811f), (0.0f), /*hidden argument*/NULL);
		return L_7;
	}

IL_0050:
	{
		// return new Color(1f/255, 159f / 255, 49f / 255);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_8), (0.00392156886f), (0.623529434f), (0.192156866f), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void HealBar::SetHP(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealBar_SetHP_mB4839E9F07017B9513BE95A441A69BEA8AE0341D (HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * __this, float ___normalizedValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healthBar.transform.localScale = new Vector3(normalizedValue, 1.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_healthBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		float L_2 = ___normalizedValue0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_3), L_2, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_3, /*hidden argument*/NULL);
		// healthBar.GetComponent<Image>().color = BarColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_healthBar_4();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = HealBar_get_BarColor_m94C282AC28C847CC2EEDDF39D9FEC90F14062609(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Collections.IEnumerator HealBar::SetSmoothHP(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealBar_SetSmoothHP_m49403D4B534959B2DE3A8AA9816D66842B8729AD (HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * __this, float ___normalizedValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * L_0 = (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 *)il2cpp_codegen_object_new(U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59_il2cpp_TypeInfo_var);
		U3CSetSmoothHPU3Ed__4__ctor_m4FDFEB15912AB0D52FE2398ED2660A6A7396D54A(L_0, 0, /*hidden argument*/NULL);
		U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * L_2 = L_1;
		float L_3 = ___normalizedValue0;
		L_2->set_normalizedValue_3(L_3);
		return L_2;
	}
}
// System.Void HealBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealBar__ctor_mED7FEE8A6C0C7542EB3ACCB45AABFED2F4435131 (HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * __this, const RuntimeMethod* method)
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
// Assets.Scripts.Personajes.Personajes Juego::get_Personajes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// get => _personajes;
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_0 = __this->get__personajes_0();
		return L_0;
	}
}
// System.Int32 Juego::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Juego_get_Level_mD176438B7687DF224407CDA7C83D52D79892F90F (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// get => _level;
		int32_t L_0 = __this->get__level_1();
		return L_0;
	}
}
// System.Collections.Generic.List`1<Ataque> Juego::get_Ataques()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// get => _ataque;
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_0 = __this->get__ataque_2();
		return L_0;
	}
}
// System.Void Juego::set_Ataques(System.Collections.Generic.List`1<Ataque>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Juego_set_Ataques_m4D3B6510E6B60041704A7C81BC15FCC8BBAED5FC (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * ___value0, const RuntimeMethod* method)
{
	{
		// set => _ataque = value;
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_0 = ___value0;
		__this->set__ataque_2(L_0);
		return;
	}
}
// System.Int32 Juego::get_HP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Juego_get_HP_m980B13E14FC6DE93F85D389523FF2C97A4029965 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// get => _hp;
		int32_t L_0 = __this->get__hp_3();
		return L_0;
	}
}
// System.Void Juego::set_HP(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Juego_set_HP_mABA449B0BE34836396369F643037A76CC9886C3F (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => _hp = value;
		int32_t L_0 = ___value0;
		__this->set__hp_3(L_0);
		return;
	}
}
// System.Void Juego::.ctor(Assets.Scripts.Personajes.Personajes,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Juego__ctor_m6E28A09CE7EA723D0083748BC5EF6489E0334126 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * ___personaje0, int32_t ___level1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7F88CB0FC6CF3D3D7611CDF67E949CED9DA0A4DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC070E539A6068EBCC6C47E1A83F55461895B6576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF7341B0A340C01893AB5FD542128CE5D750859F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m517AAF9638EA2BC9BA847BDC71BD07B24F420099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFA4EB168FCEC89631D1993A00D1E66E6F1B0BA2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m918A8EC93DDA3BAB267F5FEF0A5931121D10F3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// public Juego(Personajes personaje, int level)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _personajes = personaje;
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_0 = ___personaje0;
		__this->set__personajes_0(L_0);
		// _level = level;
		int32_t L_1 = ___level1;
		__this->set__level_1(L_1);
		// _hp = MaxHP;
		int32_t L_2;
		L_2 = Juego_get_MaxHP_mDE6075CF46E1B9669FF2B8DD7FEB024022EFEC24(__this, /*hidden argument*/NULL);
		__this->set__hp_3(L_2);
		// _ataque = new List<Ataque>();
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_3 = (List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA *)il2cpp_codegen_object_new(List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA_il2cpp_TypeInfo_var);
		List_1__ctor_m918A8EC93DDA3BAB267F5FEF0A5931121D10F3D0(L_3, /*hidden argument*/List_1__ctor_m918A8EC93DDA3BAB267F5FEF0A5931121D10F3D0_RuntimeMethod_var);
		__this->set__ataque_2(L_3);
		// foreach(var lAtaque in _personajes.AprendeAtaques)
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_4 = __this->get__personajes_0();
		List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * L_5;
		L_5 = Personajes_get_AprendeAtaques_m504056430B1E7E35900F79B033575069AF5CB8D7_inline(L_4, /*hidden argument*/NULL);
		Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2  L_6;
		L_6 = List_1_GetEnumerator_mFA4EB168FCEC89631D1993A00D1E66E6F1B0BA2C(L_5, /*hidden argument*/List_1_GetEnumerator_mFA4EB168FCEC89631D1993A00D1E66E6F1B0BA2C_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007a;
		}

IL_003e:
		{
			// foreach(var lAtaque in _personajes.AprendeAtaques)
			AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * L_7;
			L_7 = Enumerator_get_Current_mF7341B0A340C01893AB5FD542128CE5D750859F1_inline((Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mF7341B0A340C01893AB5FD542128CE5D750859F1_RuntimeMethod_var);
			V_1 = L_7;
			// if (lAtaque.Level <= _level)
			AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * L_8 = V_1;
			int32_t L_9;
			L_9 = AprendeAtaque_get_Level_mACC4C0617D54581FEF8B7B770C142EC7FA055485_inline(L_8, /*hidden argument*/NULL);
			int32_t L_10 = __this->get__level_1();
			if ((((int32_t)L_9) > ((int32_t)L_10)))
			{
				goto IL_006a;
			}
		}

IL_0054:
		{
			// _ataque.Add(new Ataque(lAtaque.Ataque));
			List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_11 = __this->get__ataque_2();
			AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * L_12 = V_1;
			AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_13;
			L_13 = AprendeAtaque_get_Ataque_m2AED464D681A10567C01337B587381D792C96E6B_inline(L_12, /*hidden argument*/NULL);
			Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_14 = (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 *)il2cpp_codegen_object_new(Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54_il2cpp_TypeInfo_var);
			Ataque__ctor_m018DD1680BED28F849F6C61BA301841E19DCA9FA(L_14, L_13, /*hidden argument*/NULL);
			List_1_Add_m517AAF9638EA2BC9BA847BDC71BD07B24F420099(L_11, L_14, /*hidden argument*/List_1_Add_m517AAF9638EA2BC9BA847BDC71BD07B24F420099_RuntimeMethod_var);
		}

IL_006a:
		{
			// if(_ataque.Count >= 4)
			List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_15 = __this->get__ataque_2();
			int32_t L_16;
			L_16 = List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_inline(L_15, /*hidden argument*/List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_RuntimeMethod_var);
			if ((((int32_t)L_16) < ((int32_t)4)))
			{
				goto IL_007a;
			}
		}

IL_0078:
		{
			// break;
			IL2CPP_LEAVE(0x93, FINALLY_0085);
		}

IL_007a:
		{
			// foreach(var lAtaque in _personajes.AprendeAtaques)
			bool L_17;
			L_17 = Enumerator_MoveNext_mC070E539A6068EBCC6C47E1A83F55461895B6576((Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC070E539A6068EBCC6C47E1A83F55461895B6576_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_003e;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x93, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7F88CB0FC6CF3D3D7611CDF67E949CED9DA0A4DB((Enumerator_tD3F69604C078635C1FBD98FFB03BD59046D0CDB2 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7F88CB0FC6CF3D3D7611CDF67E949CED9DA0A4DB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x93, IL_0093)
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Int32 Juego::get_Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Juego_get_Attack_m4B999A74DC2BF4EF73875C01354E2D3CE2C88482 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// public int Attack => _personajes.Attack * _level;
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_0 = __this->get__personajes_0();
		int32_t L_1;
		L_1 = Personajes_get_Attack_m1139207F2542C98F815CD615D9C39CE01E758C9E_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get__level_1();
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2));
	}
}
// System.Int32 Juego::get_MaxHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Juego_get_MaxHP_mDE6075CF46E1B9669FF2B8DD7FEB024022EFEC24 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxHP => _personajes.MaxHP * _level;
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_0 = __this->get__personajes_0();
		int32_t L_1;
		L_1 = Personajes_get_MaxHP_m8B6EDED74031B110983161C19E2882448EF35288_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get__level_1();
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2));
	}
}
// System.Boolean Juego::Damage(Ataque,Assets.Scripts.Personajes.Personajes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Juego_Damage_mC379655239B63CB444F8695AF386CD22558B5F57 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * ___move0, Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * ___attacker1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float modifi = Random.Range(0.85f, 1.0f);
		float L_0;
		L_0 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.850000024f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		// float damage = (3*move.Base.Poder);
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_1 = ___move0;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_2;
		L_2 = Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3_inline(L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = AtaqueBase_get_Poder_m56639B0556F15ACECEFACF2DEDF41044911A9A35_inline(L_2, /*hidden argument*/NULL);
		// int totalDamage = Mathf.FloorToInt(damage * modifi);
		float L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_3)))), (float)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		// HP -= totalDamage;
		int32_t L_6;
		L_6 = Juego_get_HP_m980B13E14FC6DE93F85D389523FF2C97A4029965_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		Juego_set_HP_mABA449B0BE34836396369F643037A76CC9886C3F_inline(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/NULL);
		// if (HP<=0)
		int32_t L_8;
		L_8 = Juego_get_HP_m980B13E14FC6DE93F85D389523FF2C97A4029965_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// HP = 0;
		Juego_set_HP_mABA449B0BE34836396369F643037A76CC9886C3F_inline(__this, 0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0046:
	{
		// return false;
		return (bool)0;
	}
}
// Ataque Juego::RandomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * Juego_RandomMove_m8942847D16CAF233B731DBC9E562DDA4AB358AD2 (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ranId = Random.Range(0, Ataques.Count);
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_0;
		L_0 = Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_inline(L_0, /*hidden argument*/List_1_get_Count_mC4BF5EF5ABBB9D70594EF20AEFB4F9BF543D8436_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return Ataques[ranId];
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_3;
		L_3 = Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_5;
		L_5 = List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		return L_5;
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
// System.Void MenuManager::add_OnPersonajeEncontrado(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_add_OnPersonajeEncontrado_m2BEC2E14E26F923D51FF0671F6F9A88D74B02152 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnPersonajeEncontrado_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnPersonajeEncontrado_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MenuManager::remove_OnPersonajeEncontrado(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_remove_OnPersonajeEncontrado_m349C6EB54AF8304A35BD44F165B08F9DF3333452 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnPersonajeEncontrado_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnPersonajeEncontrado_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MenuManager::BotonStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_BotonStart_mEC35EDFA5F364498D43D37C543EFA29E5FAAC9B9 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA6CFD0285B9271FDCC1700EA5BBC5491BAD3230);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Hola");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBA6CFD0285B9271FDCC1700EA5BBC5491BAD3230, /*hidden argument*/NULL);
		// OnPersonajeEncontrado();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnPersonajeEncontrado_6();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::BotonQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_BotonQuit_mFF2893031DD34F2F8B4BE62BDE090CF6A1AA2637 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B645154D3050F782001C70752D7916A43CB580E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quitamos la aplicacion");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6B645154D3050F782001C70752D7916A43CB580E, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::HandleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_HandleUpdate_m0D896E5FC07D8420561D337DE8595C2FCEDB4661 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m4E4A5EF33C27448D7F34FD29B93589635F1B2EE2 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_BotonQuit_mFF2893031DD34F2F8B4BE62BDE090CF6A1AA2637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_BotonStart_mEC35EDFA5F364498D43D37C543EFA29E5FAAC9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_0 = NULL;
	{
		// Button btn = ButtonExit.GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_ButtonExit_4();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1;
		L_1 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_0, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		// Button btnStar = ButtonStart.GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_ButtonStart_5();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3;
		L_3 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_2, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		V_0 = L_3;
		// btn.onClick.AddListener(BotonQuit);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)MenuManager_BotonQuit_mFF2893031DD34F2F8B4BE62BDE090CF6A1AA2637_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// btnStar.onClick.AddListener(BotonStart);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = V_0;
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)MenuManager_BotonStart_mEC35EDFA5F364498D43D37C543EFA29E5FAAC9B9_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m8F61CC885B72291B54C1C6EC368AE303EA856529 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
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
// System.Void NewBehaviourScript::CamTiembla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_CamTiembla_m006F471A5CEEA30858530A958DD62FE5FAE7AC1C (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD14A3E8D12ADD16A7FD70CBB5A865595B5368E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimCam.SetTrigger("Tiembla");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_AnimCam_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral8BD14A3E8D12ADD16A7FD70CBB5A865595B5368E, /*hidden argument*/NULL);
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
// System.String Assets.Scripts.Personajes.Personajes::get_Nombre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public string Nombre => nombre;
		String_t* L_0 = __this->get_nombre_5();
		return L_0;
	}
}
// System.String Assets.Scripts.Personajes.Personajes::get_Descripcion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Personajes_get_Descripcion_m0D3F7660EADE31EFCBB0B48DC6EB9DD44D840A38 (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public string Descripcion => descripcion;
		String_t* L_0 = __this->get_descripcion_6();
		return L_0;
	}
}
// UnityEngine.Sprite Assets.Scripts.Personajes.Personajes::get_PersonajeSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Personajes_get_PersonajeSprite_m3FF6768E5FF03E98FEB7CCF52F510EFBA4208A01 (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public Sprite PersonajeSprite => personajeSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_personajeSprite_7();
		return L_0;
	}
}
// System.Int32 Assets.Scripts.Personajes.Personajes::get_MaxHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Personajes_get_MaxHP_m8B6EDED74031B110983161C19E2882448EF35288 (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public int MaxHP => maxHP;
		int32_t L_0 = __this->get_maxHP_8();
		return L_0;
	}
}
// System.Int32 Assets.Scripts.Personajes.Personajes::get_Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Personajes_get_Attack_m1139207F2542C98F815CD615D9C39CE01E758C9E (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public int Attack => attack;
		int32_t L_0 = __this->get_attack_9();
		return L_0;
	}
}
// System.Collections.Generic.List`1<Assets.Scripts.Personajes.AprendeAtaque> Assets.Scripts.Personajes.Personajes::get_AprendeAtaques()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * Personajes_get_AprendeAtaques_m504056430B1E7E35900F79B033575069AF5CB8D7 (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public List<AprendeAtaque> AprendeAtaques => aprendeAtaque;
		List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * L_0 = __this->get_aprendeAtaque_10();
		return L_0;
	}
}
// System.Void Assets.Scripts.Personajes.Personajes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Personajes__ctor_m03AE7FC8B39430FFCC95900BF223A27AA7CDA0B8 (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// UnityEngine.AudioSource SonidoBoton::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * SonidoBoton_get_source_m60F8F9E9802D2B46C5D75C44AF00446CBBD8CA66 (SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioSource source { get { return GetComponent<AudioSource>();  } }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.UI.Button SonidoBoton::get_btn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * SonidoBoton_get_btn_m997051C40EAD8A33A99EAA47C0907767E1112B45 (SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Button btn { get { return GetComponent<Button>(); } }
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0;
		L_0 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void SonidoBoton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonidoBoton_Start_m350BA4B1123C985C46966880187B96701F0AEAC6 (SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SonidoBoton_PlaySound_mBB226B935F4FE9300EB474E588780CC3E3BEBC51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		// btn.onClick.AddListener(PlaySound);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
		L_2 = SonidoBoton_get_btn_m997051C40EAD8A33A99EAA47C0907767E1112B45(__this, /*hidden argument*/NULL);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_3;
		L_3 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_2, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_4, __this, (intptr_t)((intptr_t)SonidoBoton_PlaySound_mBB226B935F4FE9300EB474E588780CC3E3BEBC51_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonidoBoton::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonidoBoton_PlaySound_mBB226B935F4FE9300EB474E588780CC3E3BEBC51 (SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA * __this, const RuntimeMethod* method)
{
	{
		// source.PlayOneShot(clip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = SonidoBoton_get_source_m60F8F9E9802D2B46C5D75C44AF00446CBBD8CA66(__this, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_clip_4();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonidoBoton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonidoBoton__ctor_m602BAD7312DED95E05830ABCDC12FC5A9A19B3FD (SonidoBoton_t59DC8765FF8D79901BE0454AD3101D24A3D665DA * __this, const RuntimeMethod* method)
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SharedInstance != null)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		goto IL_0020;
	}

IL_001a:
	{
		// SharedInstance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_SharedInstance_7(__this);
	}

IL_0020:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// effectSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_effectSource_4();
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// effectSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_effectSource_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = ___clip0;
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_1, L_2, /*hidden argument*/NULL);
		// effectSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_effectSource_4();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayMusic_m3264968E597EA6ECE72CBBD20DB8DB907DA2F9E0 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// musicSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_musicSource_5();
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// musicSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_musicSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = ___clip0;
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_1, L_2, /*hidden argument*/NULL);
		// musicSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_musicSource_5();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::RandomSoundEffect(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomSoundEffect_mF3DC4FFE182E958BF0DE75BFF5FC1F86BCAEF0A9 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clip0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int index = Random.Range(0, clip.Length);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = ___clip0;
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// float pitch = Random.Range(pitchRange.x, pitchRange.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_pitchRange_6();
		float L_3 = L_2->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_pitchRange_6();
		float L_5 = L_4->get_y_1();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// effectSource.pitch = pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_effectSource_4();
		float L_8 = V_1;
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_7, L_8, /*hidden argument*/NULL);
		// PlaySound(clip[index]);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_9 = ___clip0;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::OnMusicVolumenUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_OnMusicVolumenUpdate_m6ACF68308341EF54A3C98FDDE4194C38B8EABD89 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// musicSource.volume = sliderMusic.value;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_musicSource_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_sliderMusic_8();
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::OnSFXVolumenUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_OnSFXVolumenUpdate_mF3CB7C41644465F1F6CC4600CD2908C4468F9361 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// effectSource.volume = sliderSFX.value;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_effectSource_4();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_sliderSFX_9();
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 pitchRange = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_pitchRange_6(L_0);
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
// System.Void BattleDialogBox/<SetDialog>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDialogU3Ed__11__ctor_m5EF19622A268D95D678EB9EEBF743F7622E20F44 (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BattleDialogBox/<SetDialog>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDialogU3Ed__11_System_IDisposable_Dispose_m6F6763AA2F08C529D94EEF80E3C3DA7864B3F2C1 (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BattleDialogBox/<SetDialog>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetDialogU3Ed__11_MoveNext_m83696F0105B40928483889F0261B659AC623BE33 (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00b9;
			}
			case 2:
			{
				goto IL_0104;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isWriting = true;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_3 = V_1;
		L_3->set_isWriting_13((bool)1);
		// dialogText.text = "";
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_4 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_dialogText_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// foreach (var character in message)
		String_t* L_6 = __this->get_message_3();
		__this->set_U3CU3E7__wrap1_4(L_6);
		__this->set_U3CU3E7__wrap2_5(0);
		goto IL_00ce;
	}

IL_0055:
	{
		// foreach (var character in message)
		String_t* L_7 = __this->get_U3CU3E7__wrap1_4();
		int32_t L_8 = __this->get_U3CU3E7__wrap2_5();
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (character!=' ')
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)32))))
		{
			goto IL_007c;
		}
	}
	{
		// SoundManager.SharedInstance.RandomSoundEffect(characterSounds);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_11 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_12 = V_1;
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_13 = L_12->get_characterSounds_14();
		SoundManager_RandomSoundEffect_mF3DC4FFE182E958BF0DE75BFF5FC1F86BCAEF0A9(L_11, L_13, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// dialogText.text += character;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_14 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = L_14->get_dialogText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15;
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		String_t* L_18;
		L_18 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_2), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_18, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// yield return new WaitForSeconds(1/charactersPerSecond);
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_20 = V_1;
		float L_21 = L_20->get_charactersPerSecond_12();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_22 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_22, ((float)((float)(1.0f)/(float)L_21)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b9:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_23 = __this->get_U3CU3E7__wrap2_5();
		__this->set_U3CU3E7__wrap2_5(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_00ce:
	{
		// foreach (var character in message)
		int32_t L_24 = __this->get_U3CU3E7__wrap2_5();
		String_t* L_25 = __this->get_U3CU3E7__wrap1_4();
		int32_t L_26;
		L_26 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0055;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_4((String_t*)NULL);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0104:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isWriting = false;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_28 = V_1;
		L_28->set_isWriting_13((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object BattleDialogBox/<SetDialog>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetDialogU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE4F81628526288AA93B9BC20E52A61DC25262622 (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BattleDialogBox/<SetDialog>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetDialogU3Ed__11_System_Collections_IEnumerator_Reset_mF10A86E9493C626E37A404625DF53ED7E2CC2430 (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetDialogU3Ed__11_System_Collections_IEnumerator_Reset_mF10A86E9493C626E37A404625DF53ED7E2CC2430_RuntimeMethod_var)));
	}
}
// System.Object BattleDialogBox/<SetDialog>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetDialogU3Ed__11_System_Collections_IEnumerator_get_Current_mFB8C0DF1A9B2CDBE6E5AF1629324529EF06F7A5A (U3CSetDialogU3Ed__11_t162E31F79513C81F826363EAB65BB0A104460FEF * __this, const RuntimeMethod* method)
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
// System.Void BattleManager/<EnemyAction>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemyActionU3Ed__13__ctor_mFE4A5A1A6FDB5732FA1B1CA2C05BA753963717BE (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BattleManager/<EnemyAction>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemyActionU3Ed__13_System_IDisposable_Dispose_m8B10D8F9C13565407D73CFB01403E3F596C88D7B (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BattleManager/<EnemyAction>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnemyActionU3Ed__13_MoveNext_mFFDC149AF8E0775DFAFF2DC418621D2C6B4FF229 (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40779F319207B94505852B1A186E02B4BDA43CFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B3CCEBB569BF3B0AF17637AFB6E567997A80658);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE88D0028B280E8F7137CB0E8E61EB53FBE1F6DCB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_016b;
			}
			case 4:
			{
				goto IL_01a6;
			}
			case 5:
			{
				goto IL_01cc;
			}
			case 6:
			{
				goto IL_01ec;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// state = BattleState.EnemyMove;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_3 = V_1;
		L_3->set_state_10(3);
		// Ataque move = enemyplayerUnit.Personaje.RandomMove();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_4 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_5 = L_4->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_6;
		L_6 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_5, /*hidden argument*/NULL);
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_7;
		L_7 = Juego_RandomMove_m8942847D16CAF233B731DBC9E562DDA4AB358AD2(L_6, /*hidden argument*/NULL);
		__this->set_U3CmoveU3E5__2_3(L_7);
		// yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre} ha usado {move.Base.Nombre}");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_8 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_9 = L_8->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_10 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_11 = L_10->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_12;
		L_12 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_11, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_13;
		L_13 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_13, /*hidden argument*/NULL);
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_15 = __this->get_U3CmoveU3E5__2_3();
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_16;
		L_16 = Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3_inline(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = AtaqueBase_get_Nombre_m0E7AF4D0DE71163BB85DBAC3F76F4152C4F0C9E5_inline(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_14, _stringLiteral40779F319207B94505852B1A186E02B4BDA43CFD, L_17, /*hidden argument*/NULL);
		RuntimeObject* L_19;
		L_19 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_9, L_18, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SoundManager.SharedInstance.PlaySound(attacClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_20 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_21 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_22 = L_21->get_attacClip_14();
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(L_20, L_22, /*hidden argument*/NULL);
		// enemyplayerUnit.PlayAttackAnimation();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_23 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_24 = L_23->get_enemyplayerUnit_6();
		BattleUnit_PlayAttackAnimation_m8316228CAD0085A5B62D2EE4AC0E0A2F1E6AD7E6(L_24, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_25 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_25, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00da:
	{
		__this->set_U3CU3E1__state_0((-1));
		// playerUnit.PlayReciveAttack();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_26 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_27 = L_26->get_playerUnit_4();
		BattleUnit_PlayReciveAttack_m884324B8FA129113F6276C759992BB82775927EC(L_27, /*hidden argument*/NULL);
		// SoundManager.SharedInstance.PlaySound(damageClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_28 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_29 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_30 = L_29->get_damageClip_15();
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(L_28, L_30, /*hidden argument*/NULL);
		// bool isFainted = playerUnit.Personaje.Damage(move, enemyplayerUnit.Personaje.Personajes);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_31 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_32 = L_31->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_33;
		L_33 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_32, /*hidden argument*/NULL);
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_34 = __this->get_U3CmoveU3E5__2_3();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_35 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_36 = L_35->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_37;
		L_37 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_36, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_38;
		L_38 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_37, /*hidden argument*/NULL);
		bool L_39;
		L_39 = Juego_Damage_mC379655239B63CB444F8695AF386CD22558B5F57(L_33, L_34, L_38, /*hidden argument*/NULL);
		// playerHud.UpdatePersonajeData();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_40 = V_1;
		BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * L_41 = L_40->get_playerHud_5();
		BattleHud_UpdatePersonajeData_m387F0CFF768792818B0D0F794CA75345AA27E387(L_41, /*hidden argument*/NULL);
		// if (isFainted)
		if (!L_39)
		{
			goto IL_0201;
		}
	}
	{
		// yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre} ha sido derrotado");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_42 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_43 = L_42->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_44 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_45 = L_44->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_46;
		L_46 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_45, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_47;
		L_47 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_46, /*hidden argument*/NULL);
		String_t* L_48;
		L_48 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_47, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_48, _stringLiteral4B3CCEBB569BF3B0AF17637AFB6E567997A80658, /*hidden argument*/NULL);
		RuntimeObject* L_50;
		L_50 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_43, L_49, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_50);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_016b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// playerUnit.PlayFaintAnimiation();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_51 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_52 = L_51->get_playerUnit_4();
		BattleUnit_PlayFaintAnimiation_m770C3951A95F3F70CC9641937D31652F5DB7417B(L_52, /*hidden argument*/NULL);
		// SoundManager.SharedInstance.PlaySound(endClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_53 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_54 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_55 = L_54->get_endClip_16();
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(L_53, L_55, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_56 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_56, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_56);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_01a6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return battleDialogBox.SetDialog("Has perdido regresando al Menu");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_57 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_58 = L_57->get_battleDialogBox_8();
		RuntimeObject* L_59;
		L_59 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_58, _stringLiteralE88D0028B280E8F7137CB0E8E61EB53FBE1F6DCB, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_59);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_01cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_60 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_60, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_60);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_01ec:
	{
		__this->set_U3CU3E1__state_0((-1));
		// OnBattleFinish(false);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_61 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_62 = L_61->get_OnBattleFinish_9();
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_62, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// }
		goto IL_0207;
	}

IL_0201:
	{
		// PlayerAction();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_63 = V_1;
		BattleManager_PlayerAction_mCEE1DC13C4B0EA33A451C85FD1C4CA1FB0A87044(L_63, /*hidden argument*/NULL);
	}

IL_0207:
	{
		// }
		return (bool)0;
	}
}
// System.Object BattleManager/<EnemyAction>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemyActionU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE1EE0112268B0C3B7773500E8CB628FF90FDC2A9 (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BattleManager/<EnemyAction>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemyActionU3Ed__13_System_Collections_IEnumerator_Reset_m389E6485048EFAB192ABEB645366445711BA0AF9 (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnemyActionU3Ed__13_System_Collections_IEnumerator_Reset_m389E6485048EFAB192ABEB645366445711BA0AF9_RuntimeMethod_var)));
	}
}
// System.Object BattleManager/<EnemyAction>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemyActionU3Ed__13_System_Collections_IEnumerator_get_Current_m1B5C81A5A3017A3C6CDC09CE9440D490D8578A09 (U3CEnemyActionU3Ed__13_t5BD4528D027E2A378BD267EA6D6435FAC01A3DDA * __this, const RuntimeMethod* method)
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
// System.Void BattleManager/<PerformPlayerMove>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformPlayerMoveU3Ed__25__ctor_m5B16DAA91F3BB6DBB2C81C91AED65EBA4DCBBBF0 (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BattleManager/<PerformPlayerMove>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformPlayerMoveU3Ed__25_System_IDisposable_Dispose_m74B048DB76B40E05D1D71CD715181F9D4AF01F25 (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BattleManager/<PerformPlayerMove>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPerformPlayerMoveU3Ed__25_MoveNext_m03A83B01FF02C5E74F56302BCD797E58B575C7B9 (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04515E78021D960C8AACAE5BFC9C9E894928D6FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4272E6E1DD4620A09981F911A42D1C03390C6642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2DCB90632710D2B7A5CCA564EA16DD10D2AAAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CC404015F167B5841C453654DD2D8EC0F2C0E1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAADFC19C21B2582E499E91EFAEDEA6F732621F1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_00b3;
			}
			case 2:
			{
				goto IL_00ee;
			}
			case 3:
			{
				goto IL_017f;
			}
			case 4:
			{
				goto IL_01ba;
			}
			case 5:
			{
				goto IL_01fa;
			}
			case 6:
			{
				goto IL_021a;
			}
			case 7:
			{
				goto IL_025a;
			}
			case 8:
			{
				goto IL_027a;
			}
			case 9:
			{
				goto IL_02a1;
			}
			case 10:
			{
				goto IL_02c2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ataque move = playerUnit.Personaje.Ataques[currentSelectedMove];
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_3 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_4 = L_3->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_5;
		L_5 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_4, /*hidden argument*/NULL);
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_6;
		L_6 = Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline(L_5, /*hidden argument*/NULL);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_7 = V_1;
		int32_t L_8 = L_7->get_currentSelectedMove_18();
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_9;
		L_9 = List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_inline(L_6, L_8, /*hidden argument*/List_1_get_Item_m69A45D0882BD26A097E67F54EDBE7312AF4A12A0_RuntimeMethod_var);
		__this->set_U3CmoveU3E5__2_3(L_9);
		// yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre} ha utilizado {move.Base.Nombre}");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_10 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_11 = L_10->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_12 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_13 = L_12->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_14;
		L_14 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_13, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_15;
		L_15 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_15, /*hidden argument*/NULL);
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_17 = __this->get_U3CmoveU3E5__2_3();
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_18;
		L_18 = Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3_inline(L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = AtaqueBase_get_Nombre_m0E7AF4D0DE71163BB85DBAC3F76F4152C4F0C9E5_inline(L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_16, _stringLiteral7B2DCB90632710D2B7A5CCA564EA16DD10D2AAAA, L_19, /*hidden argument*/NULL);
		RuntimeObject* L_21;
		L_21 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_11, L_20, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b3:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SoundManager.SharedInstance.PlaySound(attacClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_22 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_23 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_24 = L_23->get_attacClip_14();
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(L_22, L_24, /*hidden argument*/NULL);
		// playerUnit.PlayAttackAnimation();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_25 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_26 = L_25->get_playerUnit_4();
		BattleUnit_PlayAttackAnimation_m8316228CAD0085A5B62D2EE4AC0E0A2F1E6AD7E6(L_26, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ee:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemyplayerUnit.PlayReciveAttack();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_28 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_29 = L_28->get_enemyplayerUnit_6();
		BattleUnit_PlayReciveAttack_m884324B8FA129113F6276C759992BB82775927EC(L_29, /*hidden argument*/NULL);
		// SoundManager.SharedInstance.PlaySound(damageClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_30 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_31 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_32 = L_31->get_damageClip_15();
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(L_30, L_32, /*hidden argument*/NULL);
		// bool personajedebil = enemyplayerUnit.Personaje.Damage(move, playerUnit.Personaje.Personajes);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_33 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_34 = L_33->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_35;
		L_35 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_34, /*hidden argument*/NULL);
		Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * L_36 = __this->get_U3CmoveU3E5__2_3();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_37 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_38 = L_37->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_39;
		L_39 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_38, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_40;
		L_40 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_39, /*hidden argument*/NULL);
		bool L_41;
		L_41 = Juego_Damage_mC379655239B63CB444F8695AF386CD22558B5F57(L_35, L_36, L_40, /*hidden argument*/NULL);
		// enemyplayerHud.UpdatePersonajeData();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_42 = V_1;
		BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * L_43 = L_42->get_enemyplayerHud_7();
		BattleHud_UpdatePersonajeData_m387F0CFF768792818B0D0F794CA75345AA27E387(L_43, /*hidden argument*/NULL);
		// if (personajedebil)
		if (!L_41)
		{
			goto IL_02d7;
		}
	}
	{
		// yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre} se a quedado inconciente");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_44 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_45 = L_44->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_46 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_47 = L_46->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_48;
		L_48 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_47, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_49;
		L_49 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_48, /*hidden argument*/NULL);
		String_t* L_50;
		L_50 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_49, /*hidden argument*/NULL);
		String_t* L_51;
		L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_50, _stringLiteralFAADFC19C21B2582E499E91EFAEDEA6F732621F1, /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_45, L_51, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_52);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_017f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemyplayerUnit.PlayFaintAnimiation();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_53 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_54 = L_53->get_enemyplayerUnit_6();
		BattleUnit_PlayFaintAnimiation_m770C3951A95F3F70CC9641937D31652F5DB7417B(L_54, /*hidden argument*/NULL);
		// SoundManager.SharedInstance.PlaySound(endClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_55 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_56 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_57 = L_56->get_endClip_16();
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(L_55, L_57, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_58 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_58, (0.800000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_58);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_01ba:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre}: �Aaaaaaah!");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_59 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_60 = L_59->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_61 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_62 = L_61->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_63;
		L_63 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_62, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_64;
		L_64 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_63, /*hidden argument*/NULL);
		String_t* L_65;
		L_65 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_64, /*hidden argument*/NULL);
		String_t* L_66;
		L_66 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_65, _stringLiteral04515E78021D960C8AACAE5BFC9C9E894928D6FF, /*hidden argument*/NULL);
		RuntimeObject* L_67;
		L_67 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_60, L_66, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_67);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_01fa:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_68 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_68, (0.800000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_68);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_021a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre}: . . .");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_69 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_70 = L_69->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_71 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_72 = L_71->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_73;
		L_73 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_72, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_74;
		L_74 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_73, /*hidden argument*/NULL);
		String_t* L_75;
		L_75 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_74, /*hidden argument*/NULL);
		String_t* L_76;
		L_76 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_75, _stringLiteral9CC404015F167B5841C453654DD2D8EC0F2C0E1F, /*hidden argument*/NULL);
		RuntimeObject* L_77;
		L_77 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_70, L_76, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_77);
		__this->set_U3CU3E1__state_0(7);
		return (bool)1;
	}

IL_025a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_78 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_78, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_78);
		__this->set_U3CU3E1__state_0(8);
		return (bool)1;
	}

IL_027a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return battleDialogBox.SetDialog("Has ganado regresando al Menu");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_79 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_80 = L_79->get_battleDialogBox_8();
		RuntimeObject* L_81;
		L_81 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_80, _stringLiteral4272E6E1DD4620A09981F911A42D1C03390C6642, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_81);
		__this->set_U3CU3E1__state_0(((int32_t)9));
		return (bool)1;
	}

IL_02a1:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_82 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_82, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_82);
		__this->set_U3CU3E1__state_0(((int32_t)10));
		return (bool)1;
	}

IL_02c2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// OnBattleFinish(true);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_83 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_84 = L_83->get_OnBattleFinish_9();
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_84, (bool)1, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// }
		goto IL_02e4;
	}

IL_02d7:
	{
		// StartCoroutine(EnemyAction());
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_85 = V_1;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_86 = V_1;
		RuntimeObject* L_87;
		L_87 = BattleManager_EnemyAction_m0D26EEA475C337141777D4F5624647242C14440C(L_86, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_88;
		L_88 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_85, L_87, /*hidden argument*/NULL);
	}

IL_02e4:
	{
		// }
		return (bool)0;
	}
}
// System.Object BattleManager/<PerformPlayerMove>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformPlayerMoveU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6F5155B515C9BB04B4115B21A331A2307E0E061E (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BattleManager/<PerformPlayerMove>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformPlayerMoveU3Ed__25_System_Collections_IEnumerator_Reset_mD9D805F307FEA7963884603966EB22C9A9721CC5 (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPerformPlayerMoveU3Ed__25_System_Collections_IEnumerator_Reset_mD9D805F307FEA7963884603966EB22C9A9721CC5_RuntimeMethod_var)));
	}
}
// System.Object BattleManager/<PerformPlayerMove>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformPlayerMoveU3Ed__25_System_Collections_IEnumerator_get_Current_m716832074A4936C8E33C4A0B59029D4F2FD084B1 (U3CPerformPlayerMoveU3Ed__25_tAC575E56BA8288E20E63FA6F7D7AACF72DF7528C * __this, const RuntimeMethod* method)
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
// System.Void BattleManager/<SetupBattle>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBattleU3Ed__10__ctor_m78D140BB96FE24FD1E78768D8FF528BD88A914AD (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BattleManager/<SetupBattle>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBattleU3Ed__10_System_IDisposable_Dispose_mB9DE50D864AA501461E9D81A127DC13E44E32430 (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BattleManager/<SetupBattle>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetupBattleU3Ed__10_MoveNext_m9C0662615328109DF846C20872BC0A5C88BA54DE (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4ABB8626A275094EEAC14D62D5CAEAB5027E805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB022E012BBD5778EA54C7EDC76BA8D8A3C880860);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC45A3576ABD00989B744FB60C36D10AF25286716);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00d2;
			}
			case 2:
			{
				goto IL_00f2;
			}
			case 3:
			{
				goto IL_0132;
			}
			case 4:
			{
				goto IL_0152;
			}
			case 5:
			{
				goto IL_0192;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// state = BattleState.StartBattle;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_3 = V_1;
		L_3->set_state_10(0);
		// playerUnit.SetupPersonaje();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_4 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_5 = L_4->get_playerUnit_4();
		BattleUnit_SetupPersonaje_m3F341DC3058DAB2A202CEEF9E43992EFCC6DEC02(L_5, /*hidden argument*/NULL);
		// playerHud.SetPersonajeData(playerUnit.Personaje);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_6 = V_1;
		BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * L_7 = L_6->get_playerHud_5();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_8 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_9 = L_8->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_10;
		L_10 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_9, /*hidden argument*/NULL);
		BattleHud_SetPersonajeData_m39EFEF6B21C250362AF51F8DC307BC81721984D3(L_7, L_10, /*hidden argument*/NULL);
		// battleDialogBox.SetPersonajeMove(playerUnit.Personaje.Ataques);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_11 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_12 = L_11->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_13 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_14 = L_13->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_15;
		L_15 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_14, /*hidden argument*/NULL);
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_16;
		L_16 = Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline(L_15, /*hidden argument*/NULL);
		BattleDialogBox_SetPersonajeMove_mE7F53BF0D127A856BC6B859F55C8895A67304025(L_12, L_16, /*hidden argument*/NULL);
		// enemyplayerUnit.SetupPersonaje();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_17 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_18 = L_17->get_enemyplayerUnit_6();
		BattleUnit_SetupPersonaje_m3F341DC3058DAB2A202CEEF9E43992EFCC6DEC02(L_18, /*hidden argument*/NULL);
		// enemyplayerHud.SetPersonajeData(enemyplayerUnit.Personaje);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_19 = V_1;
		BattleHud_t8F327EAC6D48C77977BF46295743364AD92C7890 * L_20 = L_19->get_enemyplayerHud_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_21 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_22 = L_21->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_23;
		L_23 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_22, /*hidden argument*/NULL);
		BattleHud_SetPersonajeData_m39EFEF6B21C250362AF51F8DC307BC81721984D3(L_20, L_23, /*hidden argument*/NULL);
		// yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre}: �Alto hay! Yo soy el rey bandido y vengo por mis pertenec�as.");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_24 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_25 = L_24->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_26 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_27 = L_26->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_28;
		L_28 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_27, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_29;
		L_29 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_29, /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_30, _stringLiteralA4ABB8626A275094EEAC14D62D5CAEAB5027E805, /*hidden argument*/NULL);
		RuntimeObject* L_32;
		L_32 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_25, L_31, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, (0.800000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00f2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre}: Esta bien luchemos.");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_34 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_35 = L_34->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_36 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_37 = L_36->get_playerUnit_4();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_38;
		L_38 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_37, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_39;
		L_39 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_38, /*hidden argument*/NULL);
		String_t* L_40;
		L_40 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_40, _stringLiteralC45A3576ABD00989B744FB60C36D10AF25286716, /*hidden argument*/NULL);
		RuntimeObject* L_42;
		L_42 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_35, L_41, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_42);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0132:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_43 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_43, (0.800000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_0152:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre}: Te vencer� y me quedare con esa armadura.");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_44 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_45 = L_44->get_battleDialogBox_8();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_46 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_47 = L_46->get_enemyplayerUnit_6();
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_48;
		L_48 = BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline(L_47, /*hidden argument*/NULL);
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_49;
		L_49 = Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline(L_48, /*hidden argument*/NULL);
		String_t* L_50;
		L_50 = Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline(L_49, /*hidden argument*/NULL);
		String_t* L_51;
		L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_50, _stringLiteralB022E012BBD5778EA54C7EDC76BA8D8A3C880860, /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_45, L_51, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_52);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_0192:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlayerAction();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_53 = V_1;
		BattleManager_PlayerAction_mCEE1DC13C4B0EA33A451C85FD1C4CA1FB0A87044(L_53, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object BattleManager/<SetupBattle>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetupBattleU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C73CB8697AE25C02F51062B665FEBFD2E2D12BB (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BattleManager/<SetupBattle>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBattleU3Ed__10_System_Collections_IEnumerator_Reset_mC49E965BD998993994E579D42F8014FEFA7EC923 (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetupBattleU3Ed__10_System_Collections_IEnumerator_Reset_mC49E965BD998993994E579D42F8014FEFA7EC923_RuntimeMethod_var)));
	}
}
// System.Object BattleManager/<SetupBattle>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetupBattleU3Ed__10_System_Collections_IEnumerator_get_Current_m99AA2142A537B58B83FBA2C850C0560319B1CAA9 (U3CSetupBattleU3Ed__10_t70951E29FE66D83B7F03AABE1562D8C7C7DAE193 * __this, const RuntimeMethod* method)
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
// System.Void BattleManager/<TryEscape>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryEscapeU3Ed__26__ctor_m314CB40C6C9A9E0F66E533F10C3E051E4A69733A (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BattleManager/<TryEscape>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryEscapeU3Ed__26_System_IDisposable_Dispose_m120D2E183E3472A5FF09F52021C751BEF686234D (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BattleManager/<TryEscape>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryEscapeU3Ed__26_MoveNext_m422009D8F06F8DDC1AF6134A82B475A7D754F55A (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00DD0E26B82207FD2F76765FE2804699F6296BDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35ECD4BA74F66F9F1410574F7A1F7F26BEDE605A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0092;
			}
			case 3:
			{
				goto IL_00b8;
			}
			case 4:
			{
				goto IL_00d8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// state = BattleState.Busy;
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_3 = V_1;
		L_3->set_state_10(4);
		// yield return battleDialogBox.SetDialog("Has escapado");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_4 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_5 = L_4->get_battleDialogBox_8();
		RuntimeObject* L_6;
		L_6 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_5, _stringLiteral35ECD4BA74F66F9F1410574F7A1F7F26BEDE605A, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0057:
	{
		__this->set_U3CU3E1__state_0((-1));
		// playerUnit.PlayFaintAnimiation();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_7 = V_1;
		BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * L_8 = L_7->get_playerUnit_4();
		BattleUnit_PlayFaintAnimiation_m770C3951A95F3F70CC9641937D31652F5DB7417B(L_8, /*hidden argument*/NULL);
		// SoundManager.SharedInstance.PlaySound(escapeClip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_9 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_SharedInstance_7();
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_10 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = L_10->get_escapeClip_17();
		SoundManager_PlaySound_mBE3D6660CDC2A024D30D6E97399F26F77C1A319F(L_9, L_11, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0092:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return battleDialogBox.SetDialog("Regresando al Menu");
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_13 = V_1;
		BattleDialogBox_t05397564A17623FC1FDCC778A1D3FFA2A136EA3B * L_14 = L_13->get_battleDialogBox_8();
		RuntimeObject* L_15;
		L_15 = BattleDialogBox_SetDialog_m195F859E56FC973008848D52C156785749BE93E5(L_14, _stringLiteral00DD0E26B82207FD2F76765FE2804699F6296BDD, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00b8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_00d8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// OnBattleFinish(true);
		BattleManager_tFCEACDDF57A03838DD6DA1CD047BE7B048587EC7 * L_17 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_18 = L_17->get_OnBattleFinish_9();
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_18, (bool)1, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object BattleManager/<TryEscape>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryEscapeU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6DD130A1A82A87E258DC03285184D2901CADC9E7 (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BattleManager/<TryEscape>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryEscapeU3Ed__26_System_Collections_IEnumerator_Reset_m46395AB0341FE70DCDFCD05A212AD3A5683C3090 (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryEscapeU3Ed__26_System_Collections_IEnumerator_Reset_m46395AB0341FE70DCDFCD05A212AD3A5683C3090_RuntimeMethod_var)));
	}
}
// System.Object BattleManager/<TryEscape>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryEscapeU3Ed__26_System_Collections_IEnumerator_get_Current_m4C824E75ECE7F91409199550F2E64DF6086FE407 (U3CTryEscapeU3Ed__26_t11442EE210C8F62E5B632D89A995DF4AFE09D2C1 * __this, const RuntimeMethod* method)
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
// System.Void HealBar/<SetSmoothHP>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSmoothHPU3Ed__4__ctor_m4FDFEB15912AB0D52FE2398ED2660A6A7396D54A (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HealBar/<SetSmoothHP>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSmoothHPU3Ed__4_System_IDisposable_Dispose_m923B9C9D3F460D2603D6FE8FB8018E65EDFACB23 (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HealBar/<SetSmoothHP>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetSmoothHPU3Ed__4_MoveNext_mF798B53232B42968D0AEB43FC0843086AFF80A84 (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_00b0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float currenScale = healthBar.transform.localScale.x;
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_healthBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		__this->set_U3CcurrenScaleU3E5__2_4(L_8);
		// float updateQuantity = currenScale - normalizedValue;
		float L_9 = __this->get_U3CcurrenScaleU3E5__2_4();
		float L_10 = __this->get_normalizedValue_3();
		__this->set_U3CupdateQuantityU3E5__3_5(((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)));
		goto IL_00b7;
	}

IL_0051:
	{
		// currenScale -= updateQuantity * Time.deltaTime;
		float L_11 = __this->get_U3CcurrenScaleU3E5__2_4();
		float L_12 = __this->get_U3CupdateQuantityU3E5__3_5();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CcurrenScaleU3E5__2_4(((float)il2cpp_codegen_subtract((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)))));
		// healthBar.transform.localScale = new Vector3(currenScale, 1);
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_14 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_healthBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_U3CcurrenScaleU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_18), L_17, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_16, L_18, /*hidden argument*/NULL);
		// healthBar.GetComponent<Image>().color = BarColor;
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_19 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = L_19->get_healthBar_4();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_21;
		L_21 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_20, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_22 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = HealBar_get_BarColor_m94C282AC28C847CC2EEDDF39D9FEC90F14062609(L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_23);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b7:
	{
		// while (currenScale - normalizedValue > Mathf.Epsilon)
		float L_24 = __this->get_U3CcurrenScaleU3E5__2_4();
		float L_25 = __this->get_normalizedValue_3();
		float L_26 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_25))) > ((float)L_26)))
		{
			goto IL_0051;
		}
	}
	{
		// healthBar.transform.localScale = new Vector3(normalizedValue, 1);
		HealBar_tFBE78257344C74E7DEE2795DFB4713AF1B8CF606 * L_27 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27->get_healthBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_normalizedValue_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_31), L_30, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_29, L_31, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object HealBar/<SetSmoothHP>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetSmoothHPU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBF07FF3CD074CEA31124634B1B7CA9FF8EFD4725 (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HealBar/<SetSmoothHP>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSmoothHPU3Ed__4_System_Collections_IEnumerator_Reset_mD5D11081968F8F57AF7D3A8A650B685E30B92EFB (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetSmoothHPU3Ed__4_System_Collections_IEnumerator_Reset_mD5D11081968F8F57AF7D3A8A650B685E30B92EFB_RuntimeMethod_var)));
	}
}
// System.Object HealBar/<SetSmoothHP>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetSmoothHPU3Ed__4_System_Collections_IEnumerator_get_Current_mE1B45EF5B4F3DC0C11D5ED33493678DB0C076C03 (U3CSetSmoothHPU3Ed__4_tC16FEBFDB0E5A61A7A145DB18F905EAEE55DDB59 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Ataque_set_Base_m9FF0734799A53DFD7F1A9703F31E8E844A127079_inline (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * ___value0, const RuntimeMethod* method)
{
	{
		// set => _base = value;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_0 = ___value0;
		__this->set__base_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * Ataque_get_Base_m00B59DD31FCECE1B4F3D98E4EAEFABCBE825CEB3_inline (Ataque_t39E634DAB7CD423B6FA448F0B57BF7A91D4EFE54 * __this, const RuntimeMethod* method)
{
	{
		// get => _base;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_0 = __this->get__base_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AtaqueBase_get_Nombre_m0E7AF4D0DE71163BB85DBAC3F76F4152C4F0C9E5_inline (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method)
{
	{
		// public string Nombre => nombre;
		String_t* L_0 = __this->get_nombre_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AtaqueBase_get_Poder_m56639B0556F15ACECEFACF2DEDF41044911A9A35_inline (AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * __this, const RuntimeMethod* method)
{
	{
		// public int Poder => poder;
		int32_t L_0 = __this->get_poder_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * Juego_get_Personajes_m5A0D0C7D96581C2531E78692602929D2B74D06B6_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// get => _personajes;
		Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * L_0 = __this->get__personajes_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Personajes_get_Nombre_mB2118004FC18FA046648AA7515C18DC42975DC3B_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public string Nombre => nombre;
		String_t* L_0 = __this->get_nombre_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Juego_get_HP_m980B13E14FC6DE93F85D389523FF2C97A4029965_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// get => _hp;
		int32_t L_0 = __this->get__hp_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * BattleUnit_get_Personaje_m69C080127FA4369E58936A2553E56D840B8D4FD2_inline (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, const RuntimeMethod* method)
{
	{
		// public Juego Personaje { get; set; }
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_0 = __this->get_U3CPersonajeU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * Juego_get_Ataques_m0EE68164B7FA58EC1CBF37F3848D5BEAC3B57470_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, const RuntimeMethod* method)
{
	{
		// get => _ataque;
		List_1_t01B40BC6DC3A2BA2E2CBF660C5AF10FCEF89B5AA * L_0 = __this->get__ataque_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BattleUnit_set_Personaje_m53574C6FE15F63866E55112A92DEF24DE00DDDF4_inline (BattleUnit_t5303817865602EB69C01FEBB78105C55FF46C5D8 * __this, Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * ___value0, const RuntimeMethod* method)
{
	{
		// public Juego Personaje { get; set; }
		Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * L_0 = ___value0;
		__this->set_U3CPersonajeU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Personajes_get_PersonajeSprite_m3FF6768E5FF03E98FEB7CCF52F510EFBA4208A01_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public Sprite PersonajeSprite => personajeSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_personajeSprite_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * Personajes_get_AprendeAtaques_m504056430B1E7E35900F79B033575069AF5CB8D7_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public List<AprendeAtaque> AprendeAtaques => aprendeAtaque;
		List_1_t01B1EFB4E78217A92248D018C32EB75CF8C831E6 * L_0 = __this->get_aprendeAtaque_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AprendeAtaque_get_Level_mACC4C0617D54581FEF8B7B770C142EC7FA055485_inline (AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * __this, const RuntimeMethod* method)
{
	{
		// public int Level => level;
		int32_t L_0 = __this->get_level_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * AprendeAtaque_get_Ataque_m2AED464D681A10567C01337B587381D792C96E6B_inline (AprendeAtaque_t27F316306FA4A2C93ABB92A0029B224B97525FD2 * __this, const RuntimeMethod* method)
{
	{
		// public AtaqueBase Ataque => ataque;
		AtaqueBase_tD0FD72347D678AD4248DA92F9E7D0F165E4DA60C * L_0 = __this->get_ataque_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Personajes_get_Attack_m1139207F2542C98F815CD615D9C39CE01E758C9E_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public int Attack => attack;
		int32_t L_0 = __this->get_attack_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Personajes_get_MaxHP_m8B6EDED74031B110983161C19E2882448EF35288_inline (Personajes_t0E17B44EC4BF3DD1444290FC1B92AD0C7F03E19E * __this, const RuntimeMethod* method)
{
	{
		// public int MaxHP => maxHP;
		int32_t L_0 = __this->get_maxHP_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Juego_set_HP_mABA449B0BE34836396369F643037A76CC9886C3F_inline (Juego_t89BE3D185D6D664280E7F3119467A7DDD4DF0442 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => _hp = value;
		int32_t L_0 = ___value0;
		__this->set__hp_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
