// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGunPythonPractice/CppLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppLib() {}
// Cross Module References
	AGUNPYTHONPRACTICE_API UClass* Z_Construct_UClass_UCppLib_NoRegister();
	AGUNPYTHONPRACTICE_API UClass* Z_Construct_UClass_UCppLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AGunPythonPractice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UCppLib::execExecuteConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConsoleCmd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCppLib::ExecuteConsoleCommand(Z_Param_ConsoleCmd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execGetAllProperties)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetAllProperties(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execSetSelectedFolders)
	{
		P_GET_TARRAY(FString,Z_Param_Paths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCppLib::SetSelectedFolders(Z_Param_Paths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execSetSelectedAssets)
	{
		P_GET_TARRAY(FString,Z_Param_Paths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCppLib::SetSelectedAssets(Z_Param_Paths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execGetSelectedPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetSelectedPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execGetSelectedFolders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetSelectedFolders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execGetSelectedAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UCppLib::GetSelectedAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execCloseEditorForAssets)
	{
		P_GET_TARRAY(UObject*,Z_Param_Assets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCppLib::CloseEditorForAssets(Z_Param_Assets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execGetAssetsOpenedInEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UCppLib::GetAssetsOpenedInEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLib::execSetFolderColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCppLib::SetFolderColor(Z_Param_Path,Z_Param_Color);
		P_NATIVE_END;
	}
	void UCppLib::StaticRegisterNativesUCppLib()
	{
		UClass* Class = UCppLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseEditorForAssets", &UCppLib::execCloseEditorForAssets },
			{ "ExecuteConsoleCommand", &UCppLib::execExecuteConsoleCommand },
			{ "GetAllProperties", &UCppLib::execGetAllProperties },
			{ "GetAssetsOpenedInEditor", &UCppLib::execGetAssetsOpenedInEditor },
			{ "GetSelectedAssets", &UCppLib::execGetSelectedAssets },
			{ "GetSelectedFolders", &UCppLib::execGetSelectedFolders },
			{ "GetSelectedPaths", &UCppLib::execGetSelectedPaths },
			{ "SetFolderColor", &UCppLib::execSetFolderColor },
			{ "SetSelectedAssets", &UCppLib::execSetSelectedAssets },
			{ "SetSelectedFolders", &UCppLib::execSetSelectedFolders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics
	{
		struct CppLib_eventCloseEditorForAssets_Parms
		{
			TArray<UObject*> Assets;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventCloseEditorForAssets_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::NewProp_Assets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "//?\xd8\xb1???\xd4\xb4\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "?\xd8\xb1???\xd4\xb4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "CloseEditorForAssets", nullptr, nullptr, sizeof(CppLib_eventCloseEditorForAssets_Parms), Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_CloseEditorForAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_CloseEditorForAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics
	{
		struct CppLib_eventExecuteConsoleCommand_Parms
		{
			FString ConsoleCmd;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConsoleCmd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::NewProp_ConsoleCmd = { "ConsoleCmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventExecuteConsoleCommand_Parms, ConsoleCmd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::NewProp_ConsoleCmd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "//??python??\xd6\xb4?\xd0\xbf???\xcc\xa8????\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "??python??\xd6\xb4?\xd0\xbf???\xcc\xa8????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "ExecuteConsoleCommand", nullptr, nullptr, sizeof(CppLib_eventExecuteConsoleCommand_Parms), Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetAllProperties_Statics
	{
		struct CppLib_eventGetAllProperties_Parms
		{
			UClass* Class;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetAllProperties_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetAllProperties_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "//??\xd3\xa1\xd2\xbb??????????????\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "??\xd3\xa1\xd2\xbb??????????????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetAllProperties", nullptr, nullptr, sizeof(CppLib_eventGetAllProperties_Parms), Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetAllProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetAllProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics
	{
		struct CppLib_eventGetAssetsOpenedInEditor_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetAssetsOpenedInEditor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "//??\xc8\xa1???\xd0\xb4\xf2\xbf\xaa\xb5???\xd4\xb4\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "??\xc8\xa1???\xd0\xb4\xf2\xbf\xaa\xb5???\xd4\xb4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetAssetsOpenedInEditor", nullptr, nullptr, sizeof(CppLib_eventGetAssetsOpenedInEditor_Parms), Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics
	{
		struct CppLib_eventGetSelectedAssets_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetSelectedAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "// ??\xc8\xa1\xd1\xa1?\xd0\xb5???\xd4\xb4\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "??\xc8\xa1\xd1\xa1?\xd0\xb5???\xd4\xb4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetSelectedAssets", nullptr, nullptr, sizeof(CppLib_eventGetSelectedAssets_Parms), Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics
	{
		struct CppLib_eventGetSelectedFolders_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetSelectedFolders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "// ??\xc8\xa1\xd1\xa1?\xd0\xb5??\xc4\xbc???\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "??\xc8\xa1\xd1\xa1?\xd0\xb5??\xc4\xbc???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetSelectedFolders", nullptr, nullptr, sizeof(CppLib_eventGetSelectedFolders_Parms), Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetSelectedFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetSelectedFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics
	{
		struct CppLib_eventGetSelectedPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventGetSelectedPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "// ??\xc8\xa1\xd1\xa1?\xd0\xb5??\xc4\xbc???\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "??\xc8\xa1\xd1\xa1?\xd0\xb5??\xc4\xbc???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "GetSelectedPaths", nullptr, nullptr, sizeof(CppLib_eventGetSelectedPaths_Parms), Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_GetSelectedPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_GetSelectedPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_SetFolderColor_Statics
	{
		struct CppLib_eventSetFolderColor_Parms
		{
			FString Path;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetFolderColor_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetFolderColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "//???\xc4\xbc?????????\xc9\xab\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "???\xc4\xbc?????????\xc9\xab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "SetFolderColor", nullptr, nullptr, sizeof(CppLib_eventSetFolderColor_Parms), Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_SetFolderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_SetFolderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics
	{
		struct CppLib_eventSetSelectedAssets_Parms
		{
			TArray<FString> Paths;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetSelectedAssets_Parms, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::NewProp_Paths,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "// ????\xd1\xa1?\xd0\xb5???\xd4\xb4\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "????\xd1\xa1?\xd0\xb5???\xd4\xb4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "SetSelectedAssets", nullptr, nullptr, sizeof(CppLib_eventSetSelectedAssets_Parms), Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_SetSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_SetSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics
	{
		struct CppLib_eventSetSelectedFolders_Parms
		{
			TArray<FString> Paths;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLib_eventSetSelectedFolders_Parms, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::NewProp_Paths,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "Comment", "// ????\xd1\xa1?\xd0\xb5??\xc4\xbc???\n" },
		{ "ModuleRelativePath", "CppLib.h" },
		{ "ToolTip", "????\xd1\xa1?\xd0\xb5??\xc4\xbc???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLib, nullptr, "SetSelectedFolders", nullptr, nullptr, sizeof(CppLib_eventSetSelectedFolders_Parms), Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLib_SetSelectedFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLib_SetSelectedFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCppLib_NoRegister()
	{
		return UCppLib::StaticClass();
	}
	struct Z_Construct_UClass_UCppLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCppLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AGunPythonPractice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCppLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCppLib_CloseEditorForAssets, "CloseEditorForAssets" }, // 3996595062
		{ &Z_Construct_UFunction_UCppLib_ExecuteConsoleCommand, "ExecuteConsoleCommand" }, // 41297939
		{ &Z_Construct_UFunction_UCppLib_GetAllProperties, "GetAllProperties" }, // 4289433461
		{ &Z_Construct_UFunction_UCppLib_GetAssetsOpenedInEditor, "GetAssetsOpenedInEditor" }, // 2155251532
		{ &Z_Construct_UFunction_UCppLib_GetSelectedAssets, "GetSelectedAssets" }, // 1774308973
		{ &Z_Construct_UFunction_UCppLib_GetSelectedFolders, "GetSelectedFolders" }, // 345801179
		{ &Z_Construct_UFunction_UCppLib_GetSelectedPaths, "GetSelectedPaths" }, // 1471715019
		{ &Z_Construct_UFunction_UCppLib_SetFolderColor, "SetFolderColor" }, // 1396976398
		{ &Z_Construct_UFunction_UCppLib_SetSelectedAssets, "SetSelectedAssets" }, // 3174944120
		{ &Z_Construct_UFunction_UCppLib_SetSelectedFolders, "SetSelectedFolders" }, // 3288482351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CppLib.h" },
		{ "ModuleRelativePath", "CppLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCppLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCppLib_Statics::ClassParams = {
		&UCppLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCppLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCppLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCppLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCppLib, 206095988);
	template<> AGUNPYTHONPRACTICE_API UClass* StaticClass<UCppLib>()
	{
		return UCppLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCppLib(Z_Construct_UClass_UCppLib, &UCppLib::StaticClass, TEXT("/Script/AGunPythonPractice"), TEXT("UCppLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCppLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
