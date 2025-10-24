#include <stdio.h>

int main(void) {
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  if (ch >= 'a' && ch <= 'z') {
    printf("Lowercase letter.\n");
  }
  else if (ch >= 'A' && ch <= 'Z') {
    printf("Uppercase letter.\n");
  }
  else if (ch >= '0' && ch <= '9')
    printf("Digit.\n");
  else
    printf("Special character.\n");
};
