#include <stdio.h>

int main() {
    int i, n = 10;

    for(i = 1; i <= 20; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
