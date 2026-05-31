// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeLoadRenderAction.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeLoadRenderAction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_NoRegister();
READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature();
READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarRenderProperties();
UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References

// Begin Delegate FDownloadImageCompleted
struct Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics
{
	struct _Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms
	{
		UTexture2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "DownloadImageCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDownloadImageCompleted_DelegateWrapper(const FMulticastScriptDelegate& DownloadImageCompleted, UTexture2D* Texture)
{
	struct _Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms
	{
		UTexture2D* Texture;
	};
	_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms Parms;
	Parms.Texture=Texture;
	DownloadImageCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDownloadImageCompleted

// Begin Class UReadyPlayerMeLoadRenderAction Function LoadAvatarRenderAsync
struct Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics
{
	struct ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms
	{
		FString Url;
		FRpmAvatarRenderProperties Properties;
		UReadyPlayerMeLoadRenderAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Properties" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates load render async action.\n\x09 *\n\x09 * @param Url Model url.\n\x09 * @param Properties The properties for defining the render environment.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates load render async action.\n\n@param Url Model url.\n@param Properties The properties for defining the render environment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms, Properties), Z_Construct_UScriptStruct_FRpmAvatarRenderProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 537396355
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms, ReturnValue), Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeLoadRenderAction, nullptr, "LoadAvatarRenderAsync", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeLoadRenderAction::execLoadAvatarRenderAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_STRUCT_REF(FRpmAvatarRenderProperties,Z_Param_Out_Properties);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UReadyPlayerMeLoadRenderAction**)Z_Param__Result=UReadyPlayerMeLoadRenderAction::LoadAvatarRenderAsync(Z_Param_Url,Z_Param_Out_Properties);
	P_NATIVE_END;
}
// End Class UReadyPlayerMeLoadRenderAction Function LoadAvatarRenderAsync

// Begin Class UReadyPlayerMeLoadRenderAction Function OnImageDownloaded
struct Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics
{
	struct ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms), &Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeLoadRenderAction, nullptr, "OnImageDownloaded", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeLoadRenderAction::execOnImageDownloaded)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnImageDownloaded(Z_Param_bSuccess);
	P_NATIVE_END;
}
// End Class UReadyPlayerMeLoadRenderAction Function OnImageDownloaded

// Begin Class UReadyPlayerMeLoadRenderAction
void UReadyPlayerMeLoadRenderAction::StaticRegisterNativesUReadyPlayerMeLoadRenderAction()
{
	UClass* Class = UReadyPlayerMeLoadRenderAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadAvatarRenderAsync", &UReadyPlayerMeLoadRenderAction::execLoadAvatarRenderAsync },
		{ "OnImageDownloaded", &UReadyPlayerMeLoadRenderAction::execOnImageDownloaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeLoadRenderAction);
UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_NoRegister()
{
	return UReadyPlayerMeLoadRenderAction::StaticClass();
}
struct Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Async action, responsible for Loading rendered image from the avatar url.\n */" },
#endif
		{ "IncludePath", "ReadyPlayerMeLoadRenderAction.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Async action, responsible for Loading rendered image from the avatar url." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Success callback. Called when the render is loaded and provides the avatar texture as an argument. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Success callback. Called when the render is loaded and provides the avatar texture as an argument." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Failure callback. If the render operation fails, the failure callback will be called. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failure callback. If the render operation fails, the failure callback will be called." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync, "LoadAvatarRenderAsync" }, // 3200315669
		{ &Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded, "OnImageDownloaded" }, // 3943348982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeLoadRenderAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeLoadRenderAction, OnCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 918362760
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeLoadRenderAction, OnFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 918362760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::ClassParams = {
	&UReadyPlayerMeLoadRenderAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction()
{
	if (!Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction.OuterSingleton;
}
template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeLoadRenderAction>()
{
	return UReadyPlayerMeLoadRenderAction::StaticClass();
}
UReadyPlayerMeLoadRenderAction::UReadyPlayerMeLoadRenderAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeLoadRenderAction);
UReadyPlayerMeLoadRenderAction::~UReadyPlayerMeLoadRenderAction() {}
// End Class UReadyPlayerMeLoadRenderAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeLoadRenderAction, UReadyPlayerMeLoadRenderAction::StaticClass, TEXT("UReadyPlayerMeLoadRenderAction"), &Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeLoadRenderAction), 3769169651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_2812614221(TEXT("/Script/ReadyPlayerMe"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
