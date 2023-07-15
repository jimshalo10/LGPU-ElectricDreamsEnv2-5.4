// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SPCam_ThirdPerson.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP_CAMERA_SPCam_ThirdPerson_generated_h
#error "SPCam_ThirdPerson.generated.h already included, missing '#pragma once' in SPCam_ThirdPerson.h"
#endif
#define SP_CAMERA_SPCam_ThirdPerson_generated_h

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPenetrationAvoidanceRay_Statics; \
	SP_CAMERA_API static class UScriptStruct* StaticStruct();


template<> SP_CAMERA_API UScriptStruct* StaticStruct<struct FPenetrationAvoidanceRay>();

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_SPARSE_DATA
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSPCam_ThirdPerson(); \
	friend struct Z_Construct_UClass_USPCam_ThirdPerson_Statics; \
public: \
	DECLARE_CLASS(USPCam_ThirdPerson, USPCameraMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SP_Camera"), NO_API) \
	DECLARE_SERIALIZER(USPCam_ThirdPerson)


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USPCam_ThirdPerson(USPCam_ThirdPerson&&); \
	NO_API USPCam_ThirdPerson(const USPCam_ThirdPerson&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USPCam_ThirdPerson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USPCam_ThirdPerson); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USPCam_ThirdPerson) \
	NO_API virtual ~USPCam_ThirdPerson();


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_80_PROLOG
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_SPARSE_DATA \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_INCLASS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP_CAMERA_API UClass* StaticClass<class USPCam_ThirdPerson>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElectricDreamsEnv2_5_4_Plugins_SP_Camera_Source_SPCam_ThirdPerson_h


#define FOREACH_ENUM_ECAMERAAUTOFOLLOWMODE(op) \
	op(ECameraAutoFollowMode::None) \
	op(ECameraAutoFollowMode::LazyFollow) \
	op(ECameraAutoFollowMode::FullFollow) 

enum class ECameraAutoFollowMode : uint8;
template<> struct TIsUEnumClass<ECameraAutoFollowMode> { enum { Value = true }; };
template<> SP_CAMERA_API UEnum* StaticEnum<ECameraAutoFollowMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
