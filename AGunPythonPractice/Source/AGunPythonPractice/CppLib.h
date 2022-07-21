// ��������ķ����������޸ı༭�����ļ��е���ɫ��

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
	//���ļ���������ɫ
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void SetFolderColor(FString Path, FLinearColor Color);


	//��ȡ���д򿪵���Դ
	UFUNCTION(BlueprintCallable,Category="Unreal Python")
	static TArray<UObject*> GetAssetsOpenedInEditor();

	//�ر���Դ
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void CloseEditorForAssets(TArray<UObject*> Assets);

	// ��ȡѡ�е���Դ
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetSelectedAssets();

	// ��ȡѡ�е��ļ���
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetSelectedFolders();

	// ��ȡѡ�е��ļ���
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetSelectedPaths();

	// ����ѡ�е���Դ
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void SetSelectedAssets(TArray<FString> Paths);

	// ����ѡ�е��ļ���
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void SetSelectedFolders(TArray<FString> Paths);

	//��ӡһ�������������
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static TArray<FString> GetAllProperties(UClass* Class);

	//��python��ִ�п���̨����
	UFUNCTION(BlueprintCallable, Category = "Unreal Python")
	static void  ExecuteConsoleCommand(FString ConsoleCmd);
};
