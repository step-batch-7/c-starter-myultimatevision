#include <stdio.h>

void printCurrencyBreakDown(int);

int main(void){
  int amount;
  printf("enter amount for breakDown : ");
  scanf("%d",&amount);
  printCurrencyBreakDown(amount);
}

void printCurrencyBreakDown(int amount){
  int count;
  printf("Currency breakDown is ");
  count = amount/2000;
  printf("%d * RS 2000\n",count);
  amount = amount%2000;

  count = amount/500;
  printf("%d * RS 500\n",count);
  amount = amount%500;

  count = amount/200;
  printf("%d * RS 200\n",count);
  amount = amount%200;

  count = amount/100;
  printf("%d * RS 100\n",count);
  amount = amount%100;

  count = amount/50;
  printf("%d * RS 50\n",count);
  amount = amount%50;

  count = amount/10;
  printf("%d * RS 10\n",count);
  amount = amount%10;

  count = amount/5;
  printf("%d * RS 5\n",count);
  amount = amount%5;

  count = amount/1;
  printf("%d * RS 1\n",count);
  amount = amount%1;
}