// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef CUSTOMAREA_CustomImage_generated_h
#error "CustomImage.generated.h already included, missing '#pragma once' in CustomImage.h"
#endif
#define CUSTOMAREA_CustomImage_generated_h

#define CustomArea_Source_CustomArea_CustomImage_h_72_SPARSE_DATA
#define CustomArea_Source_CustomArea_CustomImage_h_72_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execgetSibIndex); \
	DECLARE_FUNCTION(execSetAdvancedHitAlpha); \
	DECLARE_FUNCTION(execSetAdvancedHitTexture);


#define CustomArea_Source_CustomArea_CustomImage_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execgetSibIndex); \
	DECLARE_FUNCTION(execSetAdvancedHitAlpha); \
	DECLARE_FUNCTION(execSetAdvancedHitTexture);


#define CustomArea_Source_CustomArea_CustomImage_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomImage(); \
	friend struct Z_Construct_UClass_UCustomImage_Statics; \
public: \
	DECLARE_CLASS(UCustomImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomArea"), NO_API) \
	DECLARE_SERIALIZER(UCustomImage)


#define CustomArea_Source_CustomArea_CustomImage_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUCustomImage(); \
	friend struct Z_Construct_UClass_UCustomImage_Statics; \
public: \
	DECLARE_CLASS(UCustomImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomArea"), NO_API) \
	DECLARE_SERIALIZER(UCustomImage)


#define CustomArea_Source_CustomArea_CustomImage_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomImage(UCustomImage&&); \
	NO_API UCustomImage(const UCustomImage&); \
public:


#define CustomArea_Source_CustomArea_CustomImage_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomImage(UCustomImage&&); \
	NO_API UCustomImage(const UCustomImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomImage)


#define CustomArea_Source_CustomArea_CustomImage_h_72_PRIVATE_PROPERTY_OFFSET
#define CustomArea_Source_CustomArea_CustomImage_h_69_PROLOG
#define CustomArea_Source_CustomArea_CustomImage_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomArea_Source_CustomArea_CustomImage_h_72_PRIVATE_PROPERTY_OFFSET \
	CustomArea_Source_CustomArea_CustomImage_h_72_SPARSE_DATA \
	CustomArea_Source_CustomArea_CustomImage_h_72_RPC_WRAPPERS \
	CustomArea_Source_CustomArea_CustomImage_h_72_INCLASS \
	CustomArea_Source_CustomArea_CustomImage_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CustomArea_Source_CustomArea_CustomImage_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomArea_Source_CustomArea_CustomImage_h_72_PRIVATE_PROPERTY_OFFSET \
	CustomArea_Source_CustomArea_CustomImage_h_72_SPARSE_DATA \
	CustomArea_Source_CustomArea_CustomImage_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	CustomArea_Source_CustomArea_CustomImage_h_72_INCLASS_NO_PURE_DECLS \
	CustomArea_Source_CustomArea_CustomImage_h_72_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomImage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMAREA_API UClass* StaticClass<class UCustomImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CustomArea_Source_CustomArea_CustomImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
