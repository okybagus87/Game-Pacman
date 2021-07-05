//#ifndef ENEMY_H_INCLUDED
//#define ENEMY_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include<graphics.h>
#include<dos.h>
//#include <direct.h>
#include<stdio.h>
#include<conio.h>
#define Gimg_mtrx 40*j_g,40*i_g,40+40*j_g,40+40*i_g

using namespace std;
/*
void DrawGhost(int i, int j, int p);
int kondisi(int px, int py, int gx, int gy);
int moveGhostX(int situasi,int *gx, int *gy);
int moveGhostY(int situasi,int *gx, int *gy);*/


/*
class ghost
{
public:
	int i_g;
	int j_g;
	int gleft_top;
	int gleft_mid;
	int gleft_bottom;
	int gmid_bottom;
	int gright_bottom;
	int gright_mid;
	int gright_top;
	int gmid_top;
	int g_no;
	int ioro;
	char d;
	//int color;
	int trans;
	int pixforpac_up;
	int pixforpac_le;
	int pixforpac_ri;
	int pixforpac_do;
	int inGame();
    void drawGhost(int , int );
	void inhome();
	void moveghost(int ,int );
	void gmove_rand();
	void gchase_smthin(int ,int );
	void findupdown();
	void findleftright();
	void convtrans(int true)
	{
		trans=true;
	}
public :
	void gwork(int ,int );
	void disp_still(int =0,int =0);
	int reti()
	{
		return i_g;
	}
	int retj()
	{
		return j_g;
	}
	ghost()
	{
		g_no=0;
		d='l';
		ioro=1;
		gleft_top=0;
		gleft_mid=0;
		gleft_bottom=0;
		gmid_bottom=0;
		gright_bottom=0;
		gright_mid=0;
		gright_top=0;
		gmid_top=0;
	}
};*/

int checkPosisiPac(int i,int j,int i_g, int j_g);
int xGhostDir(int i,int i_g,int j_g, int j);
int YGhostDir(int i,int i_g, int j, int j_g);


void ceksprite(int sprite, int baris, int kolom);
void Gmaping();
void Glimit();
void Gmovement(int l);
void Gmove(bool g_atas, bool g_bawah, bool g_kiri, bool g_kanan);
void Gceksprite(int sprite, int baris, int kolom);
//#endif // ENEMY_H_INCLUDED


