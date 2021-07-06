#include"header/header.h"

// MEMBUAT 3 MAPS
int maps_level(int l, int a, int b){
	if(l==1){
        // MAPS KE-1
		int B[BRS][KLM] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 6, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 0, 0, 0, 0, 0, 0, 1, 5, 5, 1, 1, 1, 1, 1, 1, 1, 6, 5, 1},
        {1, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 0, 0, 0, 0, 0, 0, 1, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 6, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1},
        {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		};
		return B[a][b];
	}else if(l==2){
	    // MAPS KE-2
		int B[BRS][KLM] = {
		 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		 {1, 5, 5, 5, 5, 5, 6, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 1},
		 {1, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 1},
		 {1, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 6, 5, 5, 1, 1, 5, 1},
		 {1, 5, 1, 1, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1, 1, 5, 1},
		 {1, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 5, 1, 1, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1, 1, 5, 1},
		 {1, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 5, 1, 1, 5, 1},
		 {1, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 1},
		 {1, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 1},
		 {1, 5, 5, 5, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1},
		 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		};
		return B[a][b];
	}else if (l==3){
	    // MAPS KE-3
		int B[BRS][KLM] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 5, 5, 6, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 1},
		{1, 5, 5, 5, 5, 1, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 5, 5, 5, 5, 1},
		{1, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 1},
		{1, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 6, 5, 5, 5, 1},
		{1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1},
		{0, 1, 5, 5, 1, 1, 1, 5, 5, 5, 5, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 5, 5, 5, 5, 1, 1, 1, 5, 5, 1, 0},
		{0, 1, 5, 5, 1, 1, 1, 5, 5, 5, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 1, 1, 1, 5, 5, 1, 0},
		{0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 0},
		{0, 1, 6, 5, 5, 5, 5, 5, 5, 5, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 5, 5, 5, 5, 5, 5, 5, 6, 1, 0},
		{0, 1, 5, 5, 1, 1, 1, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1, 1, 1, 5, 5, 1, 0},
		{0, 1, 5, 5, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 5, 5, 1, 0},
		{1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 1},
		{1, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 1},
		{1, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 6, 1, 5, 5, 5, 5, 1},
		{1, 5, 5, 5, 5, 1, 6, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 5, 5, 5, 5, 1},
		{1, 5, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 5, 5, 5, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		};
		return B[a][b];
	}
}
// MEMBERI GAMBAR UNTUK MAPSNYA
void maps(int mat, int baris, int kolom){
	if(mat==0){
		background(baris, kolom);
	}
	if(mat==1){
		dinding(baris, kolom);
	}
	if(mat==5){
		pelet(baris, kolom);
	}
	if(mat==6){
		suplemen(baris, kolom);
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
	readimagefile("assets//img//game//maps//dinding.jpg", img_mtrx);
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
// MENAMPULKAN GAMBAR SAAT INGIN KELUAR GUNA KONFORMASI
void keluar(){
	readimagefile("assets//img//menu//exitt.jpg",420,240,420+420,240+240);
	readimagefile("assets//img//menu//no.jpg",470,390,520,440);
	readimagefile("assets//img//menu//yes.jpg",740,390,790,440);
}
