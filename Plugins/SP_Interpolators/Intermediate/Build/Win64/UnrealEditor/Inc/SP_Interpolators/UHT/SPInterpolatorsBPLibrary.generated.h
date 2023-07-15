// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SPInterpolatorsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelerationInterpolatorFloat;
struct FAccelerationInterpolatorRotator;
struct FAccelerationInterpolatorVector;
struct FCritDampSpringInterpolatorRotator;
struct FCritDampSpringInterpolatorVector;
struct FDoubleIIRInterpolatorFloat;
struct FDoubleIIRInterpolatorRotator;
struct FDoubleIIRInterpolatorVector;
struct FIIRInterpolatorFloat;
struct FIIRInterpolatorRotator;
struct FIIRInterpolatorVector;
#ifdef SP_INTERPOLATORS_SPInterpolatorsBPLibrary_generated_h
#error "SPInterpolatorsBPLibrary.generated.h already included, missing '#pragma once' in SPInterpolatorsBPLibrary.h"
#endif
#define SP_INTERPOLATORS_SPInterpolatorsBPLibrary_generated_h

#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_SPARSE_DATA
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetCritDampedSpringInterpolatorRotator); \
	DECLARE_FUNCTION(execEvalCritDampedSpringInterpolatorRotator); \
	DECLARE_FUNCTION(execResetCritDampedSpringInterpolatorVector); \
	DECLARE_FUNCTION(execEvalCritDampedSpringInterpolatorVector); \
	DECLARE_FUNCTION(execResetDoubleIIRInterpolatorFloat); \
	DECLARE_FUNCTION(execEvalDoubleIIRInterpolatorFloat); \
	DECLARE_FUNCTION(execResetDoubleIIRInterpolatorRotator); \
	DECLARE_FUNCTION(execEvalDoubleIIRInterpolatorRotator); \
	DECLARE_FUNCTION(execResetDoubleIIRInterpolatorVector); \
	DECLARE_FUNCTION(execEvalDoubleIIRInterpolatorVector); \
	DECLARE_FUNCTION(execResetIIRInterpolatorRotator); \
	DECLARE_FUNCTION(execEvalIIRInterpolatorRotator); \
	DECLARE_FUNCTION(execResetIIRInterpolatorVector); \
	DECLARE_FUNCTION(execEvalIIRInterpolatorVector); \
	DECLARE_FUNCTION(execResetIIRInterpolatorFloat); \
	DECLARE_FUNCTION(execEvalIIRInterpolatorFloat); \
	DECLARE_FUNCTION(execResetAccelInterpolatorRotator); \
	DECLARE_FUNCTION(execEvalAccelInterpolatorRotator); \
	DECLARE_FUNCTION(execResetAccelInterpolatorVector); \
	DECLARE_FUNCTION(execEvalAccelInterpolatorVector); \
	DECLARE_FUNCTION(execResetAccelInterpolatorFloat); \
	DECLARE_FUNCTION(execEvalAccelInterpolatorFloat);


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_ACCESSORS
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSPInterpolatorsBPLibrary(); \
	friend struct Z_Construct_UClass_USPInterpolatorsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USPInterpolatorsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SP_Interpolators"), NO_API) \
	DECLARE_SERIALIZER(USPInterpolatorsBPLibrary)


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USPInterpolatorsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USPInterpolatorsBPLibrary(USPInterpolatorsBPLibrary&&); \
	NO_API USPInterpolatorsBPLibrary(const USPInterpolatorsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USPInterpolatorsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USPInterpolatorsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USPInterpolatorsBPLibrary) \
	NO_API virtual ~USPInterpolatorsBPLibrary();


#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_16_PROLOG
#define FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_SPARSE_DATA \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_ACCESSORS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP_INTERPOLATORS_API UClass* StaticClass<class USPInterpolatorsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElectricDreamsEnv2_5_4_Plugins_SP_Interpolators_Source_SPInterpolatorsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
