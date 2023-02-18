//Program to swap two numbers
void main()
{
int x,y,z;
clrscr();
printf("Enter the value of x: \n");
scanf("%d",&x);
printf("Enter the second number: \n");
scanf("%d",&y);
z=x;
x=y;
y=z;
printf("After Swapping the value of x is %d and the value of y is %d",x,y);
getch();
}