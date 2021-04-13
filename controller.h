#include <graphics.h>

enum DIR {LEFT , UP , RIGHT , DOWN}; // nama buat mempermudah aja


struct POS // posisi pacman
{
       int x,y;
       POS()
       {
            x = -50;
            y = 0;
       }
};

// class pacman
class PACMANBody
{
private:
        POS arr[31]; // untuk ngatur posisi
        int direction; // untuk ngegerakin 
        int length; // untuk ngegerakin 
public :
        PACMANBody()
        {
              arr[0].x = 20; // digunain di badan pacman
              arr[0].y = 20; // digunain di badan pacman  
              length = 1; // digunain di badan pacman          
              direction = RIGHT; // mulainya dari kanan
        }
        void drawPACMAN();
        void changeDirTo(int);
        int update();
};

void PACMANBody::drawPACMAN() // badan pacman         
{
	 
     for(int i=0; i<length ; i++)
     {
          rectangle(arr[i].x , arr[i].y , arr[i].x+20 , arr[i].y+20);
          setfillstyle(SOLID_FILL , YELLOW);
          floodfill(arr[i].x+15 , arr[i].y+15 , YELLOW);
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
                  arr[0].x -= 3;
                  if(arr[0].x == 0)
                  {
                              arr[0].x = 1340;
                  }
     }
     else if(direction == RIGHT)
     {
                  arr[0].x += 3;
                  if(arr[0].x == 1340)
                  {
                              arr[0].x = 10;
                  }
     }
     else if(direction == UP)
     {
                  arr[0].y -= 3;
                  if(arr[0].y == 0)
                  {
                              arr[0].y = 800;
                  }
     }
     else if(direction == DOWN)
     {
                  arr[0].y += 3;
                  if(arr[0].y == 800)
                  {
                              arr[0].y = 10;
                  }
     }
     return 1;
}
