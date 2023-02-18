 //Program to find area of circle
 #include<stdio.h>
 #include<conio.h>
int main(){
float pi=3.14;
float area;
int r;
printf("Enter the radius of circle");
scanf("%d",&r);
area=pi*r*r;
printf("The area of circle is %f",area);
return 0;
}