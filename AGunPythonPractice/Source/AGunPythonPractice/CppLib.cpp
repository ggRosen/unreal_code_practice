// �������������޸��ļ��е���ɫ


#include "CppLib.h"
#include "Misc/ConfigCacheIni.h"
#include "Toolkits/AssetEditorManager.h"





void UCppLib::SetFolderColor(FString Path, FLinearColor Color)
{
	GConfig->SetString(TEXT("PathColor"), *Path, *Color.ToString(), GEditorPerProjectIni);
}

TArray<UObject*> UCppLib::GetAssetsOpenedInEditor()
{
	FAssetEditorManager& AssetEditorManager = FAssetEditorManager::Get();
	return AssetEditorManager.GetAllEditedAssets();
}

void UCppLib::CloseEditorForAssets(TArray<UObject*> Assets) {
	FAssetEditorManager& AssetEditorManager = FAssetEditorManager::Get();
	for (UObject* Asset : Assets)
	{
		AssetEditorManager.CloseAllEditorsForAsset(Asset);
	}
}


#include "ContentBrowserModule.h"				//��Դ�����ģ��
#include "IContentBrowserSingleton.h"
#include "AssetRegistryModule.h"				//��Դע��ģ��

//��ȡѡ�е��ʲ�
TArray<FString> UCppLib::GetSelectedAssets()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FAssetData> SelectedAssets; //����һ������
	ContentBrowserModule.Get().GetSelectedAssets(SelectedAssets); //ʹ����Դ�������ȡ��Դ�ĺ������ѻ�ȡ���Ķ��������������
	TArray<FString> Result;
	for (FAssetData& AssetData : SelectedAssets) {					//�������뵽һ���ַ����������淵�ػ�ȥ
		Result.Add(AssetData.PackageName.ToString());		
	}
	return Result;
}

//��ȡѡ�е��ļ���
TArray<FString> UCppLib::GetSelectedFolders() {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FString> SelectedFolders; //����һ������
	ContentBrowserModule.Get().GetSelectedFolders(SelectedFolders); //ʹ����Դ�������ȡ��Դ�ĺ������ѻ�ȡ���Ķ��������������
	return SelectedFolders;

}

//��ȡѡ�е�·��
TArray<FString> UCppLib::GetSelectedPaths() {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FString> SelectedFolders; //����һ������
	ContentBrowserModule.Get().GetSelectedPathViewFolders(SelectedFolders); //ʹ����Դ�������ȡ��Դ�ĺ������ѻ�ȡ���Ķ��������������
	return SelectedFolders;
}


//����ѡ�е���Դ
void UCppLib::SetSelectedAssets(TArray<FString> Paths)
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FName> PathsName;    //����һ���ַ���������
	for (FString Path : Paths)
	{
		PathsName.Add(*Path);
	}
	FARFilter AssetFilter;
	AssetFilter.PackageNames = PathsName; //����������Ϊһ����Դ������
	TArray<FAssetData> AssetDatas;
	AssetRegistryModule.Get().GetAssets(AssetFilter, AssetDatas);//���������������ȥ��Դ��һЩ��Ϣ����ȡ����Դ����� AssetDatas ��
	ContentBrowserModule.Get().SyncBrowserToAssets(AssetDatas); //������������Դ�������һЩ��������Դѡ��
}


void UCppLib::SetSelectedFolders(TArray<FString> Paths)
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowserModule.Get().SyncBrowserToFolders(Paths);
}


//��ȡһ������������ԣ�����ֵ���ַ�������
TArray<FString> UCppLib::GetAllProperties(UClass* Class)
{
	TArray<FString> Ret;
	if (Class != nullptr) {
		for (TFieldIterator<UProperty> It(Class); It; ++It) {  //��������
			UProperty* Property = *It;
			if (Property->HasAnyPropertyFlags(EPropertyFlags::CPF_Edit))  //ѡ�����Ա༭������
			{
				Ret.Add(Property->GetName());
			}
		}
	}
	return Ret;
	
}



#include "Editor.h"
//ִ�п���̨����
void UCppLib::ExecuteConsoleCommand(FString ConsoleCmd)
{
	if (GEditor) {
		UWorld* World = GEditor->GetEditorWorldContext().World(); //��ѡȡ�ı༭����ȡ���������Ļ�ȡһ������
		if (World) {
			GEditor->Exec(World, *ConsoleCmd, *GLog); //��������ִ�д������������ִ�е������ӡ��log����
		}

	}
}



