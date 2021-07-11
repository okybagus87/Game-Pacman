#include"sound.h"

void soundmenu(){
	PlaySound("sound/display/menu.wav", NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
}


void soundPlayGame(){
	PlaySound("sound/playgame/backsound.wav", NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
}
