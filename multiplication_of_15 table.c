#include <stdio.h>

int main() {
    int n = 15, i;

    printf("Multiplication Table of %d (up to 20):\n", n);
    for (i = 1; i <= 20; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
