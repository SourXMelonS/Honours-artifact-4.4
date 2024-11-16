// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HonoursArtifact/WeaponData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
HONOURSARTIFACT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
UPackage* Z_Construct_UPackage__Script_HonoursArtifact();
// End Cross Module References

// Begin ScriptStruct FWeaponData
static_assert(std::is_polymorphic<FWeaponData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, (UObject*)Z_Construct_UPackage__Script_HonoursArtifact(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton;
}
template<> HONOURSARTIFACT_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "WeaponData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "WeaponData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HonoursArtifact,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WeaponData",
	Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
	sizeof(FWeaponData),
	alignof(FWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton;
}
// End ScriptStruct FWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_WeaponData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_WeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 1165927979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_WeaponData_h_1469411769(TEXT("/Script/HonoursArtifact"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_WeaponData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_WeaponData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
