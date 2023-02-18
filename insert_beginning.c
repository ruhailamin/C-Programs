//Insert element in an Array at the beginning

#include<stdio.h>
int main()
{
    int i,j,m,new;
    int arr[100];
    printf("Enter the size of Array max[100] : ");
    scanf("%d",&m);
    printf("Enter %d elements : ",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your entered array is : ");
    for(i=0;i<m;i++)
    {
     printf(" \t%d",arr[i]);
    }
    printf("\nEnter element which u want at beginning of Array :");
    scanf("%d",&new);
    for(i=m;i>=0;i--)
    {
        arr[i]=arr[i-1];  
    }
    arr[0]=new;
    m++;
    printf("After updating Array with new element : ");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}