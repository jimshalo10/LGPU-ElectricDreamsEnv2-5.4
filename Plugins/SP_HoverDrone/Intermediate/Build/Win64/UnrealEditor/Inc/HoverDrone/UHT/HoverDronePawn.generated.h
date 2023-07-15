// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoverDronePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOVERDRONE_HoverDronePawn_generated_h
#error "HoverDronePawn.generated.h already included, missing '#pragma once' in HoverDronePawn.h"
#endif
#define HOVERDRONE_HoverDronePawn_generated_h

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_SPARSE_DATA
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAllowSpeedChange); \
	DECLARE_FUNCTION(execEndLookat); \
	DECLARE_FUNCTION(execBeginLookat); \
	DECLARE_FUNCTION(execSetToDefaultDroneSpeedIndex); \
	DECLARE_FUNCTION(execSetDroneSpeedIndex); \
	DECLARE_FUNCTION(execGetDroneSpeedIndex); \
	DECLARE_FUNCTION(execIsMaintainingConstantAltitude); \
	DECLARE_FUNCTION(execGetAltitude); \
	DECLARE_FUNCTION(execGetTiltedDroneRotation);


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoverDronePawn(); \
	friend struct Z_Construct_UClass_AHoverDronePawn_Statics; \
public: \
	DECLARE_CLASS(AHoverDronePawn, AHoverDronePawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoverDrone"), NO_API) \
	DECLARE_SERIALIZER(AHoverDronePawn)


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoverDronePawn(AHoverDronePawn&&); \
	NO_API AHoverDronePawn(const AHoverDronePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoverDronePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoverDronePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoverDronePawn) \
	NO_API virtual ~AHoverDronePawn();


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_12_PROLOG
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_SPARSE_DATA \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOVERDRONE_API UClass* StaticClass<class AHoverDronePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDronePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
