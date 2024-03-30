#include <iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	line(100, 0, 360, 0);
	
	getch();
	closegraph();
}
