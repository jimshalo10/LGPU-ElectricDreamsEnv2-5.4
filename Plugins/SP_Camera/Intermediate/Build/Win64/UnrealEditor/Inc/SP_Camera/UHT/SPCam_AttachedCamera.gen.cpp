// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPCam_AttachedCamera.h"
#include "SPInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPCam_AttachedCamera() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCam_AttachedCamera();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCam_AttachedCamera_NoRegister();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCameraMode();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector();
	SP_INTERPOLATORS_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	UPackage* Z_Construct_UPackage__Script_SP_Camera();
// End Cross Module References
	DEFINE_FUNCTION(USPCam_AttachedCamera::execChooseViewCameraComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_ViewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->ChooseViewCameraComponent_Implementation(Z_Param_ViewTarget);
		P_NATIVE_END;
	}
	struct SPCam_AttachedCamera_eventChooseViewCameraComponent_Parms
	{
		AActor* ViewTarget;
		UCameraComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		SPCam_AttachedCamera_eventChooseViewCameraComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_USPCam_AttachedCamera_ChooseViewCameraComponent = FName(TEXT("ChooseViewCameraComponent"));
	UCameraComponent* USPCam_AttachedCamera::ChooseViewCameraComponent(AActor* ViewTarget) const
	{
		SPCam_AttachedCamera_eventChooseViewCameraComponent_Parms Parms;
		Parms.ViewTarget=ViewTarget;
		const_cast<USPCam_AttachedCamera*>(this)->ProcessEvent(FindFunctionChecked(NAME_USPCam_AttachedCamera_ChooseViewCameraComponent),&Parms);
		return Parms.ReturnValue;
	}
	void USPCam_AttachedCamera::StaticRegisterNativesUSPCam_AttachedCamera()
	{
		UClass* Class = USPCam_AttachedCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseViewCameraComponent", &USPCam_AttachedCamera::execChooseViewCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPCam_AttachedCamera_eventChooseViewCameraComponent_Parms, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPCam_AttachedCamera_eventChooseViewCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End USPCameraModeInterface\n" },
#endif
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USPCam_AttachedCamera, nullptr, "ChooseViewCameraComponent", nullptr, nullptr, Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::PropPointers), sizeof(SPCam_AttachedCamera_eventChooseViewCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(SPCam_AttachedCamera_eventChooseViewCameraComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USPCam_AttachedCamera);
	UClass* Z_Construct_UClass_USPCam_AttachedCamera_NoRegister()
	{
		return USPCam_AttachedCamera::StaticClass();
	}
	struct Z_Construct_UClass_USPCam_AttachedCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPlayerRotationControl_MetaData[];
#endif
		static void NewProp_bAllowPlayerRotationControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPlayerRotationControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControlRotInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerControlRotInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraLocZInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraLocZInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPitchLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPitchLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotYawLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotYawLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastViewCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastViewCameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPCam_AttachedCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USPCameraMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Camera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USPCam_AttachedCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USPCam_AttachedCamera_ChooseViewCameraComponent, "ChooseViewCameraComponent" }, // 971442687
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * For viewing through a selected cameracomponent of the ViewTarget\n */" },
#endif
		{ "IncludePath", "SPCam_AttachedCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For viewing through a selected cameracomponent of the ViewTarget" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LocInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera pivot's location in world space. Note: For very fast moving objects you may want to set this to 0,0 for instant pivot updates */" },
#endif
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera pivot's location in world space. Note: For very fast moving objects you may want to set this to 0,0 for instant pivot updates" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LocInterpolator = { "LocInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_AttachedCamera, LocInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LocInterpolator_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LocInterpolator_MetaData) }; // 422364417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_RotInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the camera pivot's rotation in world space */" },
#endif
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the camera pivot's rotation in world space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_RotInterpolator = { "RotInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_AttachedCamera, RotInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_RotInterpolator_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_RotInterpolator_MetaData) }; // 3873428445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_bAllowPlayerRotationControl_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
	};
#endif
	void Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_bAllowPlayerRotationControl_SetBit(void* Obj)
	{
		((USPCam_AttachedCamera*)Obj)->bAllowPlayerRotationControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_bAllowPlayerRotationControl = { "bAllowPlayerRotationControl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USPCam_AttachedCamera), &Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_bAllowPlayerRotationControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_bAllowPlayerRotationControl_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_bAllowPlayerRotationControl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PlayerControlRotInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator for smooth changes to the player's control rot -- applied in attached camera's local space */" },
#endif
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator for smooth changes to the player's control rot -- applied in attached camera's local space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PlayerControlRotInterpolator = { "PlayerControlRotInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_AttachedCamera, PlayerControlRotInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PlayerControlRotInterpolator_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PlayerControlRotInterpolator_MetaData) }; // 3873428445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_ExtraLocZInterpolator_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applied after LocInterpolator, but only to the Z component of the location. */" },
#endif
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applied after LocInterpolator, but only to the Z component of the location." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_ExtraLocZInterpolator = { "ExtraLocZInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_AttachedCamera, ExtraLocZInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_ExtraLocZInterpolator_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_ExtraLocZInterpolator_MetaData) }; // 3990905342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotPitchLimits_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min and Max pitch thresholds for the camera pivot, in degrees  */" },
#endif
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max pitch thresholds for the camera pivot, in degrees" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotPitchLimits = { "PivotPitchLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_AttachedCamera, PivotPitchLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotPitchLimits_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotPitchLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotYawLimits_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min and Max yaw thresholds for the camera pivot in degrees */" },
#endif
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min and Max yaw thresholds for the camera pivot in degrees" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotYawLimits = { "PivotYawLimits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_AttachedCamera, PivotYawLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotYawLimits_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotYawLimits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LastViewCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPCam_AttachedCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LastViewCameraComponent = { "LastViewCameraComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USPCam_AttachedCamera, LastViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LastViewCameraComponent_MetaData), Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LastViewCameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USPCam_AttachedCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LocInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_RotInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_bAllowPlayerRotationControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PlayerControlRotInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_ExtraLocZInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotPitchLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_PivotYawLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPCam_AttachedCamera_Statics::NewProp_LastViewCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USPCam_AttachedCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USPCam_AttachedCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USPCam_AttachedCamera_Statics::ClassParams = {
		&USPCam_AttachedCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USPCam_AttachedCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_USPCam_AttachedCamera_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USPCam_AttachedCamera_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USPCam_AttachedCamera()
	{
		if (!Z_Registration_Info_UClass_USPCam_AttachedCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USPCam_AttachedCamera.OuterSingleton, Z_Construct_UClass_USPCam_AttachedCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USPCam_AttachedCamera.OuterSingleton;
	}
	template<> SP_CAMERA_API UClass* StaticClass<USPCam_AttachedCamera>()
	{
		return USPCam_AttachedCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USPCam_AttachedCamera);
	USPCam_AttachedCamera::~USPCam_AttachedCamera() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_AttachedCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_AttachedCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USPCam_AttachedCamera, USPCam_AttachedCamera::StaticClass, TEXT("USPCam_AttachedCamera"), &Z_Registration_Info_UClass_USPCam_AttachedCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USPCam_AttachedCamera), 1442177089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_AttachedCamera_h_678722562(TEXT("/Script/SP_Camera"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_AttachedCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_AttachedCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
