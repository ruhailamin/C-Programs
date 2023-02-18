#include<stdio.h>
#include<conio.h>
int main(){
int n,fact=1,temp;
printf("Enter a number : \n");
scanf("%d", &n);
temp=n;
while(n>0){
fact = fact*n;
n--;
}
printf("The factorial of %d is %d",temp,fact);
getch();
return 0;
}
