#!/usr/bin/env python3
import sys
import rospy
import moveit_commander
from std_msgs.msg import String
from open_manipulator_msgs.msg import OpenManipulatorState
from geometry_msgs.msg import PoseStamped


def move_arm():

    # Initialize moveit_commander and rospy node
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('moveit_commander', anonymous=True)

    # Set up the arm group
    arm = moveit_commander.MoveGroupCommander('arm')

    # Move the arm to a predefined position
    arm.set_named_target('home')
    arm.go()
    
    # Define pose
    pose = PoseStamped()
    pose.header.frame_id = 'base_link'
    pose.pose.position.x = 0.5
    pose.pose.position.y = 0.0
    pose.pose.position.z = 0.5
    pose.pose.orientation.w = 1.0

    # Set pose target for arm group
    arm.set_pose_target(pose)

    # Plan trajectory to pose target
    plan = arm.plan()

    # Execute trajectory
    arm.execute((plan))


    # Open the gripper
    gripper_pub.publish('grip', 'open')

    # Close the gripper
    gripper_pub.publish('grip', 'close')

if __name__ == '__main__':
    try:
        # Set up the gripper publisher
        gripper_pub = rospy.Publisher('/open_manipulator/gripper_command', String, queue_size=10)

        # Call the move_arm function
        move_arm()
    except rospy.ROSInterruptException:
        pass

