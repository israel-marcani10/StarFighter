// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/MotherShipEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotherShipEnemy() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AMotherShipEnemy_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMotherShipEnemy();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMotherShipEnemy::StaticRegisterNativesAMotherShipEnemy()
	{
	}
	UClass* Z_Construct_UClass_AMotherShipEnemy_NoRegister()
	{
		return AMotherShipEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AMotherShipEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotherShipMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotherShipMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotherShipEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotherShipEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MotherShipEnemy.h" },
		{ "ModuleRelativePath", "MotherShipEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotherShipEnemy_Statics::NewProp_MotherShipMesh_MetaData[] = {
		{ "Category", "Nave Nodriza" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MotherShipEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotherShipEnemy_Statics::NewProp_MotherShipMesh = { "MotherShipMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotherShipEnemy, MotherShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotherShipEnemy_Statics::NewProp_MotherShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotherShipEnemy_Statics::NewProp_MotherShipMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotherShipEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotherShipEnemy_Statics::NewProp_MotherShipMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotherShipEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotherShipEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotherShipEnemy_Statics::ClassParams = {
		&AMotherShipEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMotherShipEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotherShipEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotherShipEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotherShipEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotherShipEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotherShipEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotherShipEnemy, 97108896);
	template<> STARFIGHTER_API UClass* StaticClass<AMotherShipEnemy>()
	{
		return AMotherShipEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotherShipEnemy(Z_Construct_UClass_AMotherShipEnemy, &AMotherShipEnemy::StaticClass, TEXT("/Script/StarFighter"), TEXT("AMotherShipEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotherShipEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
