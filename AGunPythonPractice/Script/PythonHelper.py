from math import degrees
from pickle import OBJ
from re import X
import unreal

def get_all_properties(object_class):
    return unreal.CppLib.get_all_properties(object_class)

def printAllPerperties():
    obj = unreal.Actor()
    object_class = obj.get_class()
    for x in get_all_properties(object_class):
        y = x
        while len(y) <42:
            y = ' ' + y  # 对齐的功能
        print(y + ' : '+ str(obj.get_editor_property(x)))