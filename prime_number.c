#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,c=0;
    printf("Enter a number :  ");
    scanf("%d", &n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
        if(c==0){
         printf(" %d is a Prime number", n); 
        }
         else{
         printf(" %d is not a prime number",n); 
        } 
    return 0;
}
