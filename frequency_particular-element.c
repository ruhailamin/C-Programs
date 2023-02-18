#include<stdio.h>
int main()
{
    int arr[100],i,n,el;
    int count=0;
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element at arr[%d]",i);
        scanf("%d",&arr[i]);

    }
    printf("Your entered elements are ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter element to check it's frequency : ");
    scanf("%d",&el);
    for(i=0;i<n;i++)
    {   
        if(el==arr[i])
            count++;   
    }
    if(count>0)
    {
     printf("\nFrequency of %d is %d",el,count);
    }
    else 
    {
        printf("Element not present in Array");
    }
     
   
}