//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

float input()
{
 	 float temp;
  scanf("%f",&temp);
 	 return temp;
}

float calc_dist(float a, float b)
{
 	 float result;

result =sqrt(a*a + b*b);
return result;
}

void display (float u, float v,float output)
{
printf("the distance between the points is %f and %f is %2f",u,v,output);
}

int main()
{
 float u1,u2,v1,v2,u,v,dist;
printf("first point:/n");
printf("enter the value for U:\n");
u1 = input();
printf("enter the value for V:\n");
v1 =input();

printf("second point:\n");
printf("enter the value for U:\n");
u2 =input();
printf("enter the value for V:\n");
v2 =input();

u =(u2 - u1);
v =(v2 - v1);

dist =calc_dist(u,v);
display(u,v,dist);

return 0;
}






 




 



