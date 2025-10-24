#include<stdio.h>

int main(){
  float num1, num2;
  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);
  char op;
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &op);

  switch(op) {
    case '+':
      printf("%.2f + %.2f = %.2f",num1, num2, num1+num2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f",num1, num2, num1-num2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f",num1, num2, num1*num2);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f",num1, num2, num1/num2);
      break;
    case '%':
      printf("%.2f % %.2f = %.2f",num1, num2, (int)num1%(int)num2);
      break;
    default:
      printf("Error! operator is not correct");
  }
};
