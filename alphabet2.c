#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char s;
int i;
printf("enter the number");
scanf("%c",&s)
if(isalpha(s)&&isdigit(s))
{
printf("alphabet");
}
else
{
printf("not alphabet");
}
}
