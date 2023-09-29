#Mochamad Phillia Wibowo_1103204191_Exercise 3.4_Create Bash Script

#!/bin/bash

ARG1=$1 #mengambil argumen pertama yang diberikan pada command line 

if [ "$ARG1" == "circle" ]; then #Ini adalah awal dari sebuah blok kondisional. Ini memeriksa apakah nilai dari $ARG1 adalah "circle". Jika benar, maka perintah-perintah di dalam blok if akan dijalankan.
   echo "circling"; #Jika $ARG1 adalah "circle", maka pesan "circling" akan dicetak ke layar.
   rosrun move_bb8_pkg move_bb8_circle.py #Jika $ARG1 adalah "circle", perintah ini akan menjalankan sebuah script Python bernama move_bb8_circle.py menggunakan perintah rosrun.

elif [ "$ARG1" == 'forward_backward' ]; then
     echo "back and forth";
     rosrun move_bb8_pkg move_bb8_forward_backward.py

elif [ "$ARG1" == "square" ]; then
     echo "square dancing";
     rosrun move_bb8_pkg move_bb8_square.py

else 
echo "Please enter one of the following;
circle
forward_backward
square"

fi