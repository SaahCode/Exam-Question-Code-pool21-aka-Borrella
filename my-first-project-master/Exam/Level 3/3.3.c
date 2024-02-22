//Code for swap first number to last number.
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int a, b, c;
    a = x % 10;
    b = x / 10 % 10;
    c = x / 100;
    int n;
    n = a * 100 + b * 10 + c;
    printf("%03d", n);
    return 0;
}
