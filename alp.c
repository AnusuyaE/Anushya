#include<stdio.h>
void main()
{
char c;
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("it is alphabet");
}
else
{
printf("it is not alphabet");
}
}
