#include<stdio.h>
int main()
{
    int  arr[500],n,i,small;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element at arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Your entered array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    small=arr[0];
    for(i=1;i<n;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
        }
    }
    printf("\nThe smallest element is %d",small);
    return 0;
}