// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    hcf = num1;
    while (num1 % hcf != 0 || num2 % hcf != 0) {
        hcf--;
    }
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
};
