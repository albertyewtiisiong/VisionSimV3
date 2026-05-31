// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/RpmUserDataSaveGame.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmUserDataSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmUserDataSaveGame();
RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmUserDataSaveGame_NoRegister();
RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmUserData();
UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References

// Begin Class URpmUserDataSaveGame
void URpmUserDataSaveGame::StaticRegisterNativesURpmUserDataSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmUserDataSaveGame);
UClass* Z_Construct_UClass_URpmUserDataSaveGame_NoRegister()
{
	return URpmUserDataSaveGame::StaticClass();
}
struct Z_Construct_UClass_URpmUserDataSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RpmUserDataSaveGame.h" },
		{ "ModuleRelativePath", "Public/RpmUserDataSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmUserDataSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmUserDataSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URpmUserDataSaveGame_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmUserDataSaveGame, UserData), Z_Construct_UScriptStruct_FRpmUserData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserData_MetaData), NewProp_UserData_MetaData) }; // 419062999
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmUserDataSaveGame_Statics::NewProp_UserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URpmUserDataSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmUserDataSaveGame_Statics::ClassParams = {
	&URpmUserDataSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmUserDataSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URpmUserDataSaveGame()
{
	if (!Z_Registration_Info_UClass_URpmUserDataSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmUserDataSaveGame.OuterSingleton, Z_Construct_UClass_URpmUserDataSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URpmUserDataSaveGame.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmUserDataSaveGame>()
{
	return URpmUserDataSaveGame::StaticClass();
}
URpmUserDataSaveGame::URpmUserDataSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URpmUserDataSaveGame);
URpmUserDataSaveGame::~URpmUserDataSaveGame() {}
// End Class URpmUserDataSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URpmUserDataSaveGame, URpmUserDataSaveGame::StaticClass, TEXT("URpmUserDataSaveGame"), &Z_Registration_Info_UClass_URpmUserDataSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmUserDataSaveGame), 1476355664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_1047532411(TEXT("/Script/RpmAvatarCreator"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
