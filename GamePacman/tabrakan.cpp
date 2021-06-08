#include "map.h"
#include "controller.h"
#include "tabrakan.h"
void tabrakanDinding(){

    if(i=1){
        for((j=3; j<7; j++) && (j=14;j<18;j++)) {
            if(GetAsyncKeyState(VK_LEFT))
            {    body.changeDirTo(LEFT);    }
             if(GetAsyncKeyState(VK_RIGHT))
            {    body.changeDirTo(RIGHT);   }
        }
    }
    if(i=1 && j=1){
            if(GetAsyncKeyState(VK_RIGHT))
            {    body.changeDirTo(RIGHT);   }
            if(GetAsyncKeyState(VK_DOWN))
            {    body.changeDirTo(DOWN);    }
        }
    }
    //Jika posisi pacman di arr[i][j]==1 hanya bisa body.changeDirTo(LEFT),body.changeDirTo(RIGHT)
}

void tabrakanEnemy(){
}
