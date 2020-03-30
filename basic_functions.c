#include <stdio.h>

int isEven(int);
int isOdd(int);
int square(int);
int cube(int);

int main(void)
{
  int number;
  printf("enter a number to check even or not : ");
  scanf("%d",&number);
  printf("%d is %s number\n",number,isEven(number)?"an even":"not an even");
  printf("enter a number to check odd or not : ");
  scanf("%d",&number);
  printf("%d is %s number\n",number,isOdd(number)?"a odd":"not a odd");
  printf("enter a number to find Square : ");
  scanf("%d",&number);
  printf("square of %d is %d\n",number,square(number));
  printf("enter a number to find Cube : ");
  scanf("%d",&number);
  printf("cube of %d is %d\n",number,cube(number));
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

