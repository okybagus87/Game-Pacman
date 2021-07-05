#include"header/header.h"

// MENAMPILKAN MENU
void menu_awal(){
	int x, y;
   	readimagefile("assets//img//menu//bekron.jpg",fullscreen);
	x= 155;
   	y= 430;
	readimagefile("assets//img//menu//play.gif",x,y,167+x,100+y);
	x=355;
	readimagefile("assets//img//menu//highscore.gif",x,y,167+x,100+y);
	x=555;
	readimagefile("assets//img//menu//how.gif",x,y,167+x,100+y);
	x=755;
	readimagefile("assets//img//menu//aboutus.gif",x,y,167+x,100+y);
	x=955;
	readimagefile("assets//img//menu//exit.gif",x,y,167+x,100+y);
}

// MENAMPILKAN PILIH MAPS
void milih_maps(){
    int x, y;
    readimagefile("assets//img//menu//Pilih Maps.jpg",fullscreen);
    x= 400;
   	y= 300;
	readimagefile("assets//img//menu//maps1.gif",x,y,500+x,100+y);
	y=400;
	readimagefile("assets//img//menu//maps2.gif",x,y,500+x,100+y);
	y=500;
	readimagefile("assets//img//menu//maps3.gif",x,y,500+x,100+y);
}

// MENAMPILKAN SPLASHSCREEN ( LOADING AWAL PROGRAM )
void splashscreen(){
	int x, y, a, b, i=400, j=50, k, l;

	a=300;
	b=300;

	x=((getmaxx()/2)-(a/2));
	y=((getmaxy()/2)-(b/2));
	k=((getmaxx()/2)-(i/2));
	l=((getmaxy()/2)-(j/2));

		readimagefile("assets//img//splash//Background.jpg",fullscreen);
		readimagefile("assets//img//splash//logo.gif", x, y-100, x+a, y+b-100);

		readimagefile("assets//img//splash//load1.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load2.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load3.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load4.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load5.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load6.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load7.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load8.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load9.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load10.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load11.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load12.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load13.jpg", k, l+100, k+i, l+j+100);
		delay(250);
		readimagefile("assets//img//splash//load14.jpg", k, l+100, k+i, l+j+100);
		delay(250);
}

// MENAMPILKAN ABOUT US
/*void about(){
	int x, y;
   	readimagefile("assets//img//game//egyp.jpg",fullscreen);
	x=520;
	y=20;
	readimagefile("assets//img//menu//about//kel.jpg",x,y,200+x,50+y);

   	x=70;
	y=80;
	readimagefile("assets//img//menu//about//ar.jpg",x,y,150+x,250+y);

	x=550;
	y=80;
	readimagefile("assets//img//menu//about//be.jpg",x,y,150+x,250+y);

    x=1070;
	y=80;
	readimagefile("assets//img//menu//about//li.jpg",x,y,150+x,250+y);

	x=70;
	y=370;
	readimagefile("assets//img//menu//about//far.jpg",x,y,150+x,250+y);

	x=550;
	y=370;
	readimagefile("assets//img//menu//about//ro.jpg",x,y,150+x,250+y);

	x=1070;
	y=370;
	readimagefile("assets//img//menu//about//ji.jpg",x,y,150+x,250+y);

	x=30;
	y=650;
	readimagefile("assets//img//game//back.jpg",x,y,150+x,50+y);
}*/

// MENAMPILKAN GAMBAR UNTUK MENU HOW
void how(){
	readimagefile("assets//img//menu//how1.jpg",fullscreen);
}
