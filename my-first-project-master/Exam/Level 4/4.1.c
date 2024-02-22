#include <stdio.h>

long long fact(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}
long long binocoef(int n, int k) { return fact(n) / (fact(k) * fact(n - k)); }
int main() {
    int n;
    scanf("%d", &n);

    for (int k = 0; k <= n; k++) {
        printf("%lld", binocoef(n, k));
        if (k < n) {
            printf(" ");
        }
    }
    return 0;
}