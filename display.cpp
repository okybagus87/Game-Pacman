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



