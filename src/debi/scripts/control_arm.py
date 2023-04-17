import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
import tf
import numpy as np




def move_to_absolute_pose(x, y, z):
    # Initialize moveit_commander and rospy
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('move_robotic_arm', anonymous=True)
    #listener = tf.TransformListener()
    #target_frame = 'base_footprint'

    #listener.waitForTransform(target_frame, 'odom', rospy.Time(), rospy.Duration(4.0))
    #(trans, rot) = listener.lookupTransform(target_frame, 'odom', rospy.Time(0))
    #homogeneous_matrix = tf.transformations.concatenate_matrices(tf.transformations.translation_matrix(trans),tf.transformations.quaternion_matrix(rot))
    
    #point_world_homogeneous = np.array([x, y, z, 1.0])
    #point_planning_homogeneous = np.dot(homogeneous_matrix, point_world_homogeneous)
    #x,y,z = (point_planning_homogeneous[0], point_planning_homogeneous[1], point_planning_homogeneous[2])
    #print(x,y,z)
    
    
    
    
    # Set up the planning group
    group_name = "arm"
    move_group = moveit_commander.MoveGroupCommander(group_name)
    #move_group.set_pose_reference_frame("base_link")
    eef_link = move_group.get_end_effector_link()
    planning_frame = move_group.get_planning_frame()
    print(planning_frame)
    # Set the target pose for the end effector

    pose_target = geometry_msgs.msg.Pose()
    #pose_target.orientation.w = 1.0
    pose_target.position.x = x
    pose_target.position.y = y
    pose_target.position.z = z


    # Set the target pose
    move_group.set_pose_target(pose_target)

    # Plan and execute the motion
    move_group.go(wait=True)

    # Shutdown moveit_commander and rospy
    moveit_commander.roscpp_shutdown()
    moveit_commander.os._exit(0)

if __name__=='__main__':
    # Move the end effector to an absolute position

    
    move_to_absolute_pose(0.24, 0, 0.11)

