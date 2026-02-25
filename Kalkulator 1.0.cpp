#include <iostream>
using namespace std;

int var_1, var_2;
float var_hasil;
//mode
char var_mode;
char isLagi;
bool isRunning = true;
bool isValid = true; //bila input pengguna tidak valid, maka akan mengulang input

void penjumlahan(){
   cout << "==================" << endl << "mode penjumlahan" << endl << "==================" << endl;
   //mulai operasi
   cout << "masukkan angka pertama: ";
   cin >> var_1;
   cout << "masukkan angka kedua: ";
   cin >> var_2;
   //kalkulasi
   var_hasil = var_1 + var_2;
   cout << "hasil: " << var_hasil << endl;
   while (isValid){
      cout << "Lagi? (y/n): ";
      cin >> isLagi;
      if (isLagi == 'y' || isLagi == 'Y'){
         isRunning = true;
         isValid = false;
         cout << endl;
      } else if (isLagi == 'n' || isLagi == 'N'){
         isRunning = false;
         isValid = false;
      } else {
         cout << "input gk valid" << endl;
         isRunning = true;
         isValid = true;
      }
   }
}
void pengurangan(){
   cout << "==================" << endl << "mode pengurangan" << endl << "==================" << endl;
   //mulai operasi
   cout << "masukkan angka pertama: ";
   cin >> var_1;
   cout << "masukkan angka kedua: ";
   cin >> var_2;
   //kalkulasi
   var_hasil = var_1 - var_2;
   cout << "hasil: " << var_hasil << endl;
   while (isValid){
      cout << "Lagi? (y/n): ";
      cin >> isLagi;
      if (isLagi == 'y' || isLagi == 'Y'){
         isRunning = true;
         isValid = false;
      } else if (isLagi == 'n' || isLagi == 'N'){
         isRunning = false;
         isValid = false;
      } else {
         cout << "input gk valid" << endl;
         isRunning = true;
         isValid = true;
      }
   }
}
void perkalian(){
   cout << "================" << endl << "mode perkalian" << endl << "================" << endl;
   //mulai operasi
   cout << "masukkan angka pertama: ";
   cin >> var_1;
   cout << "masukkan angka kedua: ";
   cin >> var_2;
   //kalkulasi
   var_hasil = var_1 * var_2;
   cout << "hasil: " << var_hasil << endl;
   while (isValid){
      cout << "Lagi? (y/n): ";
      cin >> isLagi;
      if (isLagi == 'y' || isLagi == 'Y'){
         isRunning = true;
         isValid = false;
      } else if (isLagi == 'n' || isLagi == 'N'){
         isRunning = false;
         isValid = false;
      } else {
         cout << "input gk valid" << endl;
         isRunning = true;
         isValid = true;
      }
   }
}
void pembagian(){
   cout << "================" << endl << "mode pembagian" << endl << "================" << endl;
   //mulai operasi
   cout << "masukkan angka pertama: ";
   cin >> var_1;
   cout << "masukkan angka kedua: ";
   cin >> var_2;
   //kalkulasi
   var_hasil = var_1 / var_2;
   cout << "hasil: " << var_hasil << endl;
   while (isValid){
      cout << "Lagi? (y/n): ";
      cin >> isLagi;
      if (isLagi == 'y' || isLagi == 'Y'){
         isRunning = true;
         isValid = false;
      } else if (isLagi == 'n' || isLagi == 'N'){
         isRunning = false;
         isValid = false;
      } else {
         cout << "input gk valid" << endl;
         isRunning = true;
         isValid = true;
      }
   }
}
int main() {
   while (isRunning){
      isValid = true;
      while (isValid)
      {
         cout << "pilih mode (1 = penjumlahan, 2 = pengurangan, 3 = perkalian, 4 = pembagian): ";
         cin >> var_mode;  
         if (var_mode == '1' || var_mode == '2' || var_mode == '3' || var_mode == '4'){
            isValid = false;
         } else {
            cout << "input tidak valid" << endl;
         } 
      }
      switch (var_mode)
      {
      case '1':
         isValid = true;
         penjumlahan();
         break;
      case '2':
         isValid = true;
         pengurangan();
         break; 
      case '3':
         isValid = true;
         perkalian();
         break;
      case '4':
         isValid = true;
         pembagian();
         break;
      default:
         break;
      }
   }
   cout << "=======" << endl << "Beres" << endl << "=======" << endl;
}