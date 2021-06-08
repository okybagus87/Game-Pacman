#include <iostream>
#include <graphics.h>
#include "map.h"
#include "enemy.h"
#include "controller.h"
#include "palleteSkor.h"
using namespace std;

int main(){


    while(1){
	int pilihan;

	cout << "Menu Utama" << endl;
	cout << "1. Main" << endl;
	cout << "2. Skor" << endl;
	cout << "3. Cara bermain" << endl;
	cout << "4. Keluar" << endl;
	cout << "Masukkan angka : ";
	cin >> pilihan;



	switch(pilihan)
	{
        case 1:
        menuMap();
        break;

        case 2:
        break;


        case 3:
        system("cls");
        HowToPlay();
        system("Pause");
        system("cls");
        break;

        case 4:
        exit(1);
        break;


        default:
            printf("Input dengan benar ");
            break;
	}
    }
    return 0;
}
