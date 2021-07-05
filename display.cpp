#include"display.h"

void menu_awal() //BUTTON DI MAIN DISPLAY
{
    int x;
    int y;
    readimagefile("image/display/background_awal.jpg",fullscreen);
    x = 255;
    y = 500;
    readimagefile("image/display/play_button.jpg",x,y,167+x,100+y);
    x=455;
    readimagefile("image/display/score_button.jpg",x,y,167+x,100+y);
    x=655;
    readimagefile("image/display/how_button.jpg",x,y,167+x,100+y);
    x=855;
    readimagefile("image/display/exit_button.jpg",x,y,167+x,100+y);
}

void menu_utama() //MAIN DISPLAY
{
    int x;
    int y;
    //int ltemp;
   // int lv = 1;
   // int p = 1;
    menu:
    soundmenu();
    menu_awal();
    while(1)
    {

        getmouseclick(WM_LBUTTONDOWN,x,y);
        if((x>255 && x<255+167) && (y>500 && y<600)){  //button 1
            cleardevice();
            soundPlayGame();
            tampilaja();
            getch();
            cleardevice();
            goto menu;

        }
        }
    }

}



