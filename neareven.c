#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n/2==0)
{
printf("nearest even number %d",n);
}
else
{
printf("nearest even number %d",--n);
}
return 0;
}
