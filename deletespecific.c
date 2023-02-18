#include<stdio.h>
int main()
{
    int i,j,n,pos,k,arr[500];
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
    printf("\nEnter the element's location you want to delete : ");
    scanf("%d",&pos);
    if(pos>=n+1)
    printf("Deletion not possible");
    else 
    {
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    printf("Your updated Array is : ");
    for(i=0;i<n-1;i++)
    {
    printf("%d\t",arr[i]);
    }
}