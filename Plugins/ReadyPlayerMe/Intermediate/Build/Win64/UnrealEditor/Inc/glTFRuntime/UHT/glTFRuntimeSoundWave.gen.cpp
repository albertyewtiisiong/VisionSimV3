// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeSoundWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeSoundWave() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundWave();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeSoundWave();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeSoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References

// Begin Class UglTFRuntimeSoundWave
void UglTFRuntimeSoundWave::StaticRegisterNativesUglTFRuntimeSoundWave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeSoundWave);
UClass* Z_Construct_UClass_UglTFRuntimeSoundWave_NoRegister()
{
	return UglTFRuntimeSoundWave::StaticClass();
}
struct Z_Construct_UClass_UglTFRuntimeSoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "glTFRuntimeSoundWave.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeSoundWave.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeSoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UglTFRuntimeSoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWave,
	(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeSoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeSoundWave_Statics::ClassParams = {
	&UglTFRuntimeSoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeSoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFRuntimeSoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UglTFRuntimeSoundWave()
{
	if (!Z_Registration_Info_UClass_UglTFRuntimeSoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeSoundWave.OuterSingleton, Z_Construct_UClass_UglTFRuntimeSoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UglTFRuntimeSoundWave.OuterSingleton;
}
template<> GLTFRUNTIME_API UClass* StaticClass<UglTFRuntimeSoundWave>()
{
	return UglTFRuntimeSoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeSoundWave);
UglTFRuntimeSoundWave::~UglTFRuntimeSoundWave() {}
// End Class UglTFRuntimeSoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeSoundWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeSoundWave, UglTFRuntimeSoundWave::StaticClass, TEXT("UglTFRuntimeSoundWave"), &Z_Registration_Info_UClass_UglTFRuntimeSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeSoundWave), 3546844630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeSoundWave_h_331938405(TEXT("/Script/glTFRuntime"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeSoundWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
