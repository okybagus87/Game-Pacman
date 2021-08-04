#include"header/header.h"

int A[BRS][KLM];
int i,j,e,temp,k,temp2, skor = 0;
int i_g,j_g,g_e,g_temp,g_k,g_temp2;
void DrawGhost(int i_g, int j_g, int p_g);
void *buff;
void *map;
unsigned long size;

// MENAMPILKAN MAP / MAZE
void mapMaze(int l){
    int a,b;
    for(a=0;a<BRS;a++){
        for(b=0;b<KLM;b++){
            A[a][b]=maps_level(l, a, b);
        }
    }
}

// MENAMPILKAN TEMPORARY MAP / MAZE
void tempMaps(int temp, int baris, int kolom){
	if(temp==0){
		readimagefile("assets//img//game//maps//black.jpg", 40*kolom-1,40*baris,40+40*kolom-1,40+40*baris);
	}
	if(temp==3){
		readimagefile("assets//img//game//maps//black.jpg", 40*kolom-1,40*baris,40+40*kolom-1,40+40*baris);
	}
	if(temp==4){
		readimagefile("assets//img//game//maps//black.jpg", 40*kolom-1,40*baris,40+40*kolom-1,40+40*baris);
	}
}

// MENGATUR BATASAN PACMAN DENGAN DINDING
void limit(){
	bool kiri, kanan, atas, bawah;
	if(A[i-1][j]==0 || A[i-1][j]==5 || A[i-1][j]==6 || A[i-1][j]==10 ){
		atas = true;
	}else{
        atas = false;
	}

	if(A[i+1][j]==0 || A[i+1][j]==5 || A[i+1][j]==6 || A[i+1][j]==10 ){
		bawah = true;
	}else{
        bawah = false;
	}
	if(A[i][j-1]==0 || A[i][j-1]==5 || A[i][j-1]==6 || A[i][j-1]==10){
		kiri = true;
	}else{
	    kiri = false;
    }

	if(A[i][j+1]==0 || A[i][j+1]==5 || A[i][j+1]==6 || A[i][j+1]==10){
		kanan = true;
	}else{
	    kanan = false;
    }
	move(atas,bawah,kiri,kanan);
}

// MENGGERAKAN PACMAN
void move(bool up, bool down, bool left, bool right){
	switch(getch())
	{
		case KEY_UP	:
			if(up){
                k=0;
				i--;
			}
			break;
		case KEY_RIGHT:
			if(right){
                k = 1;
				j++;
			}
			break;
		case KEY_DOWN	:
			if(down){
                k=3;
				i++;
			}
			break;
		case KEY_LEFT	:
			if(left){
                k = 2;
				j--;
			}
			break;
	}
	//printf("Skor : %d\n", skor);
}

//void TampilSkor()

// MEMANGGIL GAMBAR PACMAN
void ceksprite(int sprite, int baris, int kolom){
	if(sprite==0){
		if(temp == 0 || temp2 ==0){
			atas(baris,kolom,3);
		}
	}
	if(sprite==1){
		if(temp == 0 || temp2 ==0){
			samping(baris,kolom,1);
        }
	}
	if(sprite==2){
		if(temp == 0 || temp2 ==0){
            samping(baris,kolom,2);
		}
	}
	if(sprite==3){
            bawah(baris, kolom,4);
	}
}

//MENAMPILKAN SKOR PEMAIN PADA PERMAINAN
void SkorPemain(int skor)
{
    char msg[13];
	settextstyle(2, 0, 8);
	sprintf(msg, "score \n %d", skor);
	outtextxy(900,280,msg);


}


// MENUKAR / MENGUBAH GAMBAR KETIKA TELAH MEMAKAN PELET ATAUPUN SUPLEMEN
void tempp(){
	temp = A[i][j];
	if(temp == 5){
		skor = skor +1; //apabila menyentuh pelet biasa
       		SkorPemain(skor); //Memanggil modul SkorPemain agar menampilkan skor pada program
		temp = 0;
	}else if (temp == 6){
		skor = skor + 10; //apabila menyentuh pelete bonus
	   	 SkorPemain(skor);
	    temp = 0;
	}
}

// PERGERAKAN PACMAN
void movement(int l){
	A[i][j]=2;
	if(A[i][j]==2){
		ceksprite(k, i, j);
		e=getch();
		A[i][j]=temp;
	}
	tempMaps(temp, i, j);
}

// POSISI AWAL PACMAN
void maping(){
	for(i=0;i<BRS;i++){
		for(j=0;j<KLM;j++){
			maps(A[i][j],i,j);
		}
	}
	i=11;
	j=16;
}

// FITUR PAUSE PADA PACMAN
void pause(){
	char msg[13];
	putimage(0,0,map, COPY_PUT);
	settextstyle(2, 0, 8);
	while(e!='c'){
		sprintf(msg, "pause");
		outtextxy(600,330,msg);
		sprintf(msg, "press 'c' to continue");
		outtextxy(500,530,msg);
		e=getch();
	}
	putimage(0,0,map, COPY_PUT);
	for(int a=0;a<BRS;a++){
		for(int b=0;b<KLM;b++){
			pelet(A[a][b],a,b);
		}
	}
}

// TAMPILAN SEBELUM MASUK KE MAPNYA
void sc_lv(int l){
	if(l==1){
		readimagefile("assets//img//game//start1.jpg",fullscreen);
		delay(1300);
	}else if (l==2){
		readimagefile("assets//img//game//start2.jpg",fullscreen);
		delay(1300);
	}else if (l==3){
	    readimagefile("assets//img//game//start3.jpg",fullscreen);
	    delay(1300);
	}
}


//FUNGSI ENEMY


int YGhostDir(int i,int i_g,int j_g, int j){

    if (( j_g != j)&& (i > i_g)){
      return i_g++;
    } else if (( j_g != j)&& (i < i_g)){
      return i_g--;
    }else if (( j_g == j)&& (i > i_g)){
      return i_g++;
    }else if (( j_g == j)&& (i < i_g)){
      return i_g--;
    }
}

int XGhostDir(int i,int i_g, int j, int j_g){
    if ((i != i_g)&&(j > j_g)){
       return j_g++;
    } else if ((i != i_g)&&(j < j_g)){
       return j_g--;
    }else if ((i == i_g) && (j > j_g)){
       return j_g++;
    }else if ((i == i_g) && (j < j_g)){
       return j_g--;
    }
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
        YGhostDir(i,i_g, j,j_g);
    }if(g_down){
        YGhostDir(i,i_g, j,j_g);
    }if(g_right){
        XGhostDir(i,i_g,j,j_g);
    }if(g_left){
        XGhostDir(i,i_g,j,j_g);
    }
}
void Gmovement(int l){
    bool g_up,g_down,g_right,g_left;
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
}
void Gmaping(){
	for(i_g=0;i_g<BRS;i_g++){
		for(j_g=0;j_g<KLM;j_g++){
			maps(A[i_g][j_g],i_g,j_g);
		}
	}
	i_g=8;
	j_g=8;
}

/* typedef struct data{	//Komposit berfungsi sebagai variabel penampung dari File rekap.DAT
	char name[49];
	int hscore;
}dataScore;

typedef data infotype;
typedef struct TreeNode *Addr;
typedef struct TreeNode{
	infotype info;
	Addr rs;
	Addr ls;
}bTreeNode;

int AddingScore(int variety){
	int skor;
	if(variety==0){
		skor = 1;
	}else if(variety==1){
		skor = 2;
	}else if(variety==2){
		skor = 3;
	}
	return skor;
}

Addr NewNode(infotype A){
	Addr P;
	P=(Addr)malloc(sizeof(TreeNode));
	info(P)=A.hscore;
	strcpy(nameinf(P),A.name);
	rs(P)=NULL;
	ls(P)=NULL;
	return P;
}

int isTreeEmpty(Addr tr){
	return tr == NULL;
}

void InOrder(Addr tr){ //update
	char highscoreStr[10];
	if(tr != NULL){
		InOrder(ls(tr));
		//printf(" %s - %d \n",nameinf(tr),info(tr)); //belum bisa menampilkan ke windows
		strcpy(printRekap[index++].name, tr->info.name);
		printRekap[index2++].hscore = tr->info.hscore;
		InOrder(rs(tr));
	}

}

void InsertNode(Addr *tr, infotype A){ //menambahkan data highscore ke tree update
	Addr TNode = NULL,temp;
	TNode = NewNode(A);

	if(isTreeEmpty(*tr))
	{
		*tr = TNode;
	}
	else
	{
		temp = *tr;
		bool selesai = false;

		while(!selesai)
		{
			if(A.hscore > info(temp))
			{
				if(isTreeEmpty(ls(temp)))
				{
					ls(temp) = TNode;
					selesai = true;
				}
				else
				{
					temp = ls(temp);
				}
			}
			else if (A.hscore < info(temp))
			{
				if(isTreeEmpty(rs(temp)))
				{
					rs(temp) = TNode;
					selesai = true;
				}
				else
				{
					temp = rs(temp);
				}
			}
			else if (A.hscore = info(temp))
			{
				if(strcmp(A.name,nameinf(temp)) < 0)
				{
					if(isTreeEmpty(rs(temp)))
					{
						rs(temp) = TNode;
						selesai = true;
					}
					else
					{
						temp = rs(temp);
					}
				}
				else
				{
					if(isTreeEmpty(ls(temp)))
					{
						ls(temp) = TNode;
						selesai = true;
					}
					else
					{
						temp = ls(temp);
					}
				}
			}
		}
	}
}*/
