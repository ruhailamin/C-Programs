//Program to insert element in an Array at the end

#include<stdio.h>
 int main()
 {
 	int m,i,new;
 	int arr[100];
 	printf("Enter the size of array MAX[100]: ");
 	scanf("%d",&m);
 	printf("\nEnter %d elements of array",m);
 	for(i=0;i<m;i++)
 	{
 	  scanf("%d",&arr[i]);	
	}
	printf("\nYour entered array is:\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",arr[i]);
	}
    printf("\nEnter the new element : ");
    scanf("%d",&new);
    m++;
    arr[m-1]=new;
    printf("updated Array is : ");
    for(i=0;i<m;i++)
    {
        printf("\t %d",arr[i]);
    }
    return 0;
 }
