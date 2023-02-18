//Program to swap two integers without using third variable

void main()
{
int x,y;
clrscr();
printf("Enter the value of x : \n");
scanf("%d",&x);
printf("Enter the value of y : \n");
scanf("%d",&y);

x=x+y;
y=x-y;
x=x-y;

printf("After swapping the value  of x is %d and the value of y is %d",x,y);

getch();

}