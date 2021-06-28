#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <iostream>
#include <stdlib.h>

void DrawGhost();
int kondisi(int px, int py, int gx, int gy);
void moveGhost(int situasi,int *gx, int *gy);


class ghost
{
private:
	int x_g;
	int y_g;
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
	//int color;
	//int trans;
	int pixforpac_up;
	int pixforpac_le;
	int pixforpac_ri;
	int pixforpac_do;
	char d;
	void inhome();
	void moveghost(int ,int );
	//void gmove_rand();
	void gchase_smthin(int ,int );
	void findupdown();
	void findleftright();

public:
	/*void addcolor(int n)
	{
		color=n;
	}*/
	void gwork(int ,int );
	void disp_still(int =0,int =0);
	int reti()
	{
		return x_g;
	}
	int retj()
	{
		return y_g;
	}
	ghost()
	{
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
};

#endif // ENEMY_H_INCLUDED
