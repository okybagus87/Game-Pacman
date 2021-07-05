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






#endif // PALLETESKORPACMAN_H_INCLUDED
