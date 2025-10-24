#include<stdio.h>

int main(){
  float profit, loss, profit_percentage, loss_percentage;
  printf("Enter profit and loss: ");
  scanf("%f %f", &profit, &loss);
  if(profit > loss) {
    profit_percentage = (profit - loss) / loss * 100;
    printf("Profit percentage: %.2f%%\n", profit_percentage);
  }
  else if(loss > profit) {
    loss_percentage = (loss - profit) / profit * 100;
    printf("Loss percentage: %.2f%%\n", loss_percentage);
  }
  else
    printf("No profit or loss\n");
};
