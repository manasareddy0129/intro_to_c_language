#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows for the rhombus: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
       
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
       rhombus pattern using_stars,c
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
