// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmAvatarCreatorFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References

// Begin Class URpmAvatarCreatorFunctionLibrary Function GetAvatarUrl
struct Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics
{
	struct RpmAvatarCreatorFunctionLibrary_eventGetAvatarUrl_Parms
	{
		FString AvatarId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get avatar Url from avatar id. */" },
#endif
		{ "DisplayName", "Get Avatar Url From Avatar Id" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get avatar Url from avatar id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarCreatorFunctionLibrary_eventGetAvatarUrl_Parms, AvatarId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarId_MetaData), NewProp_AvatarId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarCreatorFunctionLibrary_eventGetAvatarUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::NewProp_AvatarId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary, nullptr, "GetAvatarUrl", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::RpmAvatarCreatorFunctionLibrary_eventGetAvatarUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::RpmAvatarCreatorFunctionLibrary_eventGetAvatarUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarCreatorFunctionLibrary::execGetAvatarUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URpmAvatarCreatorFunctionLibrary::GetAvatarUrl(Z_Param_AvatarId);
	P_NATIVE_END;
}
// End Class URpmAvatarCreatorFunctionLibrary Function GetAvatarUrl

// Begin Class URpmAvatarCreatorFunctionLibrary Function GetBase64String
struct Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics
{
	struct RpmAvatarCreatorFunctionLibrary_eventGetBase64String_Parms
	{
		UTextureRenderTarget2D* TextureRenderTarget;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the Base64 string of the image in the Render Target. */" },
#endif
		{ "DisplayName", "Get Base64 String From Render Target" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Base64 string of the image in the Render Target." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarCreatorFunctionLibrary_eventGetBase64String_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarCreatorFunctionLibrary_eventGetBase64String_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::NewProp_TextureRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary, nullptr, "GetBase64String", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::RpmAvatarCreatorFunctionLibrary_eventGetBase64String_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::RpmAvatarCreatorFunctionLibrary_eventGetBase64String_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarCreatorFunctionLibrary::execGetBase64String)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URpmAvatarCreatorFunctionLibrary::GetBase64String(Z_Param_TextureRenderTarget);
	P_NATIVE_END;
}
// End Class URpmAvatarCreatorFunctionLibrary Function GetBase64String

// Begin Class URpmAvatarCreatorFunctionLibrary Function GetSkeletalMeshFromComponent
struct Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics
{
	struct RpmAvatarCreatorFunctionLibrary_eventGetSkeletalMeshFromComponent_Parms
	{
		const USkeletalMeshComponent* Component;
		USkeletalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get skeletal mesh from the skeletal mesh component. */" },
#endif
		{ "DisplayName", "Get Skeletal Mesh From Component" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get skeletal mesh from the skeletal mesh component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarCreatorFunctionLibrary_eventGetSkeletalMeshFromComponent_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarCreatorFunctionLibrary_eventGetSkeletalMeshFromComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary, nullptr, "GetSkeletalMeshFromComponent", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::RpmAvatarCreatorFunctionLibrary_eventGetSkeletalMeshFromComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::RpmAvatarCreatorFunctionLibrary_eventGetSkeletalMeshFromComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URpmAvatarCreatorFunctionLibrary::execGetSkeletalMeshFromComponent)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMesh**)Z_Param__Result=URpmAvatarCreatorFunctionLibrary::GetSkeletalMeshFromComponent(Z_Param_Component);
	P_NATIVE_END;
}
// End Class URpmAvatarCreatorFunctionLibrary Function GetSkeletalMeshFromComponent

// Begin Class URpmAvatarCreatorFunctionLibrary
void URpmAvatarCreatorFunctionLibrary::StaticRegisterNativesURpmAvatarCreatorFunctionLibrary()
{
	UClass* Class = URpmAvatarCreatorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvatarUrl", &URpmAvatarCreatorFunctionLibrary::execGetAvatarUrl },
		{ "GetBase64String", &URpmAvatarCreatorFunctionLibrary::execGetBase64String },
		{ "GetSkeletalMeshFromComponent", &URpmAvatarCreatorFunctionLibrary::execGetSkeletalMeshFromComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmAvatarCreatorFunctionLibrary);
UClass* Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_NoRegister()
{
	return URpmAvatarCreatorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Static functions to be used from the blueprint.\n */" },
#endif
		{ "IncludePath", "RpmAvatarCreatorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static functions to be used from the blueprint." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetAvatarUrl, "GetAvatarUrl" }, // 3495221029
		{ &Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetBase64String, "GetBase64String" }, // 578844591
		{ &Z_Construct_UFunction_URpmAvatarCreatorFunctionLibrary_GetSkeletalMeshFromComponent, "GetSkeletalMeshFromComponent" }, // 3675305742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmAvatarCreatorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_Statics::ClassParams = {
	&URpmAvatarCreatorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_URpmAvatarCreatorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmAvatarCreatorFunctionLibrary.OuterSingleton, Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URpmAvatarCreatorFunctionLibrary.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmAvatarCreatorFunctionLibrary>()
{
	return URpmAvatarCreatorFunctionLibrary::StaticClass();
}
URpmAvatarCreatorFunctionLibrary::URpmAvatarCreatorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URpmAvatarCreatorFunctionLibrary);
URpmAvatarCreatorFunctionLibrary::~URpmAvatarCreatorFunctionLibrary() {}
// End Class URpmAvatarCreatorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URpmAvatarCreatorFunctionLibrary, URpmAvatarCreatorFunctionLibrary::StaticClass, TEXT("URpmAvatarCreatorFunctionLibrary"), &Z_Registration_Info_UClass_URpmAvatarCreatorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmAvatarCreatorFunctionLibrary), 1107681565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorFunctionLibrary_h_1719690629(TEXT("/Script/RpmAvatarCreator"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
