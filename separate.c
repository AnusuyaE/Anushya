#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],c[20],b[30];
    int l,i,m,j,k;
    printf("enter the string");
    scanf("%s",&a);
    m=strlen(a);
    j=0;
    k=0;
    for(i=0;i<m;i++)
    {
        if(i%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
       
    }
    c[k]='\0';
        printf("the separeted string %s %s",b,c);
    return 0;
    
}
