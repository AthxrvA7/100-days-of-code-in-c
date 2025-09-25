#include<stdio.h>
int main () {  
  int num1, num2, temp;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("\nAfter swapping, num1 is:%d", num1);
  printf("\nAfter swapping, num2 is:%d", num2);
}
