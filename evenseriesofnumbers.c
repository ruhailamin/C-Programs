#include<stdio.h>
#include<conio.h>
int main()
{
    int i,start,end;
    printf("Enter the starting number : ");
    scanf("%d",&start);

    printf("Enter the ending number : ");
    scanf("%d",&end);
    printf("The requested even series is below :  \n");

    //loop to generate series of even numbers..
    for(i=start;i<=end;i++)
    {
        if(i%2==0)
        {
         printf("%d\t",i);
        }
    }
   return 0;
}