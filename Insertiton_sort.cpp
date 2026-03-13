#include <iostream>
using namespace std;

int arr[20];
int n;

void input(){
  while(true){
    cout <<  "Masukan Jumlah Data Pada Array : ";
    cin >> n;
  
     if (n <=20){
            break;
        }
        else{
            cout << "\nArray tidak boleh lebih dari 20\n";
        }
    }
    cout << endl;
    cout << "===============================";
    cout << "======Masukan Elemen Array=====";
    cout << "===============================";

    for (int i = 0; i < n; i++ ){
        cout << "Data Ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
  }

  