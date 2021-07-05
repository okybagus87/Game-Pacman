#ifndef FOOD_H
#define FOOD_H

#include <windows.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<string.h>
int RandomPos();
/*
 Merandom satu nilai integer
 Dipergunakan untuk mengacak secara random untuk posisi burger atau pizza
 Burger berguna untuk menambah ekstra dari skor pemain
 Mengembalikan nilai berupa integer yang nanti ditampung oleh integer lain di main

    Proses  = Mengacak angka secara random , guna mengatur posisi burger atau pallete tambahan lainnya
    F.S.    = Mengembalikan nilai yang telah dirandom
*/


void TampilFood(int x, int y);
/*
    Menampilkan Food pallete,
    apabila disentuh maka akan menambah skor
*/

void TampilBurger(int x , int y); //==> menampilkan gambar burger
/*
    Menampilkan gambar dari Burger
    Apabila pacman memakan ini, maka skor akan menjadi ekstra atau bertambah 10
*/

void HowToPlay();
/*
    Menampilkan cara bermain dalam game
*/

int AturSkor(int eat)
/*
    I.S.    = int eat dikeatahui, dengan variabel lokal skor
    Proses  = Melakukan pengaturan skor tergantung kondisi eat
              apabila memakan pallete maka akan bertambah 1
              Namun apabila memakan burger skor akan bertambah 10
    F.S.    = Mengembalikan nilai skor
*/


#endif // FOOD_H
