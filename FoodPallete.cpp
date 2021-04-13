#include<graphics.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include "spawn.h"
using namespace std;
int main()
{

   // initwindow(500,500,"Game dimulai");
    string arr[15][15];
    int x,y;
    int n =3;
    int m =2;
    char move;

    //tempat map

    for(x=0;x<15;x++)
    {
        for(y = 0;y<15;y++)
        {
            cout<<arr[x][y];
        }
    }



    //desain  dari map

    for(x=0;x<15;x++)
    {
        for(y = 0;y<15;y++)
        {
            if(x==0||x==14) //membuat # untuk kotak dengan koordinat x
            {
                arr[x][y]="#";
            }else if(y==0||y==14) //membuat # untuk kotak dengan koordinat y
            {
                arr[x][y]="#";
            }else if(x==5 && y>2 && y<10){
                arr[x][y] = "#";
            }else if(x==9 && y>2 && y<10){
                arr[x][y] = "#";
            }else if(y==9 && x>2 && x<10){
                arr[x][y] = "#";
            }else if(y==12 && x>2 && x<10){
                arr[x][y] = "#";
            }else if(y==1 && x>6 && x<10){
                arr[x][y] = "#";
            }else{
                arr[12][12]="0";
                arr[x][y]="."; //menampilkan makanan/titik titik di ruang yang masih kosong
            }
        }
    }

    //menampilkan map
     arr[n][m]= "@";
     for(x=0;x<15;x++)
    {
        for(y = 0;y<15;y++)
        {
            cout<<arr[x][y]<<" ";
        }
        cout<<endl;
    }

while(true)
{
    cout<<"\nEnter Move";
    cin>>move;
    if(move =='s'){
        n++;
        if(n>0) //ketika n nya jalan
        {
            arr[n-1][m]=" "; //hapus isi
        }
    }if(move =='w'){
        n--;
        if(n>0) //ketika n nya jalan
        {
            arr[n+1][m]=" "; //hapus isi
        }
    }
    //menampilkan map
     arr[n][m]= "@";
     for(x=0;x<15;x++)
    {
        for(y = 0;y<15;y++)
        {
            cout<<arr[x][y]<<" ";
        }
        cout<<endl;
    }


}

}
