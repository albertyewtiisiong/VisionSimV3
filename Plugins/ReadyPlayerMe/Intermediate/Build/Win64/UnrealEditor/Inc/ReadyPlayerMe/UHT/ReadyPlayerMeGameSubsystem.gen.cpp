// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeGameSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeGameSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem_NoRegister();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References

// Begin Class UReadyPlayerMeGameSubsystem
void UReadyPlayerMeGameSubsystem::StaticRegisterNativesUReadyPlayerMeGameSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeGameSubsystem);
UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem_NoRegister()
{
	return UReadyPlayerMeGameSubsystem::StaticClass();
}
struct Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ReadyPlayerMeGameSubsystem.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGameSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryCache_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGameSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeGameSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::NewProp_MemoryCache = { "MemoryCache", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeGameSubsystem, MemoryCache), Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryCache_MetaData), NewProp_MemoryCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::NewProp_MemoryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::ClassParams = {
	&UReadyPlayerMeGameSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem()
{
	if (!Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem.OuterSingleton;
}
template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeGameSubsystem>()
{
	return UReadyPlayerMeGameSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeGameSubsystem);
UReadyPlayerMeGameSubsystem::~UReadyPlayerMeGameSubsystem() {}
// End Class UReadyPlayerMeGameSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeGameSubsystem, UReadyPlayerMeGameSubsystem::StaticClass, TEXT("UReadyPlayerMeGameSubsystem"), &Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeGameSubsystem), 4119584511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_3821263945(TEXT("/Script/ReadyPlayerMe"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
