import rospy
import actionlib
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from geometry_msgs.msg import Pose, Point, Quaternion

def send_goal(x, y, theta):
    client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
    client.wait_for_server()
    goal = MoveBaseGoal()
    goal.target_pose.header.frame_id = 'map'
    goal.target_pose.header.stamp = rospy.Time.now()
    goal.target_pose.pose = Pose(Point(x, y, 0.0), 
                                 Quaternion(0.0, 0.0, theta, 1.0))   

    rospy.info('Got New Goal: ' + x + ' ' + y + ' ' + theta)                  
    client.send_goal(goal)
    client.wait_for_result()
    rospy.info("Goal is reached")  
    rospy.info('Goal Reached: ' + str(client.get_state())) 

    return client.get_result()


if __name__ == '__main__':
    rospy.init_node('send_goals_turtlebot3')
    send_goal(1.5, 0.5, 0.1)        
    send_goal(4.0, 2.0, 0.2)
    send_goal(4.0, 4.0, 0.3)
    send_goal(2.0, 4.0, 0.4)
    

    rospy.spin()

   


