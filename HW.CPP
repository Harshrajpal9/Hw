#include<stdio.h>
#include<conio.h>
void main()
{
	int b,h,area;
	clrscr();
	printf("enter the value of base and height");
	scanf("%d%d",&b,&h);
	area=0.5*b*h;
	printf("area of triangle = %d",area);
	getch();
      }