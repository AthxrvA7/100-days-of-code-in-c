#include<stdio.h>

int main() {
    int cel, far;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &cel);
    far = (cel * 9 / 5) + 32;
    printf("The temperature in Fahrenheit is: %d\n", far);
}
