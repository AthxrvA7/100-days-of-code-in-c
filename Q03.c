#include<stdio.h>

  int main() {
    int per, area, len, wid;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &len, &wid);
    area = len * wid;
    per = 2 * (len + wid);
    printf("Area and perimeter of rectangle is %d and %d.\n", area, per);
  };
