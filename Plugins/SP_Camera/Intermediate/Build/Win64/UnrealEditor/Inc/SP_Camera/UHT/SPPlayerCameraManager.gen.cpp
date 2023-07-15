// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPPlayerCameraManager() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	SP_CAMERA_API UClass* Z_Construct_UClass_ASPPlayerCameraManager();
	SP_CAMERA_API UClass* Z_Construct_UClass_ASPPlayerCameraManager_NoRegister();
	SP_CAMERA_API UClass* Z_Construct_UClass_USPCameraMode_NoRegister();
	SP_CAMERA_API UEnum* Z_Construct_UEnum_SP_Camera_EDebugCameraStyle();
	SP_CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FActiveSPCamera();
	SP_CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FSPCameraModeInstance();
	UPackage* Z_Construct_UPackage__Script_SP_Camera();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDebugCameraStyle;
	static UEnum* EDebugCameraStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDebugCameraStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDebugCameraStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SP_Camera_EDebugCameraStyle, (UObject*)Z_Construct_UPackage__Script_SP_Camera(), TEXT("EDebugCameraStyle"));
		}
		return Z_Registration_Info_UEnum_EDebugCameraStyle.OuterSingleton;
	}
	template<> SP_CAMERA_API UEnum* StaticEnum<EDebugCameraStyle>()
	{
		return EDebugCameraStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::Enumerators[] = {
		{ "EDebugCameraStyle::None", (int64)EDebugCameraStyle::None },
		{ "EDebugCameraStyle::Fixed", (int64)EDebugCameraStyle::Fixed },
		{ "EDebugCameraStyle::ThirdPerson", (int64)EDebugCameraStyle::ThirdPerson },
		{ "EDebugCameraStyle::FreeCam", (int64)EDebugCameraStyle::FreeCam },
		{ "EDebugCameraStyle::FreeCam_Default", (int64)EDebugCameraStyle::FreeCam_Default },
		{ "EDebugCameraStyle::FirstPerson", (int64)EDebugCameraStyle::FirstPerson },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enumerated equivalents of default camera modes for ease of use\n */" },
#endif
		{ "FirstPerson.Name", "EDebugCameraStyle::FirstPerson" },
		{ "Fixed.Name", "EDebugCameraStyle::Fixed" },
		{ "FreeCam.Name", "EDebugCameraStyle::FreeCam" },
		{ "FreeCam_Default.Name", "EDebugCameraStyle::FreeCam_Default" },
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
		{ "None.Name", "EDebugCameraStyle::None" },
		{ "ThirdPerson.Name", "EDebugCameraStyle::ThirdPerson" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerated equivalents of default camera modes for ease of use" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SP_Camera,
		nullptr,
		"EDebugCameraStyle",
		"EDebugCameraStyle",
		Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SP_Camera_EDebugCameraStyle()
	{
		if (!Z_Registration_Info_UEnum_EDebugCameraStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDebugCameraStyle.InnerSingleton, Z_Construct_UEnum_SP_Camera_EDebugCameraStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDebugCameraStyle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveSPCamera;
class UScriptStruct* FActiveSPCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveSPCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveSPCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveSPCamera, (UObject*)Z_Construct_UPackage__Script_SP_Camera(), TEXT("ActiveSPCamera"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveSPCamera.OuterSingleton;
}
template<> SP_CAMERA_API UScriptStruct* StaticStruct<FActiveSPCamera>()
{
	return FActiveSPCamera::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveSPCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveSPCamera_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Representations of active cameras that the manager is currently blending between\n */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Representations of active cameras that the manager is currently blending between" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveSPCamera>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_Camera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to camera instance */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to camera instance" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSPCamera, Camera), Z_Construct_UClass_USPCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_Camera_MetaData), Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_ViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to current view target */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to current view target" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSPCamera, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_ViewTarget_MetaData), Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_ViewTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveSPCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewProp_ViewTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveSPCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Camera,
		nullptr,
		&NewStructOps,
		"ActiveSPCamera",
		Z_Construct_UScriptStruct_FActiveSPCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSPCamera_Statics::PropPointers),
		sizeof(FActiveSPCamera),
		alignof(FActiveSPCamera),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSPCamera_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveSPCamera_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSPCamera_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActiveSPCamera()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveSPCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveSPCamera.InnerSingleton, Z_Construct_UScriptStruct_FActiveSPCamera_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveSPCamera.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SPCameraModeInstance;
class UScriptStruct* FSPCameraModeInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SPCameraModeInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SPCameraModeInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSPCameraModeInstance, (UObject*)Z_Construct_UPackage__Script_SP_Camera(), TEXT("SPCameraModeInstance"));
	}
	return Z_Registration_Info_UScriptStruct_SPCameraModeInstance.OuterSingleton;
}
template<> SP_CAMERA_API UScriptStruct* StaticStruct<FSPCameraModeInstance>()
{
	return FSPCameraModeInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraModeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instances of camera modes that can be used/reused to support active cameras */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instances of camera modes that can be used/reused to support active cameras" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSPCameraModeInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraModeClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode class associated with the instance */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode class associated with the instance" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraModeClass = { "CameraModeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPCameraModeInstance, CameraModeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USPCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraModeClass_MetaData), Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraModeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_ViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View target that the instance is focusing */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View target that the instance is focusing" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPCameraModeInstance, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_ViewTarget_MetaData), Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_ViewTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraMode_MetaData[] = {
		{ "Category", "SPCameraModeInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode object associated with the instance */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode object associated with the instance" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPCameraModeInstance, CameraMode), Z_Construct_UClass_USPCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraMode_MetaData), Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CineCameraComponent_MetaData[] = {
		{ "Category", "SPCameraModeInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cine cam component associated with the instance */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cine cam component associated with the instance" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CineCameraComponent = { "CineCameraComponent", nullptr, (EPropertyFlags)0x001000000008081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPCameraModeInstance, CineCameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CineCameraComponent_MetaData), Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CineCameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraModeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CameraMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewProp_CineCameraComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Camera,
		nullptr,
		&NewStructOps,
		"SPCameraModeInstance",
		Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::PropPointers),
		sizeof(FSPCameraModeInstance),
		alignof(FSPCameraModeInstance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSPCameraModeInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_SPCameraModeInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SPCameraModeInstance.InnerSingleton, Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SPCameraModeInstance.InnerSingleton;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execGetCameraClassForCharacter)
	{
		P_GET_OBJECT(AActor,Z_Param_InViewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<USPCameraMode> *)Z_Param__Result=P_THIS->GetCameraClassForCharacter_Implementation(Z_Param_InViewTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execStopAmbientCameraShake)
	{
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAmbientCameraShake(Z_Param_bImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execStartAmbientCameraShake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAmbientCameraShake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execSkipNextInterpolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkipNextInterpolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execSkipBlends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkipBlends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execIsUsingAlternateCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAlternateCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execClearAlternateCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAlternateCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execSetUsingAlternateCamera)
	{
		P_GET_UBOOL(Z_Param_bNewUsingAltCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUsingAlternateCamera(Z_Param_bNewUsingAltCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execConfigureAlternateCamera)
	{
		P_GET_OBJECT(UClass,Z_Param_NewAltCameraMode);
		P_GET_OBJECT(AActor,Z_Param_NewAltViewTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAltCameraTransitionTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfigureAlternateCamera(Z_Param_NewAltCameraMode,Z_Param_NewAltViewTarget,Z_Param_NewAltCameraTransitionTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execResetViewPitchLimits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetViewPitchLimits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execSetViewPitchLimits)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinPitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewPitchLimits(Z_Param_MinPitch,Z_Param_MaxPitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execSetDebugCameraStyle)
	{
		P_GET_ENUM(EDebugCameraStyle,Z_Param_NewDebugCameraStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugCameraStyle(EDebugCameraStyle(Z_Param_NewDebugCameraStyle));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPPlayerCameraManager::execGetCurrentCameraMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USPCameraMode**)Z_Param__Result=P_THIS->GetCurrentCameraMode();
		P_NATIVE_END;
	}
	struct SPPlayerCameraManager_eventGetCameraClassForCharacter_Parms
	{
		const AActor* InViewTarget;
		TSubclassOf<USPCameraMode>  ReturnValue;

		/** Constructor, initializes return property only **/
		SPPlayerCameraManager_eventGetCameraClassForCharacter_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_ASPPlayerCameraManager_GetCameraClassForCharacter = FName(TEXT("GetCameraClassForCharacter"));
	TSubclassOf<USPCameraMode>  ASPPlayerCameraManager::GetCameraClassForCharacter(const AActor* InViewTarget) const
	{
		SPPlayerCameraManager_eventGetCameraClassForCharacter_Parms Parms;
		Parms.InViewTarget=InViewTarget;
		const_cast<ASPPlayerCameraManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_ASPPlayerCameraManager_GetCameraClassForCharacter),&Parms);
		return Parms.ReturnValue;
	}
	void ASPPlayerCameraManager::StaticRegisterNativesASPPlayerCameraManager()
	{
		UClass* Class = ASPPlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAlternateCamera", &ASPPlayerCameraManager::execClearAlternateCamera },
			{ "ConfigureAlternateCamera", &ASPPlayerCameraManager::execConfigureAlternateCamera },
			{ "GetCameraClassForCharacter", &ASPPlayerCameraManager::execGetCameraClassForCharacter },
			{ "GetCurrentCameraMode", &ASPPlayerCameraManager::execGetCurrentCameraMode },
			{ "IsUsingAlternateCamera", &ASPPlayerCameraManager::execIsUsingAlternateCamera },
			{ "ResetViewPitchLimits", &ASPPlayerCameraManager::execResetViewPitchLimits },
			{ "SetDebugCameraStyle", &ASPPlayerCameraManager::execSetDebugCameraStyle },
			{ "SetUsingAlternateCamera", &ASPPlayerCameraManager::execSetUsingAlternateCamera },
			{ "SetViewPitchLimits", &ASPPlayerCameraManager::execSetViewPitchLimits },
			{ "SkipBlends", &ASPPlayerCameraManager::execSkipBlends },
			{ "SkipNextInterpolation", &ASPPlayerCameraManager::execSkipNextInterpolation },
			{ "StartAmbientCameraShake", &ASPPlayerCameraManager::execStartAmbientCameraShake },
			{ "StopAmbientCameraShake", &ASPPlayerCameraManager::execStopAmbientCameraShake },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears any alternate camera settings stored*/" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears any alternate camera settings stored" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "ClearAlternateCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics
	{
		struct SPPlayerCameraManager_eventConfigureAlternateCamera_Parms
		{
			TSubclassOf<USPCameraMode>  NewAltCameraMode;
			AActor* NewAltViewTarget;
			float NewAltCameraTransitionTime;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewAltCameraMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAltViewTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAltCameraTransitionTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraMode = { "NewAltCameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventConfigureAlternateCamera_Parms, NewAltCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_USPCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltViewTarget = { "NewAltViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventConfigureAlternateCamera_Parms, NewAltViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraTransitionTime = { "NewAltCameraTransitionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventConfigureAlternateCamera_Parms, NewAltCameraTransitionTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::NewProp_NewAltCameraTransitionTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets camera mode, potential view target, and transition time when alternate camera mode is enabled */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets camera mode, potential view target, and transition time when alternate camera mode is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "ConfigureAlternateCamera", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::SPPlayerCameraManager_eventConfigureAlternateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::SPPlayerCameraManager_eventConfigureAlternateCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InViewTarget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_InViewTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_InViewTarget = { "InViewTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventGetCameraClassForCharacter_Parms, InViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_InViewTarget_MetaData), Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_InViewTarget_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventGetCameraClassForCharacter_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_USPCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_InViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns camera mode that is deemed appropriate for the current view target */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns camera mode that is deemed appropriate for the current view target" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "GetCameraClassForCharacter", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers), sizeof(SPPlayerCameraManager_eventGetCameraClassForCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(SPPlayerCameraManager_eventGetCameraClassForCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics
	{
		struct SPPlayerCameraManager_eventGetCurrentCameraMode_Parms
		{
			USPCameraMode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventGetCurrentCameraMode_Parms, ReturnValue), Z_Construct_UClass_USPCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the camera mode that is currently in use by the Camera Manager */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the camera mode that is currently in use by the Camera Manager" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "GetCurrentCameraMode", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::SPPlayerCameraManager_eventGetCurrentCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::SPPlayerCameraManager_eventGetCurrentCameraMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics
	{
		struct SPPlayerCameraManager_eventIsUsingAlternateCamera_Parms
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
	void Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SPPlayerCameraManager_eventIsUsingAlternateCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPPlayerCameraManager_eventIsUsingAlternateCamera_Parms), &Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "IsUsingAlternateCamera", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::SPPlayerCameraManager_eventIsUsingAlternateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::SPPlayerCameraManager_eventIsUsingAlternateCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets view pitch limits to values that were originally set in class defaults */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets view pitch limits to values that were originally set in class defaults" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "ResetViewPitchLimits", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics
	{
		struct SPPlayerCameraManager_eventSetDebugCameraStyle_Parms
		{
			EDebugCameraStyle NewDebugCameraStyle;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugCameraStyle_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugCameraStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle = { "NewDebugCameraStyle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventSetDebugCameraStyle_Parms, NewDebugCameraStyle), Z_Construct_UEnum_SP_Camera_EDebugCameraStyle, METADATA_PARAMS(0, nullptr) }; // 1659948092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::NewProp_NewDebugCameraStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a premade camera style for debugging purposes */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a premade camera style for debugging purposes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "SetDebugCameraStyle", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::SPPlayerCameraManager_eventSetDebugCameraStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::SPPlayerCameraManager_eventSetDebugCameraStyle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics
	{
		struct SPPlayerCameraManager_eventSetUsingAlternateCamera_Parms
		{
			bool bNewUsingAltCamera;
		};
		static void NewProp_bNewUsingAltCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUsingAltCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera_SetBit(void* Obj)
	{
		((SPPlayerCameraManager_eventSetUsingAlternateCamera_Parms*)Obj)->bNewUsingAltCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera = { "bNewUsingAltCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPPlayerCameraManager_eventSetUsingAlternateCamera_Parms), &Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::NewProp_bNewUsingAltCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use the current alternate camera settings or not */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use the current alternate camera settings or not" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "SetUsingAlternateCamera", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::SPPlayerCameraManager_eventSetUsingAlternateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::SPPlayerCameraManager_eventSetUsingAlternateCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics
	{
		struct SPPlayerCameraManager_eventSetViewPitchLimits_Parms
		{
			float MinPitch;
			float MaxPitch;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventSetViewPitchLimits_Parms, MinPitch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPPlayerCameraManager_eventSetViewPitchLimits_Parms, MaxPitch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MinPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::NewProp_MaxPitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets view pitch limits to the values passed in */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets view pitch limits to the values passed in" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "SetViewPitchLimits", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::SPPlayerCameraManager_eventSetViewPitchLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::SPPlayerCameraManager_eventSetViewPitchLimits_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "SkipBlends", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "SkipNextInterpolation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "StartAmbientCameraShake", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics
	{
		struct SPPlayerCameraManager_eventStopAmbientCameraShake_Parms
		{
			bool bImmediate;
		};
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((SPPlayerCameraManager_eventStopAmbientCameraShake_Parms*)Obj)->bImmediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPPlayerCameraManager_eventStopAmbientCameraShake_Parms), &Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPPlayerCameraManager, nullptr, "StopAmbientCameraShake", nullptr, nullptr, Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::SPPlayerCameraManager_eventStopAmbientCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::SPPlayerCameraManager_eventStopAmbientCameraShake_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPPlayerCameraManager);
	UClass* Z_Construct_UClass_ASPPlayerCameraManager_NoRegister()
	{
		return ASPPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ASPPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePelvisRelativeZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePelvisRelativeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AltViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedMainViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedMainViewTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraBlendStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBlendStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraBlendStack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_SP_Camera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPPlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_ClearAlternateCamera, "ClearAlternateCamera" }, // 9484213
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_ConfigureAlternateCamera, "ConfigureAlternateCamera" }, // 2717101675
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_GetCameraClassForCharacter, "GetCameraClassForCharacter" }, // 935465942
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_GetCurrentCameraMode, "GetCurrentCameraMode" }, // 1445639097
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_IsUsingAlternateCamera, "IsUsingAlternateCamera" }, // 649806070
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_ResetViewPitchLimits, "ResetViewPitchLimits" }, // 2220106927
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_SetDebugCameraStyle, "SetDebugCameraStyle" }, // 133764173
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_SetUsingAlternateCamera, "SetUsingAlternateCamera" }, // 3870097835
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_SetViewPitchLimits, "SetViewPitchLimits" }, // 3614755401
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_SkipBlends, "SkipBlends" }, // 199773834
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_SkipNextInterpolation, "SkipNextInterpolation" }, // 4057458688
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_StartAmbientCameraShake, "StartAmbientCameraShake" }, // 1094702141
		{ &Z_Construct_UFunction_ASPPlayerCameraManager_StopAmbientCameraShake, "StopAmbientCameraShake" }, // 867860155
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPPlayerCameraManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Representations of active cameras that the manager is currently blending between\n */" },
#endif
		{ "IncludePath", "SPPlayerCameraManager.h" },
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Representations of active cameras that the manager is currently blending between" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_BasePelvisRelativeZ_MetaData[] = {
		{ "Category", "SPPlayerCameraManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pelvis Z height, in component space. */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pelvis Z height, in component space." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_BasePelvisRelativeZ = { "BasePelvisRelativeZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPPlayerCameraManager, BasePelvisRelativeZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_BasePelvisRelativeZ_MetaData), Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_BasePelvisRelativeZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_PelvisBoneName_MetaData[] = {
		{ "Category", "SPPlayerCameraManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pelvis bone name for characters acting as camera view targets */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pelvis bone name for characters acting as camera view targets" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_PelvisBoneName = { "PelvisBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPPlayerCameraManager, PelvisBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_PelvisBoneName_MetaData), Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_PelvisBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_AltViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View target to focus when using alt camera mode */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View target to focus when using alt camera mode" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_AltViewTarget = { "AltViewTarget", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPPlayerCameraManager, AltViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_AltViewTarget_MetaData), Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_AltViewTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_SavedMainViewTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View target to return to when leaving the alt camera mode */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View target to return to when leaving the alt camera mode" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_SavedMainViewTarget = { "SavedMainViewTarget", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPPlayerCameraManager, SavedMainViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_SavedMainViewTarget_MetaData), Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_SavedMainViewTarget_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraBlendStack_Inner = { "CameraBlendStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveSPCamera, METADATA_PARAMS(0, nullptr) }; // 1845005699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraBlendStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stack of active camera the manager will attempt to blend between */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack of active camera the manager will attempt to blend between" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraBlendStack = { "CameraBlendStack", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPPlayerCameraManager, CameraBlendStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraBlendStack_MetaData), Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraBlendStack_MetaData) }; // 1845005699
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSPCameraModeInstance, METADATA_PARAMS(0, nullptr) }; // 1407958654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraModeInstances_MetaData[] = {
		{ "Category", "SPPlayerCameraManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of available camera mode instances */" },
#endif
		{ "ModuleRelativePath", "SPPlayerCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of available camera mode instances" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0020088000002815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPPlayerCameraManager, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraModeInstances_MetaData), Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraModeInstances_MetaData) }; // 1407958654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_BasePelvisRelativeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_PelvisBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_AltViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_SavedMainViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraBlendStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraBlendStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraModeInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPPlayerCameraManager_Statics::NewProp_CameraModeInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPPlayerCameraManager_Statics::ClassParams = {
		&ASPPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPPlayerCameraManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPPlayerCameraManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASPPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_ASPPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPPlayerCameraManager.OuterSingleton, Z_Construct_UClass_ASPPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPPlayerCameraManager.OuterSingleton;
	}
	template<> SP_CAMERA_API UClass* StaticClass<ASPPlayerCameraManager>()
	{
		return ASPPlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPPlayerCameraManager);
	ASPPlayerCameraManager::~ASPPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::EnumInfo[] = {
		{ EDebugCameraStyle_StaticEnum, TEXT("EDebugCameraStyle"), &Z_Registration_Info_UEnum_EDebugCameraStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1659948092U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::ScriptStructInfo[] = {
		{ FActiveSPCamera::StaticStruct, Z_Construct_UScriptStruct_FActiveSPCamera_Statics::NewStructOps, TEXT("ActiveSPCamera"), &Z_Registration_Info_UScriptStruct_ActiveSPCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveSPCamera), 1845005699U) },
		{ FSPCameraModeInstance::StaticStruct, Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics::NewStructOps, TEXT("SPCameraModeInstance"), &Z_Registration_Info_UScriptStruct_SPCameraModeInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSPCameraModeInstance), 1407958654U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPPlayerCameraManager, ASPPlayerCameraManager::StaticClass, TEXT("ASPPlayerCameraManager"), &Z_Registration_Info_UClass_ASPPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPPlayerCameraManager), 2722678170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_1766222209(TEXT("/Script/SP_Camera"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
