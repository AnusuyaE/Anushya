#include<stdio.h>
int main()
{
int i,n,t,sum=0,rem;
printf("enter the number");
scanf("%d",&n);
t=n;
for(i=0;i<=0;i++)
{
while(t!=0)
{
t=n%10;
sum=sum*rem*rem*rem;
t=t%10;
}
if(sum==n)
{
printf("armstron",n);
}
else
{
printf("not armstrong",n);
}
return 0;
}
}
