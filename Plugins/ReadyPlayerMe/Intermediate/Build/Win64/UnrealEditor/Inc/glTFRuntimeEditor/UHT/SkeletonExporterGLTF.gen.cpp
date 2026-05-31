// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/glTFRuntimeEditor/Public/SkeletonExporterGLTF.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletonExporterGLTF() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UExporter();
GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletonExporterGLTF();
GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletonExporterGLTF_NoRegister();
UPackage* Z_Construct_UPackage__Script_glTFRuntimeEditor();
// End Cross Module References

// Begin Class USkeletonExporterGLTF
void USkeletonExporterGLTF::StaticRegisterNativesUSkeletonExporterGLTF()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletonExporterGLTF);
UClass* Z_Construct_UClass_USkeletonExporterGLTF_NoRegister()
{
	return USkeletonExporterGLTF::StaticClass();
}
struct Z_Construct_UClass_USkeletonExporterGLTF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SkeletonExporterGLTF.h" },
		{ "ModuleRelativePath", "Public/SkeletonExporterGLTF.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletonExporterGLTF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkeletonExporterGLTF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonExporterGLTF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletonExporterGLTF_Statics::ClassParams = {
	&USkeletonExporterGLTF::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonExporterGLTF_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletonExporterGLTF_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletonExporterGLTF()
{
	if (!Z_Registration_Info_UClass_USkeletonExporterGLTF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletonExporterGLTF.OuterSingleton, Z_Construct_UClass_USkeletonExporterGLTF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletonExporterGLTF.OuterSingleton;
}
template<> GLTFRUNTIMEEDITOR_API UClass* StaticClass<USkeletonExporterGLTF>()
{
	return USkeletonExporterGLTF::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletonExporterGLTF);
USkeletonExporterGLTF::~USkeletonExporterGLTF() {}
// End Class USkeletonExporterGLTF

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletonExporterGLTF, USkeletonExporterGLTF::StaticClass, TEXT("USkeletonExporterGLTF"), &Z_Registration_Info_UClass_USkeletonExporterGLTF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletonExporterGLTF), 2963179423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_1928579385(TEXT("/Script/glTFRuntimeEditor"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
