#include<stdio.h>
int main()
{
int f=0,n=1,s,last,i;
printf("enter the limit");
scanf("%d",last);
printf("%d%d",f,s);
for(i=2;i<last;i++)
{
n=f+s;
f=s;
s=n;
}
printf("%d",n);
}
