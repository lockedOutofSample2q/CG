/* Code: Bresenham’s Algorithm */
#include <graphics.h>
#include <conio.h>
#include <iostream.h>

void bresenham(int xi, int yi, int xf, int yf) {
    int dx = xf - xi;
    int dy = yf - yi;
    int p = 2 * dy - dx;
    int x = xi;
    int y = yi;

    putpixel(x, y, RED);

    while (x < xf) {
        if (p < 0) {
            x = x + 1;
            p = p + 2 * dy;
        } else {
            x = x + 1;
            y = y + 1;
            p = p + 2 * (dy - dx);
        }
        putpixel(x, y, RED);
    }
}

void main() {
    int gd = DETECT, gm;
    int xi, yi, xf, yf;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    cout << "Enter value of x1, y1: ";
    cin >> xi >> yi;

    cout << "Enter value of x2, y2: ";
    cin >> xf >> yf;

    setbkcolor(WHITE);
    bresenham(xi, yi, xf, yf);

    getch();
    closegraph();
}
