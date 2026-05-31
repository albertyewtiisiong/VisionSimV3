// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmBadgeIconUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmBadgeIconUI() {}

// Begin Cross Module References
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmBadgeIconUI();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmBadgeIconUI_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI();
UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References

// Begin Class URpmBadgeIconUI
void URpmBadgeIconUI::StaticRegisterNativesURpmBadgeIconUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmBadgeIconUI);
UClass* Z_Construct_UClass_URpmBadgeIconUI_NoRegister()
{
	return URpmBadgeIconUI::StaticClass();
}
struct Z_Construct_UClass_URpmBadgeIconUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmBadgeIconUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmBadgeIconUI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmBadgeIconUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URpmBadgeIconUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URpmIconUI,
	(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmBadgeIconUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmBadgeIconUI_Statics::ClassParams = {
	&URpmBadgeIconUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmBadgeIconUI_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmBadgeIconUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URpmBadgeIconUI()
{
	if (!Z_Registration_Info_UClass_URpmBadgeIconUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmBadgeIconUI.OuterSingleton, Z_Construct_UClass_URpmBadgeIconUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URpmBadgeIconUI.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmBadgeIconUI>()
{
	return URpmBadgeIconUI::StaticClass();
}
URpmBadgeIconUI::URpmBadgeIconUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URpmBadgeIconUI);
URpmBadgeIconUI::~URpmBadgeIconUI() {}
// End Class URpmBadgeIconUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmBadgeIconUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URpmBadgeIconUI, URpmBadgeIconUI::StaticClass, TEXT("URpmBadgeIconUI"), &Z_Registration_Info_UClass_URpmBadgeIconUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmBadgeIconUI), 2539940383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmBadgeIconUI_h_2427923193(TEXT("/Script/RpmAvatarCreator"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmBadgeIconUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmBadgeIconUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
