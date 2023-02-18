//Sum of elements in an Array
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter number of elements[Below 100] : ");
    scanf("%d",&n);
    printf("Enter %d elements one by one :  \n" ,n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sum of entered elements is :");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}