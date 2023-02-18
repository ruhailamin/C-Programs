/*Program to find whether a number is in uppercase or lowercase
without using inbuilt functions */
#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
clrscr();
printf("Enter a character : \n");
scanf("%c",&ch);
if(ch >= 'A' && ch <='Z')
{
printf(" Character is in UPPERCASE Letters");
}
else
{
printf(" Character is in lowercase letters");
}
 getch();
 return 0;

}