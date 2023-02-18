#include<stdio.h>
#include<conio.h>
int main()
{
    int n,result =0,rem ,num;
    printf("Enter any number : \n");
    scanf("%d",&n);
    num=n;
    //Logic
    while(n!=0)
    {
        rem= n%10;    // To store the last digit of the entered number
        result=rem+result;   // To add new last digit of entered  number 
                             //to previous stored number
        n/=10;    //To remove the last digit of entered number
    }
    printf("The sum of digits of %d is %d",num,result);
}