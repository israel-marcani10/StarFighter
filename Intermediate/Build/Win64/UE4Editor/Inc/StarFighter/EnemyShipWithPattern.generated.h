// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_EnemyShipWithPattern_generated_h
#error "EnemyShipWithPattern.generated.h already included, missing '#pragma once' in EnemyShipWithPattern.h"
#endif
#define STARFIGHTER_EnemyShipWithPattern_generated_h

#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_SPARSE_DATA
#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyShipWithPattern(); \
	friend struct Z_Construct_UClass_AEnemyShipWithPattern_Statics; \
public: \
	DECLARE_CLASS(AEnemyShipWithPattern, ANave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShipWithPattern)


#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyShipWithPattern(); \
	friend struct Z_Construct_UClass_AEnemyShipWithPattern_Statics; \
public: \
	DECLARE_CLASS(AEnemyShipWithPattern, ANave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShipWithPattern)


#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyShipWithPattern(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyShipWithPattern) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShipWithPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShipWithPattern); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShipWithPattern(AEnemyShipWithPattern&&); \
	NO_API AEnemyShipWithPattern(const AEnemyShipWithPattern&); \
public:


#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShipWithPattern(AEnemyShipWithPattern&&); \
	NO_API AEnemyShipWithPattern(const AEnemyShipWithPattern&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShipWithPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShipWithPattern); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyShipWithPattern)


#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshShipEnemy() { return STRUCT_OFFSET(AEnemyShipWithPattern, MeshShipEnemy); } \
	FORCEINLINE static uint32 __PPO__VelocityShip() { return STRUCT_OFFSET(AEnemyShipWithPattern, VelocityShip); } \
	FORCEINLINE static uint32 __PPO__BulletSpawnPoint() { return STRUCT_OFFSET(AEnemyShipWithPattern, BulletSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__DefenseSystem() { return STRUCT_OFFSET(AEnemyShipWithPattern, DefenseSystem); } \
	FORCEINLINE static uint32 __PPO__DisplacementSystem() { return STRUCT_OFFSET(AEnemyShipWithPattern, DisplacementSystem); }


#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_12_PROLOG
#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_SPARSE_DATA \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_INCLASS \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_SPARSE_DATA \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_EnemyShipWithPattern_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AEnemyShipWithPattern>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_EnemyShipWithPattern_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
