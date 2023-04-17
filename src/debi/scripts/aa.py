#!/usr/bin/env python

import sys
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
import tf
import numpy as np

def move_to_pose(x,y,z):
    # Initialize moveit_commander and rospy node
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('move_to_pose', anonymous=True)
    
    listener = tf.TransformListener()
    target_frame = 'base_footprint'

    listener.waitForTransform(target_frame,'odom', rospy.Time(), rospy.Duration(4.0))
    (trans, rot) = listener.lookupTransform(target_frame,'odom',  rospy.Time(0))
    homogeneous_matrix = tf.transformations.concatenate_matrices(tf.transformations.translation_matrix(trans),tf.transformations.quaternion_matrix(rot))
    
    point_world_homogeneous = np.array([x, y, z, 1.0])
    point_planning_homogeneous = np.dot(homogeneous_matrix, point_world_homogeneous)
    x,y,z = (point_planning_homogeneous[0], point_planning_homogeneous[1], point_planning_homogeneous[2])
    print(x,y,z)

    # Create a RobotCommander object to control the robot's arms and planning scene
    robot = moveit_commander.RobotCommander()

    # Create a PlanningSceneInterface object to access the planning scene
    scene = moveit_commander.PlanningSceneInterface()

    # Create a MoveGroupCommander object for the group of joints you want to control
    group_name = "arm"
    move_group = moveit_commander.MoveGroupCommander(group_name)
    
    move_group.set_pose_reference_frame('odom')

    # Set the maximum time MoveIt will plan for a motion plan
    move_group.set_planning_time(15)

    # Set the target pose for the end effector
    target_pose = geometry_msgs.msg.Pose()
    target_pose.position.x =  x
    target_pose.position.y =  0
    target_pose.position.z = z
    #target_pose.orientation.x = 0.0
    #target_pose.orientation.y = 0.0
    #target_pose.orientation.z = 0.0
    #target_pose.orientation.w = 1.0

    # Set the target pose for the arm to move to
    move_group.set_pose_target(target_pose)

    # Plan and execute the motion
    plan = move_group.go(wait=True)
    if plan:
        rospy.loginfo("Motion plan successful!")
    else:
        rospy.logerr("Motion plan failed!")
    
    # Clean up
    moveit_commander.roscpp_shutdown()


if __name__ == '__main__':
    try:
        move_to_pose(1.2,1.4,0.11)
    except rospy.ROSInterruptException:
        pass

