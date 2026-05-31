// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMeEditor/Public/ReadyPlayerMeEditorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeEditorFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary();
READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_NoRegister();
READYPLAYERMEEDITOR_API UEnum* Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType();
UPackage* Z_Construct_UPackage__Script_ReadyPlayerMeEditor();
// End Cross Module References

// Begin Class UReadyPlayerMeEditorFunctionLibrary Function CloseEditorWidget
struct Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics
{
	struct ReadyPlayerMeEditorFunctionLibrary_eventCloseEditorWidget_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Close Editor Widget" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeEditorFunctionLibrary_eventCloseEditorWidget_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary, nullptr, "CloseEditorWidget", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::ReadyPlayerMeEditorFunctionLibrary_eventCloseEditorWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::ReadyPlayerMeEditorFunctionLibrary_eventCloseEditorWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeEditorFunctionLibrary::execCloseEditorWidget)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReadyPlayerMeEditorFunctionLibrary::CloseEditorWidget(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UReadyPlayerMeEditorFunctionLibrary Function CloseEditorWidget

// Begin Class UReadyPlayerMeEditorFunctionLibrary Function EnableAnalytics
struct Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_EnableAnalytics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Enable Analytics" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_EnableAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary, nullptr, "EnableAnalytics", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_EnableAnalytics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_EnableAnalytics_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_EnableAnalytics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_EnableAnalytics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeEditorFunctionLibrary::execEnableAnalytics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UReadyPlayerMeEditorFunctionLibrary::EnableAnalytics();
	P_NATIVE_END;
}
// End Class UReadyPlayerMeEditorFunctionLibrary Function EnableAnalytics

// Begin Class UReadyPlayerMeEditorFunctionLibrary Function GetSubdomain
struct Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics
{
	struct ReadyPlayerMeEditorFunctionLibrary_eventGetSubdomain_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get Subdomain" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeEditorFunctionLibrary_eventGetSubdomain_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary, nullptr, "GetSubdomain", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::ReadyPlayerMeEditorFunctionLibrary_eventGetSubdomain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::ReadyPlayerMeEditorFunctionLibrary_eventGetSubdomain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeEditorFunctionLibrary::execGetSubdomain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UReadyPlayerMeEditorFunctionLibrary::GetSubdomain();
	P_NATIVE_END;
}
// End Class UReadyPlayerMeEditorFunctionLibrary Function GetSubdomain

// Begin Class UReadyPlayerMeEditorFunctionLibrary Function LoadQuickStartLevel
struct Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics
{
	struct ReadyPlayerMeEditorFunctionLibrary_eventLoadQuickStartLevel_Parms
	{
		FString LevelPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Load Quick Start Level" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeEditorFunctionLibrary_eventLoadQuickStartLevel_Parms, LevelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelPath_MetaData), NewProp_LevelPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::NewProp_LevelPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary, nullptr, "LoadQuickStartLevel", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::ReadyPlayerMeEditorFunctionLibrary_eventLoadQuickStartLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::ReadyPlayerMeEditorFunctionLibrary_eventLoadQuickStartLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeEditorFunctionLibrary::execLoadQuickStartLevel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LevelPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReadyPlayerMeEditorFunctionLibrary::LoadQuickStartLevel(Z_Param_LevelPath);
	P_NATIVE_END;
}
// End Class UReadyPlayerMeEditorFunctionLibrary Function LoadQuickStartLevel

// Begin Class UReadyPlayerMeEditorFunctionLibrary Function LogRpmEvent
struct Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics
{
	struct ReadyPlayerMeEditorFunctionLibrary_eventLogRpmEvent_Parms
	{
		ERpmAnalyticsEventType EventType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Log Rpm Event" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeEditorFunctionLibrary_eventLogRpmEvent_Parms, EventType), Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType, METADATA_PARAMS(0, nullptr) }; // 1955843429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::NewProp_EventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary, nullptr, "LogRpmEvent", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::ReadyPlayerMeEditorFunctionLibrary_eventLogRpmEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::ReadyPlayerMeEditorFunctionLibrary_eventLogRpmEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeEditorFunctionLibrary::execLogRpmEvent)
{
	P_GET_ENUM(ERpmAnalyticsEventType,Z_Param_EventType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReadyPlayerMeEditorFunctionLibrary::LogRpmEvent(ERpmAnalyticsEventType(Z_Param_EventType));
	P_NATIVE_END;
}
// End Class UReadyPlayerMeEditorFunctionLibrary Function LogRpmEvent

// Begin Class UReadyPlayerMeEditorFunctionLibrary Function SetRpmSettings
struct Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics
{
	struct ReadyPlayerMeEditorFunctionLibrary_eventSetRpmSettings_Parms
	{
		FString Subdomain;
		FString AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Rpm Settings" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subdomain_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Subdomain;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::NewProp_Subdomain = { "Subdomain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeEditorFunctionLibrary_eventSetRpmSettings_Parms, Subdomain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subdomain_MetaData), NewProp_Subdomain_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeEditorFunctionLibrary_eventSetRpmSettings_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::NewProp_Subdomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary, nullptr, "SetRpmSettings", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::ReadyPlayerMeEditorFunctionLibrary_eventSetRpmSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::ReadyPlayerMeEditorFunctionLibrary_eventSetRpmSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadyPlayerMeEditorFunctionLibrary::execSetRpmSettings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Subdomain);
	P_GET_PROPERTY(FStrProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReadyPlayerMeEditorFunctionLibrary::SetRpmSettings(Z_Param_Subdomain,Z_Param_AppId);
	P_NATIVE_END;
}
// End Class UReadyPlayerMeEditorFunctionLibrary Function SetRpmSettings

// Begin Class UReadyPlayerMeEditorFunctionLibrary
void UReadyPlayerMeEditorFunctionLibrary::StaticRegisterNativesUReadyPlayerMeEditorFunctionLibrary()
{
	UClass* Class = UReadyPlayerMeEditorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseEditorWidget", &UReadyPlayerMeEditorFunctionLibrary::execCloseEditorWidget },
		{ "EnableAnalytics", &UReadyPlayerMeEditorFunctionLibrary::execEnableAnalytics },
		{ "GetSubdomain", &UReadyPlayerMeEditorFunctionLibrary::execGetSubdomain },
		{ "LoadQuickStartLevel", &UReadyPlayerMeEditorFunctionLibrary::execLoadQuickStartLevel },
		{ "LogRpmEvent", &UReadyPlayerMeEditorFunctionLibrary::execLogRpmEvent },
		{ "SetRpmSettings", &UReadyPlayerMeEditorFunctionLibrary::execSetRpmSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeEditorFunctionLibrary);
UClass* Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_NoRegister()
{
	return UReadyPlayerMeEditorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ReadyPlayerMeEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_CloseEditorWidget, "CloseEditorWidget" }, // 1698790285
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_EnableAnalytics, "EnableAnalytics" }, // 3029811717
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_GetSubdomain, "GetSubdomain" }, // 2043248656
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LoadQuickStartLevel, "LoadQuickStartLevel" }, // 1615754576
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_LogRpmEvent, "LogRpmEvent" }, // 525490058
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorFunctionLibrary_SetRpmSettings, "SetRpmSettings" }, // 2276343901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_Statics::ClassParams = {
	&UReadyPlayerMeEditorFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UReadyPlayerMeEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadyPlayerMeEditorFunctionLibrary.OuterSingleton;
}
template<> READYPLAYERMEEDITOR_API UClass* StaticClass<UReadyPlayerMeEditorFunctionLibrary>()
{
	return UReadyPlayerMeEditorFunctionLibrary::StaticClass();
}
UReadyPlayerMeEditorFunctionLibrary::UReadyPlayerMeEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeEditorFunctionLibrary);
UReadyPlayerMeEditorFunctionLibrary::~UReadyPlayerMeEditorFunctionLibrary() {}
// End Class UReadyPlayerMeEditorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeEditorFunctionLibrary, UReadyPlayerMeEditorFunctionLibrary::StaticClass, TEXT("UReadyPlayerMeEditorFunctionLibrary"), &Z_Registration_Info_UClass_UReadyPlayerMeEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeEditorFunctionLibrary), 1482131172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorFunctionLibrary_h_3770327894(TEXT("/Script/ReadyPlayerMeEditor"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
