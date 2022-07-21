import unreal
import sys

sys.path.append('C:/Python37/Lib/site-packages')
from PySide2 import QtGui

# 接收虚幻编辑器的tick
def __QtAppTick__(delta_seconds):
    """tick函数

    Args:
        delta_seconds (_type_): 把秒数传给窗口
    """
    for window in opened_windows: # 打开的窗口才会传递秒数过去
        window.eventTick(delta_seconds)

# 应用关闭
def __QtAppQuit__():
    unreal.unregister_slate_post_tick_callback(tick_handle)    # 反注册

# 窗口关闭
def __QtWindowClosed__(window=None):
    if window in opened_windows: 
        opened_windows.remove(window)

# 生成应用
unreal_app = QtGui.QGuiApplication.instance()
if not unreal_app:
    unreal_app = QtGui.QGuiApplication(sys.argv)
    tick_handle = unreal.register_slate_post_tick_callback(__QtAppTick__)  # 注册;和上面的__QtAppTick__ 联系起来
    unreal_app.aboutToQuit.connect(__QtAppQuit__)
    existing_windows = {}  # 管理存在的窗口
    opened_windows = []    # 管理打开的窗口

# 生成窗口
def spawnQtWindow(desired_window_class=None):
    window = existing_windows.get(desired_window_class,None) # 生成窗口的时候首先先找有没有这个窗口
    if not window:
        # 如果没有窗口，构造函数构造一个窗口
        window = desired_window_class()
        existing_windows[desired_window_class] = window
        window.aboutToClose = __QtWindowClosed__
    if window not in opened_windows:
        opened_windows.append(window)
    window.time_while_this_window_is_open = 0
    window.show()
    window.activateWindow()
    return windowQtWindowOne