//Program to delete element in an Array at the beginning

#include<stdio.h>
 int main()
 {
 	int m,i;
 	int arr[100];
  char item ;
 	printf("Enter the size of array MAX[100]: ");
 	scanf("%d",&m);
 	printf("\nEnter %d elements of array : ",m);
 	for(i=0;i<m;i++)
 	{
 	  scanf("%d",&arr[i]);	
	}
	printf("\nYour entered array is :  ");
	for(i=0;i<m;i++)
	{
		printf("%d\t",arr[i]);
	}
    // printf("\nDo you want to delete the element at beginning[Y/N] : ");
    // scanf(" %c",&item);
    // while(item=='y' || item=='Y')
    // {
      printf("\nAfter deletion Array elements are :  ");
     for(i=0;i<m-1;i++)
     {
       arr[i]=arr[i+1];
     }
    // }
     m--;
    // printf("\nUpdated Array is : ");
    for(i=0;i<=m-1;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    return 0;
}
