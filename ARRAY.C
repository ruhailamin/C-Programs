#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n,x,c=0;
clrscr();
printf("Enter the no of elements u want in ur array");
scanf("%d",&n);
printf("Enter %d elements then \n",n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("Enter the element u want to check in ur array");
scanf("%d",&x);
for(i=0;i<n;i++)
{
  if(x==a[i])
  c++ ;
}
  printf("%d is present %d times in ur array",x,c);

getch();
return 0;
}