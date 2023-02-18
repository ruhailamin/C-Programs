#include<stdio.h>
int main()
{
    int arr[500];
    int n;
    int i,k=0,position,item;
    printf("\n enter the array size:");
    scanf("%d",&n);
    printf("\n enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

     printf("\n elements of array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);

    }
    printf("\n enter the element after you want to insert");
    scanf("%d",&position);
    for(i=0;i<n;i++)
    {
        if(arr[i]==position) //compare = if element present or not
        {
            k=i;   //assigniing k with index after we want to insert new el.
            break;
        }
    }
    for(i=n;i>k;i--)   //used to swap all elements by one pos. to right
    {
        arr[i]=arr[i-1];   

    }
    if(k!=0)    //if k!=0 , then element is present in given array
    {
    printf("\n yes position found, enter the element:");
    scanf("%d",&item);
    arr[k+1]=item;      // k= previous position
    n++;
    }
    else
    {
        printf("\n Element not found");
    }
    printf("\n After modification elements of array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}