#include <stdio.h>

int main(void) {
  int simple, compound, principal, rate, time;
  printf("Enter the principal amount: ");
  scanf("%d", &principal);
  printf("Enter the rate of interest: ");
  scanf("%d", &rate);
  printf("Enter the time period: ");
  scanf("%d", &time);
  simple = (principal * rate * time) / 100;
  compound = principal * (1 + rate / 100) * time - principal;
  printf("Simple Interest: %d\n", simple);
  printf("Compound Interest: %d\n", compound);
  return 0;
};
