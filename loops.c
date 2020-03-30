#include <stdio.h>

long int factorial(int);
void fibonacci(int);
void printOddNumbers(int);

int main(void){
  int number;

  printf("enter a number to calculate factorial :");
  scanf("%d",&number);
  printf("Factorial of %d is %ld\n",number,factorial(number));

  printf("enter a number to get fibonacci series under that ");
  scanf("%d",&number);
  fibonacci(number);

  printf("enter a number to get odd numbers series between 1 to n ");
  scanf("%d",&number);
  printOddNumbers(number); 
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

void printOddNumbers(int number){
  int index ;
  for(index=1;index<=number;index+=2){
    printf("%d\n",index);
  }
}
