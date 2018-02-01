#include<stdio.h>
int main()
{
int n,i,j,temp,a[100];
printf("enter the number");
scanf("%d",&n);
i=0;while(n!=0)
{
temp=n%10;
a[i]=temp;
n=n/10;
n++;
}
printf("the digits are:");
for(j-1;j<1;j++)
{
printf("%d"\t,a[j]);
}
}
