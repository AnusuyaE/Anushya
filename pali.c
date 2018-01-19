#include<stdio.h>
#include<conio.h>
#include<coni.h>
void main()
{
char a[10];
char b[10];
printf("enter the string");
scanf("%d",&a);
strcpy(b,a);
strev(a);
i=strcpm(a,b);
if(i==0)
{
printf("the string is palindrome");
}
else
{
printf("the string is not a palindrome");
}
}

