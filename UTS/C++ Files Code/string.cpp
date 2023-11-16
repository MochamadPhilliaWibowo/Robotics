/*
Mochamad Phillia Wibowo
1103204191
TK-44-G7
UTS ROBOTIKA 2023
*/

/*Header files*/
#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

int main() {

/*Deklarasi dan Inisialisasi String dan Array*/
  char d[6] = "hello";

  string e = "developer";

/*Mencetak Karakter Pertama dari Array dan String*/
  cout << d[0] << endl;
  cout << e[4] << endl;

  string f = ", ";
  string g = "!";

/*Menggabungkan String*/
  cout << d + f + e + g << endl;

  return 0;
}
