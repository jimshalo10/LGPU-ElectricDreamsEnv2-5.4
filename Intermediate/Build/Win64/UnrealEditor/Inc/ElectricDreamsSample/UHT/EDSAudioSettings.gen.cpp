// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectricDreamsSample/Audio/EDSAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDSAudioSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ELECTRICDREAMSSAMPLE_API UClass* Z_Construct_UClass_UEDSAudioSettings();
	ELECTRICDREAMSSAMPLE_API UClass* Z_Construct_UClass_UEDSAudioSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ElectricDreamsSample();
// End Cross Module References
	void UEDSAudioSettings::StaticRegisterNativesUEDSAudioSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEDSAudioSettings);
	UClass* Z_Construct_UClass_UEDSAudioSettings_NoRegister()
	{
		return UEDSAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEDSAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlBusMix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultControlBusMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveControlBusMix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveControlBusMix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEDSAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ElectricDreamsSample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSAudioSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEDSAudioSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "EDSAudioSettings" },
		{ "IncludePath", "Audio/EDSAudioSettings.h" },
		{ "ModuleRelativePath", "Audio/EDSAudioSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_DefaultControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Default Base Control Bus Mix */" },
#endif
		{ "ModuleRelativePath", "Audio/EDSAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Default Base Control Bus Mix" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_DefaultControlBusMix = { "DefaultControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEDSAudioSettings, DefaultControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_DefaultControlBusMix_MetaData), Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_DefaultControlBusMix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_LiveControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Live Control Bus Mix */" },
#endif
		{ "ModuleRelativePath", "Audio/EDSAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Live Control Bus Mix" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_LiveControlBusMix = { "LiveControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEDSAudioSettings, LiveControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_LiveControlBusMix_MetaData), Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_LiveControlBusMix_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEDSAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_DefaultControlBusMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEDSAudioSettings_Statics::NewProp_LiveControlBusMix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEDSAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEDSAudioSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEDSAudioSettings_Statics::ClassParams = {
		&UEDSAudioSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEDSAudioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEDSAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSAudioSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEDSAudioSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEDSAudioSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEDSAudioSettings()
	{
		if (!Z_Registration_Info_UClass_UEDSAudioSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEDSAudioSettings.OuterSingleton, Z_Construct_UClass_UEDSAudioSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEDSAudioSettings.OuterSingleton;
	}
	template<> ELECTRICDREAMSSAMPLE_API UClass* StaticClass<UEDSAudioSettings>()
	{
		return UEDSAudioSettings::StaticClass();
	}
	UEDSAudioSettings::UEDSAudioSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEDSAudioSettings);
	UEDSAudioSettings::~UEDSAudioSettings() {}
	struct Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSAudioSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSAudioSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEDSAudioSettings, UEDSAudioSettings::StaticClass, TEXT("UEDSAudioSettings"), &Z_Registration_Info_UClass_UEDSAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEDSAudioSettings), 405583548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSAudioSettings_h_1774787187(TEXT("/Script/ElectricDreamsSample"),
		Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElectricDreamsEnv2_5_4_Source_ElectricDreamsSample_Audio_EDSAudioSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
