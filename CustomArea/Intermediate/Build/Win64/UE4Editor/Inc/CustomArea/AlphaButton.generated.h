// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef CUSTOMAREA_AlphaButton_generated_h
#error "AlphaButton.generated.h already included, missing '#pragma once' in AlphaButton.h"
#endif
#define CUSTOMAREA_AlphaButton_generated_h

#define CustomArea_Source_CustomArea_AlphaButton_h_56_SPARSE_DATA
#define CustomArea_Source_CustomArea_AlphaButton_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetSibIndex); \
	DECLARE_FUNCTION(execSetAdvancedHitAlpha); \
	DECLARE_FUNCTION(execSetAdvancedHitTexture);


#define CustomArea_Source_CustomArea_AlphaButton_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetSibIndex); \
	DECLARE_FUNCTION(execSetAdvancedHitAlpha); \
	DECLARE_FUNCTION(execSetAdvancedHitTexture);


#define CustomArea_Source_CustomArea_AlphaButton_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlphaButton(); \
	friend struct Z_Construct_UClass_UAlphaButton_Statics; \
public: \
	DECLARE_CLASS(UAlphaButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomArea"), NO_API) \
	DECLARE_SERIALIZER(UAlphaButton)


#define CustomArea_Source_CustomArea_AlphaButton_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUAlphaButton(); \
	friend struct Z_Construct_UClass_UAlphaButton_Statics; \
public: \
	DECLARE_CLASS(UAlphaButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomArea"), NO_API) \
	DECLARE_SERIALIZER(UAlphaButton)


#define CustomArea_Source_CustomArea_AlphaButton_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlphaButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlphaButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlphaButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlphaButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlphaButton(UAlphaButton&&); \
	NO_API UAlphaButton(const UAlphaButton&); \
public:


#define CustomArea_Source_CustomArea_AlphaButton_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlphaButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlphaButton(UAlphaButton&&); \
	NO_API UAlphaButton(const UAlphaButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlphaButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlphaButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlphaButton)


#define CustomArea_Source_CustomArea_AlphaButton_h_56_PRIVATE_PROPERTY_OFFSET
#define CustomArea_Source_CustomArea_AlphaButton_h_53_PROLOG
#define CustomArea_Source_CustomArea_AlphaButton_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomArea_Source_CustomArea_AlphaButton_h_56_PRIVATE_PROPERTY_OFFSET \
	CustomArea_Source_CustomArea_AlphaButton_h_56_SPARSE_DATA \
	CustomArea_Source_CustomArea_AlphaButton_h_56_RPC_WRAPPERS \
	CustomArea_Source_CustomArea_AlphaButton_h_56_INCLASS \
	CustomArea_Source_CustomArea_AlphaButton_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CustomArea_Source_CustomArea_AlphaButton_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomArea_Source_CustomArea_AlphaButton_h_56_PRIVATE_PROPERTY_OFFSET \
	CustomArea_Source_CustomArea_AlphaButton_h_56_SPARSE_DATA \
	CustomArea_Source_CustomArea_AlphaButton_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	CustomArea_Source_CustomArea_AlphaButton_h_56_INCLASS_NO_PURE_DECLS \
	CustomArea_Source_CustomArea_AlphaButton_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AlphaButton."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMAREA_API UClass* StaticClass<class UAlphaButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CustomArea_Source_CustomArea_AlphaButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
