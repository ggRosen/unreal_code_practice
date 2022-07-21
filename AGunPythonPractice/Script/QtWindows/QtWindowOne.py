import unreal
import sys
sys.path.append('C:/Python27/Lib/site-packages')
from PySide2 import QtGui, QtUiTools

WINDOW_NAME = 'Qt Window One'
# 把ui文件直接换成了py文件
UI_FILE_FULLNAME = __file__.replace('.py', '.ui')

# 有可能存在pyc文件
if UI_FILE_FULLNAME[-1]=='c':
    UI_FILE_FULLNAME = UI_FILE_FULLNAME[:-1]

class QtWindowOne(QtGui.QWidget):
	def __init__(self, parent=None):
		super(QtWindowOne, self).__init__(parent)
		self.aboutToClose = None # This is used to stop the tick when the window is closed
		self.widget = QtUiTools.QUiLoader().load(UI_FILE_FULLNAME)
		self.widget.setParent(self)
		self.setWindowTitle(WINDOW_NAME)
		self.setGeometry(100, 100, self.widget.width(), self.widget.height())
		self.initialiseWidget()

	def closeEvent(self, event):
		if self.aboutToClose:
			self.aboutToClose(self)
		event.accept()

	def eventTick(self, delta_seconds):
		self.myTick(delta_seconds)


	##########################################


	def initialiseWidget(self):
		self.time_while_this_window_is_open = 0.0
		self.random_actor = None
		self.random_actor_is_going_up = True
		self.widget.button_MoveRandom.clicked.connect(self.moveRandomActorInScene)

	def moveRandomActorInScene(self):
		import random
		import WorldFunctions
		all_actors = WorldFunctions.getAllActors(use_selection = False, actor_class = unreal.StaticMeshActor, actor_tag = None)
		rand = random.randrange(0, len(all_actors))
		self.random_actor = all_actors[rand]

	def myTick(self, delta_seconds):
		# Set Time
		self.time_while_this_window_is_open += delta_seconds
		self.widget.lbl_Seconds.setText("%.1f Seconds" % self.time_while_this_window_is_open)
		# Affect Actor
		if self.random_actor:
			actor_location = self.random_actor.get_actor_location()
			speed = 600.0 * delta_seconds
			if self.random_actor_is_going_up: # 向上移动，达到一定高度之后就向下移动
				if actor_location.z > 200.0: 
					self.random_actor_is_going_up = False
			else:
				speed = -speed
				if actor_location.z < 0.0:  # 向下到底之后向上移动
					self.random_actor_is_going_up = True
			self.random_actor.add_actor_world_offset(unreal.Vector(0.0, 0.0, speed), False, False)