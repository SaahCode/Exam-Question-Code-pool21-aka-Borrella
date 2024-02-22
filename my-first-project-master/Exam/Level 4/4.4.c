#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int maxDigit = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            n /= 10;
        }
        printf("%d", maxDigit);
    } else {
        printf("n/a");
    }
    return 0;
}