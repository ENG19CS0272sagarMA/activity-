//WAP to find the sum of two fractions.
#include<stdio.h>

struct frac
{
 int num ,den;
}
frac1,frac2;

int output(int f1num,int f1den,int f2num,int f2den,int a,int b)
{
printf("the addition of two fracs when  the first frac is %d/%d and second frac is %d/%d is:%d/%d\n",f1num,f1den,f2num,f2den,a,b);
}
int add(int frac1num,int frac1den,int frac2num,int frac2den) 
{
int num ,den ;

num =((frac1num*frac2den) +( frac2num*frac1den));
den =(frac1den*frac2den);

output(frac1.num,frac2.den,frac2.num,frac2.den,num,den);
}

int main()
{
 printf("the first frac:\n");
printf("enter value of num:\n");
scanf("%d",& frac1.num);
printf("enter value of den:\n");
scanf("%d",& frac1.den);

printf("the second frac:\n");
printf("enter value of  num:\n");
scanf("%d", & frac2.num);
printf("enter value of den:\n");
scanf("%d",& frac2.den);

add(frac1.num,frac1.den,frac2.num,frac2.den);

return 0;
}



      
