#ifndef map_H
#define map_H
#include <stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
#include<iostream>
#define BARIS 21
#define KOLOM 21

void menuMap();

void mapSatu();

void mapDua();

void renderWall(int arr[BARIS][KOLOM], int i, int j, int x, int y);

void mapTiga();

#endif
