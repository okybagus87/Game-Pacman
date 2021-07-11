#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED
#include "header.h"

typedef struct permainan{
    int ukuran; // ??
   // ukuran gambar
    int lebar;
    int tinggi;
    // ukuran window
    int lebarWindow;
    int tinggiWindow;
}game;

game *buildGame(int ukuran,int lebar,int tinggi);

game startGame(game *p);

void menu_awal();
/*
    berisi tampilan dari main berupa tombol
*/
void menu_utama();
void start_loading();


#endif // DISPLAY_H_INCLUDED
