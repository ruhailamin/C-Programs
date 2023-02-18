#include<stdio.h>
#include<conio.h>
int main()
{
    int start,end,i,j;
    printf("Enter Lower value : ");
    scanf("%d",&start);
    printf("Enter Upper value : ");
    scanf("%d",&end);
    printf("Prime numbers between %d and %d are :  ",start,end);
    for(i=start;i<=end;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)     //if i%j==0 : it means i is not prime
            break;
        }
        if(i==j)
        printf("\t%d",i);
        
    }
        return 0;
}
