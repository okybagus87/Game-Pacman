#ifndef controller_H
#define controller_H
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
              arr[0].x = 320; // digunain di badan pacman
              arr[0].y = 320; // digunain di badan pacman  
              length = 1; // digunain di badan pacman          
              direction = RIGHT; 
        }
        void drawPACMAN();
        void changeDirTo(int);
        int update();     
};

void drawPACMAN(); // badan pacman         
void changeDirTo(int newdir); // kotrol gerak pacman
int update(); // aktif saat bergerak                 
int controller(); // Menggerakkan object
int getPosx();
int getPosy();

#endif                                    
