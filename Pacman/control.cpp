#include"header/header.h"

int A[BRS][KLM];
int i,j,e,temp,k,temp2;
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
}

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

// MENUKAR / MENGUBAH GAMBAR KETIKA TELAH MEMAKAN PELET ATAUPUN SUPLEMEN
void tempp(){
	temp2 = temp;
	temp = A[i][j];
	if(temp == 5){
		temp = 0;
	}else if (temp == 6){
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
