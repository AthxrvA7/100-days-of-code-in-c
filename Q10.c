#include <stdio.h>

int main(void) {
  int seconds, minutes, hours;
  printf("Enter seconds: ");
  scanf("%d", &seconds);
  // minutes = seconds / 60;
  // hours = minutes / 60;
  printf("%d:%d:%d\n", seconds / 3600, (seconds % 3600) / 60, seconds % 60);
};
