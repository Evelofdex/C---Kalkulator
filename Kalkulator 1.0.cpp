#include <iostream>
using namespace std;

int var_1, var_2;
//mode
char var_mode;
char isLagi;
bool isRunning = true;
bool isValid = true; //bila input pengguna tidak valid, maka akan mengulang input

void penjumlahan(){
   cout << "mode penjumlahan" << endl;
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
void pengurangan(){
   cout << "mode pengurangan" << endl;
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
   cout << "mode perkalian" << endl;
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
   cout << "mode pembagian" << endl;
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
         penjumlahan();
         isValid = true;
         break;
      case '2':
         pengurangan();
         isValid = true;
         break; 
      case '3':
         perkalian();
         isValid = true;
         break;
      case '4':
         pembagian();
         isValid = true;
         break;
      default:
         break;
      }
   }
}