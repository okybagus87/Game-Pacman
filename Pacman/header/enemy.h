#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <iostream>
#include <stdlib.h>

void DrawGhost(int i, int j, int p);
int kondisi(int px, int py, int gx, int gy);
int moveGhostX(int situasi,int *gx, int *gy);
int moveGhostY(int situasi,int *gx, int *gy);


#endif // ENEMY_H_INCLUDED
