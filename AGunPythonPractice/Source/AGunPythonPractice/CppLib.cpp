// 这个类的作用是修改文件夹的颜色


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


#include "ContentBrowserModule.h"				//资源浏览器模块
#include "IContentBrowserSingleton.h"
#include "AssetRegistryModule.h"				//资源注册模块

//获取选中的资产
TArray<FString> UCppLib::GetSelectedAssets()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FAssetData> SelectedAssets; //声明一个数组
	ContentBrowserModule.Get().GetSelectedAssets(SelectedAssets); //使用资源浏览器获取资源的函数，把获取到的对象存入数组里面
	TArray<FString> Result;
	for (FAssetData& AssetData : SelectedAssets) {					//把它加入到一个字符串数组里面返回回去
		Result.Add(AssetData.PackageName.ToString());		
	}
	return Result;
}

//获取选中的文件夹
TArray<FString> UCppLib::GetSelectedFolders() {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FString> SelectedFolders; //声明一个数组
	ContentBrowserModule.Get().GetSelectedFolders(SelectedFolders); //使用资源浏览器获取资源的函数，把获取到的对象存入数组里面
	return SelectedFolders;

}

//获取选中的路径
TArray<FString> UCppLib::GetSelectedPaths() {
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FString> SelectedFolders; //声明一个数组
	ContentBrowserModule.Get().GetSelectedPathViewFolders(SelectedFolders); //使用资源浏览器获取资源的函数，把获取到的对象存入数组里面
	return SelectedFolders;
}


//设置选中的资源
void UCppLib::SetSelectedAssets(TArray<FString> Paths)
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FName> PathsName;    //构造一个字符串的数组
	for (FString Path : Paths)
	{
		PathsName.Add(*Path);
	}
	FARFilter AssetFilter;
	AssetFilter.PackageNames = PathsName; //数组用来作为一个资源过滤器
	TArray<FAssetData> AssetDatas;
	AssetRegistryModule.Get().GetAssets(AssetFilter, AssetDatas);//用这个过滤器来过去资源的一些信息，获取到资源存放在 AssetDatas 中
	ContentBrowserModule.Get().SyncBrowserToAssets(AssetDatas); //用这个数组对资源浏览器做一些操作把资源选中
}


void UCppLib::SetSelectedFolders(TArray<FString> Paths)
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowserModule.Get().SyncBrowserToFolders(Paths);
}


//获取一个类的所有属性，返回值是字符串数组
TArray<FString> UCppLib::GetAllProperties(UClass* Class)
{
	TArray<FString> Ret;
	if (Class != nullptr) {
		for (TFieldIterator<UProperty> It(Class); It; ++It) {  //迭代属性
			UProperty* Property = *It;
			if (Property->HasAnyPropertyFlags(EPropertyFlags::CPF_Edit))  //选出可以编辑的属性
			{
				Ret.Add(Property->GetName());
			}
		}
	}
	return Ret;
	
}



#include "Editor.h"
//执行控制台命令
void UCppLib::ExecuteConsoleCommand(FString ConsoleCmd)
{
	if (GEditor) {
		UWorld* World = GEditor->GetEditorWorldContext().World(); //用选取的编辑器获取世界上下文获取一个世界
		if (World) {
			GEditor->Exec(World, *ConsoleCmd, *GLog); //用世界来执行传进来的命令，把执行的命令打印到log上面
		}

	}
}



