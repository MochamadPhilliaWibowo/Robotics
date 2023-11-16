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

/*Mendeklarasikan dan Menginisialisasi List*/
  list<int> numbers_list({1, 10, 100, 1000});
  list<string> vocals_list({"a", "e", "i", "o", "u"});

/*Looping dan Mencetak List Angka:*/
  for (int val : numbers_list)
    cout << val << "  ";

/*Looping dan Mencetak List Huruf Vokal*/
  for (string val : vocals_list) 
    cout << val << "  ";      

  return 0;
}