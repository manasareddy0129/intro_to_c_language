#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("The number is zero.\n");
    }
    else if(num % 2 == 0) {
        printf("The number %d is even.\n", num);
    }
    else {
        printf("The number %d is odd.\n", num);
    }

    return 0;
}
