#include <conio.h>
#include <graphics.h>
void main(){
// Initialize graphics library
int gd = DETECT, gm, i, j;
initgraph(&gd, &gm, "C://TURBOC3//bgi");
// Set bgcolor to white
setbkcolor(15);
// Draw 4 pixels on the screen
putpixel (25,25, RED);
putpixel(30,25,RED);
putpixel(35,25, RED);
putpixel(40,25, RED);
// Closing statements
getch();
closegraph();
}
