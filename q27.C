// Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

int main(){
  int i, num, sum=0;
  printf("Enter a number: ");
  scanf("%d", &num);
  for(i=1; i<=num; i++) {
    if (i%2 == 0)
      continue;
    else
      sum+=i;
  };
  printf("Sum of odd numbers = %d\n", sum);
};
