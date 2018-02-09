#include<stdio.h>
int main()
{
int c=0,x=1,n,i;
scanf("%d",&n);
while(n!=0)
{
n=n/2;
c++;
}
for(i=0;i<c+1;i++)
x=x*2;
printf("%d",x);
}
