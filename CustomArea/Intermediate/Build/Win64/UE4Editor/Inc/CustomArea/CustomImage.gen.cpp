// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomArea/CustomImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomImage() {}
// Cross Module References
	CUSTOMAREA_API UClass* Z_Construct_UClass_UCustomImage_NoRegister();
	CUSTOMAREA_API UClass* Z_Construct_UClass_UCustomImage();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_CustomArea();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomImage::execSetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomImage::execgetSibIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getSibIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomImage::execSetAdvancedHitAlpha)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdvancedHitAlpha(Z_Param_InAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomImage::execSetAdvancedHitTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdvancedHitTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	void UCustomImage::StaticRegisterNativesUCustomImage()
	{
		UClass* Class = UCustomImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getSibIndex", &UCustomImage::execgetSibIndex },
			{ "SetAdvancedHitAlpha", &UCustomImage::execSetAdvancedHitAlpha },
			{ "SetAdvancedHitTexture", &UCustomImage::execSetAdvancedHitTexture },
			{ "SetName", &UCustomImage::execSetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomImage_getSibIndex_Statics
	{
		struct CustomImage_eventgetSibIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomImage_eventgetSibIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomImage, nullptr, "getSibIndex", nullptr, nullptr, sizeof(CustomImage_eventgetSibIndex_Parms), Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomImage_getSibIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomImage_getSibIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics
	{
		struct CustomImage_eventSetAdvancedHitAlpha_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::NewProp_InAlpha = { "InAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomImage_eventSetAdvancedHitAlpha_Parms, InAlpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::NewProp_InAlpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomImage, nullptr, "SetAdvancedHitAlpha", nullptr, nullptr, sizeof(CustomImage_eventSetAdvancedHitAlpha_Parms), Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics
	{
		struct CustomImage_eventSetAdvancedHitTexture_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomImage_eventSetAdvancedHitTexture_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomImage, nullptr, "SetAdvancedHitTexture", nullptr, nullptr, sizeof(CustomImage_eventSetAdvancedHitTexture_Parms), Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomImage_SetName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomImage_SetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomImage_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomImage, nullptr, "SetName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomImage_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomImage_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomImage_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomImage_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomImage_NoRegister()
	{
		return UCustomImage::StaticClass();
	}
	struct Z_Construct_UClass_UCustomImage_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapImages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomArea,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomImage_getSibIndex, "getSibIndex" }, // 122801856
		{ &Z_Construct_UFunction_UCustomImage_SetAdvancedHitAlpha, "SetAdvancedHitAlpha" }, // 199161465
		{ &Z_Construct_UFunction_UCustomImage_SetAdvancedHitTexture, "SetAdvancedHitTexture" }, // 3969167075
		{ &Z_Construct_UFunction_UCustomImage_SetName, "SetName" }, // 1268484582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomImage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomImage.h" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitTexture_MetaData[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitTexture = { "AdvancedHitTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomImage, AdvancedHitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitAlpha_MetaData[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ClampMax", "255.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "CustomImage.h" },
		{ "UIMax", "255.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitAlpha = { "AdvancedHitAlpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomImage, AdvancedHitAlpha), METADATA_PARAMS(Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitAlpha_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomImage_Statics::NewProp_OverlapImages_Inner = { "OverlapImages", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCustomImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomImage_Statics::NewProp_OverlapImages_MetaData[] = {
		{ "Category", "AdvancedHitTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomImage_Statics::NewProp_OverlapImages = { "OverlapImages", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomImage, OverlapImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomImage_Statics::NewProp_OverlapImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomImage_Statics::NewProp_OverlapImages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomImage_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AdvancedHitTest" },
		{ "ModuleRelativePath", "CustomImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomImage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomImage, Name), METADATA_PARAMS(Z_Construct_UClass_UCustomImage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomImage_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomImage_Statics::NewProp_AdvancedHitAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomImage_Statics::NewProp_OverlapImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomImage_Statics::NewProp_OverlapImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomImage_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomImage_Statics::ClassParams = {
		&UCustomImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomImage_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomImage, 2432465080);
	template<> CUSTOMAREA_API UClass* StaticClass<UCustomImage>()
	{
		return UCustomImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomImage(Z_Construct_UClass_UCustomImage, &UCustomImage::StaticClass, TEXT("/Script/CustomArea"), TEXT("UCustomImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif