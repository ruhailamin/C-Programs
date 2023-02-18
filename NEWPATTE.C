#include<stdio.h>
#include<conio.h>
int main()
{

int i,n,j;
clrscr();

printf("Enter the number of rows to be printed : ");
scanf("%d", &n);

for(i=0; i<=n;i++){
	for(j=0;j<=i;j++){

	printf("* ");
		   }
	printf("\n");
}
getch();
return 0;
}