<<<<<<< HEAD
#!/usr/bin/env python3  

=======
#!/usr/bin/env python3
>>>>>>> f47dacd4046d1de246dd991b5e2304df4bfe3d4a
import rospy
import actionlib
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from geometry_msgs.msg import Pose, Point, Quaternion
from std_msgs.msg import String

def send_goal(x, y, theta):
    client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
    client.wait_for_server()
    goal = MoveBaseGoal()
    goal.target_pose.header.frame_id = 'map'
    goal.target_pose.header.stamp = rospy.Time.now()
    goal.target_pose.pose = Pose(Point(x, y, 0.0), 
                                 Quaternion(0.0, 0.0, theta, 1.0))   

    rospy.loginfo('Got New Goal: ' + str(x) + ' ' + str(y) + ' ' + str(theta))                  
    client.send_goal(goal)
    client.wait_for_result()
    rospy.loginfo("Goal is reached")  
    rospy.loginfo('Goal Reached: ' + str(client.get_state())) 

    return client.get_result()


if __name__ == '__main__':
<<<<<<< HEAD
    try:
    	pub = rospy.Publisher('state', String, queue_size=10)
    	rospy.init_node('send_goals_turtlebot3')
    	send_goal(1.2,0.62,0)       #1st ball
    	send_goal(1.44,0.64,0)
    	pub.publish('one')
=======
    rospy.init_node('send_goals_turtlebot3')
    send_goal(1.5, 0.5, 0.1)
            
    send_goal(4.0, 2.0, 0.2)
    
    send_goal(4.0, 4.0, 0.3)
    
    send_goal(2.0, 4.0, 0.4)
    
>>>>>>> f47dacd4046d1de246dd991b5e2304df4bfe3d4a

    	#send_goal(4.0, 2.0, 0.2)
    	#send_goal(4.0, 4.0, 0.3)
    	#send_goal(2.0, 4.0, 0.4)
    

    	while not rospy.is_shutdown():
        	#rospy.sleep(1)
         	rospy.loginfo("while loop")

         	data = rospy.wait_for_message("arm_state", String)  
         	if data.data =='one_g'  :
         	
          		#send_goal(1.5,1.5,0)  #red line
          		send_goal(1.75,1.5,0)
          		pub.publish("red")
         	if data.data=='two_g':
          		#send_goal(1.5,1.5,0)  #red line
          		send_goal(1.75,1.5,0)
          		pub.publish("red")
         	if data.data=="three_g":
          		#send_goal(1.5,1.5,0)  #red line
          		send_goal(1.75,1.5,0)
          		pub.publish("red")
         	if data.data=="thrown1":
          		send_goal(0.8,0.58,0) #goal 2 point
          		send_goal(0.62,0.58,0)
          		pub.publish('two')
         	if data.data=="thrown2":
          		send_goal(0.6,2.4,0) #goal 3 point
          		send_goal(0.45,2.4,0)
          		pub.publish('three')
         	#rospy.loginfo(data.data)
         	if data.data=="done":
          		rospy.shutdown()

    except rospy.ROSInterruptException:
        pass
