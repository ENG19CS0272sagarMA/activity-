//WAP to find the distance between two points using structures and 4 functions.
  #include<stdio.h>
   #include<math.h>
   struct input_1
{
float u1, u2, v1, v2;
};
float inputu()
{
 	float u;
 scanf("%f",&u);
 	return u;
}
float inputv()
{
float v;
scanf("%f",&v);
return v;
}
float calc(float u1,float v1,float u2,float v2)
{
  	 return(sqrt(((u2-u1)*(u2-u1))+((v2-v1)*(v2-v1))));
}
 void print(float distance)
 {
  	 printf("the distance is =%f",distance);
}
 int main()
{
 	 struct input_1 j1,j2;
 printf("enter coordinate u1");
 	 j1.u1=inputu();
 	 printf("enter coordinate v1");
 	 j1.v1=inputv();
 	 printf("enter coordinate u2");
 	 j2.u2=inputu();
 	 printf("enter coordinate v2");
 	 j2.v2=inputv();
 	 float distance=calc(j1.u1,j1.v1,j2.u2,j2.v2);
   	print(distance);
  	 return 0;
}








