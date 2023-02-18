#include<stdio.h>
int main()
{
    int  arr[500],n,i,max,max1;
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
    max=max1=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        continue;
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    printf("\nThe largest element is %d",max);
    printf("\nThe second largest element is %d",max1);
    return 0;
}