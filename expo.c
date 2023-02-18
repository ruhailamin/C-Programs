//program to find exponential of number
#include<stdio.h>
#include<conio.h>
int main(){
    int base,exp,result=1;
    printf("Enter base number : ");
    scanf("%d", &base);
    printf("Enter an exponent : ");
    scanf("%d", &exp);
    while(exp !=0) {
    result= result*base;
    exp--;
    }
    printf("The calculated result is %d",result);
    return 0;
}