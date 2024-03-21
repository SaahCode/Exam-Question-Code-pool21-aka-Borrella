#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a, b, c, p;
    a = dist(x1, y1, x2, y2);
    b = dist(x1, y1, x3, y3);
    c = dist(x3, y3, x2, y2);
    p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
   int x1, y1, x2, y2, x3, y3;            // координаты точек
   float ploshad;                     // длина

   scanf("%d%d", &x1, &y1);       // прочитали числа
   scanf("%d%d", &x2, &y2);
   scanf("%d%d", &x3, &y3);
   ploshad = area(x1, y1, x2, y2, x3, y3);    // вызываем функцию dist
   printf("%.3f\n", ploshad);         // напечатать длину
   return 0;
}
