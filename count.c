#include<stdio.h>
#include<string.h>
int main()
{
char c[40]="good evening fridends";
int i,count=0;
for(i=0;i<30;i++)
{
if(c[i]==' ')
count++;
}
if(count!=0)
printf("%d space",count);
}
