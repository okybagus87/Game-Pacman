#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>
#define TRUE 1
#define FALSE 0
#define BARIS 21
#define KOLOM 21

using namespace std;
struct node{
	int x;
	int y;
	int arah;
	struct node *next;
	struct node *prev;
};

void drawEnemy(char Ghost[]);
void FindPac(int x, int y);

#endif
