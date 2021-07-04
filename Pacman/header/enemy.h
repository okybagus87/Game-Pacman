#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#define Gimg_mtrx 40*j_g,40*i_g,40+40*j_g,40+40*i_g


int checkPosisiPac(int i,int j,int i_g, int j_g);
int xGhostDir(int i,int i_g,int j_g, int j);
int YGhostDir(int i,int i_g, int j, int j_g);


void ceksprite(int sprite, int baris, int kolom);
void Gmaping();
void Glimit();
void Gmovement(int l);
void Gmove(bool g_atas, bool g_bawah, bool g_kiri, bool g_kanan);
void Gceksprite(int sprite, int baris, int kolom);


#endif // ENEMY_H_INCLUDED
