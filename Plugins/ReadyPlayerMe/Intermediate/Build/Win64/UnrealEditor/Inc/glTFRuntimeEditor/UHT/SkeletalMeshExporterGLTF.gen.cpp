// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/glTFRuntimeEditor/Public/SkeletalMeshExporterGLTF.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshExporterGLTF() {}

// Begin Cross Module References
GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF();
GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF_NoRegister();
GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletonExporterGLTF();
UPackage* Z_Construct_UPackage__Script_glTFRuntimeEditor();
// End Cross Module References

// Begin Class USkeletalMeshExporterGLTF
void USkeletalMeshExporterGLTF::StaticRegisterNativesUSkeletalMeshExporterGLTF()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshExporterGLTF);
UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF_NoRegister()
{
	return USkeletalMeshExporterGLTF::StaticClass();
}
struct Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SkeletalMeshExporterGLTF.h" },
		{ "ModuleRelativePath", "Public/SkeletalMeshExporterGLTF.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshExporterGLTF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletonExporterGLTF,
	(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::ClassParams = {
	&USkeletalMeshExporterGLTF::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF()
{
	if (!Z_Registration_Info_UClass_USkeletalMeshExporterGLTF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshExporterGLTF.OuterSingleton, Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMeshExporterGLTF.OuterSingleton;
}
template<> GLTFRUNTIMEEDITOR_API UClass* StaticClass<USkeletalMeshExporterGLTF>()
{
	return USkeletalMeshExporterGLTF::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshExporterGLTF);
USkeletalMeshExporterGLTF::~USkeletalMeshExporterGLTF() {}
// End Class USkeletalMeshExporterGLTF

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshExporterGLTF, USkeletalMeshExporterGLTF::StaticClass, TEXT("USkeletalMeshExporterGLTF"), &Z_Registration_Info_UClass_USkeletalMeshExporterGLTF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshExporterGLTF), 3042529154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_1673073668(TEXT("/Script/glTFRuntimeEditor"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
