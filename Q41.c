// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, swapped_num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num < 10 || num > 99) {
        printf("Please enter a valid two-digit number.\n");
        return 1;
    }

    swapped_num = (num % 10) * 10 + (num / 10);

    printf("The swapped number is: %d\n", swapped_num);

    return 0;
};
