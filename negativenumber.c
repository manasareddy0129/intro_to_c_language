#include <stdio.h>
int main() {
    int i=-9;
    printf("Enter the number: \n");
    scanf("%d", &i);

    if (i > 0)
    {
        printf("is a positive number\n", i);
        }
    else if (i == 0) {
    
        printf("%d is zero\n", i);
    }
    else{
        printf("%d is a negative number\n", i);
}
    return 0;
}
