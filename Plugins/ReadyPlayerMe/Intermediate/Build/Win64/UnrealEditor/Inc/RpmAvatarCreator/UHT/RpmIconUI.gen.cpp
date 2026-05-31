// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmIconUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmIconUI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References

// Begin Class URpmIconUI Function SetIconTexture
struct RpmIconUI_eventSetIconTexture_Parms
{
	UTexture2D* Texture;
};
static FName NAME_URpmIconUI_SetIconTexture = FName(TEXT("SetIconTexture"));
void URpmIconUI::SetIconTexture(UTexture2D* Texture)
{
	RpmIconUI_eventSetIconTexture_Parms Parms;
	Parms.Texture=Texture;
	ProcessEvent(FindFunctionChecked(NAME_URpmIconUI_SetIconTexture),&Parms);
}
struct Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Icon Texture" },
		{ "ModuleRelativePath", "Public/UI/RpmIconUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmIconUI_eventSetIconTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmIconUI, nullptr, "SetIconTexture", nullptr, nullptr, Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::PropPointers), sizeof(RpmIconUI_eventSetIconTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(RpmIconUI_eventSetIconTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmIconUI_SetIconTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URpmIconUI Function SetIconTexture

// Begin Class URpmIconUI
void URpmIconUI::StaticRegisterNativesURpmIconUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmIconUI);
UClass* Z_Construct_UClass_URpmIconUI_NoRegister()
{
	return URpmIconUI::StaticClass();
}
struct Z_Construct_UClass_URpmIconUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmIconUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmIconUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmIconUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmIconUI_SetIconTexture, "SetIconTexture" }, // 983133192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmIconUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URpmIconUI_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmIconUI, IconSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSize_MetaData), NewProp_IconSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmIconUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmIconUI_Statics::NewProp_IconSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmIconUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URpmIconUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmIconUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmIconUI_Statics::ClassParams = {
	&URpmIconUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URpmIconUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URpmIconUI_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmIconUI_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmIconUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URpmIconUI()
{
	if (!Z_Registration_Info_UClass_URpmIconUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmIconUI.OuterSingleton, Z_Construct_UClass_URpmIconUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URpmIconUI.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmIconUI>()
{
	return URpmIconUI::StaticClass();
}
URpmIconUI::URpmIconUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URpmIconUI);
URpmIconUI::~URpmIconUI() {}
// End Class URpmIconUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URpmIconUI, URpmIconUI::StaticClass, TEXT("URpmIconUI"), &Z_Registration_Info_UClass_URpmIconUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmIconUI), 2004325418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_875669123(TEXT("/Script/RpmAvatarCreator"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
