//Code for find max number from massive, end of the massive -1.
#include <stdio.h>

int main() {
    int array[100];
    int max = 0;
    for (int i = 0; i == 0 || array[i - 1] != -1; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; array[i] != -1; i++) {
        if (array[i] > max) max = array[i];
    }
    printf("%d", max);
}
