#include<stdio.h>

int main()
{
	int marks;
	clrscr();

	printf("Enter marks(0-100)");
	scanf("%d",&marks);

	if(marks<30){
	printf("FAIL");
	}
	else if(marks >= 30 && marks < 70)
	{
	printf("Grade B");
	}
	else if(marks>=70 && marks<90){
	printf("Grade A");
	}
	else {
	printf("Grade A+");

	}
	getch();
	return 0;
}
