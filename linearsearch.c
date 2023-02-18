#include<stdio.h>
int main()
{
    int i,key,n,loc=0,flag=0,arr[100];
    printf("Enter Array size: ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element u want to find : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            loc=i;
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("%d is present at index %d",key,loc);
    else 
    printf("%d is not present in Array");
}