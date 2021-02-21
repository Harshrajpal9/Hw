#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("enter marks\n");
	scanf("%d",&marks);
	if(marks>=80)
	{
	     printf("distinction");
	}
	else if(marks>=60)
	{
	     printf("first class");
	}
	else if(marks>=40)
	{
	     printf("second class");
	}
	else
	{
	     printf("fail");
	}
	getch();
}