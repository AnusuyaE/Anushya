#include<stdio.h>
int main()
{
    int a[10],i,n,min,max;
    printf("enter the element");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
      if (a[i]<min)
    {
        min=a[i];
    }
    if(a[i]>max)
    {
        max=a[i];
    }
    printf(" min=%d",max);
    printf(" max=%d",min);
    }
    return 0;
}


