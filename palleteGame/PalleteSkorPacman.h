#ifndef PALLETESKORPACMAN_H_INCLUDED
#define PALLETESKORPACMAN_H_INCLUDED
#include "header.h"
#include "LinkedList.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include <stdlib.h>
#include<iostream>

using namespace std;

typedef struct sprite
{
    void *WallMap;
    void *BackgroundMap;
    void *Food;
    void *bonus;
    void *pacman;
}sprite;
sprite *sprite_create(int gridSize);
void Makelist(List *L1 , int lv);
void map_view(sprite *s, List L);

int Random_Position(int angka);
/*
    Merandom posisi dari foody

*/
void TampilPallete();

void tampilaja(); //hanya tes

#endif // PALLETESKORPACMAN_H_INCLUDED
