#include <stdio.h>

int isEven(int);
int isOdd(int);
int square(int);
int cube(int);
int gcd(int,int);

int main(void)
{
  int number1,number2;

  printf("enter a number to check even or not : ");
  scanf("%d",&number1);
  printf("%d is %s number\n",number1,isEven(number1)?"an even":"not an even");

  printf("enter a number to check odd or not : ");
  scanf("%d",&number1);
  printf("%d is %s number\n",number1,isOdd(number1)?"a odd":"not a odd");

  printf("enter a number to find Square : ");
  scanf("%d",&number1);
  printf("square of %d is %d\n",number1,square(number1));

  printf("enter a number to find Cube : ");
  scanf("%d",&number1);
  printf("cube of %d is %d\n",number1,cube(number1));

  printf("enter two numbers to find GCD : ");
  scanf("%d",&number1);
  scanf("%d",&number2);
  printf("GCD of %d and %d is %d\n",number1,number2,gcd(number1,number2));

  return 0;
};

int isOdd(int number)
{
  return !isEven(number);
}

int isEven(int number)
{
  return number%2==0;
}

int square(int number)
{
 return number*number;
}

int cube(int number)
{
 return number*square(number);
}

int gcd(int number1,int number2){
  if(number1%number2==0)
  {
    return number2;
  }
  return gcd(number2,number1 % number2);
}

