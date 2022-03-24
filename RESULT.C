#include<stdio.h>
#include<conio.h>
void main()
{
	int physics,chemistry,math,english,hindi;
	float m,p;
	printf("\n Enter your physics marks:");
	scanf("%d",&physics);
	printf("\n Enter Your Chemistry marks:");
	scanf("%d",&chemistry);
	printf("\n Enter Your Math marks:");
	scanf("%d",&math);
	printf("\n Enter Your English marks:");
	scanf("%d",&english);
	printf("\n Enter Your Hindi marks:");
	scanf("%d",&hindi);
	m=(physics+chemistry+math+english+hindi);
	printf("\n Total Marks is:%2f",m);
	p=m/5;
	printf("\n Total percentage is:%2f",p);
	getch();
}
