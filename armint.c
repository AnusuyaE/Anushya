#include<stdio.h>
int main()
{
int i,n,t,sum=0,rem;
printf("enter the number");
scanf("%d",&n);
t=n;
{
while(t!=0)
{
t=t%n;
sum=sum+rem*rem*rem;
t=t%10;
}
if(sum==n)
{
printf("the nmber is armstrong",n);
}
else
{
printf("the number is not armstrong",n);
}
return 0;
}
}
