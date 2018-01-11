#include<stdio.h>
void main()
{
char c;
int lowercase,uppercase;
printf("enter the alphabets");
scanf("%d",&c);
lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lowercase||uppercase)
{
printf("it is vowels");
}
else
{
printf("it is constant");
}
}
