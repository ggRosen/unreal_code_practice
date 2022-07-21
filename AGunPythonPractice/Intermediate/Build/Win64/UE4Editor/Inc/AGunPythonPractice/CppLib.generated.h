// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;
#ifdef AGUNPYTHONPRACTICE_CppLib_generated_h
#error "CppLib.generated.h already included, missing '#pragma once' in CppLib.h"
#endif
#define AGUNPYTHONPRACTICE_CppLib_generated_h

#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_SPARSE_DATA
#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteConsoleCommand); \
	DECLARE_FUNCTION(execGetAllProperties); \
	DECLARE_FUNCTION(execSetSelectedFolders); \
	DECLARE_FUNCTION(execSetSelectedAssets); \
	DECLARE_FUNCTION(execGetSelectedPaths); \
	DECLARE_FUNCTION(execGetSelectedFolders); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execCloseEditorForAssets); \
	DECLARE_FUNCTION(execGetAssetsOpenedInEditor); \
	DECLARE_FUNCTION(execSetFolderColor);


#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteConsoleCommand); \
	DECLARE_FUNCTION(execGetAllProperties); \
	DECLARE_FUNCTION(execSetSelectedFolders); \
	DECLARE_FUNCTION(execSetSelectedAssets); \
	DECLARE_FUNCTION(execGetSelectedPaths); \
	DECLARE_FUNCTION(execGetSelectedFolders); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execCloseEditorForAssets); \
	DECLARE_FUNCTION(execGetAssetsOpenedInEditor); \
	DECLARE_FUNCTION(execSetFolderColor);


#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCppLib(); \
	friend struct Z_Construct_UClass_UCppLib_Statics; \
public: \
	DECLARE_CLASS(UCppLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AGunPythonPractice"), NO_API) \
	DECLARE_SERIALIZER(UCppLib)


#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCppLib(); \
	friend struct Z_Construct_UClass_UCppLib_Statics; \
public: \
	DECLARE_CLASS(UCppLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AGunPythonPractice"), NO_API) \
	DECLARE_SERIALIZER(UCppLib)


#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppLib(UCppLib&&); \
	NO_API UCppLib(const UCppLib&); \
public:


#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppLib(UCppLib&&); \
	NO_API UCppLib(const UCppLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppLib)


#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_PRIVATE_PROPERTY_OFFSET
#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_12_PROLOG
#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_PRIVATE_PROPERTY_OFFSET \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_SPARSE_DATA \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_RPC_WRAPPERS \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_INCLASS \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_PRIVATE_PROPERTY_OFFSET \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_SPARSE_DATA \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_INCLASS_NO_PURE_DECLS \
	AGunPythonPractice_Source_AGunPythonPractice_CppLib_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGUNPYTHONPRACTICE_API UClass* StaticClass<class UCppLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGunPythonPractice_Source_AGunPythonPractice_CppLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
