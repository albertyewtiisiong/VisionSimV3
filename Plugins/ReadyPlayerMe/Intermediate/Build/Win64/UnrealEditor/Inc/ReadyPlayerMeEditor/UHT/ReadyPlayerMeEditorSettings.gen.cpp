// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMeEditor/Public/ReadyPlayerMeEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeEditorSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings();
READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReadyPlayerMeEditor();
// End Cross Module References

// Begin Class UReadyPlayerMeEditorSettings
void UReadyPlayerMeEditorSettings::StaticRegisterNativesUReadyPlayerMeEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeEditorSettings);
UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings_NoRegister()
{
	return UReadyPlayerMeEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Ready Player Me" },
		{ "IncludePath", "ReadyPlayerMeEditorSettings.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnalytics_MetaData[] = {
		{ "Category", "Privacy" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalyticsTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAnalytics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnalytics;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnalyticsTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_SetBit(void* Obj)
{
	((UReadyPlayerMeEditorSettings*)Obj)->bEnableAnalytics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics = { "bEnableAnalytics", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeEditorSettings), &Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAnalytics_MetaData), NewProp_bEnableAnalytics_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget = { "AnalyticsTarget", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeEditorSettings, AnalyticsTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalyticsTarget_MetaData), NewProp_AnalyticsTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::ClassParams = {
	&UReadyPlayerMeEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings()
{
	if (!Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton;
}
template<> READYPLAYERMEEDITOR_API UClass* StaticClass<UReadyPlayerMeEditorSettings>()
{
	return UReadyPlayerMeEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeEditorSettings);
UReadyPlayerMeEditorSettings::~UReadyPlayerMeEditorSettings() {}
// End Class UReadyPlayerMeEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeEditorSettings, UReadyPlayerMeEditorSettings::StaticClass, TEXT("UReadyPlayerMeEditorSettings"), &Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeEditorSettings), 202370474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_1851384789(TEXT("/Script/ReadyPlayerMeEditor"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
