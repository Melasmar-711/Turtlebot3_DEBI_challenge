#!/usr/bin/env python3

import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
import tf
import numpy as np
from geometry_msgs.msg import PointStamped
from geometry_msgs.msg import PoseStamped



import actionlib # ROS action library
from control_msgs.msg import FollowJointTrajectoryAction, FollowJointTrajectoryGoal # Controller messages
from std_msgs.msg import Float64 # 64-bit floating point numbers
from trajectory_msgs.msg import JointTrajectoryPoint # Robot trajectories


def move_to_pose(x,y,z):
    # Initialize moveit_commander and rospy node
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('move_to_pose', anonymous=True)
    
    ####################
    point = PointStamped()
    point.header.frame_id = 'map'
    point.point.x = x
    point.point.y = y
    point.point.z = z

    listener = tf.TransformListener()
    target_frame = 'base_footprint'
    listener.waitForTransform(target_frame, point.header.frame_id, rospy.Time(), rospy.Duration(4.0))
    trans, rot = listener.lookupTransform(target_frame, point.header.frame_id, rospy.Time(0))
    transformed_point = listener.transformPoint(target_frame, point)
    print(transformed_point)



    
    
    
    
    
    
    
    
    
    #########################3333
    
    
    
    #####################################3
    #listener = tf.TransformListener()
    #rospy.sleep(1.0)
    #target_frame = 'base_footprint'

    #listener.waitForTransform(target_frame,'odom', rospy.Time(), rospy.Duration(4.0))
    #(trans, rot) = listener.lookupTransform(target_frame,'odom',  rospy.Time(0))
    #homogeneous_matrix = tf.transformations.concatenate_matrices(tf.transformations.translation_matrix(trans),tf.transformations.quaternion_matrix(rot))
    #print(homogeneous_matrix)
    #point_world_homogeneous = np.array([x, y, z, 1.0])
    #point_planning_homogeneous = np.dot(point_world_homogeneous,homogeneous_matrix)
    #x,y,z = (point_planning_homogeneous[0], point_planning_homogeneous[1], point_planning_homogeneous[2])
    #print(x,y,z)




    ######################################################



    # Create a RobotCommander object to control the robot's arms and planning scene
    robot = moveit_commander.RobotCommander()

    # Create a PlanningSceneInterface object to access the planning scene
    planning_scene = moveit_commander.PlanningSceneInterface()

    # Create a MoveGroupCommander object for the group of joints you want to control
    group_name = "arm"
    move_group = moveit_commander.MoveGroupCommander(group_name)
    eef_link = move_group.get_end_effector_link()


    # Set the maximum time MoveIt will plan for a motion plan
    #move_group.set_planning_time(5)

    # Set the target pose for the end effector
    target_pose = geometry_msgs.msg.Pose()
    
    x=float(round(transformed_point.point.x,2))
    y=float(round(transformed_point.point.y,2))
    z=float(round(transformed_point.point.z,2))
    
        
    #target_pose = PoseStamped()
    #target_pose.header.frame_id='base_footprint'
    #target_pose.pose.position.x =x#round(transformed_point.point.x,2) #x  
    #target_pose.pose.position.y =y#round(transformed_point.point.y,2)  #y
    #target_pose.pose.position.z =z#round(transformed_point.point.z,2) #z
    
    xyz=[x,y,z]
    
    #target_pose.orientation.x = 0.031
    #target_pose.orientation.y = 0.176
    #target_pose.orientation.z = 0.172
    #target_pose.orientation.w = 0.96
    
    eef_link = move_group.get_end_effector_link()
    
    
    
    #move_group.set_goal_joint_tolerance(0.1)    
    #move_group.set_goal_position_tolerance(0.1)
    #move_group.set_max_velocity_scaling_factor(0.1)
    #move_group.set_num_planning_attempts(10)
    #move_group.set_max_acceleration_scaling_factor(0.1)
    #print(target_pose)

	

    # Set the target pose for the arm to move to
    move_group.set_position_target(xyz,eef_link)

    # Plan and execute the motion
    plan = move_group.go(wait=True)
    move_group.stop()
    #move_group.clear_position_targets()
    #rospy.spin()
    #if plan:
        #rospy.loginfo("Motion plan successful!")
    #else:
        #rospy.logerr("Motion plan failed!")
    
    # Clean up
    #moveit_commander.roscpp_shutdown()
    #moveit_commander.os._exit(0)
###########################################################



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
    try:
        move_to_pose(1.36,1.49,0.03)
        
        move_robot_gripper(-0.01)
    except rospy.ROSInterruptException:
        pass

