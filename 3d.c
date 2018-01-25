#include<stdio.h>
#include<string.h>
void main()
{
 char a[50],b[50];
 printf("\n enter the first string")
 gets(a);
 
 printf("\n enter the second string");
 gets(b);
 
 strcat(a,b);
 
 printf(" \n cancadination of string",a);
 }
