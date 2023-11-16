/*
Mochamad Phillia Wibowo
1103204191
TK-44-G7
UTS ROBOTIKA 2023
*/


// Arithmetic Operators
#include <iostream>

using namespace std;

int main() {
  int a = 4;
  int b = 3;

  cout << a + b << endl;
  cout << a - b << endl;
  cout << a * b << endl;
  cout << a / b << endl;
  cout << a % b << endl;

  return 0;
}


// Assignment Operators
#include <iostream>

using namespace std;

int main() {
  int x = 5;

  cout << (x += 2) << endl;
  cout << (x -= 2) << endl;
  cout << (x *= 2) << endl;
  cout << (x /= 2) << endl;
  cout << (x %= 2) << endl;

  return 0;
}


// Comparison Operators
#include <iostream>

using namespace std;

int main() {
  int y = 9;
  int z = 8;

  cout << (y == z) << endl;
  cout << (y > z) << endl;
  cout << (y < z) << endl;
  cout << (y >= z) << endl;
  cout << (y <= z) << endl;

  return 0;
}


// Logical Operators
#include <iostream>

int main() {
  // Mendeklarasikan dua variabel integer
  int nilai1, nilai2;

  // Meminta pengguna untuk memasukkan dua nilai
  std::cout << "Masukkan nilai pertama: ";
  std::cin >> nilai1;

  std::cout << "Masukkan nilai kedua: ";
  std::cin >> nilai2;

  // Menggunakan operator logika untuk mengevaluasi kondisi
  if (nilai1 > 0 && nilai2 > 0) {
    std::cout << "Keduanya merupakan nilai positif." << std::endl;
  } else if (nilai1 > 0 || nilai2 > 0) {
    std::cout << "Salah satunya merupakan nilai positif." << std::endl;
  } else {
    std::cout << "Keduanya bukan nilai positif." << std::endl;
  }

  return 0;
}