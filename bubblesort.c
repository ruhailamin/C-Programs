//Bubble sort
#include<stdio.h>
int main()
{
    int a[20],n,i,k,j,temp,b;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }
    printf("Before sorting array looks like this \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //sort
    for(b=0;b<n-1;b++)
    {
    for(k=0;k<n-1;k++)
    {
         if(a[k]>a[k+1])
      {
        temp=a[k];
        a[k]=a[k+1];
        a[k+1]=temp;
      }
    }
 }
        printf("\nAfter bubble sort : \n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}