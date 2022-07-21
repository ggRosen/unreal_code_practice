
import unreal
import random 

def focus_viewport_on_actor(active_viewport_only=True, actor=None):
    cmd = 'CAMERA ALIGN'
    if active_viewport_only:
        cmd += 'ACTIVEVIEWPORTONLY'
    if actor:
        cmd += 'NAME=' + actor.get_name()
    executeConsoleCommand([cmd])


def focus_all_viewports_on_selected_actors_EXAMPLE():
    """聚焦所有的物体
    """
    focus_viewport_on_actor(active_viewport_only=False)

def focus_active_viewport_on_random_actor_EXAMPLE():
    """
    """
    world = unreal.EditorLevelLibrary.get_editor_world()
    actors = unreal.GameplayStatics.get_all_actors_of_class(world,unreal.Actor)
    random_actor_in_world = actors[random.randrange(len(actors))]
    focus_viewport_on_actor(active_viewport_only=False,actor=random_actor_in_world)


def get_active_viewport_index():
    return unreal.CppLib.get_active_viewport_index()

def set_viewport_location_and_rotation(index=1,location=unreal.Vector(),rotation=unreal.Rotator()):
    unreal.CppLib.set_viewport_location_and_rotation(index,location,rotation)

def snap_viewport_to_actor(index=1,actor=None):
    set_viewport_location_and_rotation(index,actor.get_acotr_location(),actor.get_acotr_rotation())


def set_viewport_location_and_rotation_EXAMPLE():
    index=get_active_viewport_index()
    set_viewport_location_and_rotation(index,unreal.Vector(0,0,0),unreal.Rotator(0,0,0))





def executeConsoleCommand(console_cmd):
    """批量执行控制台命令
    """
    # console_cmd = ['r.ScreenPercentage 0.1',
    #                'r.Color.Max 6',
    #                'stat fps',
    #                'stat unit']
    for x in console_cmd:
        unreal.CppLib.execute_console_command(x)




def deferredSpawnActor():
    """生成一个actor
    Returns:
        生成后的actor对象
    """    
    actor_class = unreal.EditorAssetLibrary.load_blueprint_class('/Game/BP_Actor')
    actor_location = unreal.Vector(random.uniform(0,2000),random.uniform(0,2000),0)
    actor_rotation = unreal.Rotator(random.uniform(0,360),random.uniform(0,360),random.uniform(0,360))
    actor = unreal.EditorLevelLibrary.spawn_actor_from_class(actor_class,actor_location,actor_rotation)
    actor.tags.append("My Python Tag")
    return actor

def executeSlowTask():
    quantity_steps_in_slow_task = 100
    with unreal.ScopedSlowTask(quantity_steps_in_slow_task,'My Slow Task Text...') as slow_task:
        slow_task.make_dialog(True)
        for x in range(quantity_steps_in_slow_task):
            if slow_task.should_cancel():
                break
            # 改变进度窗口里面显示的进度值
            slow_task.enter_progress_frame(1,'My Slow Task Text ...'+str(x) + '/' + str(quantity_steps_in_slow_task))
            # 生成角色
            deferredSpawnActor()

        