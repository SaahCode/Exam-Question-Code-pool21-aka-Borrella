//Code for calculate mass of platinum ball. Don't forget - if you delete integer number language C don't look nubmer after comma. For do correct code always write ".0" after number.
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
