#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("Enter any year : ");
    scanf("%d",&y);
    // if(y%400==0  && y%100==0 || y%4==0 && y%100!=0)
    // {
    //  printf("%d is a leap year",y);
    // }
    // else
    // {
    //  printf("%d is not a leap year",y);
    // }
    if(y%400==0)
    {
        //leap year is perfectly divisible by 400
        printf("%d is a leap year",y);
    }
    else if(y%100==0)
    {
        //non leap year are divisible by 100 but not by 400 
        printf("%d is not a leap year",y);

    }
    else if(y%4==0)
    {
        //leap year is dividible by 4 but not by 100
        printf("%d is a leap year",y);
    }
    else{
        //all other years are not leap years
        printf("%d is not a leap year",y);
    }
return 0;
}