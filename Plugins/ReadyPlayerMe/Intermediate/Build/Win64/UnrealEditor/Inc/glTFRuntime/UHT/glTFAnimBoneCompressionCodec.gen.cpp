// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/glTFRuntime/Public/glTFAnimBoneCompressionCodec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFAnimBoneCompressionCodec() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFAnimBoneCompressionCodec();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFAnimBoneCompressionCodec_NoRegister();
UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References

// Begin Class UglTFAnimBoneCompressionCodec
void UglTFAnimBoneCompressionCodec::StaticRegisterNativesUglTFAnimBoneCompressionCodec()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFAnimBoneCompressionCodec);
UClass* Z_Construct_UClass_UglTFAnimBoneCompressionCodec_NoRegister()
{
	return UglTFAnimBoneCompressionCodec::StaticClass();
}
struct Z_Construct_UClass_UglTFAnimBoneCompressionCodec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "glTFAnimBoneCompressionCodec.h" },
		{ "ModuleRelativePath", "Public/glTFAnimBoneCompressionCodec.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFAnimBoneCompressionCodec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UglTFAnimBoneCompressionCodec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec,
	(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFAnimBoneCompressionCodec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFAnimBoneCompressionCodec_Statics::ClassParams = {
	&UglTFAnimBoneCompressionCodec::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFAnimBoneCompressionCodec_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFAnimBoneCompressionCodec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UglTFAnimBoneCompressionCodec()
{
	if (!Z_Registration_Info_UClass_UglTFAnimBoneCompressionCodec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFAnimBoneCompressionCodec.OuterSingleton, Z_Construct_UClass_UglTFAnimBoneCompressionCodec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UglTFAnimBoneCompressionCodec.OuterSingleton;
}
template<> GLTFRUNTIME_API UClass* StaticClass<UglTFAnimBoneCompressionCodec>()
{
	return UglTFAnimBoneCompressionCodec::StaticClass();
}
UglTFAnimBoneCompressionCodec::UglTFAnimBoneCompressionCodec(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFAnimBoneCompressionCodec);
UglTFAnimBoneCompressionCodec::~UglTFAnimBoneCompressionCodec() {}
// End Class UglTFAnimBoneCompressionCodec

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFAnimBoneCompressionCodec_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UglTFAnimBoneCompressionCodec, UglTFAnimBoneCompressionCodec::StaticClass, TEXT("UglTFAnimBoneCompressionCodec"), &Z_Registration_Info_UClass_UglTFAnimBoneCompressionCodec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFAnimBoneCompressionCodec), 3454552711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFAnimBoneCompressionCodec_h_78812842(TEXT("/Script/glTFRuntime"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFAnimBoneCompressionCodec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFAnimBoneCompressionCodec_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
