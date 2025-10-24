#include<stdio.h>
  int main() {
    int area, radius, height, circumference;
    printf("Enter the radius of the base of the cylinder: ");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);
    area = 2 * 3.14 * radius * (radius + height);
    circumference = 3.14 * radius * radius;
    printf("The surface area of the cylinder is: %d\n", area);
    printf("The circumference of the cylinder is: %d\n", circumference);
  }
