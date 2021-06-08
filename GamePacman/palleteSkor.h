#ifndef FOOD_H
#define FOOD_H

#include <windows.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#define BARIS 21
#define KOLOM 21
int RandomPos();
/*
 Merandom satu nilai integer
 Dipergunakan untuk mengacak secara random untuk posisi burger atau pizza
 Burger berguna untuk menambah ekstra dari skor pemain
 Pizza dipergunakan untuk menambah nyawa dari pemain
 Mengembalikan nilai berupa integer yang nanti ditampung oleh integer lain di main
*/


void TampilFood(int x, int y);
/*
    Menampilkan Food pallete,
    apabila disentuh maka akan menambah skor
*/

void TampilBurger(int x , int y); //==> menampilkan gambar burger
/*
    Menampilkan gambar dari Burger
    Apabila pacman memakan ini, maka skor akan menjadi ektra, atau 2 kali lipat
*/

void HowToPlay();
/*
    Menampilkan cara bermain dalam game
*/

int AturSkor(int eat);
/*
    I.S.    = int eat dikeatahui, dengan variabel lokal skor
    Proses  = Melakukan pengaturan skor tergantung kondisi eat
              apabila memakan pallete maka akan bertambah 1
              Namun apabila memakan burger skor akan bertambah 10
    F.S.    = Mengembalikan nilai skor
*/

void renderPellet(int arr[BARIS][KOLOM], int i, int j, int x, int y);
/*
    I.S.    = BARIS dan KOLOM diketahui
    Proses  = Mengatur posisi pallete
    F.S.    = Penempatan pallete dengan posisinya
*/


#endif // FOOD_H
