 #include<stdio.h>

int display(int addition)
{
   printf("the sum of all The given numbers after addition = %d\n",addition);
}
 int compute(int array[],int size)
{
int addition =0;
for (int i=0;i<size;i++)
{
addition = addition + array[i];
}

display(addition);
}
int input()
{
int array[21],size;

printf("enter the size of numbers you want to add:\n");
scanf("%d",&size);

printf("enter %d elements to add:\n",size);
for(int i=0;i<size;i++)
{
scanf("%d",&array[i]);
}

compute(array,size);
}
int main()
{
input();
}


	
