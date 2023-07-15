// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPCam_ThirdPerson.h"
#include "SPInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPCam_ThirdPerson() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCam_ThirdPerson();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCam_ThirdPerson_NoRegister();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCameraMode();
	SP_CAMERA_API UEnum* Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode();
	SP_CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FPenetrationAvoidanceRay();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector();
	UPackage* Z_Construct_UPackage__Script_SP_Camera();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAutoFollowMode;
	static UEnum* ECameraAutoFollowMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraAutoFollowMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraAutoFollowMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode, (UObject*)Z_Construct_UPackage__Script_SP_Camera(), TEXT("ECameraAutoFollowMode"));
		}
		return Z_Registration_Info_UEnum_ECameraAutoFollowMode.OuterSingleton;
	}
	template<> SP_CAMERA_API UEnum* StaticEnum<ECameraAutoFollowMode>()
	{
		return ECameraAutoFollowMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::Enumerators[] = {
		{ "ECameraAutoFollowMode::None", (int64)ECameraAutoFollowMode::None },
		{ "ECameraAutoFollowMode::LazyFollow", (int64)ECameraAutoFollowMode::LazyFollow },
		{ "ECameraAutoFollowMode::FullFollow", (int64)ECameraAutoFollowMode::FullFollow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Auto follow types this camera mode supports\n */" },
#endif
		{ "FullFollow.Name", "ECameraAutoFollowMode::FullFollow" },
		{ "LazyFollow.Name", "ECameraAutoFollowMode::LazyFollow" },
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
		{ "None.Name", "ECameraAutoFollowMode::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto follow types this camera mode supports" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SP_Camera,
		nullptr,
		"ECameraAutoFollowMode",
		"ECameraAutoFollowMode",
		Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode()
	{
		if (!Z_Registration_Info_UEnum_ECameraAutoFollowMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAutoFollowMode.InnerSingleton, Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraAutoFollowMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay;
class UScriptStruct* FPenetrationAvoidanceRay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay, (UObject*)Z_Construct_UPackage__Script_SP_Camera(), TEXT("PenetrationAvoidanceRay"));
	}
	return Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.OuterSingleton;
}
template<> SP_CAMERA_API UScriptStruct* StaticStruct<FPenetrationAvoidanceRay>()
{
	return FPenetrationAvoidanceRay::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustmentRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceInterval_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TraceInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesUntilNextTrace_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FramesUntilNextTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrimaryRay_MetaData[];
#endif
		static void NewProp_bPrimaryRay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimaryRay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct defining a feeler ray used for camera penetration avoidance.\n */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a feeler ray used for camera penetration avoidance." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPenetrationAvoidanceRay>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_AdjustmentRot_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FRotator describing deviance from main ray */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FRotator describing deviance from main ray" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_AdjustmentRot = { "AdjustmentRot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, AdjustmentRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_AdjustmentRot_MetaData), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_AdjustmentRot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_WorldWeight_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** how much this feeler affects the final position if it hits the world */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much this feeler affects the final position if it hits the world" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_WorldWeight = { "WorldWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, WorldWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_WorldWeight_MetaData), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_WorldWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** extent to use for collision when tracing this feeler */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "extent to use for collision when tracing this feeler" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_TraceInterval_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** minimum frame interval between traces with this feeler if nothing was hit last frame */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "minimum frame interval between traces with this feeler if nothing was hit last frame" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_TraceInterval = { "TraceInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, TraceInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_TraceInterval_MetaData), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_TraceInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_FramesUntilNextTrace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** number of frames since this feeler was used */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "number of frames since this feeler was used" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_FramesUntilNextTrace = { "FramesUntilNextTrace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPenetrationAvoidanceRay, FramesUntilNextTrace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_FramesUntilNextTrace_MetaData), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_FramesUntilNextTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPenetrationAvoidanceRay*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPenetrationAvoidanceRay), &Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay_MetaData[] = {
		{ "Category", "PenetrationAvoidanceRay" },
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay_SetBit(void* Obj)
	{
		((FPenetrationAvoidanceRay*)Obj)->bPrimaryRay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay = { "bPrimaryRay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPenetrationAvoidanceRay), &Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay_MetaData), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_AdjustmentRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_WorldWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_TraceInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_FramesUntilNextTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewProp_bPrimaryRay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Camera,
		nullptr,
		&NewStructOps,
		"PenetrationAvoidanceRay",
		Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers),
		sizeof(FPenetrationAvoidanceRay),
		alignof(FPenetrationAvoidanceRay),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPenetrationAvoidanceRay()
	{
		if (!Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.InnerSingleton, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay.InnerSingleton;
	}
	void USPCam_ThirdPerson::StaticRegisterNativesUSPCam_ThirdPerson()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USPCam_ThirdPerson);
	UClass* Z_Construct_UClass_USPCam_ThirdPerson_NoRegister()
	{
		return USPCam_ThirdPerson::StaticClass();
	}
	struct Z_Construct_UClass_USPCam_ThirdPerson_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotToViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotToViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotLocInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotLocInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotRotInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotRotInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraPivotLocZInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraPivotLocZInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPitchLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPitchLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotYawLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotYawLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraToPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivotTranslationInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraToPivotTranslationInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_PitchAdjustmentCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraToPivot_PitchAdjustmentCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_PitchAdjustmentCurveScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraToPivot_PitchAdjustmentCurveScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_SpeedAdjustmentCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraToPivot_SpeedAdjustmentCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_SpeedAdjustmentCurveScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraToPivot_SpeedAdjustmentCurveScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivot_SpeedAdjustment_SpeedRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraToPivot_SpeedAdjustment_SpeedRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoFollowMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoFollowMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoFollowMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyAutoFollowPitchLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LazyAutoFollowPitchLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLazyAutoFollowPitchControl_MetaData[];
#endif
		static void NewProp_bAllowLazyAutoFollowPitchControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLazyAutoFollowPitchControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyFollowGoalPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyFollowGoalPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyFollowLaziness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyFollowLaziness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyFollowDelayAfterUserControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyFollowDelayAfterUserControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookatOffsetLocal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookatOffsetLocal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookatWorldSpaceInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookatWorldSpaceInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLookatPoint_MetaData[];
#endif
		static void NewProp_bUseLookatPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLookatPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoPredictiveLookat_MetaData[];
#endif
		static void NewProp_bDoPredictiveLookat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPredictiveLookat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveLookatTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictiveLookatTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPenetrationAvoidanceRays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPenetrationAvoidanceRays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraPenetrationAvoidanceRays;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SafeLocPenetrationAvoidanceRays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SafeLocPenetrationAvoidanceRays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SafeLocPenetrationAvoidanceRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SafeLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SafeLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SafeLocationInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SafeLocationInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateSafeLoc_MetaData[];
#endif
		static void NewProp_bValidateSafeLoc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateSafeLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventCameraPenetration_MetaData[];
#endif
		static void NewProp_bPreventCameraPenetration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventCameraPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoPredictiveAvoidance_MetaData[];
#endif
		static void NewProp_bDoPredictiveAvoidance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPredictiveAvoidance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSafeLocationLocal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastSafeLocationLocal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPenetrationBlockedPct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastPenetrationBlockedPct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugPivot_MetaData[];
#endif
		static void NewProp_bDrawDebugPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLookat_MetaData[];
#endif
		static void NewProp_bDrawDebugLookat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLookat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugSafeLoc_MetaData[];
#endif
		static void NewProp_bDrawDebugSafeLoc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugSafeLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugPenetrationAvoidance_MetaData[];
#endif
		static void NewProp_bDrawDebugPenetrationAvoidance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugPenetrationAvoidance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPCam_ThirdPerson_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USPCameraMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Camera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Third person camera implementation of the SPCameraMode. \n * Features camera smoothing, auto follow behaviors, and penetration avoidance.\n */" },
#endif
		{ "IncludePath", "SPCam_ThirdPerson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third person camera implementation of the SPCameraMode.\nFeatures camera smoothing, auto follow behaviors, and penetration avoidance." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotToViewTarget_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transform for the Pivot, in the ViewTarget's space. This is the point the camera rotates around. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform for the Pivot, in the ViewTarget's space. This is the point the camera rotates around." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotToViewTarget = { "PivotToViewTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PivotToViewTarget), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotToViewTarget_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotToViewTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotLocInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera pivot's location in world space. Note: For very fast moving objects you may want to set this to 0,0 for instant pivot updates */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera pivot's location in world space. Note: For very fast moving objects you may want to set this to 0,0 for instant pivot updates" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotLocInterpolator = { "PivotLocInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PivotLocInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotLocInterpolator_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotLocInterpolator_MetaData) }; // 422364417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotRotInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera pivot's rotation in world space */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera pivot's rotation in world space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotRotInterpolator = { "PivotRotInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PivotRotInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotRotInterpolator_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotRotInterpolator_MetaData) }; // 3873428445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_ExtraPivotLocZInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applied after PivotLocInterpolator, but only to the Z component of the pivot location. Useful for things like vehicles on bumpy ground, to have a loose Z but tighter XY */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applied after PivotLocInterpolator, but only to the Z component of the pivot location. Useful for things like vehicles on bumpy ground, to have a loose Z but tighter XY" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_ExtraPivotLocZInterpolator = { "ExtraPivotLocZInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, ExtraPivotLocZInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_ExtraPivotLocZInterpolator_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_ExtraPivotLocZInterpolator_MetaData) }; // 3990905342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotPitchLimits_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min and Max pitch thresholds for the camera pivot, in degrees  */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max pitch thresholds for the camera pivot, in degrees" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotPitchLimits = { "PivotPitchLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PivotPitchLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotPitchLimits_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotPitchLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotYawLimits_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min and Max yaw thresholds for the camera pivot in degrees */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max yaw thresholds for the camera pivot in degrees" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotYawLimits = { "PivotYawLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PivotYawLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotYawLimits_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotYawLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default transform for the camera in pivot space */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default transform for the camera in pivot space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot = { "CameraToPivot", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraToPivot), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivotTranslationInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera's translation in pivot space */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera's translation in pivot space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivotTranslationInterpolator = { "CameraToPivotTranslationInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraToPivotTranslationInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivotTranslationInterpolator_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivotTranslationInterpolator_MetaData) }; // 422364417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurve_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 0 on this curve corresponds to PitchMin (PitchLimits.X, looking down). 1 corresponds to max pitch (PitchLimits.Y, looking up). */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 on this curve corresponds to PitchMin (PitchLimits.X, looking down). 1 corresponds to max pitch (PitchLimits.Y, looking up)." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurve = { "CameraToPivot_PitchAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraToPivot_PitchAdjustmentCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurve_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurveScale_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scalar applied to pitch adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar applied to pitch adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurveScale = { "CameraToPivot_PitchAdjustmentCurveScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraToPivot_PitchAdjustmentCurveScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurveScale_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurveScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurve_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 0 on this curve corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.X (range min). 1 corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.Y (range max). */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 on this curve corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.X (range min). 1 corresponds to CameraToPivot_SpeedAdjustment_SpeedRange.Y (range max)." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurve = { "CameraToPivot_SpeedAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraToPivot_SpeedAdjustmentCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurve_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurveScale_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scalar applied to speed adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar applied to speed adjustment scale curve output, for cases where you want to make a 0..1 curve shape and set magnitude here." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurveScale = { "CameraToPivot_SpeedAdjustmentCurveScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraToPivot_SpeedAdjustmentCurveScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurveScale_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurveScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustment_SpeedRange_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speeds between which the camera to pivot translation is interpolated between base CameraToPivot translation and the translation obtained from the CameraToPivot_SpeedAdjustmentCurve curve.*/" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds between which the camera to pivot translation is interpolated between base CameraToPivot translation and the translation obtained from the CameraToPivot_SpeedAdjustmentCurve curve." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustment_SpeedRange = { "CameraToPivot_SpeedAdjustment_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraToPivot_SpeedAdjustment_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustment_SpeedRange_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustment_SpeedRange_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_AutoFollowMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_AutoFollowMode_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto follow behavior to apply to the camera */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto follow behavior to apply to the camera" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_AutoFollowMode = { "AutoFollowMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, AutoFollowMode), Z_Construct_UEnum_SP_Camera_ECameraAutoFollowMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_AutoFollowMode_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_AutoFollowMode_MetaData) }; // 485424232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyAutoFollowPitchLimits_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch limits to apply when the LazyFollow CameraAutoFollowMode is enabled and AllowLazyAutoFollowPitchControl is false */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch limits to apply when the LazyFollow CameraAutoFollowMode is enabled and AllowLazyAutoFollowPitchControl is false" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyAutoFollowPitchLimits = { "LazyAutoFollowPitchLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LazyAutoFollowPitchLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyAutoFollowPitchLimits_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyAutoFollowPitchLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, manual camera pitch set by player will be used when in LazyFollow mode */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, manual camera pitch set by player will be used when in LazyFollow mode" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bAllowLazyAutoFollowPitchControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl = { "bAllowLazyAutoFollowPitchControl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowGoalPitch_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the goal \"neutral\" pitch the lazy camera should drift toward. Ignored if bAllowLazyAutoFollowPitchControl is true. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the goal \"neutral\" pitch the lazy camera should drift toward. Ignored if bAllowLazyAutoFollowPitchControl is true." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowGoalPitch = { "LazyFollowGoalPitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LazyFollowGoalPitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowGoalPitch_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowGoalPitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowLaziness_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Higher numbers == slower following behavior, lower == faster. 0 == perfectly tight. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher numbers == slower following behavior, lower == faster. 0 == perfectly tight." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowLaziness = { "LazyFollowLaziness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LazyFollowLaziness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowLaziness_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowLaziness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowDelayAfterUserControl_MetaData[] = {
		{ "Category", "AutoFollow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay in seconds before lazy follow behavior kicks in after manual control of the camera */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay in seconds before lazy follow behavior kicks in after manual control of the camera" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowDelayAfterUserControl = { "LazyFollowDelayAfterUserControl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LazyFollowDelayAfterUserControl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowDelayAfterUserControl_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowDelayAfterUserControl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatOffsetLocal_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset of the camera's look at point relative to the ViewTarget's transform */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset of the camera's look at point relative to the ViewTarget's transform" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatOffsetLocal = { "LookatOffsetLocal", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LookatOffsetLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatOffsetLocal_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatOffsetLocal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatWorldSpaceInterpolator_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth updates to the final world position of the camera look at point */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth updates to the final world position of the camera look at point" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatWorldSpaceInterpolator = { "LookatWorldSpaceInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LookatWorldSpaceInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatWorldSpaceInterpolator_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatWorldSpaceInterpolator_MetaData) }; // 71669666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bUseLookatPoint_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled the camera will automatically rotate to focus the look at point. If false, the camera will just look straight ahead. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled the camera will automatically rotate to focus the look at point. If false, the camera will just look straight ahead." },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bUseLookatPoint_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bUseLookatPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bUseLookatPoint = { "bUseLookatPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bUseLookatPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bUseLookatPoint_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bUseLookatPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, the view target's velocity will be taken into account when calculating our goal look at point */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the view target's velocity will be taken into account when calculating our goal look at point" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bDoPredictiveLookat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat = { "bDoPredictiveLookat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PredictiveLookatTime_MetaData[] = {
		{ "Category", "LookAt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The length of time in seconds in the future the camera will predict the look at point to be when DoPredictiveLookat is enabled */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of time in seconds in the future the camera will predict the look at point to be when DoPredictiveLookat is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PredictiveLookatTime = { "PredictiveLookatTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PredictiveLookatTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PredictiveLookatTime_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PredictiveLookatTime_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays_Inner = { "CameraPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay, METADATA_PARAMS(0, nullptr) }; // 2732730455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rays used when detecting obstacles that the camera needs to avoid */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rays used when detecting obstacles that the camera needs to avoid" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays = { "CameraPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, CameraPenetrationAvoidanceRays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays_MetaData) }; // 2732730455
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays_Inner = { "SafeLocPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay, METADATA_PARAMS(0, nullptr) }; // 2732730455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rays used when ensuring that the camera's safe location remains unobstructed */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rays used when ensuring that the camera's safe location remains unobstructed" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays = { "SafeLocPenetrationAvoidanceRays", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, SafeLocPenetrationAvoidanceRays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays_MetaData) }; // 2732730455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationOffset_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset relative to view target to the \"safe\" place for the camera.  This is where penetration ray traces originate. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset relative to view target to the \"safe\" place for the camera.  This is where penetration ray traces originate." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationOffset = { "SafeLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, SafeLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationOffset_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationInterpolator_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth updates to the camera's safe location */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth updates to the camera's safe location" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationInterpolator = { "SafeLocationInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, SafeLocationInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationInterpolator_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationInterpolator_MetaData) }; // 71669666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, does an extra ray trace to make sure the safe loc is actually safe. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, does an extra ray trace to make sure the safe loc is actually safe." },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bValidateSafeLoc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc = { "bValidateSafeLoc", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the camera will perform ray traces to detect potential obstacles and adjust accordingly */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the camera will perform ray traces to detect potential obstacles and adjust accordingly" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bPreventCameraPenetration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration = { "bPreventCameraPenetration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping. */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping." },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bDoPredictiveAvoidance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance = { "bDoPredictiveAvoidance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendInTime_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blend time when having to bring the camera closer to the safe loc to avoid penetration */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blend time when having to bring the camera closer to the safe loc to avoid penetration" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendInTime = { "PenetrationBlendInTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PenetrationBlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendInTime_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime_MetaData[] = {
		{ "Category", "PenetrationAvoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blend time when bringing the camera away from the safe loc when space is available */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blend time when bringing the camera away from the safe loc when space is available" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime = { "PenetrationBlendOutTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, PenetrationBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastSafeLocationLocal_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cache of camera safe location calculated on the previous update */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache of camera safe location calculated on the previous update" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastSafeLocationLocal = { "LastSafeLocationLocal", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LastSafeLocationLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastSafeLocationLocal_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastSafeLocationLocal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastPenetrationBlockedPct_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cache of the percentage of the distance blocked between the camera location and safe location calculated on the previous update */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache of the percentage of the distance blocked between the camera location and safe location calculated on the previous update" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastPenetrationBlockedPct = { "LastPenetrationBlockedPct", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_ThirdPerson, LastPenetrationBlockedPct), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastPenetrationBlockedPct_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastPenetrationBlockedPct_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the camera pivot point */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the camera pivot point" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bDrawDebugPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot = { "bDrawDebugPivot", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the camera look at point */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the camera look at point" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bDrawDebugLookat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat = { "bDrawDebugLookat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the camera safe location, where penetration avoidance ray traces originate */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the camera safe location, where penetration avoidance ray traces originate" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bDrawDebugSafeLoc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc = { "bDrawDebugSafeLoc", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, debug visuals will be rendered for the penetration avoidance ray traces */" },
#endif
		{ "ModuleRelativePath", "SPCam_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, debug visuals will be rendered for the penetration avoidance ray traces" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance_SetBit(void* Obj)
	{
		((USPCam_ThirdPerson*)Obj)->bDrawDebugPenetrationAvoidance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance = { "bDrawDebugPenetrationAvoidance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCam_ThirdPerson), &Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance_MetaData), Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USPCam_ThirdPerson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotToViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotLocInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotRotInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_ExtraPivotLocZInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotPitchLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PivotYawLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivotTranslationInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_PitchAdjustmentCurveScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustmentCurveScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraToPivot_SpeedAdjustment_SpeedRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_AutoFollowMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_AutoFollowMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyAutoFollowPitchLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bAllowLazyAutoFollowPitchControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowGoalPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowLaziness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LazyFollowDelayAfterUserControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatOffsetLocal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LookatWorldSpaceInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bUseLookatPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveLookat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PredictiveLookatTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_CameraPenetrationAvoidanceRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocPenetrationAvoidanceRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_SafeLocationInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bValidateSafeLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bPreventCameraPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastSafeLocationLocal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_LastPenetrationBlockedPct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugLookat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugSafeLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_ThirdPerson_Statics::NewProp_bDrawDebugPenetrationAvoidance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USPCam_ThirdPerson_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USPCam_ThirdPerson>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USPCam_ThirdPerson_Statics::ClassParams = {
		&USPCam_ThirdPerson::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USPCam_ThirdPerson_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_USPCam_ThirdPerson_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_ThirdPerson_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USPCam_ThirdPerson()
	{
		if (!Z_Registration_Info_UClass_USPCam_ThirdPerson.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USPCam_ThirdPerson.OuterSingleton, Z_Construct_UClass_USPCam_ThirdPerson_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USPCam_ThirdPerson.OuterSingleton;
	}
	template<> SP_CAMERA_API UClass* StaticClass<USPCam_ThirdPerson>()
	{
		return USPCam_ThirdPerson::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USPCam_ThirdPerson);
	USPCam_ThirdPerson::~USPCam_ThirdPerson() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::EnumInfo[] = {
		{ ECameraAutoFollowMode_StaticEnum, TEXT("ECameraAutoFollowMode"), &Z_Registration_Info_UEnum_ECameraAutoFollowMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 485424232U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::ScriptStructInfo[] = {
		{ FPenetrationAvoidanceRay::StaticStruct, Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics::NewStructOps, TEXT("PenetrationAvoidanceRay"), &Z_Registration_Info_UScriptStruct_PenetrationAvoidanceRay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPenetrationAvoidanceRay), 2732730455U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USPCam_ThirdPerson, USPCam_ThirdPerson::StaticClass, TEXT("USPCam_ThirdPerson"), &Z_Registration_Info_UClass_USPCam_ThirdPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USPCam_ThirdPerson), 667266123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_2400667628(TEXT("/Script/SP_Camera"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
