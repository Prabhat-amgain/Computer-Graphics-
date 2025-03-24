/* 
                                                               Flood fill Algoritm
*/
	 
#include<graphics.h>
#include<stdio.h>
void flood(int x1 , int y1 , int new_col , int old_col)
{
	if(getpixel(x1 , y1)==old_col)
	{
		putpixel(x1 , y1 , new_col);
		flood(x1+1,  y1 , new_col , old_col);
		flood(x1-1,  y1 , new_col , old_col);
		flood(x1,  y1+1 , new_col , old_col);
		flood(x1,  y1-1 , new_col , old_col);
	}
}
int main()
{
	int gd, gm = DETECT;
	initgraph(&gd, &gm ," ");
	rectangle(50 , 50 , 300 , 300);
	int x1  = 150;
	int y1 = 150;
	
	int newcolor = 4;
	int oldcolor = 0;
	flood(x1 , y1 , newcolor , oldcolor);
	getch();
	return 0;
	
}
