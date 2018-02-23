// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HG_BPHELPER_HG_BPHelperBPLibrary_generated_h
#error "HG_BPHelperBPLibrary.generated.h already included, missing '#pragma once' in HG_BPHelperBPLibrary.h"
#endif
#define HG_BPHELPER_HG_BPHelperBPLibrary_generated_h

#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHG_BPHelperBPLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHG_BPHelperBPLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHG_BPHelperBPLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHG_BPHelperBPLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHG_BPHelperBPLibrary(); \
	friend HG_BPHELPER_API class UClass* Z_Construct_UClass_UHG_BPHelperBPLibrary(); \
public: \
	DECLARE_CLASS(UHG_BPHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HG_BPHelper"), NO_API) \
	DECLARE_SERIALIZER(UHG_BPHelperBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUHG_BPHelperBPLibrary(); \
	friend HG_BPHELPER_API class UClass* Z_Construct_UClass_UHG_BPHelperBPLibrary(); \
public: \
	DECLARE_CLASS(UHG_BPHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HG_BPHelper"), NO_API) \
	DECLARE_SERIALIZER(UHG_BPHelperBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHG_BPHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHG_BPHelperBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHG_BPHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHG_BPHelperBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHG_BPHelperBPLibrary(UHG_BPHelperBPLibrary&&); \
	NO_API UHG_BPHelperBPLibrary(const UHG_BPHelperBPLibrary&); \
public:


#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHG_BPHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHG_BPHelperBPLibrary(UHG_BPHelperBPLibrary&&); \
	NO_API UHG_BPHelperBPLibrary(const UHG_BPHelperBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHG_BPHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHG_BPHelperBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHG_BPHelperBPLibrary)


#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_26_PROLOG
#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_RPC_WRAPPERS \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_INCLASS \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HG_BPHelperBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ctest1_Plugins_HG_BPHelper_Source_HG_BPHelper_Public_HG_BPHelperBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
