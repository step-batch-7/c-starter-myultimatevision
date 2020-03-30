#include <stdio.h>

long int factorial(int);
void fibonacci(int);
void printOddNumbers(int);
void printEvenNumbers(int);
void printMultiplicationTable(int,int);
int sumOfNNumbers(int,int);
int productOfNNumbers(int,int);
void printOddNumbersBetween(int,int);

int main(void){
  int number;
  int multiplicand,multiplier;
  int startingRange,endingRange;

  printf("enter a number to calculate factorial :");
  scanf("%d",&number);
  printf("Factorial of %d is %ld\n",number,factorial(number));

  printf("enter a number to get fibonacci series under that ");
  scanf("%d",&number);
  fibonacci(number);

  printf("enter a number to get odd numbers series between 1 to n :");
  scanf("%d",&number);
  printOddNumbers(number); 

  printf("enter a number to get even numbers series between 1 to n :");
  scanf("%d",&number);
  printEvenNumbers(number); 

  printf("enter multiplicand and multiplier : ");
  scanf("%d",&multiplicand);
  scanf("%d",&multiplier);
  printMultiplicationTable(multiplicand,multiplier);

  printf("enter starting range and ending range for sum : ");
  scanf("%d",&startingRange);
  scanf("%d",&endingRange);
  int sum = sumOfNNumbers(startingRange,endingRange);
  printf("Sum of numbers from %d to %d is %d\n",startingRange,endingRange,sum);

  printf("enter starting range and ending range for product : ");
  scanf("%d",&startingRange);
  scanf("%d",&endingRange);
  int product = productOfNNumbers(startingRange,endingRange);
  printf("product of numbers from %d to %d is %d\n",startingRange,endingRange,product);

  printf("enter starting range and ending range for for print odd numbers ");
  scanf("%d",&startingRange);
  scanf("%d",&endingRange);
  printf("odd numbers betwwn %d to %d is :\n",startingRange,endingRange);
  printOddNumbersBetween(startingRange,endingRange);

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

void printEvenNumbers(int number){
  int index;
  for(index=2;index<=number;index+=2){
    printf("%d\n",index);
  }
}

void printMultiplicationTable(int multiplicand,int multiplier){
 for(int index=1;index<=multiplier;index++){
   printf("%d x %d = %d\n",multiplicand,index,multiplicand*index);
 }
}

int sumOfNNumbers(int startingRange,int endingRange){
  int sum = 0;
  int index= startingRange;
  for(;index<=endingRange;index++){
    sum=sum+index;
  }
  return sum;
}

int productOfNNumbers(int startingRange,int endingRange){
  int product = 1;
  int index= startingRange;
  for(;index<=endingRange;index++)
  {
    product=product*index;
  }
  return product;
}

void printOddNumbersBetween(int startingRange,int endingRange){
  int index= startingRange+(startingRange%2==0);
  for(;index<=endingRange;index+=2){
    printf("%d\n",index);
  }
}
