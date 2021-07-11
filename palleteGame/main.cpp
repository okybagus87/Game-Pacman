
#include "header.h"

using namespace std;

address Head,Tail = NULL;

int main()
{
    game *p = buildGame(50,24,18);
    startGame(p);


    //closegraph();
    return 0;
}
