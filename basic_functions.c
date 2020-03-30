#include <stdio.h>

int isEven(int);
int isOdd(int);

int main(void){
  int num;
  printf("enter a number to check even or not : ");
  scanf("%d",&num);
  printf("%d is %s number\n",num,isEven(num)?"an even":"not an even");
  printf("enter a number to check odd or not : ");
  scanf("%d",&num);
  printf("%d is %s number\n",num,isOdd(num)?"a odd":"not a odd");
return 0;
};

int isOdd(int num)
{
  return !isEven(num);
}

int isEven(int num)
{
  return num%2==0;
}

