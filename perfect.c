#include<stdio.h>
int main()
{
int m,n,l,r;
scanf("%d%d",&m,&n);
l=m*n;
for(r=0;r<=l;r++)
{
l=r*r;
printf("yes");
}
return 0;
}
