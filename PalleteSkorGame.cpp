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




/*Function Add*/
address New__bullet(address Head,address Tail,int x,int y)
{
    if(Head == NULL)
    {
        Head = new Bullet;
        Tail = Head;

        Tail->next = NULL;
        Tail->prev = NULL;
    }

    else
    {
        Tail->next = new bullet;
        Tail->next->prev = Tail; /*Tail Next ,prev nya akan menunjuk ke node sebelumnya*/
        Tail = Tail->next; /*Dan tail akan menunjuk ke Tail->next*/
        Tail->next = NULL; /*Next dari Tail saat ini adalah NULL karena berada diujung dari node*/
    }

    Tail->pos_x = x; /*inisiasi dari isi node*/
    Tail->pos_y = y;

    Tail->kondisi = 0; /*kita akan mengatur kondisi menjadi 1 , hanya ketika pallete akan dihapus*/

    return Tail;

}
