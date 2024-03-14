// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomArea/AlphaButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlphaButton() {}
// Cross Module References
	CUSTOMAREA_API UClass* Z_Construct_UClass_UAlphaButton_NoRegister();
	CUSTOMAREA_API UClass* Z_Construct_UClass_UAlphaButton();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_CustomArea();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAlphaButton::execSetAdvancedHitAlpha)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdvancedHitAlpha(Z_Param_InAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlphaButton::execSetAdvancedHitTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdvancedHitTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	void UAlphaButton::StaticRegisterNativesUAlphaButton()
	{
		UClass* Class = UAlphaButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAdvancedHitAlpha", &UAlphaButton::execSetAdvancedHitAlpha },
			{ "SetAdvancedHitTexture", &UAlphaButton::execSetAdvancedHitTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics
	{
		struct AlphaButton_eventSetAdvancedHitAlpha_Parms
		{
			int32 InAlpha;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::NewProp_InAlpha = { "InAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AlphaButton_eventSetAdvancedHitAlpha_Parms, InAlpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::NewProp_InAlpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "AlphaButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlphaButton, nullptr, "SetAdvancedHitAlpha", nullptr, nullptr, sizeof(AlphaButton_eventSetAdvancedHitAlpha_Parms), Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics
	{
		struct AlphaButton_eventSetAdvancedHitTexture_Parms
		{
			UTexture2D* InTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AlphaButton_eventSetAdvancedHitTexture_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "AlphaButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlphaButton, nullptr, "SetAdvancedHitTexture", nullptr, nullptr, sizeof(AlphaButton_eventSetAdvancedHitTexture_Parms), Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAlphaButton_NoRegister()
	{
		return UAlphaButton::StaticClass();
	}
	struct Z_Construct_UClass_UAlphaButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedHitTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdvancedHitTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedHitAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AdvancedHitAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlphaButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomArea,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlphaButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlphaButton_SetAdvancedHitAlpha, "SetAdvancedHitAlpha" }, // 3619555408
		{ &Z_Construct_UFunction_UAlphaButton_SetAdvancedHitTexture, "SetAdvancedHitTexture" }, // 845240194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlphaButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlphaButton.h" },
		{ "ModuleRelativePath", "AlphaButton.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitTexture_MetaData[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "AlphaButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitTexture = { "AdvancedHitTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAlphaButton, AdvancedHitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitAlpha_MetaData[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ClampMax", "255.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "AlphaButton.h" },
		{ "UIMax", "255.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitAlpha = { "AdvancedHitAlpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAlphaButton, AdvancedHitAlpha), METADATA_PARAMS(Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlphaButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlphaButton_Statics::NewProp_AdvancedHitAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlphaButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlphaButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlphaButton_Statics::ClassParams = {
		&UAlphaButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAlphaButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaButton_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAlphaButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlphaButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlphaButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlphaButton, 1664892760);
	template<> CUSTOMAREA_API UClass* StaticClass<UAlphaButton>()
	{
		return UAlphaButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlphaButton(Z_Construct_UClass_UAlphaButton, &UAlphaButton::StaticClass, TEXT("/Script/CustomArea"), TEXT("UAlphaButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlphaButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
