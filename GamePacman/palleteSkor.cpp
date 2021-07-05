#include"palleteSkor.h"

int RandomPos()
{
    int i, s;
    srand(time(NULL));
    for(i = 0; i < 450; i++) {

        s = (rand() % 4) * 2 + 4 ;
    }
      return s;
}
void TampilFood(int x, int y)
{
    readimagefile("foto/pelet.gif",x,y,x+50,y+50);
}

void TampilBurger(int x , int y) //==> menampilkan gambar burger
{
    readimagefile("foto//burger.gif",x,y,x+50,y+50);
}

void HowToPlay()
{
    FILE *FHow;
    char string[300];
    char NamaFile[65];
    FHow = fopen("howtoplay.txt","rt");
    if(FHow ==NULL)
    {
        printf("File tidak dapat dibuka ");
        exit(1);
    }

    while((fgets(string, 300, FHow))!=NULL)

        printf("%s",string);
    fclose(FHow);

}


int AturSkor(int eat)
{
    int skor;
    if(eat==1)
    {
        skor=skor+1;
    }else if(eat == 2)
    {
        skor = skor+10;
    }

    return skor;
}


