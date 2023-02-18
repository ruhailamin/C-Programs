//Program to check  whether a number is even or odd

#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int x;
printf("Enter your number :\n");
scanf("%d",&x);
if(x%2==0)
{
printf("%d is even"); }
else{
printf("%d is odd");}
getch();
return 0;



}