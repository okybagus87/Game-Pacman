#ifndef control_H
#define control_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<graphics.h>

typedef struct pos *addr;
typedef struct pos{
	int info;
	pos atas;
	pos bawah;
	pos kanan;
	pos kiri;
}pos;

void move(); // PERGERAKAN MAPS
void limit(); // BATAS PACMAN DENGAN DINDING
void ceksprite(int sprite); // PERGERAKAN PACMAN
void movement(int l); // MENGGERAKAN PACMAN
void maping(); // POSISI AWAL PACMAN

#endif
