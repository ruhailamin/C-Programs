#include<stdio.h>
#include<conio.h>
int main(){
int n, reverse=0, rem;

printf("Enter the number you want to reverse : ");
scanf("%d", &n);
while( n!=0){
rem = n%10; //To get the last digit of the number
reverse = reverse*10 + rem;
n/=10; // To remove the last digit of the number
}
printf("Reversed number is %d", reverse);
getch();
return 0;
}
