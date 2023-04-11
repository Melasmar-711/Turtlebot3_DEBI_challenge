# DEBI_Robotics_challenge

<br/>
<br/>
<br/>


## install turtlebot3 for ros noetic 
`sudo apt-get install ros-noetic-turtlebot3 ros-noetic-turtlebot3-bringup ros-noetic-turtlebot3-description ros-noetic-turtlebot3-gazebo ros-noetic-turtlebot3-navigation ros-noetic-turtlebot3-simulations`
<br/>
`sudo apt install ros-noetic-ros-control* ros-noetic-control* ros-noetic-moveit*`
<br/>
if you face an error in the previous command try the following
<br/>
`sudo apt -o Dpkg::Options::="--force-overwrite" --fix-broken install`
<br/>
`sudo apt update`
<br/>
`sudo apt upgrade`
<br/>
`catkin_make`
<br/>


<br/>
<br/>
<br/>


## setting up the work space

1) clone the package using 
`git clone https://github.com/Melasmar-711/Turtlebot3_DEBI_challenge.git`

2) install required packages in your environment `cd Turtlebot3_DEBI_challenge`
`pip install -r requirements.txt`

3) build the catkin workspace `catkin_make`

4) source your workspace `echo "/home/<user-name>/Tutrtlebot3_DEBI_Robotics_challenge/devel/setup.bash" >> ~/.bashrc` replace <user-name> with your username

<br/>
<br/>
<br/>



## opening the turtlebot3 in gazebo

1) you need to export the model you are going to use first. i will export it permenantly in the .bashrc using `echo "export TURTLEBOT3_MODEL=waffle_pi">> ~/.bashrc`
2) launch the turtlebot in your world but for now we will launch it in a premade world in the package using `roslaunch turtlebot3_gazebo turtlebot3_world.launch model:=waffle_pi`

