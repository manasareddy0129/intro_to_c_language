#include <stdio.h>
int main() {
    float num1, num2, average;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    average = (num1 + num2) / 2;

    printf("The average of %.2f and %.2f is %.2f\n", num1, num2, average);

    return 0
