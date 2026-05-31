// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeSettings();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeSettings_NoRegister();
READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarCacheSettings();
UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References

// Begin ScriptStruct FRpmAvatarCacheSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings;
class UScriptStruct* FRpmAvatarCacheSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("RpmAvatarCacheSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FRpmAvatarCacheSettings>()
{
	return FRpmAvatarCacheSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAvatarCaching_MetaData[] = {
		{ "Category", "Avatar Caching" },
		{ "DisplayName", "Enable Avatar Caching" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, the loaded avatars will be saved in the local storage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCacheCleaning_MetaData[] = {
		{ "Category", "Avatar Caching | Automated Cleanup" },
		{ "DisplayName", "Enable Automatic Avatar Cache Cleaning" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, the old avatars will be automatically removed if the number of the saved avatars exceeds the cached avatar limit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAvatarLimit_MetaData[] = {
		{ "Category", "Avatar Caching | Automated Cleanup" },
		{ "DisplayName", "Cached Avatar Limit" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The limit of the cached avatars, when the limit is exceeded and the automatic cleaning is enabled the old avatars will automatically be cleaned." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAvatarCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAvatarCaching;
	static void NewProp_bEnableAutomaticCacheCleaning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCacheCleaning;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedAvatarLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmAvatarCacheSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching_SetBit(void* Obj)
{
	((FRpmAvatarCacheSettings*)Obj)->bEnableAvatarCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching = { "bEnableAvatarCaching", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRpmAvatarCacheSettings), &Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAvatarCaching_MetaData), NewProp_bEnableAvatarCaching_MetaData) };
void Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning_SetBit(void* Obj)
{
	((FRpmAvatarCacheSettings*)Obj)->bEnableAutomaticCacheCleaning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning = { "bEnableAutomaticCacheCleaning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRpmAvatarCacheSettings), &Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutomaticCacheCleaning_MetaData), NewProp_bEnableAutomaticCacheCleaning_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_CachedAvatarLimit = { "CachedAvatarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRpmAvatarCacheSettings, CachedAvatarLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAvatarLimit_MetaData), NewProp_CachedAvatarLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_CachedAvatarLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	nullptr,
	&NewStructOps,
	"RpmAvatarCacheSettings",
	Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers),
	sizeof(FRpmAvatarCacheSettings),
	alignof(FRpmAvatarCacheSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarCacheSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.InnerSingleton, Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.InnerSingleton;
}
// End ScriptStruct FRpmAvatarCacheSettings

// Begin Class UReadyPlayerMeSettings
void UReadyPlayerMeSettings::StaticRegisterNativesUReadyPlayerMeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeSettings);
UClass* Z_Construct_UClass_UReadyPlayerMeSettings_NoRegister()
{
	return UReadyPlayerMeSettings::StaticClass();
}
struct Z_Construct_UClass_UReadyPlayerMeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Ready Player Me" },
		{ "IncludePath", "ReadyPlayerMeSettings.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "App ID" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The App ID is used to identify your application. You can find it in the Ready Player Me application dashboard in studio https://studio.readyplayer.me/applications." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subdomain_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Subdomain" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Subdomain is used to identify your application. You can find it in the Ready Player Me application dashboard in studio https://studio.readyplayer.me/applications." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepLoadedAvatarsInMemory_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Keep Loaded Avatars In Memory" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, the loaded avatars will be kept in the memory and will be reused afterwards." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarCacheSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Avatar Cache Settings" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for saving the avatars in the local storage." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Subdomain;
	static void NewProp_bKeepLoadedAvatarsInMemory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepLoadedAvatarsInMemory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarCacheSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeSettings, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain = { "Subdomain", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeSettings, Subdomain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subdomain_MetaData), NewProp_Subdomain_MetaData) };
void Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory_SetBit(void* Obj)
{
	((UReadyPlayerMeSettings*)Obj)->bKeepLoadedAvatarsInMemory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory = { "bKeepLoadedAvatarsInMemory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeSettings), &Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepLoadedAvatarsInMemory_MetaData), NewProp_bKeepLoadedAvatarsInMemory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AvatarCacheSettings = { "AvatarCacheSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeSettings, AvatarCacheSettings), Z_Construct_UScriptStruct_FRpmAvatarCacheSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarCacheSettings_MetaData), NewProp_AvatarCacheSettings_MetaData) }; // 130421305
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AvatarCacheSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReadyPlayerMeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::ClassParams = {
	&UReadyPlayerMeSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadyPlayerMeSettings()
{
	if (!Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton;
}
template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeSettings>()
{
	return UReadyPlayerMeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeSettings);
UReadyPlayerMeSettings::~UReadyPlayerMeSettings() {}
// End Class UReadyPlayerMeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRpmAvatarCacheSettings::StaticStruct, Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewStructOps, TEXT("RpmAvatarCacheSettings"), &Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmAvatarCacheSettings), 130421305U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeSettings, UReadyPlayerMeSettings::StaticClass, TEXT("UReadyPlayerMeSettings"), &Z_Registration_Info_UClass_UReadyPlayerMeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeSettings), 393443252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_1196749029(TEXT("/Script/ReadyPlayerMe"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
