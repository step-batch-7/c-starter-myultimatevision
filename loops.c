#include <stdio.h>

long int factorial(int);

int main(void){
  int number;

  printf("enter a number to calculate factorial :");
  scanf("%d",&number);
  printf("Factorial of %d is %ld\n",number,factorial(number));
  return 0;
}

long int factorial(int number){
return number==0?1:number*factorial(number-1);
}