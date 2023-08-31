#include<stdio.h>
int main()
{
    int a[10],x,i,n;
    printf("enter the array size=");
    scanf("%d",&n);
    printf("the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be search=\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("the element %d is present %d location", x,i+1);
        }
    }
    
   return 0;
} 

