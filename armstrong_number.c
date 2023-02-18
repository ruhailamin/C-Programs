//Program for how to find whether a number is armstrong or not

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,arm=0,c;
    printf("Enter a three-digit number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
      r= n%10;   //remainder(r) contains the last digit
      arm= (r*r*r) + arm; 
      n= n/10;  //removing last digit from the original number
    }
    if(c==arm)
    printf("Your entered number is an Armstrong number");
    else
    printf( "Your entered number is not an Armstrong Number");
    return 0;
}