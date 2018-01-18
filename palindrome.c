#include<stdio.h>
int main()
{
int n,r,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=r%10;
r=r*r+sum;
}
printf("the reverse number in c");
}
