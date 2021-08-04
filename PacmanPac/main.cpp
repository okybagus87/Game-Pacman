#include"header/header.h" // MENGAMBIL FILE.H DI FOLDER HEADER
void menu_utama();

int main(){
	initwindow(1360,720,"",0,0);
	splashscreen(); // MEMANGGIL SPLASHSCREEN
	delay(600);
	menu_utama(); // MEMANGGIL MENU UTAMA
	return 0;
}

// MENU UTAMA PADA GAMA PECMAN
void menu_utama(){
	int x, y, e, ltemp;
	int lv = 1; // NILAI AWAL MAPS
	menu:
	menu_awal(); // MEMANGGIL MENU UTAMA
	while(1){
		getmouseclick(WM_LBUTTONDOWN, x, y); // KLIK MENU DENGAN MENGGUNAKAN MOUSE
		if((x>155 && x<155+167)&&(y>430 && y<530)){ // DAERAH YANG BISA DIJANGKAU UNTUK MENGKLIK MENU MILIH_MAPS
            milih_maps(); // MEMANGGIL MENU MAPS
            while(1){
                getmouseclick(WM_LBUTTONDOWN, x, y); // KLIK MENU DENGAN MENGGUNAKAN MOUSE
                if((x>400 && x<400+500)&&(y>300 && y<400)){ // DAERAH YANG BISA DIJANGKAU UNTUK MENGKLIK MAPS 1
                    while(lv=1){
                        sc_lv(lv); // MEMANGGIL SC_LV UNTUK MENAMPILKAN JUDUL MAPS 1
                        cleardevice(); // MEMBERSIHKAN TAMPILAN
                        mapMaze(lv); // MENAMPILKAN MAPS
                        ltemp = lv; // MENAHAN TAMPILAN MAPS ATAU TIDAK MELAKUKAN MOOPING
                        Gmaping();
                        maping(); // MEMBERI POSISI AWAL PADA PACMAN

                            while(lv==ltemp){
                            tempp();
                            Gmovement(lv);
                            movement(lv); // PERGERAKAN PACMAN
                            if(e=='s' || e=='S'){
                            }else if(e=='p' || e=='P'){
                                pause(); // FITUR PAUSE DENGAN KLIK "C"
                            }else{
                                limit();
                                Glimit(); // BATASAN PACMAN DENGAN DINDING
                            }
                        }
                    }
                }else if((x>400 && x<400+500)&&(y>400 && y<500)){
                    while(lv=2){
                        sc_lv(lv);
                        cleardevice();
                        mapMaze(lv);
                        ltemp = lv;
                        maping();
                            while(lv==ltemp){
                            tempp();
                            movement(lv);
                            if(e=='s' || e=='S'){
                            }else if(e=='p' || e=='P'){
                                pause();
                            }else{
                                limit();

                            }
                        }
                    }
                }else if((x>400 && x<400+500)&&(y>500 && y<600)){
                      while(lv=3){
                        sc_lv(lv);
                        cleardevice();
                        mapMaze(lv);
                        ltemp = lv;
                        maping();
                            while(lv==ltemp){
                            tempp();
                            movement(lv);
                            if(e=='s' || e=='S'){
                            }else if(e=='p' || e=='P'){
                                pause();
                            }else{
                                limit();
                            }
                        }
                    }
                }
            }
			goto menu; // KEMBALI KE MENU
		}else if((x>355 && x<355+167)&&(y>430 && y<530)){ // DAERAH YANG BISA DIJANGKAU UNTUK MENGKLIK MENU LEADERBOARD
			//view_leaderboard();
			//leaderboard();
			while(1){
				getmouseclick(WM_LBUTTONDOWN, x, y);
				if((x>600 && x<600+150)&&(y>550 && y<550+50)){ // DAERAH YANG BISA DIJANGKAU UNTUK KEMBALI KE MENU UTAMA
					goto menu; // KEMBALI KE MENU
				}
			}
		}else if((x>555 && x<555+167)&&(y>430 && y<530)){ // DAERAH YANG BISA DIJANGKAU UNTUK MENGKLIK MENU HOW
			while(1){
				how();
				readimagefile("assets//img//menu//back.gif",150,600,150+150,50+600);
				getmouseclick(WM_LBUTTONDOWN, x, y);
				if((x>150 && x<150+150)&&(y>600 && y<650)){ // DAERAH YANG BISA DIJANGKAU UNTUK KEMBALI KE MENU UTAMA
					goto menu; // KEMBALI KE MENU
				}
			}
		}else if((x>755 && x<755+167)&&(y>430 && y<530)){ // DAERAH YANG BISA DIJANGKAU UNTUK KEMBALI KE MENU ABOUT US
			
			while(1){
				about();
				readimagefile("assets//img//menu//back.gif",150,600,150+150,50+600);
				getmouseclick(WM_LBUTTONDOWN, x, y);
				if((x>150 && x<150+150)&&(y>600 && y<650)){
					goto menu; // KEMBALI KE MENU
				}
			}
		}else if((x>955 && x<955+167)&&(y>430 && y<530)){ // DAERAH YANG BISA DIJANGKAU UNTUK KELUAR PROGRAM
			exit(1);
		}
	}
}

