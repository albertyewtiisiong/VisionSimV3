// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmAvatarEditorUI.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmAvatarEditorUI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAssetButtonUI_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarEditorUI();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarEditorUI_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmColorButtonUI_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmTemplateButtonUI_NoRegister();
RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor();
RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType();
RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature();
RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature();
RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarTemplate();
RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmPartnerAsset();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References

// Begin Class URpmAvatarEditorUI Function AreModularOutfitsDisabled
struct Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics
{
	struct RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Are Modular Outfits Disabled" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms), &Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "AreModularOutfitsDisabled", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execAreModularOutfitsDisabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreModularOutfitsDisabled();
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function AreModularOutfitsDisabled

// Begin Class URpmAvatarEditorUI Function AssetSelected
struct RpmAvatarEditorUI_eventAssetSelected_Parms
{
	FRpmPartnerAsset Asset;
};
static FName NAME_URpmAvatarEditorUI_AssetSelected = FName(TEXT("AssetSelected"));
void URpmAvatarEditorUI::AssetSelected(FRpmPartnerAsset const& Asset)
{
	RpmAvatarEditorUI_eventAssetSelected_Parms Parms;
	Parms.Asset=Asset;
	ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_AssetSelected),&Parms);
}
struct Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Asset Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventAssetSelected_Parms, Asset), Z_Construct_UScriptStruct_FRpmPartnerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) }; // 2715805551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "AssetSelected", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers), sizeof(RpmAvatarEditorUI_eventAssetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(RpmAvatarEditorUI_eventAssetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URpmAvatarEditorUI Function AssetSelected

// Begin Class URpmAvatarEditorUI Function AssetUnlocked
static FName NAME_URpmAvatarEditorUI_AssetUnlocked = FName(TEXT("AssetUnlocked"));
void URpmAvatarEditorUI::AssetUnlocked()
{
	ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_AssetUnlocked),NULL);
}
struct Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Asset Unlocked" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "AssetUnlocked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URpmAvatarEditorUI Function AssetUnlocked

// Begin Class URpmAvatarEditorUI Function ColorSelected
static FName NAME_URpmAvatarEditorUI_ColorSelected = FName(TEXT("ColorSelected"));
void URpmAvatarEditorUI::ColorSelected()
{
	ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_ColorSelected),NULL);
}
struct Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Color Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "ColorSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URpmAvatarEditorUI Function ColorSelected

// Begin Class URpmAvatarEditorUI Function DiscardAvatarDraft
struct Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Discard Avatar Draft" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "DiscardAvatarDraft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execDiscardAvatarDraft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DiscardAvatarDraft();
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function DiscardAvatarDraft

// Begin Class URpmAvatarEditorUI Function DownloadAssetIcons
struct Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics
{
	struct RpmAvatarEditorUI_eventDownloadAssetIcons_Parms
	{
		const UWrapBox* AssetContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "DownloadAssetIcons" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::NewProp_AssetContainer = { "AssetContainer", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventDownloadAssetIcons_Parms, AssetContainer), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetContainer_MetaData), NewProp_AssetContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::NewProp_AssetContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "DownloadAssetIcons", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::RpmAvatarEditorUI_eventDownloadAssetIcons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::RpmAvatarEditorUI_eventDownloadAssetIcons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execDownloadAssetIcons)
{
	P_GET_OBJECT(UWrapBox,Z_Param_AssetContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadAssetIcons(Z_Param_AssetContainer);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function DownloadAssetIcons

// Begin Class URpmAvatarEditorUI Function Init
struct Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics
{
	struct RpmAvatarEditorUI_eventInit_Parms
	{
		URpmAvatarCreatorApi* Api;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Api;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::NewProp_Api = { "Api", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventInit_Parms, Api), Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::NewProp_Api,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::RpmAvatarEditorUI_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::RpmAvatarEditorUI_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execInit)
{
	P_GET_OBJECT(URpmAvatarCreatorApi,Z_Param_Api);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_Api);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function Init

// Begin Class URpmAvatarEditorUI Function IsCustomizableAssetSelected
struct Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics
{
	struct RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Is Customizable Asset Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms), &Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "IsCustomizableAssetSelected", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execIsCustomizableAssetSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCustomizableAssetSelected();
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function IsCustomizableAssetSelected

// Begin Class URpmAvatarEditorUI Function OnAssetButtonClicked
struct Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics
{
	struct RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms
	{
		FRpmPartnerAsset Asset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms, Asset), Z_Construct_UScriptStruct_FRpmPartnerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) }; // 2715805551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnAssetButtonClicked", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execOnAssetButtonClicked)
{
	P_GET_STRUCT_REF(FRpmPartnerAsset,Z_Param_Out_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAssetButtonClicked(Z_Param_Out_Asset);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function OnAssetButtonClicked

// Begin Class URpmAvatarEditorUI Function OnAssetIconDownloaded
struct Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics
{
	struct RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms
	{
		UTexture2D* Image;
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnAssetIconDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execOnAssetIconDownloaded)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAssetIconDownloaded(Z_Param_Image,Z_Param_Url);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function OnAssetIconDownloaded

// Begin Class URpmAvatarEditorUI Function OnBadgeIconDownloaded
struct Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics
{
	struct RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms
	{
		UTexture2D* Image;
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnBadgeIconDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execOnBadgeIconDownloaded)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBadgeIconDownloaded(Z_Param_Image,Z_Param_Url);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function OnBadgeIconDownloaded

// Begin Class URpmAvatarEditorUI Function OnColorButtonClicked
struct Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics
{
	struct RpmAvatarEditorUI_eventOnColorButtonClicked_Parms
	{
		ERpmPartnerAssetColor AssetColor;
		int32 ColorIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetColor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColorIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor = { "AssetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnColorButtonClicked_Parms, AssetColor), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(0, nullptr) }; // 3244700358
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnColorButtonClicked_Parms, ColorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_ColorIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnColorButtonClicked", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::RpmAvatarEditorUI_eventOnColorButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::RpmAvatarEditorUI_eventOnColorButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execOnColorButtonClicked)
{
	P_GET_ENUM(ERpmPartnerAssetColor,Z_Param_AssetColor);
	P_GET_PROPERTY(FIntProperty,Z_Param_ColorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnColorButtonClicked(ERpmPartnerAssetColor(Z_Param_AssetColor),Z_Param_ColorIndex);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function OnColorButtonClicked

// Begin Class URpmAvatarEditorUI Function OnTemplateButtonClicked
struct Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics
{
	struct RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms
	{
		FRpmAvatarTemplate Template;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Template;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms, Template), Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) }; // 3007469304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::NewProp_Template,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnTemplateButtonClicked", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execOnTemplateButtonClicked)
{
	P_GET_STRUCT_REF(FRpmAvatarTemplate,Z_Param_Out_Template);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTemplateButtonClicked(Z_Param_Out_Template);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function OnTemplateButtonClicked

// Begin Class URpmAvatarEditorUI Function OnTemplateIconDownloaded
struct Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics
{
	struct RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms
	{
		UTexture2D* Image;
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnTemplateIconDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execOnTemplateIconDownloaded)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTemplateIconDownloaded(Z_Param_Image,Z_Param_Url);
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function OnTemplateIconDownloaded

// Begin Class URpmAvatarEditorUI Function OnUpdateLockedAssetsCompleted
struct Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnUpdateLockedAssetsCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execOnUpdateLockedAssetsCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdateLockedAssetsCompleted();
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function OnUpdateLockedAssetsCompleted

// Begin Class URpmAvatarEditorUI Function PreviewDownloaded
struct RpmAvatarEditorUI_eventPreviewDownloaded_Parms
{
	const USkeletalMesh* SkeletalMesh;
};
static FName NAME_URpmAvatarEditorUI_PreviewDownloaded = FName(TEXT("PreviewDownloaded"));
void URpmAvatarEditorUI::PreviewDownloaded(const USkeletalMesh* SkeletalMesh)
{
	RpmAvatarEditorUI_eventPreviewDownloaded_Parms Parms;
	Parms.SkeletalMesh=SkeletalMesh;
	ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_PreviewDownloaded),&Parms);
}
struct Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Preview Downloaded" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventPreviewDownloaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::NewProp_SkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "PreviewDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers), sizeof(RpmAvatarEditorUI_eventPreviewDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(RpmAvatarEditorUI_eventPreviewDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URpmAvatarEditorUI Function PreviewDownloaded

// Begin Class URpmAvatarEditorUI Function SetupAssets
struct Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Setup Assets" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "SetupAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execSetupAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupAssets();
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function SetupAssets

// Begin Class URpmAvatarEditorUI Function SetupTemplates
struct Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Setup Templates" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "SetupTemplates", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execSetupTemplates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupTemplates();
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function SetupTemplates

// Begin Class URpmAvatarEditorUI Function TemplateSelected
struct RpmAvatarEditorUI_eventTemplateSelected_Parms
{
	FRpmAvatarTemplate Template;
};
static FName NAME_URpmAvatarEditorUI_TemplateSelected = FName(TEXT("TemplateSelected"));
void URpmAvatarEditorUI::TemplateSelected(FRpmAvatarTemplate const& Template)
{
	RpmAvatarEditorUI_eventTemplateSelected_Parms Parms;
	Parms.Template=Template;
	ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_TemplateSelected),&Parms);
}
struct Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Template Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Template;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventTemplateSelected_Parms, Template), Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) }; // 3007469304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::NewProp_Template,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "TemplateSelected", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers), sizeof(RpmAvatarEditorUI_eventTemplateSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(RpmAvatarEditorUI_eventTemplateSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URpmAvatarEditorUI Function TemplateSelected

// Begin Class URpmAvatarEditorUI Function UpdateLockedAssets
struct Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update Locked Assets" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "UpdateLockedAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarEditorUI::execUpdateLockedAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLockedAssets();
	P_NATIVE_END;
}
// End Class URpmAvatarEditorUI Function UpdateLockedAssets

// Begin Class URpmAvatarEditorUI
void URpmAvatarEditorUI::StaticRegisterNativesURpmAvatarEditorUI()
{
	UClass* Class = URpmAvatarEditorUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreModularOutfitsDisabled", &URpmAvatarEditorUI::execAreModularOutfitsDisabled },
		{ "DiscardAvatarDraft", &URpmAvatarEditorUI::execDiscardAvatarDraft },
		{ "DownloadAssetIcons", &URpmAvatarEditorUI::execDownloadAssetIcons },
		{ "Init", &URpmAvatarEditorUI::execInit },
		{ "IsCustomizableAssetSelected", &URpmAvatarEditorUI::execIsCustomizableAssetSelected },
		{ "OnAssetButtonClicked", &URpmAvatarEditorUI::execOnAssetButtonClicked },
		{ "OnAssetIconDownloaded", &URpmAvatarEditorUI::execOnAssetIconDownloaded },
		{ "OnBadgeIconDownloaded", &URpmAvatarEditorUI::execOnBadgeIconDownloaded },
		{ "OnColorButtonClicked", &URpmAvatarEditorUI::execOnColorButtonClicked },
		{ "OnTemplateButtonClicked", &URpmAvatarEditorUI::execOnTemplateButtonClicked },
		{ "OnTemplateIconDownloaded", &URpmAvatarEditorUI::execOnTemplateIconDownloaded },
		{ "OnUpdateLockedAssetsCompleted", &URpmAvatarEditorUI::execOnUpdateLockedAssetsCompleted },
		{ "SetupAssets", &URpmAvatarEditorUI::execSetupAssets },
		{ "SetupTemplates", &URpmAvatarEditorUI::execSetupTemplates },
		{ "UpdateLockedAssets", &URpmAvatarEditorUI::execUpdateLockedAssets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmAvatarEditorUI);
UClass* Z_Construct_UClass_URpmAvatarEditorUI_NoRegister()
{
	return URpmAvatarEditorUI::StaticClass();
}
struct Z_Construct_UClass_URpmAvatarEditorUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmAvatarEditorUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetContainerMap_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorContainerMap_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateContainer_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeColorButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadgeIcon_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarCreatorApi_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetIconDownloadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateIconDownloadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadgeIconDownloadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateLockedAssetsCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImageMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateImageMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetContainerMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetContainerMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetContainerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetContainerMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorContainerMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorContainerMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorContainerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ColorContainerMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateContainer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetButtonClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EyeColorButtonClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ColorButtonClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateButtonClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BadgeIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarCreatorApi;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_AssetIconDownloadCompleted;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TemplateIconDownloadCompleted;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BadgeIconDownloadCompleted;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_UpdateLockedAssetsCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImageMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetImageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetImageMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateImageMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TemplateImageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TemplateImageMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled, "AreModularOutfitsDisabled" }, // 179973541
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected, "AssetSelected" }, // 428159514
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked, "AssetUnlocked" }, // 1376442370
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected, "ColorSelected" }, // 1692486311
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft, "DiscardAvatarDraft" }, // 3976179035
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons, "DownloadAssetIcons" }, // 3176938682
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_Init, "Init" }, // 3851176079
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected, "IsCustomizableAssetSelected" }, // 3168624466
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked, "OnAssetButtonClicked" }, // 3715123385
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded, "OnAssetIconDownloaded" }, // 4078658937
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded, "OnBadgeIconDownloaded" }, // 690485640
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked, "OnColorButtonClicked" }, // 4120241612
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked, "OnTemplateButtonClicked" }, // 1666379172
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded, "OnTemplateIconDownloaded" }, // 4096964533
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted, "OnUpdateLockedAssetsCompleted" }, // 25959085
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded, "PreviewDownloaded" }, // 1306193894
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets, "SetupAssets" }, // 642497380
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates, "SetupTemplates" }, // 2606689794
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected, "TemplateSelected" }, // 1501897490
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets, "UpdateLockedAssets" }, // 3449628447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmAvatarEditorUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_ValueProp = { "AssetContainerMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp = { "AssetContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType, METADATA_PARAMS(0, nullptr) }; // 3570093307
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap = { "AssetContainerMap", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetContainerMap_MetaData), NewProp_AssetContainerMap_MetaData) }; // 3570093307
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_ValueProp = { "ColorContainerMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp = { "ColorContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(0, nullptr) }; // 3244700358
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap = { "ColorContainerMap", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, ColorContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorContainerMap_MetaData), NewProp_ColorContainerMap_MetaData) }; // 3244700358
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateContainer = { "TemplateContainer", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateContainer), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateContainer_MetaData), NewProp_TemplateContainer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetButtonClass = { "AssetButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmAssetButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetButtonClass_MetaData), NewProp_AssetButtonClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_EyeColorButtonClass = { "EyeColorButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, EyeColorButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmAssetButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeColorButtonClass_MetaData), NewProp_EyeColorButtonClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorButtonClass = { "ColorButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, ColorButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmColorButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorButtonClass_MetaData), NewProp_ColorButtonClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateButtonClass = { "TemplateButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmTemplateButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateButtonClass_MetaData), NewProp_TemplateButtonClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIcon = { "BadgeIcon", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, BadgeIcon), Z_Construct_UClass_URpmIconUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadgeIcon_MetaData), NewProp_BadgeIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AvatarCreatorApi = { "AvatarCreatorApi", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AvatarCreatorApi), Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarCreatorApi_MetaData), NewProp_AvatarCreatorApi_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetIconDownloadCompleted = { "AssetIconDownloadCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetIconDownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetIconDownloadCompleted_MetaData), NewProp_AssetIconDownloadCompleted_MetaData) }; // 1972327450
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateIconDownloadCompleted = { "TemplateIconDownloadCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateIconDownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateIconDownloadCompleted_MetaData), NewProp_TemplateIconDownloadCompleted_MetaData) }; // 1972327450
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIconDownloadCompleted = { "BadgeIconDownloadCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, BadgeIconDownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadgeIconDownloadCompleted_MetaData), NewProp_BadgeIconDownloadCompleted_MetaData) }; // 1972327450
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_UpdateLockedAssetsCompleted = { "UpdateLockedAssetsCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, UpdateLockedAssetsCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateLockedAssetsCompleted_MetaData), NewProp_UpdateLockedAssetsCompleted_MetaData) }; // 3601185981
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_ValueProp = { "AssetImageMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URpmAssetButtonUI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_Key_KeyProp = { "AssetImageMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap = { "AssetImageMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetImageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImageMap_MetaData), NewProp_AssetImageMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_ValueProp = { "TemplateImageMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URpmTemplateButtonUI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_Key_KeyProp = { "TemplateImageMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap = { "TemplateImageMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateImageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateImageMap_MetaData), NewProp_TemplateImageMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_EyeColorButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AvatarCreatorApi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetIconDownloadCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateIconDownloadCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIconDownloadCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_UpdateLockedAssetsCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URpmAvatarEditorUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::ClassParams = {
	&URpmAvatarEditorUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmAvatarEditorUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URpmAvatarEditorUI()
{
	if (!Z_Registration_Info_UClass_URpmAvatarEditorUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmAvatarEditorUI.OuterSingleton, Z_Construct_UClass_URpmAvatarEditorUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URpmAvatarEditorUI.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmAvatarEditorUI>()
{
	return URpmAvatarEditorUI::StaticClass();
}
URpmAvatarEditorUI::URpmAvatarEditorUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URpmAvatarEditorUI);
URpmAvatarEditorUI::~URpmAvatarEditorUI() {}
// End Class URpmAvatarEditorUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URpmAvatarEditorUI, URpmAvatarEditorUI::StaticClass, TEXT("URpmAvatarEditorUI"), &Z_Registration_Info_UClass_URpmAvatarEditorUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmAvatarEditorUI), 1245362062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_2566035099(TEXT("/Script/RpmAvatarCreator"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
