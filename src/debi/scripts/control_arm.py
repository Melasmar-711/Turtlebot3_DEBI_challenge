import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
import sys

def move_to_absolute_pose(x, y, z):
    # Initialize moveit_commander and rospy
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('move_robotic_arm', anonymous=True)

    # Set up the planning group
    group_name = "arm"
    move_group = moveit_commander.MoveGroupCommander(group_name)

    # Set the target pose for the end effector
    pose_target = geometry_msgs.msg.Pose()
    pose_target.header.frame_id = "odom"
    pose_target.orientation.w = 1.0
    pose_target.position.x = x
    pose_target.position.y = y
    pose_target.position.z = z

    # Set the target pose
    move_group.set_pose_target(pose_target)

    # Plan and execute the motion
    plan = move_group.go(wait=True)
    move_group.stop()
    move_group.clear_pose_targets()

    # Shutdown moveit_commander and rospy
    moveit_commander.roscpp_shutdown()
    moveit_commander.os._exit(0)

if __name__=='__main__':
    # Move the end effector to an absolute position
    move_to_absolute_pose(1.17, 1.4, 0.27)

