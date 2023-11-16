/*
Mochamad Phillia Wibowo
1103204191
TK-44-G7
UTS ROBOTIKA 2023
*/

/*Mengimpor header file yang berisi definisi kelas dan fungsi dasar untuk berinteraksi dengan ROS*/
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

using namespace std;

/*Untuk menginisialisasi ROS*/
int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

/*Membuat objek dari kelas "RosbotClass" dan memanggil metode "move()" pada objek tersebut*/
  RosbotClass rosbot;
  rosbot.move();

/*Untuk mendapatkan posisi robot pada sumbu x (1) dan sumbu y (2) menggunakan metode "get_position()" dari objek "rosbot"*/
  float x_1 = rosbot.get_position(1);
  float y_1 = rosbot.get_position(2);

/*Mencetak informasi ke konsol ROS*/
  ROS_INFO_STREAM(x_1 << " and " << y_1);

  rosbot.move();

/*Untuk mendapatkan kembali posisi robot pada sumbu x (1) dan sumbu y (2) menggunakan metode "get_position()" dari objek "rosbot"*/
  float x_2 = rosbot.get_position(1);
  float y_2 = rosbot.get_position(2);

  ROS_INFO_STREAM(x_2 << " and " << y_2);

  return 0;
}