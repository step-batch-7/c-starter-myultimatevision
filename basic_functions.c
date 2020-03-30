#include <stdio.h>
int isEven(int);


int main(void){
  int num;
  printf("enter a number : ");
  scanf("%d",&num);
  printf("%d is %s number\n",num,isEven(num)?"an even":"not an even");
return 0;
};

int isEven(int num)
{
  return num%2==0;
}

