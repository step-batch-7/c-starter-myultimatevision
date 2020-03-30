#include <stdio.h>
#include <math.h>

int isEven(int);
int isOdd(int);
int square(int);
int cube(int);
int gcd(int,int);
int lcm(int,int);
double simpleInterest(int,int,int);
double compoundInterest(int,float,int,int);

int main(void)
{
  int number1,number2;
  int amount,rateOfInterest,timePeriod,numberOfTimes;

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

  printf("enter two numbers to find LCM : ");
  scanf("%d",&number1);
  scanf("%d",&number2);
  printf("LCM of %d and %d is %d\n",number1,number2,lcm(number1,number2));

  printf("enter details to find Simple Interest :\n ");
  printf(" principal amount : ");
  scanf("%d",&amount);
  printf(" rate of Interest : ");
  scanf("%d",&rateOfInterest);
  printf(" time period : ");
  scanf("%d",&timePeriod);
  printf("Simple Interest of %d is %lf\n",amount,simpleInterest(amount,rateOfInterest,timePeriod));

  printf("enter details to find Compound Interest\n ");
  printf(" principal investment : ");
  scanf("%d",&amount);
  printf(" rate of Interest : ");
  scanf("%d",&rateOfInterest);
  printf(" number of times : ");
  scanf("%d",&numberOfTimes);
  printf(" time period : ");
  scanf("%d",&timePeriod);
  float rate = (float)rateOfInterest/100;
  printf("Compound Interest of %d is %lf\n",amount,compoundInterest(amount,rate,numberOfTimes,timePeriod));

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

int lcm(int number1,int number2){
  return (number1*number2)/gcd(number1,number2);
}

double simpleInterest(int amount,int rateOfInterest ,int timePeriod){
  return (double)(amount*rateOfInterest*timePeriod)/100;
}

double compoundInterest(int amount,float rateOfInterest,int numberOfTimes ,int timePeriod){
  return (double)amount*pow((1+rateOfInterest/numberOfTimes),(numberOfTimes*timePeriod));
}
