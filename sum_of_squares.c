// Program to calculate the sum of squares

#include<stdio.h>
int main()
{
int n,sum=0,a;
printf("Enter a number : ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
a=i*i;
sum=sum+a;
}
printf("Sum is %d",sum);
}
