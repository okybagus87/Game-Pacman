#include <iostream>
#include <graphics.h>
#include "enemy.h"
#include "controller.h"
#include "map.h"

using namespace std;
void mapSatu();
void *buff;
void *buff0;
void *buff1;
void *buff2;



 void Enemy1_lvl1(){
    int x1,y1,x2,y2,x0,y0,x,y;
    x1 = 390; y1 = 390;
    x2 = 450; y2 = 390;
    x = 80; y=280;
    x0 = 440; y0 = 400;
    int area,area0,area1,area2;

    readimagefile("foto//enemy1.gif",x1,y1,x1+25,y1+25);
    area1 = imagesize(x1,y1,x1+25,y1+25);
    buff1 = malloc(area1);
    getimage(x1,y1,x1+25,y1+25,buff1);
    putimage(x1,y1,buff1,XOR_PUT);

    readimagefile("foto//enemy2.gif",x2,y2,x2+25,y2+25);
    area2 = imagesize(x2,y2,x2+25,y2+25);
    buff2 = malloc(area2);
    getimage(x2,y2,x2+25,y2+25,buff2);
    putimage(x2,y2,buff2,XOR_PUT);



    readimagefile("foto//pelet.gif",x,y,x+50,y+50);
    area = imagesize(x,y,x+50,y+50);
    buff = malloc(area);
    getimage(x,y,x+50,y+50,buff);

   // putimage(x,y,buff,COPY_PUT);

     while(y1 >= 300){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 + 20;

    }
     putimage(x1,y1,buff1,COPY_PUT);
     putimage(x1,y1,buff1,XOR_PUT);
     putimage(x2,y2,buff2,COPY_PUT);
     putimage(x2,y2,buff2,XOR_PUT);
     putimage(440,480,buff,COPY_PUT);


    while(x1 >= 100){
       putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 + 20;

    }

     putimage(x1,y1,buff1,COPY_PUT);
     putimage(x1,y1,buff1,XOR_PUT);
     putimage(x,y,buff,COPY_PUT);


     while(y1>=90){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 + 20;
    }
    putimage(x1,70,buff1,COPY_PUT);
    putimage(x1,70,buff1,XOR_PUT);
    putimage(x2,y2,buff2,COPY_PUT);
    putimage(x2,y2,buff2,XOR_PUT);

    while(x1<=350){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 - 20;
    }

    putimage(x1,y1,buff1,COPY_PUT);
    putimage(x1,y1,buff1,XOR_PUT);
    putimage(x2,y2,buff2,COPY_PUT);
    putimage(x2,y2,buff2,XOR_PUT);

    while(y1<=250){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 - 20;
    }
    putimage(x1,y1,buff1,COPY_PUT);
    putimage(x1,y1,buff1,XOR_PUT);
    putimage(x2,y2,buff2,COPY_PUT);
    putimage(x2,y2,buff2,XOR_PUT);

    while(x1>=210){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 - 20;
    }

    while(y1<=320){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 - 20;
    }

    while(x1>=80){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 - 20;
    }

    while(y1<=450){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 - 20;
    }

    while(x1<=60){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 - 20;
    }
    while(x1<=300){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 + 20;
    }
    while(y1<=470){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 + 20;
    }
    while(x1>=240){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 + 20;
    }
    while(y1<=560){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 + 20;
    }

    while(x1<=300){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 + 20;
    }

    while(y1<=650){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 + 20;
    }

    while(x1<=310){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 - 20;
    }

        while(y1>=500){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 - 20;
    }

        while(x1>=300){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 - 20;
    }

      while(y1>=400){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        y1 = y1 - 20;
        putimage(x2,y2,buff2,XOR_PUT);
        x2 = x2 - 20;
    }

    while(x1<=360){
        putimage(x1,y1,buff1,XOR_PUT);
        delay(200);
        putimage(x2,y2,buff2,XOR_PUT);
        delay(200);
        putimage(x1,y1,buff1,XOR_PUT);
        x1 = x1 + 20;
        putimage(x2,y2,buff2,XOR_PUT);
        y2 = y2 + 20;
    }
}
