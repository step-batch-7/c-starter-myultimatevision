#include <stdio.h>

long int factorial(int);
void fibonacci(int);

int main(void){
  int number;

  printf("enter a number to calculate factorial :");
  scanf("%d",&number);
  printf("Factorial of %d is %ld\n",number,factorial(number));

  printf("enter a number ");
  scanf("%d",&number);
  fibonacci(number);
  return 0;
}

long int factorial(int number){
return number==0?1:number*factorial(number-1);
}

void fibonacci(int number){
  printf("Fibonacci series under %d is :\n",number);
  int previousNumber=0;
  int currentNumber =1;
  printf("%d\n",previousNumber);
  while(currentNumber<number){
   int temp = currentNumber;
   printf("%d\n",currentNumber);
   currentNumber=previousNumber+currentNumber;
   previousNumber=temp;
     }
}

