#include<stdio.h>
void main()
{
int a,p,b=0,i;
printf("enter the number is power");
scanf("%d\t%d",&a,&b);
for(i=0;i<=b;i++)
{
b=b*a;
}
printf("%d",b);
}
