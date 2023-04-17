import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg



moveit_commander.roscpp_initialize(sys.argv)
    
rospy.init_node('move_robotic_arm', anonymous=True)
                
                
robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()

# We can get the name of the reference frame for this robot:
planning_frame = group.get_planning_frame()
print ("============ Reference frame: %s" % planning_frame)

# We can also print the name of the end-effector link for this group:
eef_link = group.get_end_effector_link()
print( "============ End effector: %s" % eef_link)

# We can get a list of all the groups in the robot:
group_names = robot.get_group_names()
print ("============ Robot Groups:", robot.get_group_names())

# Sometimes for debugging it is useful to print the entire state of the
# robot:
print ("============ Printing robot state")
print (robot.get_current_state())
print ("")
                
