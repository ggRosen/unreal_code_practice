// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PRACTICE_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define CPP_PRACTICE_SCharacter_generated_h

#define cpp_practice_Source_cpp_practice_SCharacter_h_15_SPARSE_DATA
#define cpp_practice_Source_cpp_practice_SCharacter_h_15_RPC_WRAPPERS
#define cpp_practice_Source_cpp_practice_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define cpp_practice_Source_cpp_practice_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp_practice"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define cpp_practice_Source_cpp_practice_SCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp_practice"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define cpp_practice_Source_cpp_practice_SCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define cpp_practice_Source_cpp_practice_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define cpp_practice_Source_cpp_practice_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); }


#define cpp_practice_Source_cpp_practice_SCharacter_h_12_PROLOG
#define cpp_practice_Source_cpp_practice_SCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_SPARSE_DATA \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_RPC_WRAPPERS \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_INCLASS \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define cpp_practice_Source_cpp_practice_SCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_SPARSE_DATA \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
	cpp_practice_Source_cpp_practice_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PRACTICE_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cpp_practice_Source_cpp_practice_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
