# DEBI_Robotics_challenge




## install turtlebot3 for ros noetic 
`sudo apt-get install ros-noetic-turtlebot3 ros-noetic-turtlebot3-bringup ros-noetic-turtlebot3-description ros-noetic-turtlebot3-gazebo ros-noetic-turtlebot3-navigation ros-noetic-turtlebot3-simulations`

<br/>
<br/>
<br/>


## setting up the work space

1) clone the package using 
`git clone https://github.com/Melasmar-711/Turtlebot3_DEBI_challenge.git`

2) install required packages in your environment `cd Turtlebot3_DEBI_challenge`
`pip install -r requirements.txt`

3) build the catkin workspace `catkin_make`

4) source your workspace `echo "source /Turtlebot3_DEBI_challenge/devel/setup.bash" >> ~/.bashrc`





## opening the turtlebot3 in gazebo

1) you need to export the model you are going to use first. i will export it permenantly in the .bashrc using `echo"export TURTLEBOT3_MODEL=waffle_pi"`
2) launch the turtlebot in your world but for now we will launch it in a premade world in the package using `roslaunch turtlebot3_gazebo turtlebot3_world.launch model:=waffle_pi`

