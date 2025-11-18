#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int topx, bottomx, lefty, righty;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setbkcolor(WHITE);

    /* draw top edge */
    for(topx = 25; topx <= 150; topx++)
    {
        putpixel(topx, 25, RED);
    }

    /* draw bottom edge */
    for(bottomx = 25; bottomx <= 150; bottomx++)
    {
        putpixel(bottomx, 225, RED);
    }

    /* draw left edge */
    for(lefty = 25; lefty <= 225; lefty++)
    {
        putpixel(25, lefty, RED);
    }

    /* draw right edge */
    for(righty = 25; righty <= 225; righty++)
    {
        putpixel(150, righty, RED);
    }

    getch();
    closegraph();
}
