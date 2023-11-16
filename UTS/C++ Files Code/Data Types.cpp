/*
Mochamad Phillia Wibowo
1103204191
TK-44-G7
UTS ROBOTIKA 2023
*/

/*Header Files*/
#include "rosbot_control/rosbot_class.h"
#include <iostream>
#include <list>
#include <map>
#include <ros/ros.h>
#include <string>

using namespace std;

int main(int argc, char **argv) {

/*Inisialisasi ROS*/
  ros::init(argc, argv, "rosbot_node");

/*Membuat Objek RosbotClass dan Pergerakan*/
  RosbotClass rosbot;
  rosbot.move();

/*Mendapatkan Posisi dan Waktu Pertama*/
  float x_0 = rosbot.get_position(1);
  double t_0 = rosbot.get_time();

/*Mencetak Posisi dan Waktu Pertama ke Konsol*/
  ROS_INFO_STREAM(x_0 << " and " << t_0);
  rosbot.move();

/*Pergerakan Lagi dan Mendapatkan Posisi dan Waktu Kedua*/
  float x_1 = rosbot.get_position(1);
  double t_1 = rosbot.get_time();
  ROS_INFO_STREAM(x_1 << " and " << t_1);

/*Membuat dan Mengisi Map x_t_dictionary*/
  map<double, float> x_t_dictionary;
  x_t_dictionary[t_0] = x_0;
  x_t_dictionary[t_1] = x_1;

/*Looping dan Mencetak Isi Map*/
  for (auto item : x_t_dictionary) {
    ROS_INFO_STREAM("Time " << item.first << ", position " << item.second
                            << " \n");
  }

/*Mengakhiri Program*/
  return 0;
}