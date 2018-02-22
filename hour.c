#include<stdio.h>
int main()
{
int m,hr,min;
printf("enter the minute");
scanf("%d",&m);
hr=m/52;
min=m%52;
printf("%d:%d",hr,min);
}
