// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectricDreamsSample/Audio/EDSMixManagerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDSMixManagerSubsystem() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	ELECTRICDREAMSSAMPLE_API UClass* Z_Construct_UClass_UEDSMixManagerSubsystem();
	ELECTRICDREAMSSAMPLE_API UClass* Z_Construct_UClass_UEDSMixManagerSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_ElectricDreamsSample();
// End Cross Module References
	void UEDSMixManagerSubsystem::StaticRegisterNativesUEDSMixManagerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEDSMixManagerSubsystem);
	UClass* Z_Construct_UClass_UEDSMixManagerSubsystem_NoRegister()
	{
		return UEDSMixManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEDSMixManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultBaseMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LiveMix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ElectricDreamsSample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Audio/EDSMixManagerSubsystem.h" },
		{ "ModuleRelativePath", "Audio/EDSMixManagerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_DefaultBaseMix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default Sound Control Bus Mix retrieved from the EDS Audio Settings\n" },
#endif
		{ "ModuleRelativePath", "Audio/EDSMixManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Sound Control Bus Mix retrieved from the EDS Audio Settings" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_DefaultBaseMix = { "DefaultBaseMix", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEDSMixManagerSubsystem, DefaultBaseMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_DefaultBaseMix_MetaData), Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_DefaultBaseMix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_LiveMix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Live Sound Control Bus Mix retrieved from the EDS Audio Settings\n" },
#endif
		{ "ModuleRelativePath", "Audio/EDSMixManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Live Sound Control Bus Mix retrieved from the EDS Audio Settings" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_LiveMix = { "LiveMix", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEDSMixManagerSubsystem, LiveMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_LiveMix_MetaData), Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_LiveMix_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_DefaultBaseMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::NewProp_LiveMix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEDSMixManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::ClassParams = {
		&UEDSMixManagerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEDSMixManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEDSMixManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEDSMixManagerSubsystem.OuterSingleton, Z_Construct_UClass_UEDSMixManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEDSMixManagerSubsystem.OuterSingleton;
	}
	template<> ELECTRICDREAMSSAMPLE_API UClass* StaticClass<UEDSMixManagerSubsystem>()
	{
		return UEDSMixManagerSubsystem::StaticClass();
	}
	UEDSMixManagerSubsystem::UEDSMixManagerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEDSMixManagerSubsystem);
	UEDSMixManagerSubsystem::~UEDSMixManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSMixManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSMixManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEDSMixManagerSubsystem, UEDSMixManagerSubsystem::StaticClass, TEXT("UEDSMixManagerSubsystem"), &Z_Registration_Info_UClass_UEDSMixManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEDSMixManagerSubsystem), 3281912465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSMixManagerSubsystem_h_4179255294(TEXT("/Script/ElectricDreamsSample"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSMixManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSMixManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
