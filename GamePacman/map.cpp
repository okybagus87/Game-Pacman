#include"palleteSkor.h"
#include "map.h"
#include "enemy.h"
#include "controller.h"

using namespace std;
void menuMap(){
	int pilihan;

	cout << "Pilih map yang diinginkan" << endl;
	cout << "1. Map 1" << endl;
	cout << "2. Map 2" << endl;
	cout << "3. Map 3" << endl;
	cout << "Masukkan angka : ";
	cin >> pilihan;

	if(pilihan == 1){
		mapSatu();
	 }
	 else if(pilihan == 2){
        mapDua();
	 }
	 else if(pilihan == 3){
        mapTiga();
	 }
}

/*void gotoxy(int x, int y){
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);    //====> memindahkan kursor ke posisi tertentu
}*/

void mapSatu(){
	int gd = DETECT,gm;
  //  initgraph(&gd,&gm,"D:\\1111\\tesPallete1\\pallete");
    initwindow(1200,800,"MAZE");

                    //    0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,10 ,11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19
    int arr[BARIS][KOLOM]=  {
        { 5 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 }, // 0
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 1
        { 3 , 0 , 0 , 5 , 1 , 1 , 7 , 10 , 0 , 0 , 3 , 0 , 0 , 0 , 5 , 1 , 1 , 7 , 0 , 0 , 3 }, // 2
        { 3 , 0 , 0 , 3 , 5 , 1 , 2 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 9 , 1 , 7 , 3 , 0 , 0 , 3 }, // 3
        { 3 , 0 , 0 , 3 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 3 , 0 , 0 , 3 }, // 4
        { 3 , 0 , 0 , 3 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 6 , 0 , 0 , 0 , 0 , 3 , 3 , 0 , 0 , 3 }, // 5
        { 3 , 0 , 0 , 9 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 9 , 2 , 0 , 0 , 3 }, // 6
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 7
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 5 , 1 , 1 , 1 , 1 , 7 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 8
        { 3 , 0 , 5 , 1 , 1 , 1 , 7 , 0 , 3 , 1 , 1 , 1 , 1 , 3 , 0 , 5 , 1 , 1 , 7 , 0 , 3 }, // 9
        { 3 , 0 , 9 , 1 , 1 , 1 , 2 , 0 , 3 , 1 , 1 , 1 , 1 , 3 , 0 , 9 , 1 , 1 , 2 , 0 , 3 }, // 10
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 9 , 1 , 1 , 1 , 1 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 11
        { 3 , 0 , 4 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 8 , 0 , 3 }, // 12
        { 3 , 0 , 0 , 5 , 7 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 5 , 7 , 0 , 10 , 3 }, // 13
        { 3 , 0 , 0 , 3 , 3 , 0 , 8 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 3 , 0 , 0 , 3 }, // 14
        { 3 , 0 , 0 , 3 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 3 , 0 , 0 , 3 }, // 15
        { 3 , 0 , 0 , 3 , 9 , 1 , 7 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 5 , 1 , 2 , 3 , 0 , 0 , 3 }, // 16
        { 3 , 0 , 0 , 9 , 1 , 1 , 2 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 9 , 1 , 1 , 2 , 0 , 0 , 3 }, // 17
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 18
        { 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 }, // 19

    };
    int x,y;
    x = 0; y = 0;
    for (int i = 0; i < 21; i++){
        for (int j = 0; j < 21; j++){
            renderWall(arr, i, j, x, y);
            renderPellet(arr, i, j, x, y);
            x = x + 40; // geser ke kanan
        }
        y = y + 40;
        x = 0;
    }
    for(;;){
    Enemy1_lvl1();
    controller();
    }
    getch();

}

void mapDua(){

    int gd = DETECT,gm;
  //  initgraph(&gd,&gm,"D:\\1111\\tesPallete1\\pallete");
    initwindow(1200,800,"MAZE");

                    //    0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,10 ,11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19
    int arr[BARIS][KOLOM]=  {
        { 5 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 }, // 0
        { 3 , 0 , 0 , 10 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 1
        { 3 , 0 , 5 , 1 , 1 , 7 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 5 , 1 , 1 , 7 , 0 , 3 }, // 2
        { 3 , 0 , 3 , 5 , 1 , 2 , 0 , 0 , 6 , 0 , 3 , 0 , 0 , 6 , 0 , 9 , 1 , 7 , 3 , 0 , 3 }, // 3
        { 3 , 0 , 3 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 3 , 10 , 3 }, // 4
        { 3 , 0 , 9 , 2 , 0 , 5 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 0 , 9 , 2 , 0 , 3 }, // 5
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 8 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 6
        { 3 , 0 , 5 , 7 , 0 , 0 , 0 , 5 , 1 , 1 , 1 , 1 , 1 , 7 , 0 , 0 , 0 , 5 , 7 , 0 , 3 }, // 7
        { 3 , 0 , 3 , 3 , 0 , 0 , 0 , 9 , 1 , 1 , 1 , 1 , 1 , 2 , 0 , 10 , 0 , 3 , 3 , 0 , 3 }, // 8
        { 3 , 0 , 3 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 3 , 0 , 3 }, // 9
        { 3 , 0 , 3 , 3 , 0 , 4 , 0 , 0 , 8 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 3 , 0 , 3 }, // 10
        { 3 , 0 , 3 , 3 , 0 , 0 , 0 , 5 , 1 , 1 , 1 , 1 , 1 , 7 , 0 , 0 , 0 , 3 , 3 , 0 , 3 }, // 11
        { 3 , 0 , 9 , 2 , 0 , 0 , 0 , 9 , 1 , 1 , 1 , 1 , 1 , 2 , 0 , 8 , 0 , 9 , 2 , 0 , 3 }, // 12
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 }, // 13
        { 3 , 0 , 5 , 7 , 0 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 0 , 5 , 7 , 0 , 3 }, // 14
        { 3 , 0 , 3 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 3 , 0 , 3 }, // 15
        { 3 , 0 , 3 , 9 , 1 , 7 , 0 , 0 , 11 , 0 , 3 , 0 , 0 , 0 , 0 , 5 , 1 , 2 , 3 , 0 , 3 }, // 16
        { 3 , 0 , 9 , 1 , 1 , 2 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 9 , 1 , 1 , 2 , 0 , 3 }, // 17
        { 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 4 , 0 , 0 , 0 , 0 , 3 }, // 18
        { 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 }, // 19

    };
    int x,y;
    x = 0; y = 0;
    for (int i = 0; i < 21; i++){
        for (int j = 0; j < 21; j++){
            renderWall(arr, i, j, x, y);
            renderPellet(arr, i, j, x, y);
            x = x + 40; // geser ke kanan
        }
        y = y + 40;
        x = 0;
    }

    controller();
    getch();
}

void mapTiga(){
    int gd = DETECT,gm;
  //  initgraph(&gd,&gm,"D:\\1111\\tesPallete1\\pallete");
    initwindow(1200,800,"MAZE");

                    //    0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,10 ,11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19
    int arr[BARIS][KOLOM]=  {
        { 5 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 }, // 0
        { 3 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 10 , 3 }, // 1
        { 3 , 0 , 0 , 0 , 3 , 0 , 5 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 0 , 3 , 0 , 0 , 0 , 3 }, // 2
        { 3 , 0 , 0 , 0 , 3 , 0 , 9 , 1 , 1 , 7 , 11 , 5 , 1 , 1 , 2 , 0 , 3 , 0 , 0 , 0 , 3 }, // 3
        { 3 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 3 , 11 , 3 , 0 , 8 , 0 , 0 , 3 , 0 , 0 , 0 , 3 }, // 4
        { 9 , 7 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 9 , 1 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 5 , 2 }, // 5
        { 11 , 3 , 0 , 5 , 1 , 7 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 5 , 1 , 7 , 0 , 3 , 11 }, // 6
        { 11 , 3 , 0 , 9 , 1 , 2 , 0 , 5 , 1 , 0 , 0 , 0 , 1 , 7 , 0 , 9 , 1 , 2 , 0 , 3 , 11 }, // 7
        { 11 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 11 }, // 8
        { 11 , 3 , 0 , 10 , 0 , 0 , 0 , 3 , 0 , 0 , 6 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 11 }, // 9
        { 11 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 11 }, // 10
        { 11 , 3 , 0 , 8 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 3 , 11 }, // 11
        { 11 , 3 , 0 , 5 , 1 , 7 , 0 , 9 , 1 , 1 , 1 , 1 , 1 , 2 , 0 , 5 , 1 , 7 , 0 , 3 , 11 }, // 12
        { 11 , 3 , 0 , 9 , 1 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 9 , 1 , 2 , 0 , 3 , 11 }, // 13
        { 5 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 5 , 1 , 7 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 9 , 7 }, // 14
        { 3 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 3 , 11 , 3 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 3 }, // 15
        { 3 , 0 , 0 , 0 , 3 , 0 , 5 , 1 , 1 , 2 , 11 , 9 , 1 , 1 , 7 , 10 , 3 , 0 , 0 , 0 , 3 }, // 16
        { 3 , 0 , 0 , 0 , 3 , 0 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 0 , 3 , 0 , 0 , 0 , 3 }, // 17
        { 3 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 , 0 , 0 , 3 }, // 18
        { 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 }, // 19

    };
    int x,y;
    x = 0; y = 0;
    for (int i = 0; i < 21; i++){
        for (int j = 0; j < 21; j++){
            renderWall(arr, i, j, x, y);
            renderPellet(arr, i, j, x, y);
            x = x + 40; // geser ke kanan
        }
        y = y + 40;
        x = 0;
    }

    controller();
    getch();
}

void renderWall(int arr[BARIS][KOLOM], int i, int j, int x, int y){
    if ( arr[i][j] == 1){
        readimagefile("foto/horizontal.gif",x,y,x+50,y+50);
    }
    else if (arr[i][j] == 2){
        readimagefile("foto/botright.gif",x,y,x+50,y+50);
    }
    else if (arr[i][j] == 3){
        readimagefile("foto/vertical.gif",x,y,x+50,y+50);
    }
    else if (arr[i][j] == 5){
        readimagefile("foto/upleft.gif",x,y,x+50,y+50);
    }
    else if (arr[i][j] == 7){
        readimagefile("foto/upright.gif",x,y,x+50,y+50);
    }
    else if (arr[i][j] == 9){
        readimagefile("foto/botleft.gif",x,y,x+50,y+50);
    }
}


