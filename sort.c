#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10];
    int i,j,temp;
    printf("Enter 10 elements : \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements Before sorting : ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nElements After sorting : ");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}