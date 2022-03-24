#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\n Enter The Age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\n You can Drive",age);
	}
	else
	{
		printf("\n You can't Drive",age);
	}
	getch();
}