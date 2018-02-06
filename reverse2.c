#include<stdio.h>
#include<string.h>
void main()
{
char str[50],temp;
int i,j=0;
printf("enter the string");
scanf("%s",str);
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("the reverse string is %s",str);
}
