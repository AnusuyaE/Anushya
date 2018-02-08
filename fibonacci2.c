#include<stdio.h>
int main()
{
int f=0,s,last,n;
printf("enter the limit");
scanf("%d",&limit");
scanf("%d%d",&f,&s);
for(i=0;i<5;i++)
{
n=f+s;
f=s;
s=n;
}
printf("%d",n);
}
