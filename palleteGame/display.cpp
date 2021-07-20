#include"display.h"


game *buildGame(int ukuran,int l,int t)
{
    game *p = (game*)malloc(sizeof(game*));
    p->lebar = l;
    p->tinggi = t;
    p->ukuran = ukuran;
    p->lebarWindow = ukuran * l;
    p->tinggiWindow = ukuran * t;

    return p;
}

game startGame(game *p)
{
    initwindow(p->lebarWindow,p->tinggiWindow);
    menu_utama();
}
void DisplayPlayGame()
{
    int x;
    int y;
    readimagefile("image/display/PlayWalpaper.jpeg",fullscreen);
    x = 100;
    y = 200;
    readimagefile("image/display/but1.jpg",x,y,167+x,100+y);
    x = 500;
    readimagefile("image/display/but2.jpg",x,y,167+x,100+y);
    x = 900;
    readimagefile("image/display/but3.jpg",x,y,167+x,100+y);
    x = 500;
    y = 400;
    readimagefile("image/display/exit_button.jpg",x,y,167+x,100+y);
  
}

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

void start_loading()
{
    readimagefile("image/display/loadnol.jpg",fullscreen);
    delay(1500);
    readimagefile("image/display/loadsatu.jpg",fullscreen);
    delay(1500);
    readimagefile("image/display/loaddua.jpg",fullscreen);
    delay(1500);
    readimagefile("image/display/loadtiga.jpg",fullscreen);
    delay(1500);
    readimagefile("image/display/endload.jpg",fullscreen);
    delay(1500);
   // cleardevice();
}

void menu_utama() //MAIN DISPLAY
{
    int x;
    int y;
    int lv;
    List maze;
    CreateList(&maze);
    sprite *gambar = sprite_create(50) ;
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
            /*Memilih Level dari map*/
            while(1)
            {
                getmouseclick(WM_LBUTTONDOWN,x,y);
                if((x>100 && x<100+167) && (y>200 && y<300))
                {
                    cleardevice();
                    soundPlayGame();
                    lv =1;
                    Makelist2(&maze,lv);
                    map_view(gambar,maze);
                    getch();
                    DelAll(&maze);
                    cleardevice();
                    goto menu;
                }else if((x>500 && x<500+167) && (y>200 && y<300))
                {
                    cleardevice();
                    soundPlayGame();
                    lv=2;
                    Makelist2(&maze,lv);
                    map_view(gambar,maze);
                    getch();
                    DelAll(&maze);
                    cleardevice();
                    goto menu;
                }else if((x>900 && x<900+167) && (y>200 && y<300))
                {
                    cleardevice();
                    soundPlayGame();
                    lv=3;
                    Makelist2(&maze,lv);
                    map_view(gambar,maze);
                    getch();
                    DelAll(&maze);
                    cleardevice();
                    goto menu;
                }else if((x>500 && x<500+167) && (y>400 && y<500))
                {
                    cleardevice();
                    goto menu;
                }
            }
            getch();
            cleardevice();
            goto menu;

        }else if((x>455 && x<455+167) && (y>500 && y<600)){


        }else if((x>655 && x<655+167) && (y>500 &&  y<600)){


        }else if((x>855 && x<855+167) && (y>500 && y<600)){

        }
    }

}


