# Install script for directory: /home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/src/turtlebot3_manipulation/turtlebot3_manipulation_gui

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/build/turtlebot3_manipulation/turtlebot3_manipulation_gui/catkin_generated/installspace/turtlebot3_manipulation_gui.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_manipulation_gui/cmake" TYPE FILE FILES
    "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/build/turtlebot3_manipulation/turtlebot3_manipulation_gui/catkin_generated/installspace/turtlebot3_manipulation_guiConfig.cmake"
    "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/build/turtlebot3_manipulation/turtlebot3_manipulation_gui/catkin_generated/installspace/turtlebot3_manipulation_guiConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_manipulation_gui" TYPE FILE FILES "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/src/turtlebot3_manipulation/turtlebot3_manipulation_gui/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui" TYPE EXECUTABLE FILES "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/devel/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui"
         OLD_RPATH "/opt/ros/noetic/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/turtlebot3_manipulation_gui/turtlebot3_manipulation_gui")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/turtlebot3_manipulation_gui" TYPE DIRECTORY FILES "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/src/turtlebot3_manipulation/turtlebot3_manipulation_gui/include/turtlebot3_manipulation_gui/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_manipulation_gui" TYPE DIRECTORY FILES
    "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/src/turtlebot3_manipulation/turtlebot3_manipulation_gui/launch"
    "/home/asmar/Tutrtlebot3_DEBI_Robotics_challenge/src/turtlebot3_manipulation/turtlebot3_manipulation_gui/ui"
    )
endif()

