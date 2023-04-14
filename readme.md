# DEBI_Robotics_challenge

<br/>
<br/>
<br/>


## install turtlebot3 for ros noetic 
`sudo apt-get install ros-noetic-turtlebot3 ros-noetic-turtlebot3-bringup ros-noetic-turtlebot3-description ros-noetic-turtlebot3-gazebo ros-noetic-turtlebot3-navigation ros-noetic-turtlebot3-simulations`


<br/>
<br/>
<br/>

-------------------------------------------------------------
## setting up the work space

1) clone the package using 
`git clone https://github.com/Melasmar-711/Turtlebot3_DEBI_challenge.git`

2) <br/>`sudo apt install ros-noetic-ros-control* ros-noetic-control* ros-noetic-moveit*`
   if you face an error in the previous command try the following 
   `sudo apt -o Dpkg::Options::="--force-overwrite" --fix-broken install`<br/>
   <br>`sudo apt update`<br/>
   `sudo apt upgrade`<br/>




3) <br>install required packages in your environment<br/> <br>`cd Turtlebot3_DEBI_challenge`<br/>

   <br>`pip install -r requirements.txt`<br/>

   if you face any problems with the versions delete the version number from the requirments.txt or try to install that pkg with pip3 install


4) build the catkin workspace `catkin_make`

5) source your workspace `echo "/home/<user-name>/Tutrtlebot3_DEBI_Robotics_challenge/devel/setup.bash" >> ~/.bashrc` replace <user-name> with your username

<br/>
<br/>
<br/>



## opening the turtlebot3 in gazebo

1) you need to export the model you are going to use first. i will export it permenantly in the .bashrc using `echo "export TURTLEBOT3_MODEL=waffle_pi">> ~/.bashrc`
2) launch the turtlebot in your world but for now we will launch it in a premade world in the package using `roslaunch debi test.launch`

# openning gazebo in Challenge_wolrd
1) `roslaunch debi rviz_gazebo.launch`


