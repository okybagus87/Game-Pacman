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
        readimagefile("image/pacman/pacright.jpg",x,y,x+gridSize,y+gridSize);
        s->pacman=malloc(tempSizing);
        cleardevice();



    return s;
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
                }else if (Info(P2)== 5){
                    putimage(x,y,s->pacman,COPY_PUT);
                }
                /*else if(Info(P2) == 6){
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


/*MAke list 2*/
void Makelist2(List *L1 , int lv){
    List L2;
    int i,j,b,k;
    infotype nilai;
    address P1,P2,down;

    if(lv==1)
    {
        b = 20;
        k = 20;
    }else if(lv==2)
    {
        b = 22;
        k = 30;

    }else if(lv==3)
    {
        b = 22;
        k = 38;
    }

        for(i=1;i<=b;i++){
            CreateList(&L2);
            for(j=1;j<=k;j++){

                    /*Level Mudah*/

                    /*Selesai Level Mudah*/


                    /*Level Mudah*/
                   if(lv == 1)
                   {
                            if(i==1 || i==b)
                            {
                                nilai = 2;
                            }else if(j==1 || j==k)
                            {
                                nilai = 2;

                            }else if( (i>=6 && i<=16) && j==4)
                            {
                                nilai = 2;
                            }else if((i==6||i==7||i==8||i==9) && j==6)
                            {
                                nilai = 2;
                            }else if((j==6||j==7||j==8) && i==6)
                            {
                                nilai = 2;
                            }else if((i==13||i==14||i==15||i==16) && j==6)
                            {
                                nilai =2;
                            }else if((j==6||j==7||j==8) && i==16)
                            {
                                nilai = 2;
                            }else if((j==9||j==10||j==11||j==12)&& i==12)
                            {
                                nilai=2;
                            }else if((j==9||j==12)&&i==11)
                            {
                                nilai=2;
                            }else if((j==9||j==12)&&i==10)
                            {
                                nilai =2;
                            }else if((j==13||j==14||j==15) && i==6)
                            {
                                nilai = 2;
                            }else if((i==7||i==8||i==9) && j==15)
                            {
                                nilai =2;
                            }else if((j==13||j==14||j==15) && i==16)
                            {
                                nilai = 2;
                            }else if((i==13||i==14||i==15) && j==15)
                            {
                                nilai = 2;
                            }else if((i>=6 && i<=16)&& j==17)
                            {
                                nilai =2;
                            }else
                            {
                                nilai =0;
                            }
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
