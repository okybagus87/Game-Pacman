//#ifndef control_H
//#define control_H
void SkorPemain(int skor);//MENAMPILKAN SKOR
void mapMaze(int l); // MEMANGGIL MAPS DAN MENAMPILKANNYA
void tempMaps(int temp, int baris, int kolom); // MEMBUAT TEMPORARY MAPS
void move(bool atas, bool bawah, bool kiri, bool kanan); // PERGERAKAN MAPS
void limit(); // BATAS PACMAN DENGAN DINDING
void ceksprite(int sprite, int baris, int kolom); // PERGERAKAN PACMAN
void tempp(); // MENUKAR / MENGUBAH GAMBAR KETIKA TELAH MEMAKAN PELET ATAUPUN SUPLEMEN
void movement(int l); // MENGGERAKAN PACMAN
void maping(); // POSISI AWAL PACMAN
void pause(); // FITUR PAUSE
void sc_lv(int l); // MENAMPILAKAN JUDUL SAAT KE MAPS TERTENTU
//#endif
