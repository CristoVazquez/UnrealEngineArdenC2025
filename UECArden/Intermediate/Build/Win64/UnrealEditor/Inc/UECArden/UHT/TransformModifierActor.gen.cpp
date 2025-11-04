// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/TransformModifierActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformModifierActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UECARDEN_API UClass* Z_Construct_UClass_ATransformModifierActor();
UECARDEN_API UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class ATransformModifierActor Function ModifyTargetTransform
struct Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifierActor, nullptr, "ModifyTargetTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformModifierActor::execModifyTargetTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyTargetTransform();
	P_NATIVE_END;
}
// End Class ATransformModifierActor Function ModifyTargetTransform

// Begin Class ATransformModifierActor
void ATransformModifierActor::StaticRegisterNativesATransformModifierActor()
{
	UClass* Class = ATransformModifierActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ModifyTargetTransform", &ATransformModifierActor::execModifyTargetTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransformModifierActor);
UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister()
{
	return ATransformModifierActor::StaticClass();
}
struct Z_Construct_UClass_ATransformModifierActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TransformModifierActor.h" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform, "ModifyTargetTransform" }, // 319865760
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformModifierActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams = {
	&ATransformModifierActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATransformModifierActor()
{
	if (!Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton, Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<ATransformModifierActor>()
{
	return ATransformModifierActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformModifierActor);
ATransformModifierActor::~ATransformModifierActor() {}
// End Class ATransformModifierActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_TransformModifierActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATransformModifierActor, ATransformModifierActor::StaticClass, TEXT("ATransformModifierActor"), &Z_Registration_Info_UClass_ATransformModifierActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransformModifierActor), 1792862424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_TransformModifierActor_h_2044744530(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_TransformModifierActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Oliver_GitHub_UnrealEngineArdenC2025_UnrealEngineArdenC2025_UECArden_Source_UECArden_TransformModifierActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
