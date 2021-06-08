#include "controller.h"
#include "map.h"

void PACMANBody::drawPACMAN() // badan pacman
{

     for(int i=0; i<length; i++)
     {
          setcolor(YELLOW);
	 	  setfillstyle(SOLID_FILL, YELLOW);
          circle(arr[i].x , arr[i].y , 14);
          floodfill(arr[i].x , arr[i].y, YELLOW);
     }
}

void PACMANBody::changeDirTo(int newdir) // kotrol gerak pacman
{
     if(newdir == LEFT || newdir == RIGHT || newdir == UP || newdir == DOWN)
     {
            if(direction == UP || direction == DOWN || direction == LEFT || direction == RIGHT)
                         direction = newdir;
                         newdir = direction;
     }
}

int PACMANBody::update() // aktif saat bergerak
{
     for(int i=1 ; i<length ; ++i)
     {
             if(arr[0].x == arr[i].x && arr[0].y == arr[i].y)
             {
                         return 0;
             }
     }
     for(int i=length ; i>=0 ; --i)
     {
             if(i==0)
             {
                     arr[1].x = arr[0].x;
                     arr[1].y = arr[0].y;
             }
             else
             {
                     arr[i].x = arr[i-1].x;
                     arr[i].y = arr[i-1].y;
             }
     }
     if(direction == LEFT)
     {
                  arr[0].x -= 40;
                  if(arr[0].x == 0)
                  {
                              arr[0].x = 1340;
                  }
     }
     else if(direction == RIGHT)
     {
                  arr[0].x += 40;
                  if(arr[0].x == 1340)
                  {
                              arr[0].x = 10;
                  }
     }
     else if(direction == UP)
     {
                  arr[0].y -= 40;
                  if(arr[0].y == 0)
                  {
                              arr[0].y = 800;
                  }
     }
     else if(direction == DOWN)
     {
                  arr[0].y += 40;
                  if(arr[0].y == 800)
                  {
                              arr[0].y = 10;
                  }
     }
     return 1;
}

int controller()
{
    PACMANBody body;
    int length,count=0;
    bool playing=true;
    int page=0;

    while(1)
    {
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

           	setcolor(1);
			setbkcolor(BLACK);
			//setlinestyle(0, 1, 3);
			setfillstyle(1, 1);
			//liniile groase - desenare;

      		page = 1-page;
   		    // buat berapa lama delay saat jalan ( semakin kecil semakin cepat tp tergantung jumlah kotak yang dimasukin untuk ngelancarin gerakan)
       	    delay(400);
    }
}
