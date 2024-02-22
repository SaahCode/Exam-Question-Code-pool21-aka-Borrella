#include <stdio.h>

int main() {
    double r;
    double g;
    if (scanf("%lf", &r) == 1) {
        g = r * 57.29;
        printf("%.0lf", g);
    } else {
        printf("n/a");
    }
    return 0;
}