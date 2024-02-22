#include <math.h>
#include <stdio.h>
int main() {
    double m;
    double p = 21500.0;
    double r;
    double v;
    if (scanf("%lf", &r) == 1) {
        v = (4.0 / 3.0) * M_PI * pow(r, 3);
        m = v * p;
        printf("%.0lf", m);
    } else {
        printf("n/a");
    }
    return 0;
}