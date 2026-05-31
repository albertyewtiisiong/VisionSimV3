// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeAvatarConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeAvatarConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig();
READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod();
READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget();
READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose();
READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas();
READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel();
READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit();
READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup();
UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References

// Begin Enum EAvatarPose
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarPose;
static UEnum* EAvatarPose_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAvatarPose.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAvatarPose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarPose"));
	}
	return Z_Registration_Info_UEnum_EAvatarPose.OuterSingleton;
}
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarPose>()
{
	return EAvatarPose_StaticEnum();
}
struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "APose.DisplayName", "A-Pose" },
		{ "APose.Name", "EAvatarPose::APose" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
		{ "TPose.DisplayName", "T-Pose" },
		{ "TPose.Name", "EAvatarPose::TPose" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAvatarPose::APose", (int64)EAvatarPose::APose },
		{ "EAvatarPose::TPose", (int64)EAvatarPose::TPose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	nullptr,
	"EAvatarPose",
	"EAvatarPose",
	Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose()
{
	if (!Z_Registration_Info_UEnum_EAvatarPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarPose.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAvatarPose.InnerSingleton;
}
// End Enum EAvatarPose

// Begin Enum EAvatarLod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarLod;
static UEnum* EAvatarLod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAvatarLod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAvatarLod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarLod"));
	}
	return Z_Registration_Info_UEnum_EAvatarLod.OuterSingleton;
}
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarLod>()
{
	return EAvatarLod_StaticEnum();
}
struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.DisplayName", "High (0)" },
		{ "High.Name", "EAvatarLod::High" },
		{ "Low.DisplayName", "Low (2)" },
		{ "Low.Name", "EAvatarLod::Low" },
		{ "Medium.DisplayName", "Medium (1)" },
		{ "Medium.Name", "EAvatarLod::Medium" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAvatarLod::High", (int64)EAvatarLod::High },
		{ "EAvatarLod::Medium", (int64)EAvatarLod::Medium },
		{ "EAvatarLod::Low", (int64)EAvatarLod::Low },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	nullptr,
	"EAvatarLod",
	"EAvatarLod",
	Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod()
{
	if (!Z_Registration_Info_UEnum_EAvatarLod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarLod.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAvatarLod.InnerSingleton;
}
// End Enum EAvatarLod

// Begin Enum EAvatarTextureAtlas
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarTextureAtlas;
static UEnum* EAvatarTextureAtlas_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAvatarTextureAtlas.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAvatarTextureAtlas.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarTextureAtlas"));
	}
	return Z_Registration_Info_UEnum_EAvatarTextureAtlas.OuterSingleton;
}
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureAtlas>()
{
	return EAvatarTextureAtlas_StaticEnum();
}
struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.DisplayName", "High (1024)" },
		{ "High.Name", "EAvatarTextureAtlas::High" },
		{ "Low.DisplayName", "Low (256)" },
		{ "Low.Name", "EAvatarTextureAtlas::Low" },
		{ "Medium.DisplayName", "Medium (512)" },
		{ "Medium.Name", "EAvatarTextureAtlas::Medium" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAvatarTextureAtlas::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAvatarTextureAtlas::None", (int64)EAvatarTextureAtlas::None },
		{ "EAvatarTextureAtlas::High", (int64)EAvatarTextureAtlas::High },
		{ "EAvatarTextureAtlas::Medium", (int64)EAvatarTextureAtlas::Medium },
		{ "EAvatarTextureAtlas::Low", (int64)EAvatarTextureAtlas::Low },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	nullptr,
	"EAvatarTextureAtlas",
	"EAvatarTextureAtlas",
	Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas()
{
	if (!Z_Registration_Info_UEnum_EAvatarTextureAtlas.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarTextureAtlas.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAvatarTextureAtlas.InnerSingleton;
}
// End Enum EAvatarTextureAtlas

// Begin Enum EAvatarTextureSizeLimit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarTextureSizeLimit;
static UEnum* EAvatarTextureSizeLimit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarTextureSizeLimit"));
	}
	return Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.OuterSingleton;
}
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureSizeLimit>()
{
	return EAvatarTextureSizeLimit_StaticEnum();
}
struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Limit_1024.DisplayName", "1024" },
		{ "Limit_1024.Name", "EAvatarTextureSizeLimit::Limit_1024" },
		{ "Limit_256.DisplayName", "256" },
		{ "Limit_256.Name", "EAvatarTextureSizeLimit::Limit_256" },
		{ "Limit_512.DisplayName", "512" },
		{ "Limit_512.Name", "EAvatarTextureSizeLimit::Limit_512" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAvatarTextureSizeLimit::Limit_1024", (int64)EAvatarTextureSizeLimit::Limit_1024 },
		{ "EAvatarTextureSizeLimit::Limit_512", (int64)EAvatarTextureSizeLimit::Limit_512 },
		{ "EAvatarTextureSizeLimit::Limit_256", (int64)EAvatarTextureSizeLimit::Limit_256 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	nullptr,
	"EAvatarTextureSizeLimit",
	"EAvatarTextureSizeLimit",
	Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit()
{
	if (!Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.InnerSingleton;
}
// End Enum EAvatarTextureSizeLimit

// Begin Enum EAvatarTextureChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarTextureChannel;
static UEnum* EAvatarTextureChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAvatarTextureChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAvatarTextureChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarTextureChannel"));
	}
	return Z_Registration_Info_UEnum_EAvatarTextureChannel.OuterSingleton;
}
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureChannel>()
{
	return EAvatarTextureChannel_StaticEnum();
}
struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BaseColor.DisplayName", "Base Color" },
		{ "BaseColor.Name", "EAvatarTextureChannel::BaseColor" },
		{ "BlueprintType", "true" },
		{ "Emissive.DisplayName", "Emissive" },
		{ "Emissive.Name", "EAvatarTextureChannel::Emissive" },
		{ "MetallicRoughness.DisplayName", "Metallic Roughness" },
		{ "MetallicRoughness.Name", "EAvatarTextureChannel::MetallicRoughness" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EAvatarTextureChannel::Normal" },
		{ "Occlusion.DisplayName", "Occlusion" },
		{ "Occlusion.Name", "EAvatarTextureChannel::Occlusion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAvatarTextureChannel::BaseColor", (int64)EAvatarTextureChannel::BaseColor },
		{ "EAvatarTextureChannel::Normal", (int64)EAvatarTextureChannel::Normal },
		{ "EAvatarTextureChannel::MetallicRoughness", (int64)EAvatarTextureChannel::MetallicRoughness },
		{ "EAvatarTextureChannel::Emissive", (int64)EAvatarTextureChannel::Emissive },
		{ "EAvatarTextureChannel::Occlusion", (int64)EAvatarTextureChannel::Occlusion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	nullptr,
	"EAvatarTextureChannel",
	"EAvatarTextureChannel",
	Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel()
{
	if (!Z_Registration_Info_UEnum_EAvatarTextureChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarTextureChannel.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAvatarTextureChannel.InnerSingleton;
}
// End Enum EAvatarTextureChannel

// Begin Class UReadyPlayerMeAvatarConfig
void UReadyPlayerMeAvatarConfig::StaticRegisterNativesUReadyPlayerMeAvatarConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeAvatarConfig);
UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister()
{
	return UReadyPlayerMeAvatarConfig::StaticClass();
}
struct Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base data asset class that provides configuration for the avatar loader.\n * For customization create a blueprint data asset subclass. \n */" },
#endif
		{ "IncludePath", "ReadyPlayerMeAvatarConfig.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base data asset class that provides configuration for the avatar loader.\nFor customization create a blueprint data asset subclass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lod_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh Level of detail. The avatar with high LOD is detailed, but at the same time heavier to load. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh Level of detail. The avatar with high LOD is detailed, but at the same time heavier to load." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Avatar Pose. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Avatar Pose." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAtlas_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** By enabling texture atlas the textures will be merged into a single texture.\n\x09 * With the texture atlas enabled the avatar will be rendered with a single draw call. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By enabling texture atlas the textures will be merged into a single texture.\nWith the texture atlas enabled the avatar will be rendered with a single draw call." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSizeLimit_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Provides ability to change the texture size. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides ability to change the texture size." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureChannels_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Provides ability to select the texture channels that need to be included in the avatar */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides ability to select the texture channels that need to be included in the avatar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHands_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set to true the hands of the avatars will be included. This property applies only to the half-body avatars. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true the hands of the avatars will be included. This property applies only to the half-body avatars." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMeshOptCompression_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If set to true the avatar will be compressed with the Mesh-Opt compression.\n\x09 * Mesh-Opt compression will effectively reduce the size of the avatar by compressing the mesh geometry.\n\x09 *\n\x09 * @note Currently Mesh-Opt compression only works when the `TextureAtlas` property is set.\n\x09 * @note Mesh-Opt compression should not be used along with the Draco compression.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true the avatar will be compressed with the Mesh-Opt compression.\nMesh-Opt compression will effectively reduce the size of the avatar by compressing the mesh geometry.\n\n@note Currently Mesh-Opt compression only works when the `TextureAtlas` property is set.\n@note Mesh-Opt compression should not be used along with the Draco compression." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDracoMeshCompression_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If set to true the avatar will be compressed with the Draco mesh compression.\n\x09 *\n\x09 * @note If the glTFRuntimeDraco plugin is not listed as a project dependency, this property will be ignored.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true the avatar will be compressed with the Draco mesh compression.\n\n@note If the glTFRuntimeDraco plugin is not listed as a project dependency, this property will be ignored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetGroups_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The selected morph target groups (blend shapes) will be included in the avatar. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The selected morph target groups (blend shapes) will be included in the avatar." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The selected morph targets (blend shapes) will be included in the avatar. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The selected morph targets (blend shapes) will be included in the avatar." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Lod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Lod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Pose_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureAtlas_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureAtlas;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureSizeLimit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureSizeLimit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureChannels_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureChannels_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TextureChannels;
	static void NewProp_bUseHands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHands;
	static void NewProp_bUseMeshOptCompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMeshOptCompression;
	static void NewProp_bUseDracoMeshCompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDracoMeshCompression;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MorphTargetGroups_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MorphTargetGroups_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MorphTargetGroups;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MorphTargets_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MorphTargets_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MorphTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeAvatarConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod = { "Lod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, Lod), Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lod_MetaData), NewProp_Lod_MetaData) }; // 1171310905
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, Pose), Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 1922684925
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas = { "TextureAtlas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, TextureAtlas), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAtlas_MetaData), NewProp_TextureAtlas_MetaData) }; // 959312709
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit = { "TextureSizeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, TextureSizeLimit), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSizeLimit_MetaData), NewProp_TextureSizeLimit_MetaData) }; // 2455206208
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp = { "TextureChannels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel, METADATA_PARAMS(0, nullptr) }; // 1933603668
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels = { "TextureChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, TextureChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureChannels_MetaData), NewProp_TextureChannels_MetaData) }; // 1933603668
void Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands_SetBit(void* Obj)
{
	((UReadyPlayerMeAvatarConfig*)Obj)->bUseHands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands = { "bUseHands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeAvatarConfig), &Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHands_MetaData), NewProp_bUseHands_MetaData) };
void Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression_SetBit(void* Obj)
{
	((UReadyPlayerMeAvatarConfig*)Obj)->bUseMeshOptCompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression = { "bUseMeshOptCompression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeAvatarConfig), &Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMeshOptCompression_MetaData), NewProp_bUseMeshOptCompression_MetaData) };
void Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression_SetBit(void* Obj)
{
	((UReadyPlayerMeAvatarConfig*)Obj)->bUseDracoMeshCompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression = { "bUseDracoMeshCompression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeAvatarConfig), &Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDracoMeshCompression_MetaData), NewProp_bUseDracoMeshCompression_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp = { "MorphTargetGroups", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup, METADATA_PARAMS(0, nullptr) }; // 585170515
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups = { "MorphTargetGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, MorphTargetGroups), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetGroups_MetaData), NewProp_MorphTargetGroups_MetaData) }; // 585170515
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp = { "MorphTargets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget, METADATA_PARAMS(0, nullptr) }; // 3286224117
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, MorphTargets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargets_MetaData), NewProp_MorphTargets_MetaData) }; // 3286224117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::ClassParams = {
	&UReadyPlayerMeAvatarConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig()
{
	if (!Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig.OuterSingleton;
}
template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeAvatarConfig>()
{
	return UReadyPlayerMeAvatarConfig::StaticClass();
}
UReadyPlayerMeAvatarConfig::UReadyPlayerMeAvatarConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeAvatarConfig);
UReadyPlayerMeAvatarConfig::~UReadyPlayerMeAvatarConfig() {}
// End Class UReadyPlayerMeAvatarConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAvatarPose_StaticEnum, TEXT("EAvatarPose"), &Z_Registration_Info_UEnum_EAvatarPose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1922684925U) },
		{ EAvatarLod_StaticEnum, TEXT("EAvatarLod"), &Z_Registration_Info_UEnum_EAvatarLod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1171310905U) },
		{ EAvatarTextureAtlas_StaticEnum, TEXT("EAvatarTextureAtlas"), &Z_Registration_Info_UEnum_EAvatarTextureAtlas, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 959312709U) },
		{ EAvatarTextureSizeLimit_StaticEnum, TEXT("EAvatarTextureSizeLimit"), &Z_Registration_Info_UEnum_EAvatarTextureSizeLimit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2455206208U) },
		{ EAvatarTextureChannel_StaticEnum, TEXT("EAvatarTextureChannel"), &Z_Registration_Info_UEnum_EAvatarTextureChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1933603668U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeAvatarConfig, UReadyPlayerMeAvatarConfig::StaticClass, TEXT("UReadyPlayerMeAvatarConfig"), &Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeAvatarConfig), 1485930304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_2318668111(TEXT("/Script/ReadyPlayerMe"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
