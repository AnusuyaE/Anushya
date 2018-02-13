#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
printf("hte even factor is",n);
for(i=2;i<n;i+2)
{
if(n%i==0)
{
printf("\n%d",i);
}
return 0;
}
}
