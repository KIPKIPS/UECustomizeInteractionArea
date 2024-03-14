// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomArea/CustomAreaGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAreaGameModeBase() {}
// Cross Module References
	CUSTOMAREA_API UClass* Z_Construct_UClass_ACustomAreaGameModeBase_NoRegister();
	CUSTOMAREA_API UClass* Z_Construct_UClass_ACustomAreaGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CustomArea();
// End Cross Module References
	void ACustomAreaGameModeBase::StaticRegisterNativesACustomAreaGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACustomAreaGameModeBase_NoRegister()
	{
		return ACustomAreaGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACustomAreaGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomAreaGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomAreaGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CustomAreaGameModeBase.h" },
		{ "ModuleRelativePath", "CustomAreaGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomAreaGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomAreaGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomAreaGameModeBase_Statics::ClassParams = {
		&ACustomAreaGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACustomAreaGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomAreaGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomAreaGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomAreaGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomAreaGameModeBase, 2359917571);
	template<> CUSTOMAREA_API UClass* StaticClass<ACustomAreaGameModeBase>()
	{
		return ACustomAreaGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomAreaGameModeBase(Z_Construct_UClass_ACustomAreaGameModeBase, &ACustomAreaGameModeBase::StaticClass, TEXT("/Script/CustomArea"), TEXT("ACustomAreaGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomAreaGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
