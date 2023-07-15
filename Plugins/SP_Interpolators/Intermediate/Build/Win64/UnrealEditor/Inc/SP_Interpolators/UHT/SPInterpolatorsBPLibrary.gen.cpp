// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPInterpolatorsBPLibrary.h"
#include "SPInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPInterpolatorsBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SP_INTERPOLATORS_API UClass* Z_Construct_UClass_USPInterpolatorsBPLibrary();
	SP_INTERPOLATORS_API UClass* Z_Construct_UClass_USPInterpolatorsBPLibrary_NoRegister();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorVector();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector();
	UPackage* Z_Construct_UPackage__Script_SP_Interpolators();
// End Cross Module References
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetCritDampedSpringInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FCritDampSpringInterpolatorRotator,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorRotator(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalCritDampedSpringInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FCritDampSpringInterpolatorRotator,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FRotator,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorRotator(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetCritDampedSpringInterpolatorVector)
	{
		P_GET_STRUCT_REF(FCritDampSpringInterpolatorVector,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorVector(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalCritDampedSpringInterpolatorVector)
	{
		P_GET_STRUCT_REF(FCritDampSpringInterpolatorVector,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FVector,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorVector(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetDoubleIIRInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FDoubleIIRInterpolatorFloat,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorFloat(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalDoubleIIRInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FDoubleIIRInterpolatorFloat,Z_Param_Out_Interpolator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorFloat(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetDoubleIIRInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FDoubleIIRInterpolatorRotator,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorRotator(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalDoubleIIRInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FDoubleIIRInterpolatorRotator,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FRotator,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorRotator(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetDoubleIIRInterpolatorVector)
	{
		P_GET_STRUCT_REF(FDoubleIIRInterpolatorVector,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorVector(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalDoubleIIRInterpolatorVector)
	{
		P_GET_STRUCT_REF(FDoubleIIRInterpolatorVector,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FVector,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorVector(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetIIRInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorRotator,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetIIRInterpolatorRotator(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalIIRInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorRotator,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FRotator,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalIIRInterpolatorRotator(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetIIRInterpolatorVector)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorVector,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetIIRInterpolatorVector(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalIIRInterpolatorVector)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorVector,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FVector,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalIIRInterpolatorVector(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetIIRInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorFloat,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetIIRInterpolatorFloat(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalIIRInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorFloat,Z_Param_Out_Interpolator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalIIRInterpolatorFloat(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetAccelInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorRotator,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetAccelInterpolatorRotator(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalAccelInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorRotator,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FRotator,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalAccelInterpolatorRotator(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetAccelInterpolatorVector)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorVector,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetAccelInterpolatorVector(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalAccelInterpolatorVector)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorVector,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FVector,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalAccelInterpolatorVector(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execResetAccelInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorFloat,Z_Param_Out_Interpolator);
		P_FINISH;
		P_NATIVE_BEGIN;
		USPInterpolatorsBPLibrary::ResetAccelInterpolatorFloat(Z_Param_Out_Interpolator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USPInterpolatorsBPLibrary::execEvalAccelInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorFloat,Z_Param_Out_Interpolator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USPInterpolatorsBPLibrary::EvalAccelInterpolatorFloat(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void USPInterpolatorsBPLibrary::StaticRegisterNativesUSPInterpolatorsBPLibrary()
	{
		UClass* Class = USPInterpolatorsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvalAccelInterpolatorFloat", &USPInterpolatorsBPLibrary::execEvalAccelInterpolatorFloat },
			{ "EvalAccelInterpolatorRotator", &USPInterpolatorsBPLibrary::execEvalAccelInterpolatorRotator },
			{ "EvalAccelInterpolatorVector", &USPInterpolatorsBPLibrary::execEvalAccelInterpolatorVector },
			{ "EvalCritDampedSpringInterpolatorRotator", &USPInterpolatorsBPLibrary::execEvalCritDampedSpringInterpolatorRotator },
			{ "EvalCritDampedSpringInterpolatorVector", &USPInterpolatorsBPLibrary::execEvalCritDampedSpringInterpolatorVector },
			{ "EvalDoubleIIRInterpolatorFloat", &USPInterpolatorsBPLibrary::execEvalDoubleIIRInterpolatorFloat },
			{ "EvalDoubleIIRInterpolatorRotator", &USPInterpolatorsBPLibrary::execEvalDoubleIIRInterpolatorRotator },
			{ "EvalDoubleIIRInterpolatorVector", &USPInterpolatorsBPLibrary::execEvalDoubleIIRInterpolatorVector },
			{ "EvalIIRInterpolatorFloat", &USPInterpolatorsBPLibrary::execEvalIIRInterpolatorFloat },
			{ "EvalIIRInterpolatorRotator", &USPInterpolatorsBPLibrary::execEvalIIRInterpolatorRotator },
			{ "EvalIIRInterpolatorVector", &USPInterpolatorsBPLibrary::execEvalIIRInterpolatorVector },
			{ "ResetAccelInterpolatorFloat", &USPInterpolatorsBPLibrary::execResetAccelInterpolatorFloat },
			{ "ResetAccelInterpolatorRotator", &USPInterpolatorsBPLibrary::execResetAccelInterpolatorRotator },
			{ "ResetAccelInterpolatorVector", &USPInterpolatorsBPLibrary::execResetAccelInterpolatorVector },
			{ "ResetCritDampedSpringInterpolatorRotator", &USPInterpolatorsBPLibrary::execResetCritDampedSpringInterpolatorRotator },
			{ "ResetCritDampedSpringInterpolatorVector", &USPInterpolatorsBPLibrary::execResetCritDampedSpringInterpolatorVector },
			{ "ResetDoubleIIRInterpolatorFloat", &USPInterpolatorsBPLibrary::execResetDoubleIIRInterpolatorFloat },
			{ "ResetDoubleIIRInterpolatorRotator", &USPInterpolatorsBPLibrary::execResetDoubleIIRInterpolatorRotator },
			{ "ResetDoubleIIRInterpolatorVector", &USPInterpolatorsBPLibrary::execResetDoubleIIRInterpolatorVector },
			{ "ResetIIRInterpolatorFloat", &USPInterpolatorsBPLibrary::execResetIIRInterpolatorFloat },
			{ "ResetIIRInterpolatorRotator", &USPInterpolatorsBPLibrary::execResetIIRInterpolatorRotator },
			{ "ResetIIRInterpolatorVector", &USPInterpolatorsBPLibrary::execResetIIRInterpolatorVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorFloat_Parms
		{
			FAccelerationInterpolatorFloat Interpolator;
			float NewGoal;
			float DeltaTime;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat, METADATA_PARAMS(0, nullptr) }; // 2637466807
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorFloat_Parms, NewGoal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorFloat_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Acceleration - Float\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acceleration - Float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalAccelInterpolatorFloat", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorRotator_Parms
		{
			FAccelerationInterpolatorRotator Interpolator;
			FRotator NewGoal;
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 4260653320
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorRotator_Parms, NewGoal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorRotator_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Acceleration - Rotator\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acceleration - Rotator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalAccelInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorVector_Parms
		{
			FAccelerationInterpolatorVector Interpolator;
			FVector NewGoal;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 1554805342
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorVector_Parms, NewGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorVector_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Acceleration - Vector\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acceleration - Vector" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalAccelInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalAccelInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorRotator_Parms
		{
			FCritDampSpringInterpolatorRotator Interpolator;
			FRotator NewGoal;
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 3799689753
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorRotator_Parms, NewGoal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorRotator_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Critically-damped spring - Rotator\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Critically-damped spring - Rotator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalCritDampedSpringInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorVector_Parms
		{
			FCritDampSpringInterpolatorVector Interpolator;
			FVector NewGoal;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 1771061404
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorVector_Parms, NewGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorVector_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Critically-damped spring - Vector\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Critically-damped spring - Vector" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalCritDampedSpringInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalCritDampedSpringInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorFloat_Parms
		{
			FDoubleIIRInterpolatorFloat Interpolator;
			float NewGoal;
			float DeltaTime;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat, METADATA_PARAMS(0, nullptr) }; // 2031646523
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorFloat_Parms, NewGoal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorFloat_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Double IIR - Float\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Double IIR - Float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalDoubleIIRInterpolatorFloat", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms
		{
			FDoubleIIRInterpolatorRotator Interpolator;
			FRotator NewGoal;
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 3873428445
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, NewGoal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Double IIR - Rotator\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Double IIR - Rotator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalDoubleIIRInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorVector_Parms
		{
			FDoubleIIRInterpolatorVector Interpolator;
			FVector NewGoal;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 422364417
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, NewGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Double IIR - Vector\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Double IIR - Vector" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalDoubleIIRInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalDoubleIIRInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorFloat_Parms
		{
			FIIRInterpolatorFloat Interpolator;
			float NewGoal;
			float DeltaTime;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(0, nullptr) }; // 3990905342
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorFloat_Parms, NewGoal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorFloat_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IIR - Float\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IIR - Float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalIIRInterpolatorFloat", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorRotator_Parms
		{
			FIIRInterpolatorRotator Interpolator;
			FRotator NewGoal;
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 842747215
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorRotator_Parms, NewGoal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorRotator_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IIR - Rotator\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IIR - Rotator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalIIRInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorVector_Parms
		{
			FIIRInterpolatorVector Interpolator;
			FVector NewGoal;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 71669666
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorVector_Parms, NewGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorVector_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IIR - Vector\n" },
#endif
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IIR - Vector" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "EvalIIRInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventEvalIIRInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetAccelInterpolatorFloat_Parms
		{
			FAccelerationInterpolatorFloat Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetAccelInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat, METADATA_PARAMS(0, nullptr) }; // 2637466807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetAccelInterpolatorFloat", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventResetAccelInterpolatorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventResetAccelInterpolatorFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetAccelInterpolatorRotator_Parms
		{
			FAccelerationInterpolatorRotator Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetAccelInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 4260653320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetAccelInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetAccelInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetAccelInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetAccelInterpolatorVector_Parms
		{
			FAccelerationInterpolatorVector Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetAccelInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 1554805342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetAccelInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetAccelInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetAccelInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorRotator_Parms
		{
			FCritDampSpringInterpolatorRotator Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 3799689753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetCritDampedSpringInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorVector_Parms
		{
			FCritDampSpringInterpolatorVector Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 1771061404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetCritDampedSpringInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetCritDampedSpringInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorFloat_Parms
		{
			FDoubleIIRInterpolatorFloat Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat, METADATA_PARAMS(0, nullptr) }; // 2031646523
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetDoubleIIRInterpolatorFloat", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorRotator_Parms
		{
			FDoubleIIRInterpolatorRotator Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 3873428445
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetDoubleIIRInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorVector_Parms
		{
			FDoubleIIRInterpolatorVector Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 422364417
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetDoubleIIRInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetDoubleIIRInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetIIRInterpolatorFloat_Parms
		{
			FIIRInterpolatorFloat Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetIIRInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(0, nullptr) }; // 3990905342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetIIRInterpolatorFloat", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventResetIIRInterpolatorFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::SPInterpolatorsBPLibrary_eventResetIIRInterpolatorFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetIIRInterpolatorRotator_Parms
		{
			FIIRInterpolatorRotator Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetIIRInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorRotator, METADATA_PARAMS(0, nullptr) }; // 842747215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetIIRInterpolatorRotator", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetIIRInterpolatorRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::SPInterpolatorsBPLibrary_eventResetIIRInterpolatorRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics
	{
		struct SPInterpolatorsBPLibrary_eventResetIIRInterpolatorVector_Parms
		{
			FIIRInterpolatorVector Interpolator;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPInterpolatorsBPLibrary_eventResetIIRInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorVector, METADATA_PARAMS(0, nullptr) }; // 71669666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::NewProp_Interpolator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SPInterpolators" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPInterpolatorsBPLibrary, nullptr, "ResetIIRInterpolatorVector", nullptr, nullptr, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetIIRInterpolatorVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::SPInterpolatorsBPLibrary_eventResetIIRInterpolatorVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USPInterpolatorsBPLibrary);
	UClass* Z_Construct_UClass_USPInterpolatorsBPLibrary_NoRegister()
	{
		return USPInterpolatorsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Interpolators,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat, "EvalAccelInterpolatorFloat" }, // 4288224013
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator, "EvalAccelInterpolatorRotator" }, // 4210831756
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector, "EvalAccelInterpolatorVector" }, // 3052159512
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator, "EvalCritDampedSpringInterpolatorRotator" }, // 3838568560
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector, "EvalCritDampedSpringInterpolatorVector" }, // 1072125782
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat, "EvalDoubleIIRInterpolatorFloat" }, // 3681145497
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator, "EvalDoubleIIRInterpolatorRotator" }, // 2428371742
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector, "EvalDoubleIIRInterpolatorVector" }, // 4293449574
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat, "EvalIIRInterpolatorFloat" }, // 2136193049
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator, "EvalIIRInterpolatorRotator" }, // 509749083
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector, "EvalIIRInterpolatorVector" }, // 3965000527
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat, "ResetAccelInterpolatorFloat" }, // 1640391290
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator, "ResetAccelInterpolatorRotator" }, // 2811392395
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector, "ResetAccelInterpolatorVector" }, // 4240007100
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator, "ResetCritDampedSpringInterpolatorRotator" }, // 2621673785
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector, "ResetCritDampedSpringInterpolatorVector" }, // 577856971
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat, "ResetDoubleIIRInterpolatorFloat" }, // 2207648062
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator, "ResetDoubleIIRInterpolatorRotator" }, // 3712625359
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector, "ResetDoubleIIRInterpolatorVector" }, // 2790066502
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat, "ResetIIRInterpolatorFloat" }, // 3097363891
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator, "ResetIIRInterpolatorRotator" }, // 1322613383
		{ &Z_Construct_UFunction_USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector, "ResetIIRInterpolatorVector" }, // 3317016056
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Collection of blueprint utility functions for SPInterpolators.\n */" },
#endif
		{ "IncludePath", "SPInterpolatorsBPLibrary.h" },
		{ "ModuleRelativePath", "SPInterpolatorsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection of blueprint utility functions for SPInterpolators." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USPInterpolatorsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::ClassParams = {
		&USPInterpolatorsBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USPInterpolatorsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_USPInterpolatorsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USPInterpolatorsBPLibrary.OuterSingleton, Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USPInterpolatorsBPLibrary.OuterSingleton;
	}
	template<> SP_INTERPOLATORS_API UClass* StaticClass<USPInterpolatorsBPLibrary>()
	{
		return USPInterpolatorsBPLibrary::StaticClass();
	}
	USPInterpolatorsBPLibrary::USPInterpolatorsBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USPInterpolatorsBPLibrary);
	USPInterpolatorsBPLibrary::~USPInterpolatorsBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USPInterpolatorsBPLibrary, USPInterpolatorsBPLibrary::StaticClass, TEXT("USPInterpolatorsBPLibrary"), &Z_Registration_Info_UClass_USPInterpolatorsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USPInterpolatorsBPLibrary), 1547172459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_4239460730(TEXT("/Script/SP_Interpolators"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
