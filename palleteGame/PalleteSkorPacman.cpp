#include"PalleteSkorPacman.h"

int RandomPos()
{
    int i, s;
    srand(time(NULL));
    for(i = 0; i < 450; i++) {

        s = (rand() % 4) * 2 + 4 ;
       
    }
      return s;
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
                    putimage(x,y,s->WallMap,COPY_PUT);
                //}else if(Info(P2) == 0){
                   // putimage(x,y,s->Food,COPY_PUT);
                }else if (Info(P2) == 4 && Ranpos==4 ){

                    putimage(x,y,s->bonus,COPY_PUT);
                }else if (Info(P2) == 6 && Ranpos==6 )
                {
                    putimage(x,y,s->bonus,COPY_PUT);
                }else if (Info(P2) == 8 && Ranpos==8)
                {
                    putimage(x,y,s->bonus,COPY_PUT);
                }else if (Info(P2) == 10 && Ranpos==10)
                {
                    putimage(x,y,s->bonus,COPY_PUT);
                }
                else{
                    putimage(x,y,s->Food,COPY_PUT);
                }
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
                            }else if(i==3&&j==5)
                            {
                                nilai=4;
                            }else if(i==3&&j==17)
                            {
                                nilai=6;
                            }else if(i==10&&j==11)
                            {
                                nilai=8;
                            }else if(i==7&&j==2)
                            {
                                nilai=10;
                            }else if(i==10&&j==8)
                            {
                                nilai=4;
                            }else if(i==17&&(j==17||j==19))
                            {
                                nilai=6;
                            }else if(j==18 &&(i==15||i==8))
                            {
                                nilai=8;
                            }else if(i==19&&j==19)
                            {
                                nilai=10;
                            }
                            else
                            {
                                nilai =0;
                            }
                   }/*Level Sedang*/
                    else if(lv==2)
                    {
                            if(i==1 || i==b)
                            {
                                nilai =2;
                            }else if(j==1 || j==k)
                            {
                                nilai =2;
                            }else if((j<=12 && j>=5) && i==5)
                            {
                                nilai =2;
                            }else if((j==5 || j==12) && i==6)
                            {
                                nilai=2;
                            }else if((j==5 || j==12) && i==7)
                            {
                                nilai = 2;
                            }else if((j==5 || j==6 || j==7) && i==8)
                            {
                                nilai = 2;
                            }else if((j==10 || j==11 || j==12) && i==8)
                            {
                                nilai = 2;
                            }else if((i>=9 && i<=11)&& j==7)
                            {
                                nilai =2;
                            }else if((i>=9 && i<=11)&& j==10)
                            {
                                nilai = 2;
                            }else if((j>=19 && j<=26) && i==5)
                            {
                                nilai =2;
                            }else if((j==19 || j==26) && i==6)
                            {
                                nilai = 2;
                            }else if((j==19 || j==26) && i==7)
                            {
                                nilai =2;
                            }else if((j>=19 &&j<=21)&& i==8)
                            {
                                nilai =2;
                            }else if((j>=24 && j<=26) && i==8)
                            {
                                nilai = 2;
                            }else if((j==21 || j==24)&& i==9)
                            {
                                nilai =2;
                            }else if((j==21 || j==24) && i==10)
                            {
                                nilai =2;
                            }else if((j==21 || j==24) && i==11)
                            {
                                nilai =2;
                            }else if((i>=14 && i<=21) && j==5)
                            {
                                nilai =2;
                            }else if((i>=14 && i<=18) && j==7)
                            {
                                nilai =2;
                            }else if((j>=7 && j<=10) && i==18)
                            {
                                nilai = 2;
                            }else if((i>=14 && i<=18) && j==10)
                            {
                                nilai =2;
                            }else if((i>=14 && i<=18) && j==13)
                            {
                                nilai =2;
                            }else if((j>=14 && j<=17)&&i==18)
                            {
                                nilai =2;
                            }else if((i>=14 && i<=18) && j==18)
                            {
                                nilai =2;
                            }else if((i>=14 && i<=18) && j==21)
                            {
                                nilai =2;
                            }else if((j==22||j==23) && i==18)
                            {
                                nilai =2;
                            }else if((i>=14 && i<=18) && j==24)
                            {
                                nilai =2;
                            }else if((i>=14 && i<=21)&&j==26)
                            {
                                nilai =2;
                            }

                            else
                            {
                                nilai = 0;
                            }
                    } 
                    /*Map Level Tinggi*/
                    else if(lv == 3)
                    {
                        if(i==1 || i==b)
                        {
                            nilai = 2;
                        }else if(j==1 || j==k)
                        {
                            nilai =2;
                        }else if((i<=7 && i>=4) && j==8)
                        {
                            nilai =2;
                        }else if((j<=12&&j>=8)&&i==4)
                        {
                            nilai =2;
                        }else if((i<=7&&i>=4)&&j==12)
                        {
                            nilai=2;
                        }else if((i<=7&&i>=4)&&j==27)
                        {
                            nilai=2;
                        }else if((j<=7&&j>=31)&&i==4)
                        {
                            nilai=2;
                        }else if((i<=7&&i>=4)&&j==31)
                        {
                            nilai=2;
                        }else if((j<=31&&j>=27)&&i==4)
                        {
                            nilai=2;
                        }
                        else if((i<=10&&i>=7)&&j==18)
                        {
                            nilai=2;
                        }else if((i<=10&&i>=7)&&j==21)
                        {
                            nilai =2;
                        }else if((j<=18&&j>=12)&&i==10)
                        {
                            nilai =2;
                        }else if((j<=27&&j>=21)&&i==10)
                        {
                            nilai=2;
                        }else if((i<=12&&i>=10)&&j==12)
                        {
                            nilai=2;
                        }else if((i<=12&&i>=10)&&j==27)
                        {
                            nilai=2;
                        }else if((j<=12&&j>=4)&&i==12)
                        {
                            nilai=2;
                        }else if((j<=35&&j>=27)&&i==12)
                        {
                            nilai=2;
                        }else if((i<=18&&i>=12)&&j==7)
                        {
                            nilai=2;
                        }else if((i<=18&&i>=12)&&j==34)
                        {
                            nilai=2;
                        }else if((j<=15&&j>=11)&&i==16)
                        {
                            nilai=2;
                        }else if((i<=16&&i>=14)&&j==15)
                        {
                            nilai=2;
                        }else if((i<=18&&i>=14)&&j==17)
                        {
                            nilai=2;
                        }else if((j<=13&&j>=11)&&i==18)
                        {
                            nilai=2;
                        }else if((j<=17&&j>=15)&&i==18)
                        {
                            nilai=2;
                        }else if((i<=20&&i>=18)&&j==13)
                        {
                            nilai=2;
                        }else if((i<=20&&i>=18)&&j==15)
                        {
                            nilai=2;
                        }else if((i<=18&&i>=14)&&j==22)
                        {
                            nilai=2;
                        }else if((j<=24&&j>=22)&&i==18)
                        {
                            nilai=2;
                        }else if((j<=28&&j>=26)&&i==18)
                        {
                            nilai=2;
                        }else if((i<=16&&i>=14)&&j==24)
                        {
                            nilai=2;
                        }else if((j<=28&&j>=24)&&i==16)
                        {
                            nilai=2;
                        }else if((i<=20&&i>=18)&&j==24)
                        {
                            nilai=2;
                        }else if((i<=20&&i>=18)&&j==26)
                        {
                            nilai=2;
                        }
                        else{
                            nilai=0;
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
