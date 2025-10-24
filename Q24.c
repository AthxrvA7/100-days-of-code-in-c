#include<stdio.h>

int main(){
  int units, cost;
  printf("Enter the number of units: ");
  scanf("%d", &units);
  if(units <= 100) {
    cost = units * 5; 
  }
  else if (units <= 200) {
    cost = 100 * 5 + (units - 100) * 7;
  }
  else if (units <= 300) {
    cost = 100 * 5 + 100 * 7 + (units - 200) * 10;
  }
  else
    cost = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
  printf("The total cost is: %d\n", cost);
};
