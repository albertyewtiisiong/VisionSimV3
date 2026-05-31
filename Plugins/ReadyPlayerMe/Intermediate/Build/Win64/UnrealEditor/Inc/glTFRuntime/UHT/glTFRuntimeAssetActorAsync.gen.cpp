// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeAssetActorAsync.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeAssetActorAsync() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GLTFRUNTIME_API UClass* Z_Construct_UClass_AglTFRuntimeAssetActorAsync();
GLTFRUNTIME_API UClass* Z_Construct_UClass_AglTFRuntimeAssetActorAsync_NoRegister();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig();
UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References

// Begin Class AglTFRuntimeAssetActorAsync Function LoadSkeletalMeshAsync
struct Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics
{
	struct glTFRuntimeAssetActorAsync_eventLoadSkeletalMeshAsync_Parms
	{
		USkeletalMesh* SkeletalMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAssetActorAsync_eventLoadSkeletalMeshAsync_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::NewProp_SkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeAssetActorAsync, nullptr, "LoadSkeletalMeshAsync", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::glTFRuntimeAssetActorAsync_eventLoadSkeletalMeshAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::glTFRuntimeAssetActorAsync_eventLoadSkeletalMeshAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AglTFRuntimeAssetActorAsync::execLoadSkeletalMeshAsync)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSkeletalMeshAsync(Z_Param_SkeletalMesh);
	P_NATIVE_END;
}
// End Class AglTFRuntimeAssetActorAsync Function LoadSkeletalMeshAsync

// Begin Class AglTFRuntimeAssetActorAsync Function LoadStaticMeshAsync
struct Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics
{
	struct glTFRuntimeAssetActorAsync_eventLoadStaticMeshAsync_Parms
	{
		UStaticMesh* StaticMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAssetActorAsync_eventLoadStaticMeshAsync_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeAssetActorAsync, nullptr, "LoadStaticMeshAsync", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::glTFRuntimeAssetActorAsync_eventLoadStaticMeshAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::glTFRuntimeAssetActorAsync_eventLoadStaticMeshAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AglTFRuntimeAssetActorAsync::execLoadStaticMeshAsync)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadStaticMeshAsync(Z_Param_StaticMesh);
	P_NATIVE_END;
}
// End Class AglTFRuntimeAssetActorAsync Function LoadStaticMeshAsync

// Begin Class AglTFRuntimeAssetActorAsync Function ReceiveOnScenesLoaded
static FName NAME_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded = FName(TEXT("ReceiveOnScenesLoaded"));
void AglTFRuntimeAssetActorAsync::ReceiveOnScenesLoaded()
{
	ProcessEvent(FindFunctionChecked(NAME_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded),NULL);
}
struct Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "On Scenes Loaded" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeAssetActorAsync, nullptr, "ReceiveOnScenesLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AglTFRuntimeAssetActorAsync::execReceiveOnScenesLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveOnScenesLoaded_Implementation();
	P_NATIVE_END;
}
// End Class AglTFRuntimeAssetActorAsync Function ReceiveOnScenesLoaded

// Begin Class AglTFRuntimeAssetActorAsync
void AglTFRuntimeAssetActorAsync::StaticRegisterNativesAglTFRuntimeAssetActorAsync()
{
	UClass* Class = AglTFRuntimeAssetActorAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadSkeletalMeshAsync", &AglTFRuntimeAssetActorAsync::execLoadSkeletalMeshAsync },
		{ "LoadStaticMeshAsync", &AglTFRuntimeAssetActorAsync::execLoadStaticMeshAsync },
		{ "ReceiveOnScenesLoaded", &AglTFRuntimeAssetActorAsync::execReceiveOnScenesLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AglTFRuntimeAssetActorAsync);
UClass* Z_Construct_UClass_AglTFRuntimeAssetActorAsync_NoRegister()
{
	return AglTFRuntimeAssetActorAsync::StaticClass();
}
struct Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "glTFRuntimeAssetActorAsync.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWhileLoading_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshesAsSkeletal_MetaData[] = {
		{ "Category", "glTFRuntime" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "glTFRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAssetActorAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
	static void NewProp_bShowWhileLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWhileLoading;
	static void NewProp_bStaticMeshesAsSkeletal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshesAsSkeletal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadSkeletalMeshAsync, "LoadSkeletalMeshAsync" }, // 4108307078
		{ &Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_LoadStaticMeshAsync, "LoadStaticMeshAsync" }, // 2043981251
		{ &Z_Construct_UFunction_AglTFRuntimeAssetActorAsync_ReceiveOnScenesLoaded, "ReceiveOnScenesLoaded" }, // 2719084030
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AglTFRuntimeAssetActorAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActorAsync, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActorAsync, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshConfig_MetaData), NewProp_StaticMeshConfig_MetaData) }; // 4203145906
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0011008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActorAsync, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshConfig_MetaData), NewProp_SkeletalMeshConfig_MetaData) }; // 3460635171
void Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bShowWhileLoading_SetBit(void* Obj)
{
	((AglTFRuntimeAssetActorAsync*)Obj)->bShowWhileLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bShowWhileLoading = { "bShowWhileLoading", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActorAsync), &Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bShowWhileLoading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWhileLoading_MetaData), NewProp_bShowWhileLoading_MetaData) };
void Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bStaticMeshesAsSkeletal_SetBit(void* Obj)
{
	((AglTFRuntimeAssetActorAsync*)Obj)->bStaticMeshesAsSkeletal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bStaticMeshesAsSkeletal = { "bStaticMeshesAsSkeletal", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AglTFRuntimeAssetActorAsync), &Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bStaticMeshesAsSkeletal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticMeshesAsSkeletal_MetaData), NewProp_bStaticMeshesAsSkeletal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_AssetRoot = { "AssetRoot", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeAssetActorAsync, AssetRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetRoot_MetaData), NewProp_AssetRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_StaticMeshConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_SkeletalMeshConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bShowWhileLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_bStaticMeshesAsSkeletal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::NewProp_AssetRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::ClassParams = {
	&AglTFRuntimeAssetActorAsync::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AglTFRuntimeAssetActorAsync()
{
	if (!Z_Registration_Info_UClass_AglTFRuntimeAssetActorAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AglTFRuntimeAssetActorAsync.OuterSingleton, Z_Construct_UClass_AglTFRuntimeAssetActorAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AglTFRuntimeAssetActorAsync.OuterSingleton;
}
template<> GLTFRUNTIME_API UClass* StaticClass<AglTFRuntimeAssetActorAsync>()
{
	return AglTFRuntimeAssetActorAsync::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AglTFRuntimeAssetActorAsync);
AglTFRuntimeAssetActorAsync::~AglTFRuntimeAssetActorAsync() {}
// End Class AglTFRuntimeAssetActorAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAssetActorAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AglTFRuntimeAssetActorAsync, AglTFRuntimeAssetActorAsync::StaticClass, TEXT("AglTFRuntimeAssetActorAsync"), &Z_Registration_Info_UClass_AglTFRuntimeAssetActorAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AglTFRuntimeAssetActorAsync), 1741721400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAssetActorAsync_h_1051519509(TEXT("/Script/glTFRuntime"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAssetActorAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAssetActorAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
