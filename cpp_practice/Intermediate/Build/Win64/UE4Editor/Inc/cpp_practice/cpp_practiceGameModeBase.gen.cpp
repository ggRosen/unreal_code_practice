// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp_practice/cpp_practiceGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecpp_practiceGameModeBase() {}
// Cross Module References
	CPP_PRACTICE_API UClass* Z_Construct_UClass_Acpp_practiceGameModeBase_NoRegister();
	CPP_PRACTICE_API UClass* Z_Construct_UClass_Acpp_practiceGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_cpp_practice();
// End Cross Module References
	void Acpp_practiceGameModeBase::StaticRegisterNativesAcpp_practiceGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Acpp_practiceGameModeBase_NoRegister()
	{
		return Acpp_practiceGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Acpp_practiceGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acpp_practiceGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp_practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_practiceGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "cpp_practiceGameModeBase.h" },
		{ "ModuleRelativePath", "cpp_practiceGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acpp_practiceGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acpp_practiceGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acpp_practiceGameModeBase_Statics::ClassParams = {
		&Acpp_practiceGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Acpp_practiceGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_practiceGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acpp_practiceGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acpp_practiceGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acpp_practiceGameModeBase, 1928688238);
	template<> CPP_PRACTICE_API UClass* StaticClass<Acpp_practiceGameModeBase>()
	{
		return Acpp_practiceGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acpp_practiceGameModeBase(Z_Construct_UClass_Acpp_practiceGameModeBase, &Acpp_practiceGameModeBase::StaticClass, TEXT("/Script/cpp_practice"), TEXT("Acpp_practiceGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acpp_practiceGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
