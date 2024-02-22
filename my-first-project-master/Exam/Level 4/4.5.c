#include <stdio.h>

int main() {
    int num, product = 1, digit, hasOdd = 0;
    if (scanf("%d", &num) == 1) {
        while (num != 0) {
            digit = num % 10;
            if (digit % 2 != 0) {
                product *= digit;
                hasOdd = 1;
            }
            num /= 10;
        }
        if (hasOdd) {
            printf("%d", product);
        } else {
            printf("0");
        }
    } else {
        printf("n/a");
    }
    return 0;
}