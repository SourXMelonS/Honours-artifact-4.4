// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HonoursArtifact/HonoursArtifactPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHonoursArtifactPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HONOURSARTIFACT_API UClass* Z_Construct_UClass_AHonoursArtifactPlayerController();
HONOURSARTIFACT_API UClass* Z_Construct_UClass_AHonoursArtifactPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_HonoursArtifact();
// End Cross Module References

// Begin Class AHonoursArtifactPlayerController
void AHonoursArtifactPlayerController::StaticRegisterNativesAHonoursArtifactPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHonoursArtifactPlayerController);
UClass* Z_Construct_UClass_AHonoursArtifactPlayerController_NoRegister()
{
	return AHonoursArtifactPlayerController::StaticClass();
}
struct Z_Construct_UClass_AHonoursArtifactPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HonoursArtifactPlayerController.h" },
		{ "ModuleRelativePath", "HonoursArtifactPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "HonoursArtifactPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHonoursArtifactPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHonoursArtifactPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_HonoursArtifact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::ClassParams = {
	&AHonoursArtifactPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHonoursArtifactPlayerController()
{
	if (!Z_Registration_Info_UClass_AHonoursArtifactPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHonoursArtifactPlayerController.OuterSingleton, Z_Construct_UClass_AHonoursArtifactPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHonoursArtifactPlayerController.OuterSingleton;
}
template<> HONOURSARTIFACT_API UClass* StaticClass<AHonoursArtifactPlayerController>()
{
	return AHonoursArtifactPlayerController::StaticClass();
}
AHonoursArtifactPlayerController::AHonoursArtifactPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHonoursArtifactPlayerController);
AHonoursArtifactPlayerController::~AHonoursArtifactPlayerController() {}
// End Class AHonoursArtifactPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHonoursArtifactPlayerController, AHonoursArtifactPlayerController::StaticClass, TEXT("AHonoursArtifactPlayerController"), &Z_Registration_Info_UClass_AHonoursArtifactPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHonoursArtifactPlayerController), 1482020818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactPlayerController_h_2820790504(TEXT("/Script/HonoursArtifact"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
