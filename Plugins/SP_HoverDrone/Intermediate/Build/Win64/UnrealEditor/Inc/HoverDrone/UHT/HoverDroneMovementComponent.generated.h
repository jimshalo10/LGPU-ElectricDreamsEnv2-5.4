// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoverDroneMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOVERDRONE_HoverDroneMovementComponent_generated_h
#error "HoverDroneMovementComponent.generated.h already included, missing '#pragma once' in HoverDroneMovementComponent.h"
#endif
#define HOVERDRONE_HoverDroneMovementComponent_generated_h

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_11_DELEGATE \
HOVERDRONE_API void FMaxAllowedSpeedUpdated_DelegateWrapper(const FMulticastScriptDelegate& MaxAllowedSpeedUpdated);


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_SPARSE_DATA
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRotationalVelocity); \
	DECLARE_FUNCTION(execAddVelocity); \
	DECLARE_FUNCTION(execSetCurrentFOV);


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoverDroneMovementComponent(); \
	friend struct Z_Construct_UClass_UHoverDroneMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UHoverDroneMovementComponent, USpectatorPawnMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoverDrone"), NO_API) \
	DECLARE_SERIALIZER(UHoverDroneMovementComponent)


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoverDroneMovementComponent(UHoverDroneMovementComponent&&); \
	NO_API UHoverDroneMovementComponent(const UHoverDroneMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoverDroneMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoverDroneMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoverDroneMovementComponent) \
	NO_API virtual ~UHoverDroneMovementComponent();


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_28_PROLOG
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_SPARSE_DATA \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOVERDRONE_API UClass* StaticClass<class UHoverDroneMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElectricDreamsEnv2_5_4_Plugins_SP_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h


#define FOREACH_ENUM_EHOVERDRONEDEBUG(op) \
	op(EHoverDroneDebug::Off) \
	op(EHoverDroneDebug::Position) \
	op(EHoverDroneDebug::Velocity) \
	op(EHoverDroneDebug::RotationalVelocity) \
	op(EHoverDroneDebug::Altitude) \
	op(EHoverDroneDebug::ForceFacing) \
	op(EHoverDroneDebug::FOV) \
	op(EHoverDroneDebug::All) 

enum class EHoverDroneDebug;
template<> struct TIsUEnumClass<EHoverDroneDebug> { enum { Value = true }; };
template<> HOVERDRONE_API UEnum* StaticEnum<EHoverDroneDebug>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
