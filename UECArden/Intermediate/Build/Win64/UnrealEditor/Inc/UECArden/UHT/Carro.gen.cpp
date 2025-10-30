// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/Carro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarro() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UECARDEN_API UClass* Z_Construct_UClass_ACarro();
UECARDEN_API UClass* Z_Construct_UClass_ACarro_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class ACarro
void ACarro::StaticRegisterNativesACarro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarro);
UClass* Z_Construct_UClass_ACarro_NoRegister()
{
	return ACarro::StaticClass();
}
struct Z_Construct_UClass_ACarro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Carro.h" },
		{ "ModuleRelativePath", "Carro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACarro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACarro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarro_Statics::ClassParams = {
	&ACarro::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACarro_Statics::Class_MetaDataParams), Z_Construct_UClass_ACarro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACarro()
{
	if (!Z_Registration_Info_UClass_ACarro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarro.OuterSingleton, Z_Construct_UClass_ACarro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACarro.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<ACarro>()
{
	return ACarro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACarro);
ACarro::~ACarro() {}
// End Class ACarro

// Begin Registration
struct Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_Carro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACarro, ACarro::StaticClass, TEXT("ACarro"), &Z_Registration_Info_UClass_ACarro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarro), 39352025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_Carro_h_3390595481(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_Carro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_Carro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
