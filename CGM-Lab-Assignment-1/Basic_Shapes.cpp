#include <graphics.h>
#include <conio.h>

int main()
{
    // Initialize graphics window
    initwindow(800, 600, "CGM Lab Assignment 1 - Basic Shapes");

    // Title
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(205, 35, "BASIC GRAPHICS PRIMITIVES");

    // 1. Straight Line
    setcolor(YELLOW);
    line(100, 150, 300, 150);
    setcolor(WHITE);
    outtextxy(155, 175, "Straight Line");

    // 2. Circle
    setcolor(LIGHTGREEN);
    circle(500, 150, 65);
    setcolor(WHITE);
    outtextxy(475, 235, "Circle");

    // 3. Rectangle
    setcolor(LIGHTCYAN);
    rectangle(100, 330, 300, 450);
    setcolor(WHITE);
    outtextxy(155, 465, "Rectangle");

    // 4. Triangle
    setcolor(LIGHTMAGENTA);
    line(500, 330, 420, 470);
    line(420, 470, 580, 470);
    line(580, 470, 500, 330);
    setcolor(WHITE);
    outtextxy(470, 485, "Triangle");

    getch();
    closegraph();
    return 0;
}
