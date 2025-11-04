// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/PlatformActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UECARDEN_API UClass* Z_Construct_UClass_APlatformActor();
UECARDEN_API UClass* Z_Construct_UClass_APlatformActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class APlatformActor
void APlatformActor::StaticRegisterNativesAPlatformActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformActor);
UClass* Z_Construct_UClass_APlatformActor_NoRegister()
{
	return APlatformActor::StaticClass();
}
struct Z_Construct_UClass_APlatformActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformActor.h" },
		{ "ModuleRelativePath", "PlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente visual\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente visual" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material por defecto\n" },
#endif
		{ "ModuleRelativePath", "PlatformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material por defecto" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Velocidad y amplitud del movimiento\n" },
#endif
		{ "ModuleRelativePath", "PlatformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocidad y amplitud del movimiento" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAmplitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlatformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAmplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_MovementAmplitude = { "MovementAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, MovementAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAmplitude_MetaData), NewProp_MovementAmplitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_MovementAmplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformActor_Statics::ClassParams = {
	&APlatformActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlatformActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformActor()
{
	if (!Z_Registration_Info_UClass_APlatformActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformActor.OuterSingleton, Z_Construct_UClass_APlatformActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformActor.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<APlatformActor>()
{
	return APlatformActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformActor);
APlatformActor::~APlatformActor() {}
// End Class APlatformActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_PlatformActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformActor, APlatformActor::StaticClass, TEXT("APlatformActor"), &Z_Registration_Info_UClass_APlatformActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformActor), 643169051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_PlatformActor_h_1695841761(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_PlatformActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_PlatformActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
