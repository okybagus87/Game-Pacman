#include "enemy.h"
#include "map.h"
void enemy1_lvl1(){
	int i,x;
	//Perulangan langkah ke 1
	
	for(i=1;i<=28;i++){
		//	line(310, 202, 330, 202);
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);
	

	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);



	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295);
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
	
	
		circle(300,220+i,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();
	}

	//Perulangan langkah ke 2
	for(x=1;x<=115;x++){
		//	line(310, 202, 330, 202);
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);
	

	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);



	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295);
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
		
	
		circle(300+x,220+i,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();
		
	}
	
	//PERULANGAN LANGKAH KE -3
		for(x=1;x<=40;x++){
		//	line(310, 202, 330, 202);
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);
	

	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);



	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295);
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);	
			
			
		circle(415,248+x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}

	//perulangan langkah ke 4
	for(x=1;x<=80;x++){
		
//	line(310, 202, 330, 202);
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(415-x,288,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke-5
	for(x=1;x<=35;x++){
		setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(335,288+x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke-6
	for(x=1;x<=83;x++){
		setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(335+x,323,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke - 7
	for(x=1;x<=35;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(418,323+x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke 8
	for(x=1;x<=80;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(418-x,358,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke - 9
	for(x=1;x<=30;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(338,358+x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan ke langkah ke 10
	for(x=1;x<=230;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(338-x,388,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//pengulangam ke langkah 11
	for(x=1;x<=35;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(108,388-x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke 12
	for(x=1;x<=20;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(108+x,353,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke 13
	for(x=1;x<=38;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   	circle(128,353-x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke 13
	for(x=1;x<=20;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);



	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   		circle(128-x,315,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//perulangan langkah ke 16
	for(x=1;x<=30;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);

	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   		circle(108,315-x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	//pengulangan langkah ke 17
	for(x=1;x<=78;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);

	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   		circle(108+x,285,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	

	//pengulangan langkah ke 17
	for(x=1;x<=65;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);

	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   		circle(185	,285-x,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
	
	
// Perulangan ke 19	
	for(x=1;x<=115;x++){
	setcolor(1);
	setbkcolor(0);
	//setlinestyle(0, 1, 3);
	setfillstyle(1, 1);
	//liniile groase - desenare;

	line(470, 205, 470, 165);//dreapta mid
	line(470, 165, 545, 165);//dreapta
	line(545, 165, 545, 30);
	line(545, 30, 330, 30);//dreapta sus
	line(330, 30, 330, 84);
	line(330, 84, 310, 84);
	line(310, 84, 310, 30);
	line(310, 30, 95, 30);//stanga sus
	line(95, 30, 95, 165);//stanga
	line(95, 165, 170, 165);//stanga mid
	line(170, 165, 170, 235);
	line(170, 235, 170, 275);
	line(170, 275, 95, 275);
	line(95, 275, 95, 325);
	line(95, 325, 115, 325);
	line(115, 325, 115, 340);
	line(115, 340, 95, 340);
	line(95, 340, 95, 400);
	line(95, 400, 545, 400);//jos
	line(545, 400, 545, 340);
	line(545, 340, 525, 340);
	line(525, 340, 525, 325);
	line(525, 325, 545, 325);
	line(545, 325, 545, 275);//dreapta
	line(545, 275, 470, 275);
	line(470, 275, 470, 235);
	line(470, 235, 470, 205);//dreapta mid

	//T's
	//#1(sus)-dreapta
	line(445, 205, 445, 110);//1
	line(445, 110, 430, 110);//2-lateral(sus)
	line(430, 110, 430, 165);//3
	line(445, 205, 430, 205);//4-lateral(jos)
	line(430, 205, 430, 180);//5
	line(355, 165, 355, 180);//6-exterior(stanga)
	line(355, 165, 430, 165);//7-exterior(sus)
	line(355, 180, 430, 180);//8-exterior(jos)
	floodfill(440, 200, 1);
	//#2-centru
	line(405, 110, 235, 110);//1-sus
	line(405, 110, 405, 136);//2-lateral(dreapta)
	line(405, 136, 330, 136);//3-interior(dreapta)
	line(330, 136, 330, 180);
	line(330, 180, 310, 180);//5-exterior(jos)
	line(310, 180, 310, 136);
	line(310, 136, 235, 136);
	line(235, 136, 235, 110);//8-lateral(stanga)
	floodfill(400, 115, 1);
	//#3-stanga
	line(195, 205, 210, 205);//1-exterior(jos)
	line(195, 205, 195, 110);//2-lateral(stanga)
	line(195, 110, 210, 110);//3-exterior(sus)
	line(210, 110, 210, 165);//4-interior
	line(210, 165, 285, 165);
	line(285, 165, 285, 180);
	line(285, 180, 210, 180);
	line(210, 180, 210, 205);//8-interior(dreapta-jos)
	floodfill(200, 200, 1);
	//#4(jos)-centru
	line(235, 275, 235, 260);//#1-stanga
	line(235, 260, 405, 260);//#2-sus
	line(405, 260, 405, 275);//#3-dreapta
	line(405, 275, 325, 275);
	line(325, 275, 325, 305);//#5-centru-dreapta
	line(325, 305, 315, 305);
	line(315, 305, 315, 275);
	line(235, 275, 315, 275);
	floodfill(300, 270, 1);
	//#5(jos)-centru
	line(235, 345, 235, 335);//#1-stanga
	line(235, 335, 405, 335);
	line(405, 335, 405, 345);
	line(405, 345, 325, 345);
	line(325, 345, 325, 370);
	line(325, 370, 315, 370);
	line(315, 370, 315, 345);
	line(315, 345, 235, 345);
	floodfill(300, 340, 1);
	//#6(jos)-stanga
	line(195, 335, 210, 335);
	line(210, 335, 210, 370);
	line(210, 370, 290, 370);
	line(290, 370, 290, 380);
	line(290, 380, 120, 380);
	line(120, 380, 120, 370);
	line(120, 370, 195, 370);
	line(195, 370, 195, 335);
	floodfill(200, 340, 1);
	//#7(jos) - dreapta
	line(430, 335, 445, 335);
	line(445, 335, 445, 370);
	line(445, 370, 525, 370);
	line(525, 370, 525, 380);
	line(525, 380, 350, 380);
	line(350, 380, 350, 370);
	line(350, 370, 430, 370);
	line(430, 370, 430, 335);
	floodfill(438, 340, 1);

	setlinestyle(0, 1, 1);
	//liniile subtiri - desenare

	line(475, 200, 475, 170);
	line(475, 170, 550, 170);
	line(550, 170, 550, 25);//sus
	line(550, 25, 90, 25);
	line(90, 25, 90, 170);
	line(90, 170, 165, 170);
	line(165, 170, 165, 240);//stanga
	line(165, 240, 165, 270);
	line(165, 270, 90, 270);
	line(90, 270, 90, 405);
	line(90, 405, 550, 405);//jos
	line(550, 405, 550, 270);//dreapta
	line(550, 270, 475, 270);
	line(475, 270, 475, 240);
	line(475, 240, 475, 200);

	//

	//setlinestyle(0, 1, 3);
	rectangle(470, 56, 520, 84);
		floodfill(475, 60, 1);
	rectangle(470, 110, 520, 136);
		floodfill(475, 120, 1);
	rectangle(355, 56, 444, 84);
		floodfill(360, 60, 1);
	rectangle(195, 56, 285, 84);
		floodfill(200, 60, 1);
	rectangle(120, 56, 170, 84);
		floodfill(130, 60, 1);
	rectangle(120, 110, 170, 136);
		floodfill(130, 120, 1);

	//dreptunghiuri - mid
	rectangle(430, 235, 445, 275);//dreapta
		floodfill(435, 240, 1);
	rectangle(195, 235, 210, 275);//stanga
        	floodfill(200, 250, 1);
	//jos
	rectangle(195, 300, 285, 310);
		floodfill(200, 305, 1);
	rectangle(355, 300, 445, 310);
		floodfill(370, 305, 1);
	//centru
	rectangle(395, 235, 245, 205);

	//dreptunghiuri - jos
	//#1-dreapta
	line(470, 295, 520, 295); 
	line(520, 295, 520, 305);
	line(520, 305, 500, 305);
	line(500, 305, 500, 340);
	line(500, 340, 470, 340);
	line(470, 340, 470, 295);
        floodfill(480, 300, 1);
	//#2-stanga
	line(170, 295, 120, 295);
	line(120, 295, 120, 305);
	line(120, 305, 140, 305);
	line(140, 305, 140, 340);
	line(140, 340, 170, 340);
	line(170, 340, 170, 295);
	floodfill(160, 300, 1);
   		circle(185+x,220,10);
		setfillstyle(SOLID_FILL,BLUE);
		delay(30);
		cleardevice();	
	}
}
/*
void enemy1_lvl1(){
  static int incr=0;
  static bool way=true;
  setcolor(3);
  sector(110,100+incr,0,360,10,10);
  if(way){
  incr++;
  	if(incr==100){
  		way=false;
	  }
   }else{
   	incr--;
   	if(incr==0)
   	way=true;
  		
	}*/

