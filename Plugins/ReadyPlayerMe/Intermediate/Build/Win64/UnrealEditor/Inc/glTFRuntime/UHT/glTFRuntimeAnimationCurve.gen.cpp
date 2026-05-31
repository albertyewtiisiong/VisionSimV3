// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeAnimationCurve.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeAnimationCurve() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister();
UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References

// Begin Class UglTFRuntimeAnimationCurve Function GetTransformValue
struct Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics
{
	struct glTFRuntimeAnimationCurve_eventGetTransformValue_Parms
	{
		float InTime;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime|Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
#endif
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluate this float curve at the specified time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAnimationCurve_eventGetTransformValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAnimationCurve_eventGetTransformValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAnimationCurve, nullptr, "GetTransformValue", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::glTFRuntimeAnimationCurve_eventGetTransformValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::glTFRuntimeAnimationCurve_eventGetTransformValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UglTFRuntimeAnimationCurve::execGetTransformValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTransformValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class UglTFRuntimeAnimationCurve Function GetTransformValue

// Begin Class UglTFRuntimeAnimationCurve
void UglTFRuntimeAnimationCurve::StaticRegisterNativesUglTFRuntimeAnimationCurve()
{
	UClass* Class = UglTFRuntimeAnimationCurve::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTransformValue", &UglTFRuntimeAnimationCurve::execGetTransformValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeAnimationCurve);
UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve_NoRegister()
{
	return UglTFRuntimeAnimationCurve::StaticClass();
}
struct Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "glTFRuntimeAnimationCurve.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuatCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatorCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_glTFCurveAnimationName_MetaData[] = {
		{ "Category", "glTFRuntime|Curves" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_glTFCurveAnimationIndex_MetaData[] = {
		{ "Category", "glTFRuntime|Curves" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_glTFCurveAnimationDuration_MetaData[] = {
		{ "Category", "glTFRuntime|Curves" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAnimationCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuatCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleCurves;
	static const UECodeGen_Private::FStrPropertyParams NewProp_glTFCurveAnimationName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_glTFCurveAnimationIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_glTFCurveAnimationDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UglTFRuntimeAnimationCurve_GetTransformValue, "GetTransformValue" }, // 644157608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeAnimationCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_LocationCurves = { "LocationCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LocationCurves, UglTFRuntimeAnimationCurve), STRUCT_OFFSET(UglTFRuntimeAnimationCurve, LocationCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationCurves_MetaData), NewProp_LocationCurves_MetaData) }; // 1340883375
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_QuatCurves = { "QuatCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(QuatCurves, UglTFRuntimeAnimationCurve), STRUCT_OFFSET(UglTFRuntimeAnimationCurve, QuatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuatCurves_MetaData), NewProp_QuatCurves_MetaData) }; // 1340883375
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_RotatorCurves = { "RotatorCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(RotatorCurves, UglTFRuntimeAnimationCurve), STRUCT_OFFSET(UglTFRuntimeAnimationCurve, RotatorCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatorCurves_MetaData), NewProp_RotatorCurves_MetaData) }; // 1340883375
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_ScaleCurves = { "ScaleCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ScaleCurves, UglTFRuntimeAnimationCurve), STRUCT_OFFSET(UglTFRuntimeAnimationCurve, ScaleCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurves_MetaData), NewProp_ScaleCurves_MetaData) }; // 1340883375
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationName = { "glTFCurveAnimationName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAnimationCurve, glTFCurveAnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_glTFCurveAnimationName_MetaData), NewProp_glTFCurveAnimationName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationIndex = { "glTFCurveAnimationIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAnimationCurve, glTFCurveAnimationIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_glTFCurveAnimationIndex_MetaData), NewProp_glTFCurveAnimationIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationDuration = { "glTFCurveAnimationDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UglTFRuntimeAnimationCurve, glTFCurveAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_glTFCurveAnimationDuration_MetaData), NewProp_glTFCurveAnimationDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_LocationCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_QuatCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_RotatorCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_ScaleCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::NewProp_glTFCurveAnimationDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveBase,
	(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::ClassParams = {
	&UglTFRuntimeAnimationCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UglTFRuntimeAnimationCurve()
{
	if (!Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve.OuterSingleton, Z_Construct_UClass_UglTFRuntimeAnimationCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve.OuterSingleton;
}
template<> GLTFRUNTIME_API UClass* StaticClass<UglTFRuntimeAnimationCurve>()
{
	return UglTFRuntimeAnimationCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeAnimationCurve);
UglTFRuntimeAnimationCurve::~UglTFRuntimeAnimationCurve() {}
// End Class UglTFRuntimeAnimationCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeAnimationCurve, UglTFRuntimeAnimationCurve::StaticClass, TEXT("UglTFRuntimeAnimationCurve"), &Z_Registration_Info_UClass_UglTFRuntimeAnimationCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeAnimationCurve), 2782492381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_528579280(TEXT("/Script/glTFRuntime"),
	Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_4_Blank_54_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeAnimationCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
