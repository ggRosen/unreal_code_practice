// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGunPythonPractice/ZFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZFunctions() {}
// Cross Module References
	AGUNPYTHONPRACTICE_API UClass* Z_Construct_UClass_UZFunctions_NoRegister();
	AGUNPYTHONPRACTICE_API UClass* Z_Construct_UClass_UZFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AGunPythonPractice();
// End Cross Module References
	DEFINE_FUNCTION(UZFunctions::execCalledFromPython)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZFunctions::CalledFromPython(Z_Param_InputString);
		P_NATIVE_END;
	}
	void UZFunctions::StaticRegisterNativesUZFunctions()
	{
		UClass* Class = UZFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalledFromPython", &UZFunctions::execCalledFromPython },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics
	{
		struct ZFunctions_eventCalledFromPython_Parms
		{
			FString InputString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::NewProp_InputString = { "InputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZFunctions_eventCalledFromPython_Parms, InputString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::NewProp_InputString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZFunctions, nullptr, "CalledFromPython", nullptr, nullptr, sizeof(ZFunctions_eventCalledFromPython_Parms), Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZFunctions_CalledFromPython()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZFunctions_CalledFromPython_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZFunctions_NoRegister()
	{
		return UZFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UZFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AGunPythonPractice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZFunctions_CalledFromPython, "CalledFromPython" }, // 3178338733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZFunctions.h" },
		{ "ModuleRelativePath", "ZFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZFunctions_Statics::ClassParams = {
		&UZFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZFunctions, 401289410);
	template<> AGUNPYTHONPRACTICE_API UClass* StaticClass<UZFunctions>()
	{
		return UZFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZFunctions(Z_Construct_UClass_UZFunctions, &UZFunctions::StaticClass, TEXT("/Script/AGunPythonPractice"), TEXT("UZFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
