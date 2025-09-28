#include <stdio.h>
int main() {
    int n, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;   // store for printing

    while (n > 0) {             // ✅ condition
        digit = n % 10;         // get last digit
        rev = rev * 10 + digit; // build reverse
        n = n / 10;             // remove last digit
    }

    printf("Reverse of %d is %d\n", original, rev);
    return 0;
}
