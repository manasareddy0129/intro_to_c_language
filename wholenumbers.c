#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the limit up to which you want whole numbers: ");
    scanf("%d", &n);

    printf("Whole numbers from 0 to %d are:\n", n);
    for (i = 0; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
