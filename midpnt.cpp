#include <graphics.h>
#include <conio.h>
#include <iostream.h>

void put8pixel(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, RED);
    putpixel(xc - x, yc + y, RED);
    putpixel(xc + x, yc - y, RED);
    putpixel(xc - x, yc - y, RED);

    // To draw the circle, now swapped by coordinates of center.
    putpixel(xc + y, yc + x, RED);
    putpixel(xc - y, yc + x, RED);
    putpixel(xc + y, yc - x, RED);
    putpixel(xc - y, yc - x, RED);
}

void drawcircle(int xc, int yc, int radius) {
    int x = 0;
    int y = radius;
    int p = 1 - radius;

    put8pixel(xc, yc, x, y);

    while (x < y) {
        x++;
        if (p < 0) {
            p = p + 2 * x + 1;
        } else {
            y--;
            p = p + 2 * x + 1 - 2 * y;
        }
        put8pixel(xc, yc, x, y);
    }
}

int main() {
    int gd = DETECT, gm;
    int xc, yc, r;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    cout << "Enter the radius of circle: ";
    cin >> r;

    cout << "Enter co-ordinates of center (x, y): ";
    cin >> xc >> yc;

    setbkcolor(WHITE);
    drawcircle(xc, yc, r);

    getch();
    closegraph();
}
