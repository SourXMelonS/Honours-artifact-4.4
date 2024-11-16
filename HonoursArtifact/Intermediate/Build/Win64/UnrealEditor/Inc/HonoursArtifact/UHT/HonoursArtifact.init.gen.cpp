// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHonoursArtifact_init() {}
	HONOURSARTIFACT_API UFunction* Z_Construct_UDelegateFunction_HonoursArtifact_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HonoursArtifact;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HonoursArtifact()
	{
		if (!Z_Registration_Info_UPackage__Script_HonoursArtifact.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HonoursArtifact_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HonoursArtifact",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0760535C,
				0x723C957B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HonoursArtifact.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HonoursArtifact.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HonoursArtifact(Z_Construct_UPackage__Script_HonoursArtifact, TEXT("/Script/HonoursArtifact"), Z_Registration_Info_UPackage__Script_HonoursArtifact, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0760535C, 0x723C957B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
