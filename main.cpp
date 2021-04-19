#include <iostream>
#include <graphics.h>
#include "map.h"
using namespace std;

int main(){
	int pilihan;
	
	cout << "Menu Utama" << endl;
	cout << "1. Main" << endl;
	cout << "2. Skor" << endl;
	cout << "3. Cara bermain" << endl;
	cout << "4. Keluar" << endl;
	
	cout << "Masukkan angka : ";
	cin >> pilihan;
	
	if(pilihan == 1){
		menuMap();
	}

    return 0;
}
