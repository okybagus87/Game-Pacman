/* CONTROLLER FOR PACMAN GAME */

#include <graphics.h>
#include "controller.h"
int controller()
{
    initwindow(800,510,"PACMAN GAME");
    PACMANBody body;
    int length,count=0;
    bool playing=true;
    int page=0;

    while(1)
    {
            setactivepage(page);
            setvisualpage(1-page);
            cleardevice();
            setcolor(YELLOW); // warna pacman
            setfillstyle(SOLID_FILL, YELLOW); // warna pacman

			// key buat gerak
            if(GetAsyncKeyState(VK_LEFT))
            {    body.changeDirTo(LEFT);    }
            if(GetAsyncKeyState(VK_UP))
            {    body.changeDirTo(UP);      }
            if(GetAsyncKeyState(VK_RIGHT))
            {    body.changeDirTo(RIGHT);   }
            if(GetAsyncKeyState(VK_DOWN))
            {    body.changeDirTo(DOWN);    }
            if(GetAsyncKeyState(VK_ESCAPE))
            break;

            if(playing==true && !body.update())
            {
                  playing = false;
            }
            
            // badan pacman
            body.drawPACMAN();

            page = 1-page;
            // buat berapa lama delay saat jalan ( semakin kecil semakin cepat tp tergantung jumlah kotak yang dimasukin untuk ngelancarin gerakan)
            delay(1);
    }

    getch();
    // nutup graphic
    closegraph();
}
