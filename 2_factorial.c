#include <stdio.h>

int main() {
    int n = 2, i;
    long long fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}
