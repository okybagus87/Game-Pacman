#include"header/header.h"
/*
int A[BRS][KLM];
int i_g,j_g,g_e,g_temp,g_k,g_temp2;


int checkPositionPacmanMaze(int i,int j,int i_g, int j_g){
    // timur laut
    if ( i>i_g && j<j_g ){
            if (A[i_g][j_g-1]= 0){j_g--;return j_g;}
            else if (A[i_g+1][j_g] = 0) {i_g++;return i_g;}
    }
    // utara
    else if (i>i_g && j ==j_g){
        if (A[i_g+1][j_g] = 0){i_g++;return i_g;}
        else if (A[i_g][j_g-1] = 0) {j_g--;return j_g;}
        else if (A[i_g][j_g+1] = 0) {j_g++;return j_g;}
    }
    //barat laut
     else if (i>i_g && j>j_g ){
        if (A[i_g+1][j_g] = 0){i_g++;return i_g;}
        else if (A[i_g][j_g+1] = 0) {j_g++;return j_g;}
        else if (A[i_g][j_g-1] = 0) {j_g--;return j_g;}
     }
     //barat
      else if (i == i_g && j > j_g){
        if (A[i_g][j_g+1] = 0){j_g++;return j_g;}
        else if (A[i_g-1][kG] = 0) {i_g--;return i_g;}
        else if (A[i_g+1][kG] = 0) {i_g++;return i_g;}
     }
     //barat daya
     else if (i < i_g && j>j_g){
        if (A[i_g][j_g+1] = 0){j_g++;return j_g;}
        else if (A[i_g-1][j_g] = 0) {i_g--;return i_g;}
        else if (A[i_g+1][j_g] = 0) {i_g++;return i_g;}
     }
     //selatan
     else if (i<j_g && j==j_g){
        if (A[i_g-1][j_g] = 0){i_g--;return i_g;}
        else if (A[i_g][j_g-1] = 0) {j_g--;return i_g;}
        else if (A[i_g][i_g+1] = 0) {j_g++;return j_g;}
     }
     //tenggara
     else if (i<i_g && j<j_g){
        if (A[i_g-1][j_g] = 0){i_g--;return i_g;}
        else if (A[i_g][j_g-1] = 0) {j_g--;return j_g;}
        else if (A[i_g][j_g+1] = 0) {i_g++;return j_g;}
     }
     //timur
     else if (i==i_g && j<j_g){
        if (A[i_g][j_g-1] = 0){j_g--;return j_g;}
        else if (A[i_g-1][j_g] = 0) {i_g--;return i_g;}
        else if (A[i_g+1][j_g] = 0) {i_g++;return i_g;}
     }
}


int YGhostDir(int i,int i_g,int j_g, int j){

    if (( j_g != j)&& (i > i_g)){
        i_g++;
    } else if (( j_g != j)&& (i < i_g)){
        i_g--;
    }else if (( j_g == j)&& (i > i_g)){
        i_g++;
    }else if (( j_g == j)&& (i < i_g)){
        i_g--;
    }
    return i_g;
}

int XGhostDir(int i,int i_g, int j, int j_g){
    if ((i != i_g)&&(j > j_g)){
        j_g++;
    } else if ((i != i_g)&&(j < j_g)){
        j_g--;
    }else if ((i == i_g) && (j > j_g)){
        j_g++;
    }else if ((i == i_g) && (j < j_g)){
        j_g--;
    }
    return j_g;
}


void Glimit(){
	bool g_up,g_down,g_right,g_left;
	if(A[i_g-1][j_g]==0 || A[i_g-1][j_g]==5 || A[i_g+-1][j_g]==6 || A[i_g-1][j_g]==10 ){
		g_up = true;
	}else{
        g_up = false;
	}

	if(A[i_g+1][j_g]==0 || A[i_g+1][j_g]==5 || A[i_g+1][j_g]==6 || A[i_g+1][j_g]==10 ){
		g_down = true;
	}else{
        g_down = false;
	}
	if(A[i_g][j_g-1]==0 || A[i_g][j_g-1]==5 || A[i_g][j_g-1]==6 || A[i_g][j_g-1]==10){
		g_left = true;
	}else{
	    g_left = false;
    }

	if(A[i_g][j_g+1]==0 || A[i_g][j_g+1]==5 || A[i_g][j_g+1]==6 || A[i_g][j_g+1]==10){
		g_right = true;
	}else{
	    g_right = false;
    }
	Gmove(g_up,g_down,g_right,g_left);
}
void Gmove(bool g_up, bool g_down, bool g_left, bool g_right){
	if(g_up){
        YGhostDir();
    }if(g_down){
        YGhostDir();
	}if(g_right){
        }XGhostDir();
    if(g_left){
        XGhostDir();
    }
}
void Gmovement(int l){
	A[i_g][j_g]=2;
	if(A[i_g][j_g]==2){
		Gceksprite(k, i, j);
		Gmove(g_up,g_down,g_left,g_right);
		A[i_g][j_g]=temp;
	}
	tempMaps(  temp, i_g, j_g);
}
void Gceksprite(int Gsprite, int baris, int kolom){
	if(Gsprite==0){
		if(temp == 0 || temp2 ==0){
			DrawGhost(baris,kolom,1);
		}
	}
}
void Gtempp(){
	temp2 = temp;
	temp = A[i_g][j_g];
	if(temp == 5){
		temp = 0;
	}else if (g_temp == 6){
	    temp = 0;
	}
}*/
/*
int number;
void ghost::drawGhost(int i, int j, int p){
    int area;
    void *buff;
    area = imagesize(img_mtrx);
    buff = malloc(area);
    readimagefile("assets//img//game//enemy1.gif",img_mtrx);
    getimage(img_mtrx,buff);*/

/*
void ghost::drawGhost2(int i, int j){
    int area;
    void *buff;
    area = imagesize(img_mtrx);
    buff = malloc(area);
    readimagefile("assets//img//game//enemy1.gif",img_mtrx);
    getimage(img_mtrx,buff);
}
void ghost::drawGhost3(int i, int j){
    int area;
    void *buff;
    area = imagesize(img_mtrx);
    buff = malloc(area);
    readimagefile("assets//img//game//enemy1.gif",img_mtrx);
    getimage(img_mtrx,buff);
}
void ghost::drawGhost4(int i, int j){
    int area;
    void *buff;
    area = imagesize(img_mtrx);
    buff = malloc(area);
    readimagefile("assets//img//game//enemy1.gif",img_mtrx);
    getimage(img_mtrx,buff);
}
}
void ghost::gmove_rand()
{ /*controls the movement of the bad guys and they can't just start moving in
    the opposite direction while they are moving(this function makes the
    ghost move in random direction)
	int num2,num3;
	num2=rand();
	num3=rand();
	if(i_g==213&&j_g==173)
	{
		if(d=='u')
		{
			if(num2==0)
				d='r';
			else
				d='l';
		}
	}
	else if(gright_top==1&&gright_bottom==1&&gleft_top==1&&gleft_bottom==1)
	{
		if(gright_mid==1&&gmid_top==1)
		{
			if(d=='r')
				d='d';
			else if(d=='u')
				d='l';
		}
		else if(gright_mid==1&&gmid_bottom==1)
		{
			if(d=='d')
				d='l';
			else if(d=='r')
				d='u';
		}
		else if(gmid_top==1&&gleft_mid==1)
		{
			if(d=='l')
				d='d';
			else if(d=='u')
				d='r';
		}
		else if(gmid_bottom==1&&gleft_mid==1)
		{
			if(d=='d')
				d='r';
			else if(d=='l')
				d='u';
		}
		else if(gmid_bottom==1&&gmid_top==1);
		else if(gleft_mid==1&&gright_mid==1);
		else if(gright_mid==1)
		{
			if(d=='u'||d=='d')
			{
				if(num2==0)
					d='l';
			}
			else if(d=='r')
			{
				if(num2==0)
					d='u';
				else
					d='d';
			}
		}
		else if(gleft_mid==1)
		{
			if(d=='u'||d=='d')
			{
				if(num2==0)
					d='r';
			}
			else if(d=='l')
			{
				if(num2==0)
					d='u';
				else
					d='d';
			}
		}
		else if(gmid_top==1)
		{
			if(i_g==213&&j_g==173);
			else if(d=='u')
			{
				if(num2==0)
					d='l';
				else
					d='r';
			}
			else if(d=='l'||d=='r')
			{
				if(num2==0)
					d='d';
			}
		}
		else if(gmid_bottom==1)
		{
			if(d=='l'||d=='r')
			{
				if(num2==0)
					d='u';
			}
			else if(d=='d')
			{
				if(num2==0)
					d='l';
				else
					d='r';
			}
		}
		else
		{
			if(d=='u'||d=='d')
			{
				if(num3==0)
					d='r';
				else if(num3==1)
					d='l';
			}
			else if(d=='r'||d=='l')
			{
				if(num3==0)
					d='u';
				else if(num3==1)
					d='d';
			}
		}
	}
}
void ghost::moveghost(int px=0,int py=0)
{
    switch(d)
	{
		case 'r': i_g++;
			break;
		case 'l': i_g--;
			break;
		case 'u': j_g--;
			break;
		case 'd': j_g++;
	}
}


void ghost::gchase_smthin(int i,int j) {
	int x=i,y=j;
	if(i_g==213&&j_g==173)
	{
		if(d=='u')
		{
			if(number==2)
				d='r';
			else
				d='l';
		}
	}
	if(i_g==213&&j_g==221)
	{
		g_no=0;
		//trans=1;
		if(number==0){
		//	color=2;
        drawGhost1(i,j);
		}else if(number==1){
        //  color=3;
        //ghost.drawGhost2(i,j)
		}else if(number==2){
		//	color=4;
		//ghost.drawGhost3(i,j)
		}else if(number==3){
		//	color=6;
		//ghost.drawGhost4(i,j)
		}
	}

	else if(gright_top==1&&gright_bottom==1&&gleft_top==1&&gleft_bottom==1)
	{
		if(gright_mid==1&&gmid_top==1)
		{
			if(d=='r')
				d='d';
			else if(d=='u')
				d='l';
		}
		else if(gright_mid==1&&gmid_bottom==1)
		{
			if(d=='d')
				d='l';
			else if(d=='r')
				d='u';
		}
		else if(gmid_top==1&&gleft_mid==1)
		{
			if(d=='l')
				d='d';
			else if(d=='u')
				d='r';
		}
		else if(gmid_bottom==1&&gleft_mid==1)
		{
			if(d=='d')
				d='r';
			else if(d=='l')
				d='u';
		}

		else if(gmid_bottom==1&&gmid_top==1);
		else if(gleft_mid==1&&gright_mid==1);
		else if(gright_mid==1)
		{
			if(d=='u'||d=='d')
			{
				if(i_g>x)
					d='l';
			}
			else if(d=='r')
			{
				if(j_g>=y)
					d='u';
				else if(j_g<y)
					d='d';
			}
		}

		else if(gleft_mid==1)
		{
			if(d=='u'||d=='d')
			{
				if(i_g<x)
					d='r';
			}
			else if(d=='l')
			{
				if(j_g>=y)
					d='u';
				else if(j_g<y)
					d='d';
			}
		}
		else if(gmid_top==1)
		{
			if(trans==1&&i_g==213&&j_g==173);
			else if(d=='u')
			{
				if(i_g<=x)
					d='r';
				else if(i_g>x)
					d='l';
			}
			else if(d=='l'||d=='r')
			{
				if(j_g<y)
					d='d';
			}
		}
		else if(gmid_bottom==1)
		{
			if(d=='l'||d=='r')
			{
				if(j_g>y)
					d='u';
			}
			else if(d=='d')
			{
				if(i_g>=x)
					d='l';
				else if(i_g<x)
					d='r';
			}
		}
		else
		{
			if(d=='u'||d=='d')
			{

				{
					if(i_g<=x)
						d='r';
					else if(i_g>x)
						d='l';
				}
			}
			else if(d=='r'||d=='l')
			{
				{
					if(j_g>=y)
						d='u';
					else if(j_g<y)
						d='d';
				}
			}
		}
	}
}

void ghost::inhome()
{ //when the ghost is in the home
	int num=rand();
	if(i_g==213)
	{
		if(num==0)
		{
			d='u';
			ioro=0;
		}
	}
	else if(i_g==167)
		d='r';
	else if(i_g==259)
		d='l';
	if(ioro!=0)
		moveghost();
}

void ghost::gwork(int i,int j)
{      //for ghosts to move differently in different situations
	if((number==1||number==2||number==3||number==0)&&ioro==0&&g_no==0) //when the ghost is alive
	{
		if(number== 2||(number==1&&abs(i-i_g)>50&&abs(j-j_g)>50)||(number==0&&abs(i-i_g)>100&&abs(j-j_g)>100))
			gchase_smthin(i,j);
		else
			gmove_rand();
	}
	/*else if(g_no==1&&trans==0)  //when ghost dies
	{
		gchase_smthin(213,221);    //coordinates of home
		moveghost();
	}
	else if(ioro==1)
		inhome();
	else if((color==9||color==15)&&ioro==0)  //while the ghost is vulnerable
	{
		if(count%2==0)
		{
			gmove_rand();
			moveghost(i,j);
		}
	}
	if(color!=9&&color!=15&&ioro==0)
		moveghost();
}
*/
