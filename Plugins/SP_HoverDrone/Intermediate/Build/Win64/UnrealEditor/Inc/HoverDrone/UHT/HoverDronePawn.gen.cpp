// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDronePawn.h"
#include "SPInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDronePawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawn();
	HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawn_NoRegister();
	HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawnBase();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator();
	UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References
	DEFINE_FUNCTION(AHoverDronePawn::execSetAllowSpeedChange)
	{
		P_GET_UBOOL(Z_Param_bOnOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowSpeedChange(Z_Param_bOnOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execEndLookat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndLookat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execBeginLookat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginLookat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execSetToDefaultDroneSpeedIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToDefaultDroneSpeedIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execSetDroneSpeedIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SpeedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDroneSpeedIndex(Z_Param_SpeedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execGetDroneSpeedIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDroneSpeedIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execIsMaintainingConstantAltitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaintainingConstantAltitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execGetAltitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAltitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHoverDronePawn::execGetTiltedDroneRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetTiltedDroneRotation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void AHoverDronePawn::StaticRegisterNativesAHoverDronePawn()
	{
		UClass* Class = AHoverDronePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginLookat", &AHoverDronePawn::execBeginLookat },
			{ "EndLookat", &AHoverDronePawn::execEndLookat },
			{ "GetAltitude", &AHoverDronePawn::execGetAltitude },
			{ "GetDroneSpeedIndex", &AHoverDronePawn::execGetDroneSpeedIndex },
			{ "GetTiltedDroneRotation", &AHoverDronePawn::execGetTiltedDroneRotation },
			{ "IsMaintainingConstantAltitude", &AHoverDronePawn::execIsMaintainingConstantAltitude },
			{ "SetAllowSpeedChange", &AHoverDronePawn::execSetAllowSpeedChange },
			{ "SetDroneSpeedIndex", &AHoverDronePawn::execSetDroneSpeedIndex },
			{ "SetToDefaultDroneSpeedIndex", &AHoverDronePawn::execSetToDefaultDroneSpeedIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHoverDronePawn_BeginLookat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_BeginLookat_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input handler for lookat functionality */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input handler for lookat functionality" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_BeginLookat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "BeginLookat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_BeginLookat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_BeginLookat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHoverDronePawn_BeginLookat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_BeginLookat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_EndLookat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_EndLookat_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_EndLookat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "EndLookat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_EndLookat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_EndLookat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHoverDronePawn_EndLookat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_EndLookat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics
	{
		struct HoverDronePawn_eventGetAltitude_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDronePawn_eventGetAltitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns drone's current height above the ground. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns drone's current height above the ground." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "GetAltitude", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::HoverDronePawn_eventGetAltitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::HoverDronePawn_eventGetAltitude_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHoverDronePawn_GetAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_GetAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics
	{
		struct HoverDronePawn_eventGetDroneSpeedIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDronePawn_eventGetDroneSpeedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "GetDroneSpeedIndex", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::HoverDronePawn_eventGetDroneSpeedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::HoverDronePawn_eventGetDroneSpeedIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics
	{
		struct HoverDronePawn_eventGetTiltedDroneRotation_Parms
		{
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDronePawn_eventGetTiltedDroneRotation_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDronePawn_eventGetTiltedDroneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "GetTiltedDroneRotation", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::HoverDronePawn_eventGetTiltedDroneRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::HoverDronePawn_eventGetTiltedDroneRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics
	{
		struct HoverDronePawn_eventIsMaintainingConstantAltitude_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoverDronePawn_eventIsMaintainingConstantAltitude_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoverDronePawn_eventIsMaintainingConstantAltitude_Parms), &Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this drone has auto-altitude on. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this drone has auto-altitude on." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "IsMaintainingConstantAltitude", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::HoverDronePawn_eventIsMaintainingConstantAltitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::HoverDronePawn_eventIsMaintainingConstantAltitude_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics
	{
		struct HoverDronePawn_eventSetAllowSpeedChange_Parms
		{
			bool bOnOff;
		};
		static void NewProp_bOnOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnOff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff_SetBit(void* Obj)
	{
		((HoverDronePawn_eventSetAllowSpeedChange_Parms*)Obj)->bOnOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff = { "bOnOff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoverDronePawn_eventSetAllowSpeedChange_Parms), &Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::NewProp_bOnOff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns drone's current height above the ground. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns drone's current height above the ground." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "SetAllowSpeedChange", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::HoverDronePawn_eventSetAllowSpeedChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::HoverDronePawn_eventSetAllowSpeedChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics
	{
		struct HoverDronePawn_eventSetDroneSpeedIndex_Parms
		{
			int32 SpeedIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpeedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::NewProp_SpeedIndex = { "SpeedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDronePawn_eventSetDroneSpeedIndex_Parms, SpeedIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::NewProp_SpeedIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "SetDroneSpeedIndex", nullptr, nullptr, Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::HoverDronePawn_eventSetDroneSpeedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::HoverDronePawn_eventSetDroneSpeedIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoverDrone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns drone speed to the default setting */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns drone speed to the default setting" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoverDronePawn, nullptr, "SetToDefaultDroneSpeedIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverDronePawn);
	UClass* Z_Construct_UClass_AHoverDronePawn_NoRegister()
	{
		return AHoverDronePawn::StaticClass();
	}
	struct Z_Construct_UClass_AHoverDronePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTiltingEnabled_MetaData[];
#endif
		static void NewProp_bIsTiltingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTiltingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpeedChange_MetaData[];
#endif
		static void NewProp_bAllowSpeedChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpeedChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeAltitudeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChangeAltitudeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeSpeedAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChangeSpeedAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainMovementToXYPlane_MetaData[];
#endif
		static void NewProp_bConstrainMovementToXYPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainMovementToXYPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneTiltInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DroneTiltInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiltUpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TiltUpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTiltLimits_MetaData[];
#endif
		static void NewProp_bEnableTiltLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTiltLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TiltLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TiltLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoverDronePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHoverDronePawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AHoverDronePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHoverDronePawn_BeginLookat, "BeginLookat" }, // 503100244
		{ &Z_Construct_UFunction_AHoverDronePawn_EndLookat, "EndLookat" }, // 2377994783
		{ &Z_Construct_UFunction_AHoverDronePawn_GetAltitude, "GetAltitude" }, // 2978764356
		{ &Z_Construct_UFunction_AHoverDronePawn_GetDroneSpeedIndex, "GetDroneSpeedIndex" }, // 331432081
		{ &Z_Construct_UFunction_AHoverDronePawn_GetTiltedDroneRotation, "GetTiltedDroneRotation" }, // 3678126211
		{ &Z_Construct_UFunction_AHoverDronePawn_IsMaintainingConstantAltitude, "IsMaintainingConstantAltitude" }, // 1833190252
		{ &Z_Construct_UFunction_AHoverDronePawn_SetAllowSpeedChange, "SetAllowSpeedChange" }, // 3188015883
		{ &Z_Construct_UFunction_AHoverDronePawn_SetDroneSpeedIndex, "SetDroneSpeedIndex" }, // 3239015325
		{ &Z_Construct_UFunction_AHoverDronePawn_SetToDefaultDroneSpeedIndex, "SetToDefaultDroneSpeedIndex" }, // 2759102749
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HoverDronePawn.h" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bIsTiltingEnabled_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Tilt" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	void Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bIsTiltingEnabled_SetBit(void* Obj)
	{
		((AHoverDronePawn*)Obj)->bIsTiltingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bIsTiltingEnabled = { "bIsTiltingEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHoverDronePawn), &Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bIsTiltingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bIsTiltingEnabled_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bIsTiltingEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, speed can be changed by calls to IncreaseHoverDroneSpeed and DecreaseHoverDroneSpeed. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, speed can be changed by calls to IncreaseHoverDroneSpeed and DecreaseHoverDroneSpeed." },
#endif
	};
#endif
	void Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange_SetBit(void* Obj)
	{
		((AHoverDronePawn*)Obj)->bAllowSpeedChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange = { "bAllowSpeedChange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHoverDronePawn), &Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeAltitudeAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeAltitudeAction = { "ChangeAltitudeAction", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, ChangeAltitudeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeAltitudeAction_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeAltitudeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeSpeedAction_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeSpeedAction = { "ChangeSpeedAction", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, ChangeSpeedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeSpeedAction_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeSpeedAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, InputMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingPriority_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingPriority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bConstrainMovementToXYPlane_MetaData[] = {
		{ "Category", "Hover Drone Pawn|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the Movement input moves they drone in the XY plane only (drone-style), regardless of view pitch. Otherwise, drone Movement input is relative to the view transform (airplane-style movement) */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the Movement input moves they drone in the XY plane only (drone-style), regardless of view pitch. Otherwise, drone Movement input is relative to the view transform (airplane-style movement)" },
#endif
	};
#endif
	void Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bConstrainMovementToXYPlane_SetBit(void* Obj)
	{
		((AHoverDronePawn*)Obj)->bConstrainMovementToXYPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bConstrainMovementToXYPlane = { "bConstrainMovementToXYPlane", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHoverDronePawn), &Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bConstrainMovementToXYPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bConstrainMovementToXYPlane_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bConstrainMovementToXYPlane_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpolator_MetaData[] = {
		{ "Category", "HoverDronePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How quickly/aggressively to interp into the tilted position. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How quickly/aggressively to interp into the tilted position." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpolator = { "DroneTiltInterpolator", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, DroneTiltInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpolator_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpolator_MetaData) }; // 842747215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltUpVector_MetaData[] = {
		{ "Category", "HoverDronePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The drone's up vector during neutral hovering. The magnitude determines resistance to tilt when moving. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The drone's up vector during neutral hovering. The magnitude determines resistance to tilt when moving." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltUpVector = { "TiltUpVector", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, TiltUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltUpVector_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltUpVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bEnableTiltLimits_MetaData[] = {
		{ "Category", "HoverDronePawn" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	void Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bEnableTiltLimits_SetBit(void* Obj)
	{
		((AHoverDronePawn*)Obj)->bEnableTiltLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bEnableTiltLimits = { "bEnableTiltLimits", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHoverDronePawn), &Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bEnableTiltLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bEnableTiltLimits_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bEnableTiltLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltLimits_MetaData[] = {
		{ "Category", "HoverDronePawn" },
		{ "ModuleRelativePath", "Public/HoverDronePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltLimits = { "TiltLimits", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDronePawn, TiltLimits), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltLimits_MetaData), Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltLimits_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bIsTiltingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bAllowSpeedChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeAltitudeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_ChangeSpeedAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_InputMappingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bConstrainMovementToXYPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_DroneTiltInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_bEnableTiltLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDronePawn_Statics::NewProp_TiltLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoverDronePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverDronePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverDronePawn_Statics::ClassParams = {
		&AHoverDronePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverDronePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDronePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHoverDronePawn()
	{
		if (!Z_Registration_Info_UClass_AHoverDronePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverDronePawn.OuterSingleton, Z_Construct_UClass_AHoverDronePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHoverDronePawn.OuterSingleton;
	}
	template<> HOVERDRONE_API UClass* StaticClass<AHoverDronePawn>()
	{
		return AHoverDronePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverDronePawn);
	AHoverDronePawn::~AHoverDronePawn() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHoverDronePawn, AHoverDronePawn::StaticClass, TEXT("AHoverDronePawn"), &Z_Registration_Info_UClass_AHoverDronePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverDronePawn), 3726212310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_593849134(TEXT("/Script/HoverDrone"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
