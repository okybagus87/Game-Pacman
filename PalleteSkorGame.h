#ifndef PALLETESKORPACMAN_H_INCLUDED
#define PALLETESKORPACMAN_H_INCLUDED
#include "header.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include <stdlib.h>
#include<iostream>

using namespace std;




typedef struct pacman
{
    int info;
    pacman *utara;
    pacman *timur;
    pacman *selatan;
    pacman *barat;
}Node;

typedef struct Bullet *address;
typedef struct Bullet
{
    int pos_x;
    int pos_y;
    int kondisi;  //jika 1 maka mati, jika 0 maka hidup
    Bullet *next;
    Bullet *prev;
}bullet;





int Random_Position(int angka);
/*
    Merandom posisi dari foody

*/


void TampilPallete();

void tampilaja(); //hanya tes

/*akan dipanggil setiap kali akan membuat pallete baru*/
address New__bullet(address Head,address Tail,int x,int y);
