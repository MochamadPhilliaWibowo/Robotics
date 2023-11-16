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

/*Membuat dan Menginisialisasi Map*/
  map<string, int> girls_dictionary;
  girls_dictionary["Dolores"] = 30;
  girls_dictionary["Maeve"] = 27;
  girls_dictionary["Theresa"] = 6;
  girls_dictionary["Clementine"] = 11;

/*Looping dan Mencetak Isi Map*/
  for (auto item : girls_dictionary)
    cout << item.first << " appears in " << item.second << " episodes\n";

  return 0;
}
