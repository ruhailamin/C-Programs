//Program to delete element in an Array at the end

#include<stdio.h>
 int main()
 {
 	int n,i;
 	int arr[100];
 	printf("Enter the size of array MAX[100]: ");
 	scanf("%d",&n);
 	printf("\nEnter %d elements of array : ",n);
 	for(i=0;i<n;i++)
 	{
 	  scanf("%d",&arr[i]);	
	}
	printf("\nYour entered array is :  ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
     if(n>0)
     {
        n--;
     }
    printf("\nAfter deleting last element : ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }
    return 0;
}
