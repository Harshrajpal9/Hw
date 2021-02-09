#include <stdio.h>
#include <conio.h>
void main()
{
       int a,b,c;
       clrscr();
       printf("enter any three number");
       scanf("%d%d%d",&a,&b,&c);
       if(a>b && a>c)
       {
	 printf("%d is greater out of three",a);
	 }
	 else
	 if(b>a && b>c)
	 printf("%d is greater number out of three",b);
	 else
	 printf("%d is greater out of three",c);
	 getch();

}