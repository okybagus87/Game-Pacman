#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <iostream>
#include <stdlib.h>

void DrawGhost();
int kondisi(int px, int py, int gx, int gy);
void moveGhost(int situasi,int *gx, int *gy);


#endif // ENEMY_H_INCLUDED
