// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HonoursArtifactProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HONOURSARTIFACT_HonoursArtifactProjectile_generated_h
#error "HonoursArtifactProjectile.generated.h already included, missing '#pragma once' in HonoursArtifactProjectile.h"
#endif
#define HONOURSARTIFACT_HonoursArtifactProjectile_generated_h

#define FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHonoursArtifactProjectile(); \
	friend struct Z_Construct_UClass_AHonoursArtifactProjectile_Statics; \
public: \
	DECLARE_CLASS(AHonoursArtifactProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HonoursArtifact"), NO_API) \
	DECLARE_SERIALIZER(AHonoursArtifactProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHonoursArtifactProjectile(AHonoursArtifactProjectile&&); \
	AHonoursArtifactProjectile(const AHonoursArtifactProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHonoursArtifactProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHonoursArtifactProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHonoursArtifactProjectile) \
	NO_API virtual ~AHonoursArtifactProjectile();


#define FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_12_PROLOG
#define FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HONOURSARTIFACT_API UClass* StaticClass<class AHonoursArtifactProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_HonoursArtifact_Source_HonoursArtifact_HonoursArtifactProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
