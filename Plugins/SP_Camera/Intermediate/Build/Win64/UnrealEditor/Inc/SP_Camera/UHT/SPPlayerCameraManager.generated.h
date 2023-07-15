// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SPPlayerCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USPCameraMode;
enum class EDebugCameraStyle : uint8;
#ifdef SP_CAMERA_SPPlayerCameraManager_generated_h
#error "SPPlayerCameraManager.generated.h already included, missing '#pragma once' in SPPlayerCameraManager.h"
#endif
#define SP_CAMERA_SPPlayerCameraManager_generated_h

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveSPCamera_Statics; \
	SP_CAMERA_API static class UScriptStruct* StaticStruct();


template<> SP_CAMERA_API UScriptStruct* StaticStruct<struct FActiveSPCamera>();

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSPCameraModeInstance_Statics; \
	SP_CAMERA_API static class UScriptStruct* StaticStruct();


template<> SP_CAMERA_API UScriptStruct* StaticStruct<struct FSPCameraModeInstance>();

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_SPARSE_DATA
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraClassForCharacter); \
	DECLARE_FUNCTION(execStopAmbientCameraShake); \
	DECLARE_FUNCTION(execStartAmbientCameraShake); \
	DECLARE_FUNCTION(execSkipNextInterpolation); \
	DECLARE_FUNCTION(execSkipBlends); \
	DECLARE_FUNCTION(execIsUsingAlternateCamera); \
	DECLARE_FUNCTION(execClearAlternateCamera); \
	DECLARE_FUNCTION(execSetUsingAlternateCamera); \
	DECLARE_FUNCTION(execConfigureAlternateCamera); \
	DECLARE_FUNCTION(execResetViewPitchLimits); \
	DECLARE_FUNCTION(execSetViewPitchLimits); \
	DECLARE_FUNCTION(execSetDebugCameraStyle); \
	DECLARE_FUNCTION(execGetCurrentCameraMode);


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_CALLBACK_WRAPPERS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPPlayerCameraManager(); \
	friend struct Z_Construct_UClass_ASPPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(ASPPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP_Camera"), NO_API) \
	DECLARE_SERIALIZER(ASPPlayerCameraManager)


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPPlayerCameraManager(ASPPlayerCameraManager&&); \
	NO_API ASPPlayerCameraManager(const ASPPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPPlayerCameraManager) \
	NO_API virtual ~ASPPlayerCameraManager();


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_97_PROLOG
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_SPARSE_DATA \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_CALLBACK_WRAPPERS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_INCLASS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP_CAMERA_API UClass* StaticClass<class ASPPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPPlayerCameraManager_h


#define FOREACH_ENUM_EDEBUGCAMERASTYLE(op) \
	op(EDebugCameraStyle::None) \
	op(EDebugCameraStyle::Fixed) \
	op(EDebugCameraStyle::ThirdPerson) \
	op(EDebugCameraStyle::FreeCam) \
	op(EDebugCameraStyle::FreeCam_Default) \
	op(EDebugCameraStyle::FirstPerson) 

enum class EDebugCameraStyle : uint8;
template<> struct TIsUEnumClass<EDebugCameraStyle> { enum { Value = true }; };
template<> SP_CAMERA_API UEnum* StaticEnum<EDebugCameraStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
