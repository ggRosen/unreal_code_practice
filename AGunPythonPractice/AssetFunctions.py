import unreal



# 修改unreal里面文件夹的颜色开始调用了c++函数##########################################
def getGradientColor(x):
    return (x/512.0, 1-x/512.0,0,1)

def generateColoredDirectories():
    for x in range(100,400):
        dir_path = '/Game/PythonGenerated/'+str(x)
        linear_color = getGradientColor(x)
        unreal.CppLib.set_folder_color(dir_path,linear_color)   # 调用了c++类
        unreal.EditorAssetLibrary.make_directory(dir_path)
# 修改unreal里面文件夹的颜色结束##########################################



# 在unreal里面打开资源、获取所有打开的资源，关闭资源 开始##########################################
def openAssets():
    """传入资源打开资源
    """
    assets = [unreal.load_asset('/Game/Textures/Brick_Base_Color.Brick_Base_Color')]
    unreal.AssetToolsHelpers.get_asset_tools().open_editor_for_assets(assets)


def getAllOpenedAssets():
    """获取所有打开的资产

    Returns:
        list: 获取所有打开的资产
    """
    return unreal.CppLib.get_assets_opened_in_editor()

def closeAssets():
    """关闭所有打开的资产"""

    assets = getAllOpenedAssets()
    unreal.CppLib.close_editor_for_assets(assets)
# 在unreal里面打开资源、获取所有打开的资源，关闭资源 结束##########################################



# 在unreal里面选中资源  开始##########################################
def showAssetsInContentBrowser():
    paths = ['/Game/NewMaterial.NewMaterial',
            '/Game/BP_Actor.BP_Actor',
            '/Game/Textures',]
    unreal.EditorAssetLibrary.sync_browser_to_objects(paths)

def getSelectAssets():
    return unreal.CppLib.get_selected_assets()

def setSelectedAssets():
    # 注意这里的路径不能'/Game/Textures/Brick_Base_Color.Brick_Base_Color' 两个点的形式
    paths = ['/Game/Textures/Brick_Base_Color', 
            '/Game/BP_Actor',] 
    unreal.CppLib.set_selected_assets(paths)

# 获取的是右边的文件夹
def getSelectedFolders():
    return unreal.CppLib.get_selected_folders()

# 获取的是左边的content的路径栏里面的内容
def getSelectedPaths():
    return unreal.CppLib.get_selected_paths()

def setSelectedFolders():
    paths = ['/Game/Textures', 
            '/Game/Sounds',] 
    return unreal.CppLib.set_selected_folders(paths)

# 在unreal里面选中资源  结束##########################################



texture_tga = 'D:/work/cywj/mogong/maya/images/Brick_Base_Color.tga' 
sound_wav = 'D:/work/wav/Phone.wav' 

def buildImportTask(file_name,destination_path):
    """、
        创建一个导入资源的任务
    Args:
        file_name (_type_): 文件名字
        destination_path (_type_): 目的地

    Returns:
        _type_: 返回的是一个任务对象
    """    
    task = unreal.AssetImportTask()
    task.set_editor_property('automated',True)
    task.set_editor_property('destination_name','')
    task.set_editor_property('destination_path',destination_path)
    task.set_editor_property('filename', file_name)
    task.set_editor_property('replace_existing',True)
    task.set_editor_property('save',True)
    return task


def  executeImportTasks(tasks):
    """导入任务
    Args:
        tasks (_type_): 导入资源的任务
    """    
    unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks(tasks)
    for task in tasks:
        for path in task.get_editor_property('imported_object_paths'):
            print('Imported: %s ' %path)

def importMyAssets():
    texture_task = buildImportTask(texture_tga, '/Game/Textures')
    sound_task = buildImportTask(sound_wav, '/Game/Sounds')
    executeImportTasks([texture_task, sound_task])



# importMyAssets()