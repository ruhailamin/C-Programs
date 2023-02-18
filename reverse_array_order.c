#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i;
    printf("Enter five array elements one by one : ");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=5;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}