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

def move_to_pose(x,y,z):
    # Initialize moveit_commander and rospy node
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('move_to_pose', anonymous=True)
    
    ####################
    point = PointStamped()
    point.header.frame_id = 'odom'
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
    scene = moveit_commander.PlanningSceneInterface()

    # Create a MoveGroupCommander object for the group of joints you want to control
    group_name = "arm"
    move_group = moveit_commander.MoveGroupCommander(group_name)
    eef_link = move_group.get_end_effector_link()
    #move_group.set_pose_reference_frame('odom')

    # Set the maximum time MoveIt will plan for a motion plan
    #move_group.set_planning_time(15)

    # Set the target pose for the end effector
    #target_pose = geometry_msgs.msg.Pose()
    target_pose = PoseStamped()
    target_pose.header.frame_id='base_footprint'
    target_pose.pose.position.x =round(transformed_point.point.x,2) #x  
    target_pose.pose.position.y =round(transformed_point.point.y,2)  #y
    target_pose.pose.position.z =round(transformed_point.point.z,2) #z
    #target_pose.orientation.x = 0.031
    #target_pose.orientation.y = 0.176
    #target_pose.orientation.z = 0.172
    #target_pose.orientation.w = 0.96
    print(target_pose)
    #move_group


    # Set the target pose for the arm to move to
    move_group.set_pose_target(target_pose)

    # Plan and execute the motion
    plan = move_group.go(wait=True)
    #rospy.spin()
    if plan:
        rospy.loginfo("Motion plan successful!")
    else:
        rospy.logerr("Motion plan failed!")
    
    # Clean up
    moveit_commander.roscpp_shutdown()


if __name__ == '__main__':
    try:
        move_to_pose(1.2,1.5,0.17)
    except rospy.ROSInterruptException:
        pass

