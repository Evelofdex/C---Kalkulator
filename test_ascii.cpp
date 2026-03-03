#include <iostream>
using namespace std;

int var_panjang, var_lebar;
//mode
bool isRunning = true;
bool isValid = true;
char var_ngulang;

int main() {
    while (isRunning){
        isValid = true;
        cout << "masukan panjang: ";
        cin >> var_panjang;
        cout << "masukan lebar: ";
        cin >> var_lebar;
        //kalkulasi
        for (int i = 0; i < var_panjang; i++){
            cout << "*";
        }
        for (int i = 0; i < var_lebar; i++){
            cout << "*" << endl;
        }
        cout << endl;
        while (isValid){
            cout << "lagi? (y/n): ";
            cin >> var_ngulang;
            if (var_ngulang == 'y' || var_ngulang == 'Y'){
                isRunning = true;
                isValid = false;
            } else if (var_ngulang == 'n' || var_ngulang == 'N')
            {
                isRunning = false;
                isValid = false;
            } else {
                cout << "input tidak valid";
            }
        }
    }
}