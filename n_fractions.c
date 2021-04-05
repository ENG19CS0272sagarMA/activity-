//WAP to find the sum of n fractions.
#include<stdio.h>

struct Fraction
{
 int size,numerator[30],denominator[30];
}fraction;

int input()
{
 printf("enter the size of Fractions you want to compute:\n");
scanf("%d",&fraction.size);

printf("enter the numerator values:\n");
for(int i=0;i<fraction.size;i++)
{
scanf("%d",&fraction.numerator[i]);
}

printf("enter the denominator values:\n");
for(int i=0;i<fraction.size;i++)
{
scanf("%d",&fraction.denominator[i]);
}
}

int gcd(int num,int den)
{
if(den==0)
{
return num;
}

return gcd(den,num % den);
}

int LCM(int array[],int size)
{
 int lcm=array[0];
 for(int i=1;i<size;i++)
 {
 lcm=(((array[i]*lcm))/(gcd(array[i],lcm)));
}

return lcm;
}

int display(int Num,int Den)
{
 printf("the final computation is %d/%d",Num,Den);
}

int computeNFractions(int limit,int num[],int den[])
{
 int numerator=0;

 int denominator=LCM(den,limit);

for(int i=0;i<limit;i++)
{
numerator=numerator+(num[i]*(denominator/den[i]));
}

int GCD=gcd(numerator,denominator);

numerator=numerator/GCD;
denominator=denominator/GCD;

display(numerator,denominator);
}

int main()
{
input();
computeNFractions(fraction.size,fraction.numerator,fraction.denominator);
return 0;
}
