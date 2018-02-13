#include<stdio.h>
#include<string.h>
int main()
{
int i,l,count=0;
char str[100];
printf("enter the string");
scanf("%d",&str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]>='0'&&str[i]<='9')
{
count++;
}
printf("%d",count);
}
