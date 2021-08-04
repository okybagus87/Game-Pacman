#include"header/header.h"

//Membuat Posisi Random Pada Pelet
int RandomPos()
{
    int i, s;
    srand(time(NULL));
    for(i = 0; i < 450; i++) {

        s = (rand() % 4) * 2 + 4 ; //akan menghasilkan 4,6,8,10
        //printf(" %d ",s);
    }
      return s;
}


// MEMBUAT 3 MAPS
int maps_level(int l, int a, int b){
	if(l==1){
        // MAPS KE-1
		int B[BRS][KLM] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 6, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 8, 5, 5, 5, 5, 5, 1},
        {1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1},
        {1, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 1},
        {1, 4, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 5, 6, 5, 5, 5, 1},
        {1, 1, 1, 1, 1, 1, 5, 5, 5,10, 4, 5, 5, 5, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 1, 5, 1, 5, 1, 1, 1, 0, 0, 1, 1, 1, 5, 1, 5, 1, 5, 1},
        {1,10, 1, 5, 1, 5, 1, 0, 0, 0, 0, 0, 0, 1, 5, 1, 5, 1, 5, 1},
        {1, 5, 1, 6, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 5, 1, 5, 1},
        {1, 5, 1, 5, 1, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 1, 5, 1, 5, 1},
        {1, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1,10, 5, 5, 5, 5, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		};
		return B[a][b];
	}else if(l==2){
	    // MAPS KE-2
		int B[BRS][KLM] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1,10, 5, 5, 5, 5, 6, 1},
        {1, 8, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 5, 1},
        {1, 5, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 1, 5, 1, 1, 1, 5, 1, 1, 0, 0, 1, 1, 5, 1, 1, 1, 5, 1, 1},
        {1, 1, 5, 5, 6, 1, 5, 1, 0, 0, 0, 0, 1, 5, 1, 5, 5, 5, 1, 1},
        {1, 1, 5, 1, 5, 1, 5, 1, 1, 1, 1, 1, 1, 5, 1, 5, 1, 5, 1, 1},
        {1, 1, 5, 1, 5, 1, 5, 5, 5, 5, 4, 5, 5, 5, 1, 5, 1, 5, 1, 1},
        {1, 1, 5, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 5, 1, 1},
        {1, 5, 5, 5, 5, 5, 8, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 1, 0, 0, 1, 5, 1, 1, 1, 1, 1, 1, 5, 1, 0, 0, 1, 5, 1},
        {1, 5, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 5, 1},
        {1, 5, 5, 5, 5, 5,10, 1, 1, 1, 1, 1, 1, 5, 5, 4, 5, 5, 8, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		};
		return B[a][b];
	}else if (l==3){
	    // MAPS KE-3
		int B[BRS][KLM] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 4, 1, 5, 5, 5, 5, 5, 5,10, 5, 5, 5, 5, 5, 5, 5, 1, 5, 1},
        {1, 5, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 1, 5, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 5, 1, 5, 1},
        {1, 5, 1, 5, 1, 5, 1, 0, 0, 0, 0, 0, 0, 1, 5, 1, 5, 1, 5, 1},
        {1, 5, 1, 5, 1, 5, 1, 1, 1, 0, 0, 1, 1, 1, 5, 1, 5, 1, 8, 1},
        {1, 5, 1, 5, 1, 5, 5, 5, 6, 5, 5, 5, 5, 5, 5, 1, 5, 1, 5, 1},
        {1, 5, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 5, 1},
        {1, 5, 1, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 1, 5, 1},
        {1, 6, 1, 5, 1, 1, 1, 5, 1, 1, 1, 1, 5, 1, 1, 1, 5, 1, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 5, 1},
        {1, 8, 5, 1, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 1,10, 4, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		};
		return B[a][b];
	}
}
// MEMBERI GAMBAR UNTUK MAPSNYA
void maps(int mat, int baris, int kolom){
    //PENAMPUNG NILAI RANDOM PEMOSISIAN DARI PELET
    int Pos = RandomPos();

	if(mat==0){
		background(baris, kolom);
	}else if(mat==1){
		dinding(baris, kolom);
	}else if(mat==4 && Pos ==4){
		suplemen(baris, kolom);
	}else if(mat==6 && Pos ==6){
		suplemen(baris, kolom);
	}else if(mat==8 && Pos ==8){
		suplemen(baris, kolom);
	}else if(mat==10 && Pos ==10){
		suplemen(baris, kolom);
	}else{
		pelet(baris, kolom);
	}

}

// MODUL GAMBAR UNTUK PELET
void pelet(int mat, int baris, int kolom){
	if(mat==5){
		pelet(baris, kolom);
	}
}

// GAMBAR UNTUK BACKGROUND
void background(int i, int j){
	readimagefile("assets//img//game//maps//black.jpg", img_mtrx);
}
// GAMBAR UNTUK DINDING
void dinding(int i, int j){
	readimagefile("assets//img//game//maps//dinding2.jpg", img_mtrx);
}
// GAMBAR UNTUK SUPLEMEN
void suplemen(int i, int j){
	readimagefile("assets//img//game//maps//burger.jpg", img_mtrx);
}
// GAMBAR UNTUK PELET
void pelet(int i, int j){
	readimagefile("assets//img//game//maps//pelet.jpg", img_mtrx);
}
// MENAMPILKAN GAMBAR KETIKA PACMAN KE SAMPING
void samping(int i, int j, int p){
	if(p==1){
		readimagefile("assets//img//game//player//move//kanan2.gif", img_mtrx);
		delay(10);
		readimagefile("assets//img//game//player//move//kanan2.gif", img_mtrx);
		delay(10);
		readimagefile("assets//img//game//player//move//kanan2.gif", img_mtrx);
	}else if(p==2){
		readimagefile("assets//img//game//player//move//kiri2.gif", img_mtrx);
		delay(10);
		readimagefile("assets//img//game//player//move//kiri2.gif", img_mtrx);
		delay(10);
		readimagefile("assets//img//game//player//move//kiri2.gif", img_mtrx);
	}
}
// MENAMPILKAN GAMBAR SAAT PACMAN KE ATAS
void atas(int i, int j, int p){
	if(p==3){
		readimagefile("assets//img//game//player//move//atas2.gif", img_mtrx);
		delay(10);
		readimagefile("assets//img//game//player//move//atas2.gif", img_mtrx);
		delay(10);
		readimagefile("assets//img//game//player//move//atas2.gif", img_mtrx);
	}
}
// MENAMPILKAN GAMBAR SAAT PACMAN KE BAWAH
void bawah(int i, int j, int p){
    if(p==4){
        readimagefile("assets//img//game//player//move//bawah2.gif", img_mtrx);
        delay(10);
		readimagefile("assets//img//game//player//move//bawah2.gif", img_mtrx);
		delay(10);
		readimagefile("assets//img//game//player//move//bawah2.gif", img_mtrx);
    }
}

//Menampilkan Enemy
void DrawGhost(int i_g, int j_g, int p_g){
    if(p_g == 1){
        readimagefile("assets//img//game//enemy1.jpg", Gimg_mtrx);
		delay(10);
		readimagefile("assets//img//game//enemy1.jpg", Gimg_mtrx);
		delay(10);
		readimagefile("assets//img//game//enemy1.jpg", Gimg_mtrx);
    }
}
