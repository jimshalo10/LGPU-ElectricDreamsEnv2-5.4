// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPCameraMode.h"
#include "../../Source/Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "CineCameraSettings.h"
#include "SPInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPCameraMode() {}
// Cross Module References
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
	SP_CAMERA_API UClass* Z_Construct_UClass_ASPPlayerCameraManager_NoRegister();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCameraMode();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCameraMode_NoRegister();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	UPackage* Z_Construct_UPackage__Script_SP_Camera();
// End Cross Module References
	DEFINE_FUNCTION(USPCameraMode::execResetToDefaultSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefaultSettings_Implementation();
		P_NATIVE_END;
	}
	struct SPCameraMode_eventGetCustomFocusDistance_Parms
	{
		AActor* ViewTarget;
		FTransform ViewToWorld;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		SPCameraMode_eventGetCustomFocusDistance_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_USPCameraMode_GetCustomFocusDistance = FName(TEXT("GetCustomFocusDistance"));
	float USPCameraMode::GetCustomFocusDistance(AActor* ViewTarget, FTransform const& ViewToWorld) const
	{
		SPCameraMode_eventGetCustomFocusDistance_Parms Parms;
		Parms.ViewTarget=ViewTarget;
		Parms.ViewToWorld=ViewToWorld;
		const_cast<USPCameraMode*>(this)->ProcessEvent(FindFunctionChecked(NAME_USPCameraMode_GetCustomFocusDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USPCameraMode_ResetToDefaultSettings = FName(TEXT("ResetToDefaultSettings"));
	void USPCameraMode::ResetToDefaultSettings()
	{
		ProcessEvent(FindFunctionChecked(NAME_USPCameraMode_ResetToDefaultSettings),NULL);
	}
	void USPCameraMode::StaticRegisterNativesUSPCameraMode()
	{
		UClass* Class = USPCameraMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefaultSettings", &USPCameraMode::execResetToDefaultSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewToWorld;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPCameraMode_eventGetCustomFocusDistance_Parms, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld = { "ViewToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPCameraMode_eventGetCustomFocusDistance_Parms, ViewToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld_MetaData), Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPCameraMode_eventGetCustomFocusDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When UseCustomFocusDistance is true, this event should be implemented to determine a focus distance appropriate for the camera mode */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When UseCustomFocusDistance is true, this event should be implemented to determine a focus distance appropriate for the camera mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPCameraMode, nullptr, "GetCustomFocusDistance", nullptr, nullptr, Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::PropPointers), sizeof(SPCameraMode_eventGetCustomFocusDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(SPCameraMode_eventGetCustomFocusDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint native event for camera modes to reset to default settings as needed */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint native event for camera modes to reset to default settings as needed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPCameraMode, nullptr, "ResetToDefaultSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USPCameraMode);
	UClass* Z_Construct_UClass_USPCameraMode_NoRegister()
	{
		return USPCameraMode::StaticClass();
	}
	struct Z_Construct_UClass_USPCameraMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseViewTargetCameraComponent_MetaData[];
#endif
		static void NewProp_bUseViewTargetCameraComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseViewTargetCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCineCam_MetaData[];
#endif
		static void NewProp_bUseCineCam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCineCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCineCamSettings_MetaData[];
#endif
		static void NewProp_bUseCineCamSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCineCamSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFilmback_MetaData[];
#endif
		static void NewProp_bOverrideFilmback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFilmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_FilmbackOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CineCam_FilmbackOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_CurrentFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_CurrentFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_CurrentAperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_CurrentAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_FocusDistanceAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_FocusDistanceAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_DisplayOnly_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_DisplayOnly_FOV;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockingActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockingActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShakeInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleShakeWithViewTargetVelocity_MetaData[];
#endif
		static void NewProp_bScaleShakeWithViewTargetVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleShakeWithViewTargetVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaling_SpeedRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaling_SpeedRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaling_ScaleRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaling_ScaleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaleInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaleInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShake_MetaData[];
#endif
		static void NewProp_bDrawDebugShake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFocusDistance_MetaData[];
#endif
		static void NewProp_bUseCustomFocusDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideViewPitchMinAndMax_MetaData[];
#endif
		static void NewProp_bOverrideViewPitchMinAndMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideViewPitchMinAndMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMinOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMinOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMaxOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMaxOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPCameraMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Camera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USPCameraMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USPCameraMode_GetCustomFocusDistance, "GetCustomFocusDistance" }, // 297412078
		{ &Z_Construct_UFunction_USPCameraMode_ResetToDefaultSettings, "ResetToDefaultSettings" }, // 1412511697
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for Camera Mode implementations. Has functions and settings for camera activation, updating, and whether or not to use cine cam properties\n */" },
#endif
		{ "IncludePath", "SPCameraMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for Camera Mode implementations. Has functions and settings for camera activation, updating, and whether or not to use cine cam properties" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_PlayerCamera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera actor this mode is bound to */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera actor this mode is bound to" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, PlayerCamera), Z_Construct_UClass_ASPPlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_PlayerCamera_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_PlayerCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionInTime_MetaData[] = {
		{ "Category", "Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time camera transition should take when entering this camera mode */" },
#endif
		{ "DisplayName", "Transition In Time" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time camera transition should take when entering this camera mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionInTime = { "TransitionInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, TransitionInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionInTime_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionParams_MetaData[] = {
		{ "Category", "Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transition parameters for this camera mode type */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transition parameters for this camera mode type" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionParams_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionParams_MetaData) }; // 1057419013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Desired FOV.  Full angle, in degrees (e.g. 90.f) */" },
#endif
		{ "EditCondition", "!bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Desired FOV.  Full angle, in degrees (e.g. 90.f)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_FOV_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_FOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseViewTargetCameraComponent_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, camera will attempt to view through the ViewTarget's camera component */" },
#endif
		{ "EditCondition", "!bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, camera will attempt to view through the ViewTarget's camera component" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseViewTargetCameraComponent_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bUseViewTargetCameraComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseViewTargetCameraComponent = { "bUseViewTargetCameraComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseViewTargetCameraComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseViewTargetCameraComponent_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseViewTargetCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCam_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this camera mode will use a cine cam component, allowing access to cinematic camera settings */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this camera mode will use a cine cam component, allowing access to cinematic camera settings" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCam_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bUseCineCam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCam = { "bUseCineCam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCam_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCamSettings_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, custom cine cam settings will be applied when UseCinecam is enabled */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, custom cine cam settings will be applied when UseCinecam is enabled" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCamSettings_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bUseCineCamSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCamSettings = { "bUseCineCamSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCamSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCamSettings_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCamSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideFilmback_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, default cinecam filmback settings will be overriden by what is set in CineCam_FilmbackOverride */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, default cinecam filmback settings will be overriden by what is set in CineCam_FilmbackOverride" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideFilmback_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bOverrideFilmback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideFilmback = { "bOverrideFilmback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideFilmback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideFilmback_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideFilmback_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FilmbackOverride_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom filmback settings to use when OverrideFilmback is enabled */" },
#endif
		{ "EditCondition", "bOverrideFilmback" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom filmback settings to use when OverrideFilmback is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FilmbackOverride = { "CineCam_FilmbackOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, CineCam_FilmbackOverride), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FilmbackOverride_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FilmbackOverride_MetaData) }; // 1465417748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentFocalLength_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera focal length to use when UseCinecamSettings is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera focal length to use when UseCinecamSettings is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentFocalLength = { "CineCam_CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, CineCam_CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentFocalLength_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentFocalLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentAperture_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera aperture to use when UseCinecamSettings is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera aperture to use when UseCinecamSettings is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentAperture = { "CineCam_CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, CineCam_CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentAperture_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentAperture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom focus distance adjustment to use when UseCinecamSettings is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom focus distance adjustment to use when UseCinecamSettings is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment = { "CineCam_FocusDistanceAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, CineCam_FocusDistanceAdjustment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FOV to use when UseCineCam is enabled */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOV to use when UseCineCam is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV = { "CineCam_DisplayOnly_FOV", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, CineCam_DisplayOnly_FOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_BlockingActors_Inner = { "BlockingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_BlockingActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List for tracking actors that block the camera */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List for tracking actors that block the camera" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_BlockingActors = { "BlockingActors", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, BlockingActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_BlockingActors_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_BlockingActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera shake class to create when this camera mode becomes active */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera shake class to create when this camera mode becomes active" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, CameraShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeClass_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Shake object instance created when this camera mode is activated and a valid CameraShakeClass is set */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Shake object instance created when this camera mode is activated and a valid CameraShakeClass is set" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeInstance = { "CameraShakeInstance", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, CameraShakeInstance), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeInstance_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, camera shake will be scaled using the ShakeScaling_SpeedRange and the ShakeScaling_ScaleRange */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, camera shake will be scaled using the ShakeScaling_SpeedRange and the ShakeScaling_ScaleRange" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bScaleShakeWithViewTargetVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity = { "bScaleShakeWithViewTargetVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_SpeedRange_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ranges of view target velocity that will be mapped to a camera shake scale */" },
#endif
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranges of view target velocity that will be mapped to a camera shake scale" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_SpeedRange = { "ShakeScaling_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, ShakeScaling_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_SpeedRange_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_SpeedRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_ScaleRange_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maps to ShakeScaling_SpeedRange, such that at SpeedRange.X, shake will scale to ScaleRange.X */" },
#endif
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps to ShakeScaling_SpeedRange, such that at SpeedRange.X, shake will scale to ScaleRange.X" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_ScaleRange = { "ShakeScaling_ScaleRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, ShakeScaling_ScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_ScaleRange_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_ScaleRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaleInterpolator_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes in camera shake intensities */" },
#endif
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes in camera shake intensities" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaleInterpolator = { "ShakeScaleInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, ShakeScaleInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaleInterpolator_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaleInterpolator_MetaData) }; // 3990905342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bDrawDebugShake_MetaData[] = {
		{ "Category", "CameraShake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, the camera mode will attempt to display debug information related to camera shake*/" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, the camera mode will attempt to display debug information related to camera shake" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bDrawDebugShake_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bDrawDebugShake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bDrawDebugShake = { "bDrawDebugShake", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bDrawDebugShake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bDrawDebugShake_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bDrawDebugShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCustomFocusDistance_MetaData[] = {
		{ "Category", "CineCam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, a custom focus distance will be provided to the cine cam via an implementation of the GetCustomFocusDistance Blueprint Implementable Event */" },
#endif
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, a custom focus distance will be provided to the cine cam via an implementation of the GetCustomFocusDistance Blueprint Implementable Event" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCustomFocusDistance_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bUseCustomFocusDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCustomFocusDistance = { "bUseCustomFocusDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCustomFocusDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCustomFocusDistance_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCustomFocusDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, custom view pitch limits will be used for this camera mode */" },
#endif
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, custom view pitch limits will be used for this camera mode" },
#endif
	};
#endif
	void Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_SetBit(void* Obj)
	{
		((USPCameraMode*)Obj)->bOverrideViewPitchMinAndMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax = { "bOverrideViewPitchMinAndMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCameraMode), &Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMinOverride_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch minimum limit to use when OverrideViewPitchMinAndMax is true */" },
#endif
		{ "EditCondition", "bOverrideViewPitchMinAndMax" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch minimum limit to use when OverrideViewPitchMinAndMax is true" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMinOverride = { "ViewPitchMinOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, ViewPitchMinOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMinOverride_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMinOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMaxOverride_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch maximum limit to use when OverrideViewPitchMinAndMax is true */" },
#endif
		{ "EditCondition", "bOverrideViewPitchMinAndMax" },
		{ "ModuleRelativePath", "SPCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch maximum limit to use when OverrideViewPitchMinAndMax is true" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMaxOverride = { "ViewPitchMaxOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCameraMode, ViewPitchMaxOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMaxOverride_MetaData), Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMaxOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USPCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_TransitionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseViewTargetCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCineCamSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FilmbackOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_CurrentAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_BlockingActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_BlockingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_CameraShakeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_SpeedRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaling_ScaleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_ShakeScaleInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bDrawDebugShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bUseCustomFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMinOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCameraMode_Statics::NewProp_ViewPitchMaxOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USPCameraMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USPCameraMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USPCameraMode_Statics::ClassParams = {
		&USPCameraMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USPCameraMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_USPCameraMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCameraMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USPCameraMode()
	{
		if (!Z_Registration_Info_UClass_USPCameraMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USPCameraMode.OuterSingleton, Z_Construct_UClass_USPCameraMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USPCameraMode.OuterSingleton;
	}
	template<> SP_CAMERA_API UClass* StaticClass<USPCameraMode>()
	{
		return USPCameraMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USPCameraMode);
	USPCameraMode::~USPCameraMode() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCameraMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCameraMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USPCameraMode, USPCameraMode::StaticClass, TEXT("USPCameraMode"), &Z_Registration_Info_UClass_USPCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USPCameraMode), 439375093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCameraMode_h_4032329649(TEXT("/Script/SP_Camera"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCameraMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
