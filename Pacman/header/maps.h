//#ifndef maps_H
//#define maps_H

int maps_level(int l, int a, int b); // MEMBUAT MAPS
void maps(int mat, int baris, int kolom); // GAMBAR UNTUK MAPS
void pelet(int mat, int baris, int kolom); // GAMBAR UNTUK PELET

void dinding(int i, int j); // GAMBAR UNTUK DINDING
void suplemen(int i, int j); // GAMBAR UNTUK SUPLEMEN
void background(int i, int j); // GAMBAR UNTUK BACKGROUND
void atas(int i, int j, int p); // GAMBAR UNTUK PACMAN KE ATAS
void samping(int i, int j, int p); // GAMBAR UNTUK PACMAN KE SAMPING
void bawah(int i, int j, int p); // GAMBAR UNTUK PACMAN KE BAWAH
void pelet(int i, int j); // GAMBAR UNTUK PELET
void keluar(); // GAMBAR UNTUK KONFIRMASI MAU KELUAR TIDAK

//#endif
