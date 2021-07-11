#include"PalleteSkorPacman.h"

int Random_Position(int angka)
{
    return 1;
}


void TampilPallete(int x , int y)
{
    readimagefile("foto/pelet.gif",x,y,160+x,100+y);
}


void tampilaja()
{
    int x ;
    int y ;
    y = 500;
    x = 455;
    readimagefile("image/objek/contoh.gif",x,y,167+x,100+y);


}






/*Test*/

sprite *sprite_create(int gridSize)
{
    sprite *s =(sprite *)malloc(sizeof(sprite));
    int x=200,y=200;

    if (s == NULL)
    {
        printf("error!");
        exit(1);
    }
    unsigned int tempSizing;
    tempSizing = imagesize(x,y,x + gridSize,y + gridSize);

    //sprite for BackgroundMap

    //sprite for WallMap
        //putimage(600,600)
        readimagefile("image/map/bata.jpg",x,y,x + gridSize,y + gridSize);
        s->WallMap = malloc(tempSizing);
        getimage(x,y,x + gridSize,y + gridSize, s->WallMap);
        cleardevice();

        //sprite for food

        readimagefile("image/pallete/pelet.gif", x , y, x + gridSize, y + gridSize);
        s->Food = malloc(tempSizing);
        getimage(x, y, x + gridSize, y + gridSize, s->Food);
        cleardevice();

        readimagefile("image/pallete/burger.gif",x,y,x+gridSize,y+gridSize);
        s->bonus = malloc(tempSizing);
        getimage(x, y, x + gridSize, y + gridSize, s->bonus);
        cleardevice();

        //Sprite pacman
        readimagefile("pacman hantu.gif",x,y,x+gridSize,y+gridSize);
        s->pacman=malloc(tempSizing);
        cleardevice();



    return s;
}

void Makelist(List *L1 , int lv){
    List L2;
    int i,j,b,k;
    infotype nilai;
    address P1,P2,down;

    b = 21;
    k = 20;

        for(i=1;i<=b;i++){
            CreateList(&L2);
            for(j=1;j<=k;j++){
                if(lv == 1){
                    //level easy
                    //Wall
                        if((i == 4 && j <= 7) || (i == 16 && j<= 7) || (j == 1 && i > 3 && i < 17) || (j == 7 && i > 3 && i < 17)){ //border kotak luar
                            nilai = 2;
                        }else if((i==6 || i ==14) && (j==3 || j==5 )){ //area wall baris 6 dan 14
                            nilai = 2;
                        }else if((i==7 || i==13) && (j>=3 && j<=5)){ //area wall baris 7 dan 13
                            nilai = 2;
                        }else if((i==9 || i==11 ) && (j==3 || j==5)){ //area wall baris 9 dan 11
                            nilai = 2;
                        }else if((i==10 && j==4)){ //area wall baris 10
                            nilai = 2;
                    //Food
                        }else if(i==10 && (j==3 || j==5)){  //buah bonus
                            nilai = 4;
                    //no render
                        }else if((i <= 3 || i >= 17) && (j >= 1 || j == 20)){
                            nilai = 1;
                        }else if((i >=4 || i <= 16) && (j >= 8 || j == 21)){
                            nilai = 1;
                        }else{
                            nilai = 0;

                        }

                }else if (lv == 2){
                    printf("");
                }
                P1 = Alokasi(nilai);
                if(i==1){
                    InsertLast(&(*L1),P1);
                    P2 = First(*L1);
                }
                else{
                    InsertLast(&L2,P1);
                    baris(down) = P1;
                    down = Next(down);
                }
            }
            if(i>1){
                P2 = baris(P2);
            }
            down = P2;
        }
}

void map_view(sprite *s, List L){
    int x,y; //posisi awal map
    int gridSize = 50;
    address P1,P2;

    cleardevice();
    if (First(L)==Nil){
        printf ("List kosong.\n\n");
    }else{
        P1=First(L);
        while (P1!=Nil){
            P2=P1;
            while (P2!=Nil){
                if(Info(P2) == 2){
                    //readimagefile("gambar//wall.jpg",x,y,x+gridSize,y+gridSize);
                    putimage(x,y,s->WallMap,COPY_PUT);
                }else if(Info(P2) == 0){
                    //readimagefile("gambar//pellet.jpg",x,y,x+gridSize,y+gridSize);
                    putimage(x,y,s->Food,COPY_PUT);
                }else if (Info(P2) == 4){
                    //readimagefile("gambar//bonus.gif",x,y,x+gridSize,y+gridSize);
                    putimage(x,y,s->bonus,COPY_PUT);
                }/*else if(Info(P2) == 6){
                    putimage(x,y,pick->power_pelet,COPY_PUT);
                }else if(Info(P2) == 8){
                    putimage(x,y,pick->bonus,COPY_PUT);
                }*/
                x += 50;
                printf ("%d ",Info(P2));
                P2=Next(P2);
            }
            x = 150;
            y = y + 43;
            printf ("\n");
            P1=baris(P1);
        }
    }
}
