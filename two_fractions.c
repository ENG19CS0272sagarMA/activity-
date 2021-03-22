   #include<stdio.h>
typedef struct{
 int n;
 int d;
}
fractions;

fractions input(){
 fractions f;
printf("enter the numerator:");
scanf("%d",&f.n);
printf("enter the denominator");
scanf("%d",&f.d);
return f;
}
int 
gcd(int n,int d){

int b;
b=1;
for(int i=2; i<=n && i<=d;i++)

{
 if(n%i==0 && d%i==0)
{
b=i;
}
}
return b;
}
fractions compute(fractions f1, fractions f2){

fractions s;

s.n=f1.n*f2.d+f1.d*f2.n;

s.d=f1.d*f2.d;

int a;

a=gcd(s.n,s.d);

s.n=s.n/a;
s.d=s.d/a;

return s;

}
 void output(fractions s, fractions a, fractions b){

printf("sum of %d/%d and %d/%d =%d/%d",a.n,a.d,b.n,b.d,s.n,s.d);
}
int
main(){
 fractions fra1, fra2,sum;

fra1=input();

fra2=input();

sum=compute(fra1,fra2);

output(sum, fra1,fra2);
return 0;
}

 

