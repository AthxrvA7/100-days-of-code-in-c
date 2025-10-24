#include<stdio.h>

int main(){
  int fine, day;
  printf("Enter the number of days the member is late to return the book : ");
  scanf("%d", &day);
  if(day>0){
    if (day<=30){
      fine = 5*2 + 5*4 + (day-10)*6;
    }
    else if (day<=10){
      fine = 5*2 + (day-5)*4;
    }
    else if (day<=5) {
      fine = day*2;
    }
    else
      printf("Your membership has been cancelled.");
  }
  else{
    fine=0;
  }
  printf("The total fine is : %d", fine);
};
