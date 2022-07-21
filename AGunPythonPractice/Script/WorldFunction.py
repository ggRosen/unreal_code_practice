from select import select
import unreal

def get_selected_actors():
    return unreal.EditorLevelLibrary.get_selected_level_actors()


def get_selected_actor_EXAMPLE():
    for x in get_selected_actors():
        print(x)

def select_actors(actors_to_select = []):
    unreal.EditorLevelLibrary.set_selected_level_actors(actors_to_select)


def set_actors_EXAMPLE():
    all_actors = get_all_actors()  # 获取所有的actor
    actors_to_select = []
    for x in range(len(all_actors)):   
        if x % 2:   # 除以2如果是偶数就选中共
            actors_to_select.append(all_actors[x])
        select_actors(actors_to_select)

def clear_actor_selection_EXAMPLE():
    select_actors()
    
def get_all_actors(use_selection=False,actor_class=None,actor_tag=None):
    """获取所有的actors 过滤actors
    Args:
        use_selection :True or False
        actor_class : actor_class = unreal.StaticMeshActor
        actor_tag :

    Returns:
        _type_: _description_
    """
    if use_selection: # 选择的基础上进行 actor类和actor标签的过滤
        selected_actors = unreal.EditorLevelLibrary.get_selected_level_actors()
        class_actor = selected_actors
        if actor_class:
            class_actor = [x for x in selected_actors if cast(x, actor_class)]
        tag_actors = class_actor
        if actor_tag:
            tag_actors = [x for x in selected_actors if x.actor_has_tag(actor_tag)]
        return [x for x in tag_actors]
    else:
        world = unreal.EditorLevelLibrary.get_editor_world()
        # 有actor类过滤的基础上，有标签过滤
        if actor_class:
            actors = unreal.GameplayStatics.get_all_actors_of_class(world,actor_class)
            tag_actors = actors
            if actor_tag:
                tag_actors = [x for x in actors if x.actor_has_tag(actor_tag)]
            return [x for x in tag_actors]
        # 只有便签过滤
        elif actor_tag:
            tag_actors = unreal.GameplayStatics.get_all_actors_of_class(world,actor_tag)
            return [x for x in tag_actors]
        # 什么都不过滤
        else:
            actors = unreal.GameplayStatics.get_all_actors_of_class(world, unreal.Actor)
            return [x for x in actors]


def actors_print(actors):
    for x in actors:
        print(x)

def try_cast():
    if cast(unreal.load_asset('/Game/Textures/Brick_Base_Color'), unreal.Actor):
        print('Cast Succeed')
    else:
        print('Cast Fail')

def cast(object_to_cast,target_class):
    try:
        return target_class.cast(object_to_cast)
    except:
        return None