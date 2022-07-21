// 这个函数的方法是用来修改编辑器的文件夹的颜色的

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CppLib.generated.h"

/**
 * 
 */
UCLASS()
class AGUNPYTHONPRACTICE_API UCppLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	//给文件夹设置颜色
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void SetFolderColor(FString Path, FLinearColor Color);


	//获取所有打开的资源
	UFUNCTION(BlueprintCallable,Category="Unreal Python")
	static TArray<UObject*> GetAssetsOpenedInEditor();

	//关闭资源
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void CloseEditorForAssets(TArray<UObject*> Assets);

	// 获取选中的资源
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetSelectedAssets();

	// 获取选中的文件夹
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetSelectedFolders();

	// 获取选中的文件夹
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetSelectedPaths();

	// 设置选中的资源
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void SetSelectedAssets(TArray<FString> Paths);

	// 设置选中的文件夹
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void SetSelectedFolders(TArray<FString> Paths);

	//打印一个类的所有属性
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetAllProperties(UClass* Class);

	//在python中执行控制台命令
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void  ExecuteConsoleCommand(FString ConsoleCmd);
};
