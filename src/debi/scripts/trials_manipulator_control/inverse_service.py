import rospy
import numpy as np
from geometry_msgs.msg import PoseStamped
from moveit_msgs.srv import GetPositionIKRequest, GetPositionIK
from geometry_msgs.msg import PointStamped
import tf 

#moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('move_to_pose', anonymous=True)
# Define the point to move to in the robot's base frame
point = PointStamped()
point.header.frame_id = 'odom'
point.point.x = 1.3
point.point.y = 1.5
point.point.z = 0.11

listener = tf.TransformListener()
target_frame = 'base_footprint'
listener.waitForTransform(target_frame, point.header.frame_id, rospy.Time(), rospy.Duration(4.0))
trans, rot = listener.lookupTransform(target_frame, point.header.frame_id, rospy.Time(0))
transformed_point = listener.transformPoint(target_frame, point)
print(transformed_point)

point = PoseStamped()
point.header.frame_id = 'base_footprint'
point.pose.position.x = transformed_point.point.x
point.pose.position.y =transformed_point.point.y
point.pose.position.z =transformed_point.point.z

# Initialize the IK service client
ik_client = rospy.ServiceProxy('/compute_ik', GetPositionIK)
ik_request = GetPositionIKRequest()

# Set the IK request parameters
ik_request.ik_request.group_name = 'arm'
ik_request.ik_request.pose_stamped = point

# Call the IK service to get the joint angles required to reach the point
ik_response = ik_client(ik_request)

# Move the manipulator to the point if an IK solution is found
if ik_response.error_code.val == ik_response.error_code.SUCCESS:
    joint_angles = ik_response.solution.joint_state.position
    # Move the manipulator to the joint angles using your preferred motion planning method
else:
    print("No IK solution found for the given point")

