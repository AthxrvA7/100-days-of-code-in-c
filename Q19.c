#include <stdio.h>

int main(void) {
  int side1, side2, side3;
  printf("Enter three sides of a triangle: ");
  scanf("%d %d %d", &side1, &side2, &side3);
  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
    printf("The input is valid. \n");
    if (side1 == side2 && side2 == side3 && side1 == side3)
      printf("The triangle is equilateral. \n");
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
      printf("The triangle is isosceles. \n");
    }
    else
      printf("The triangle is scalene. \n");
  }
  else
    printf("The input is invalid. \n");
};
