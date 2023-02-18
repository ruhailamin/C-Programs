#include<stdio.h>
int main()
{
    int  arr[500],n,i,max;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        // printf("\nEnter element at arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Your entered array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nThe largest element is %d",max);
    return 0;
}