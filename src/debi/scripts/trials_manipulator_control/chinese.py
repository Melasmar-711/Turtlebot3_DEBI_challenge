#!/usr/bin/env python
import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
import tf
import numpy as np
from geometry_msgs.msg import PointStamped
from geometry_msgs.msg import PoseStamped
import actionlib

#from future import print_function # Printing
import rospy # Python client library
import actionlib # ROS action library
from control_msgs.msg import FollowJointTrajectoryAction, FollowJointTrajectoryGoal # Controller messages
from std_msgs.msg import Float64 # 64-bit floating point numbers
from trajectory_msgs.msg import JointTrajectoryPoint # Robot trajectories







def move_robot_gripper(joint_values):
  gripper_client = actionlib.SimpleActionClient('gripper_controller/follow_joint_trajectory', FollowJointTrajectoryAction)
  # Wait for the server to start up and start listening for goals.
  gripper_client.wait_for_server()
  # Create a new goal to send to the Action Server
  gripper_goal = FollowJointTrajectoryGoal()
  # Store the names of each joint of the robot arm
  gripper_goal.trajectory.joint_names = ['gripper']
  # Create a trajectory point
  point = JointTrajectoryPoint() 
  # Store the desired joint values
  point.positions = joint_values
  # Set the time it should in seconds take to move the arm to the desired joint angles
  point.time_from_start = rospy.Duration(3)
  # Add the desired joint values to the goal
  gripper_goal.trajectory.points.append(point)
  # Define timeout values
  exec_timeout = rospy.Duration(10)
  prmpt_timeout = rospy.Duration(5)
  # Send a goal to the ActionServer and wait for the server to finish performing the action
  gripper_client.send_goal_and_wait(gripper_goal, exec_timeout, prmpt_timeout)

if __name__ == '__main__':
    rospy.init_node('move_to_pose', anonymous=True)
    try:

        
        move_robot_gripper([-0.01])
    except rospy.ROSInterruptException:
        pass
