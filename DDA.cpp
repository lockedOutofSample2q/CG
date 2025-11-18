
#include <graphics.h>
#include <conio.h>
#include <iostream.h>

void dda(int xi, int yi, int xf, int yf) {
    int dx = xf - xi;
    int dy = yf - yi;
    float m = dy / dx;

    float x = xi, y = yi;
    putpixel(x, y, RED);

    if (m < 1) {
        while (x < xf) {
            x++;
            y = y + m;
            putpixel(x, y, RED);
        }
    } 
    else {
        while (y < yf) {
            y++;
            x = x + (1 / m);
            putpixel(x, y, RED);
        }
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
    dda(xi, yi, xf, yf);

    getch();
    closegraph();
}
