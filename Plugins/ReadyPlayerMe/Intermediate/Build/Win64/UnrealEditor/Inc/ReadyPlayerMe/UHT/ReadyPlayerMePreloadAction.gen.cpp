// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMePreloadAction.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeTypes.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMePreloadAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_NoRegister();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction_NoRegister();
READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature();
READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata();
READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarPreloadData();
UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References

// Begin ScriptStruct FAvatarPreloadData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AvatarPreloadData;
class UScriptStruct* FAvatarPreloadData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarPreloadData, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("AvatarPreloadData"));
	}
	return Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FAvatarPreloadData>()
{
	return FAvatarPreloadData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAvatarPreloadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarIds_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarConfig_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoLodConfig_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvatarIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoLodConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarPreloadData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds_Inner = { "AvatarIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds = { "AvatarIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAvatarPreloadData, AvatarIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarIds_MetaData), NewProp_AvatarIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAvatarPreloadData, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarConfig_MetaData), NewProp_AvatarConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAvatarPreloadData, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSkeleton_MetaData), NewProp_TargetSkeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAvatarPreloadData, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshConfig_MetaData), NewProp_SkeletalMeshConfig_MetaData) }; // 3460635171
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AutoLodConfig = { "AutoLodConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAvatarPreloadData, AutoLodConfig), Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoLodConfig_MetaData), NewProp_AutoLodConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AutoLodConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	nullptr,
	&NewStructOps,
	"AvatarPreloadData",
	Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers),
	sizeof(FAvatarPreloadData),
	alignof(FAvatarPreloadData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAvatarPreloadData()
{
	if (!Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton, Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton;
}
// End ScriptStruct FAvatarPreloadData

// Begin Delegate FAvatarPreloadCompleted
struct Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "AvatarPreloadCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAvatarPreloadCompleted_DelegateWrapper(const FMulticastScriptDelegate& AvatarPreloadCompleted)
{
	AvatarPreloadCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAvatarPreloadCompleted

// Begin Class UReadyPlayerMePreloadAction Function OnAvatarDownloaded
struct Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics
{
	struct ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms
	{
		USkeletalMesh* SkeletalMesh;
		FAvatarMetadata Metadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 550156676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMePreloadAction, nullptr, "OnAvatarDownloaded", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMePreloadAction::execOnAvatarDownloaded)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
	P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAvatarDownloaded(Z_Param_SkeletalMesh,Z_Param_Out_Metadata);
	P_NATIVE_END;
}
// End Class UReadyPlayerMePreloadAction Function OnAvatarDownloaded

// Begin Class UReadyPlayerMePreloadAction Function OnAvatarLoadFailed
struct Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics
{
	struct ReadyPlayerMePreloadAction_eventOnAvatarLoadFailed_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventOnAvatarLoadFailed_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMePreloadAction, nullptr, "OnAvatarLoadFailed", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::ReadyPlayerMePreloadAction_eventOnAvatarLoadFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::ReadyPlayerMePreloadAction_eventOnAvatarLoadFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMePreloadAction::execOnAvatarLoadFailed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAvatarLoadFailed(Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// End Class UReadyPlayerMePreloadAction Function OnAvatarLoadFailed

// Begin Class UReadyPlayerMePreloadAction Function PreloadAvatarsAsync
struct Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics
{
	struct ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms
	{
		UObject* WorldContextObject;
		FAvatarPreloadData PreloadData;
		UReadyPlayerMePreloadAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PreloadData" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Preloads the avatar data so the avatars would be instantiated instantly when loading them from the ReadyPlayerMeComponent.\n\x09 * \n\x09 * @param WorldContextObject Object is passed automatically through the blueprint interface.\n\x09 * @param PreloadData List of avatar data needed for preloading.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preloads the avatar data so the avatars would be instantiated instantly when loading them from the ReadyPlayerMeComponent.\n\n@param WorldContextObject Object is passed automatically through the blueprint interface.\n@param PreloadData List of avatar data needed for preloading." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreloadData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_PreloadData = { "PreloadData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms, PreloadData), Z_Construct_UScriptStruct_FAvatarPreloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreloadData_MetaData), NewProp_PreloadData_MetaData) }; // 3542017680
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms, ReturnValue), Z_Construct_UClass_UReadyPlayerMePreloadAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_PreloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMePreloadAction, nullptr, "PreloadAvatarsAsync", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMePreloadAction::execPreloadAvatarsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FAvatarPreloadData,Z_Param_Out_PreloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UReadyPlayerMePreloadAction**)Z_Param__Result=UReadyPlayerMePreloadAction::PreloadAvatarsAsync(Z_Param_WorldContextObject,Z_Param_Out_PreloadData);
	P_NATIVE_END;
}
// End Class UReadyPlayerMePreloadAction Function PreloadAvatarsAsync

// Begin Class UReadyPlayerMePreloadAction
void UReadyPlayerMePreloadAction::StaticRegisterNativesUReadyPlayerMePreloadAction()
{
	UClass* Class = UReadyPlayerMePreloadAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAvatarDownloaded", &UReadyPlayerMePreloadAction::execOnAvatarDownloaded },
		{ "OnAvatarLoadFailed", &UReadyPlayerMePreloadAction::execOnAvatarLoadFailed },
		{ "PreloadAvatarsAsync", &UReadyPlayerMePreloadAction::execPreloadAvatarsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMePreloadAction);
UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction_NoRegister()
{
	return UReadyPlayerMePreloadAction::StaticClass();
}
struct Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Async action, responsible for preloading avatars in memory to be used in the same game session.\n */" },
#endif
		{ "IncludePath", "ReadyPlayerMePreloadAction.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Async action, responsible for preloading avatars in memory to be used in the same game session." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Success callback. Called when the avatars are preloaded. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Success callback. Called when the avatars are preloaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Failure callback. If the preload operation fails, the failure callback will be called. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failure callback. If the preload operation fails, the failure callback will be called." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarLoaders_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarLoaders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarLoaders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AvatarLoaders;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded, "OnAvatarDownloaded" }, // 4255787900
		{ &Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed, "OnAvatarLoadFailed" }, // 2863676986
		{ &Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync, "PreloadAvatarsAsync" }, // 415242332
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMePreloadAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, OnCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1940989100
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, OnFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 1940989100
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_ValueProp = { "AvatarLoaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_Key_KeyProp = { "AvatarLoaders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders = { "AvatarLoaders", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, AvatarLoaders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarLoaders_MetaData), NewProp_AvatarLoaders_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_MemoryCache = { "MemoryCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, MemoryCache), Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryCache_MetaData), NewProp_MemoryCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_MemoryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::ClassParams = {
	&UReadyPlayerMePreloadAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction()
{
	if (!Z_Registration_Info_UClass_UReadyPlayerMePreloadAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMePreloadAction.OuterSingleton, Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadyPlayerMePreloadAction.OuterSingleton;
}
template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMePreloadAction>()
{
	return UReadyPlayerMePreloadAction::StaticClass();
}
UReadyPlayerMePreloadAction::UReadyPlayerMePreloadAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMePreloadAction);
UReadyPlayerMePreloadAction::~UReadyPlayerMePreloadAction() {}
// End Class UReadyPlayerMePreloadAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAvatarPreloadData::StaticStruct, Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewStructOps, TEXT("AvatarPreloadData"), &Z_Registration_Info_UScriptStruct_AvatarPreloadData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAvatarPreloadData), 3542017680U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMePreloadAction, UReadyPlayerMePreloadAction::StaticClass, TEXT("UReadyPlayerMePreloadAction"), &Z_Registration_Info_UClass_UReadyPlayerMePreloadAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMePreloadAction), 3041472227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_1144410349(TEXT("/Script/ReadyPlayerMe"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
