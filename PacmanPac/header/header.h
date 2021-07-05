#ifndef header_H
#define header_H

#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<process.h>
#include<stdbool.h>
#include<time.h>

#include"control.h"
#include"maps.h"
#include"enemy.h"
#include"menu.h"

#define SIZEMTRX 40
#define BRS 720/SIZEMTRX //18
#define KLM 1280/SIZEMTRX //32
#define img_mtrx 40*j,40*i,40+40*j,40+40*i
#define fullscreen 0,0,getmaxx(),getmaxy()

#endif
