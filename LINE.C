#include <conio.h>
#include <graphics.h>
void main(){
// Initialize graphics library
int gd = DETECT, gm, i, j;
int x;
initgraph(&gd, &gm, "C://TURBOC3//bgi");
// Set bgcolor to white
setbkcolor(WHITE);
// Draw a line from (25,25) to (150,150)
for(x=0; x<125; x++){
putpixel(25+x, 25+x, RED);
}
getch();
closegraph();
}
