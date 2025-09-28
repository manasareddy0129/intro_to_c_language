#include <stdio.h>
int main() {
    int n, rev = 0, digit, original;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;   

    while (n > 0) {
        digit = n % 10;          
        rev = rev * 10 + digit; 
        n = n / 10;              
    }

    if (original == rev)
        printf("%d is a palindrome number\n", original);
    else
        printf("%d is not a palindrome number\n", original);

    return 0;
}
