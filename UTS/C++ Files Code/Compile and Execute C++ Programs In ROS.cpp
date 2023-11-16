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

/*Untuk mendapatkan posisi dari robot menggunakan metode "get_position()" dari objek "rosbot"*/
  float coordinate = rosbot.get_position(1);

/*Mencetak informasi ke konsol ROS*/
  ROS_INFO_STREAM(coordinate);

  return 0;
}