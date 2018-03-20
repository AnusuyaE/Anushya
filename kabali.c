#include<stdio.h>
int main()
{
    int m[10],n[10],t,i;
    printf("enter the total  number of times");
    scanf("%d",&t);
    printf("enter the ninjas in the two colons");
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&m[i],&n[i]);
        
    }
    printf("\ndifrences  ninjas");
    for(i=0;i<t;i++)
    {
        printf("\n %d",n[i]-m[i]);
    }
    return 0;
}
