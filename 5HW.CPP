#include<stdio.h>
#include<conio.h>
void main()
{
       int n1,n2,temp;
       clrscr();
       printf("enter any two numbers");
       scanf("%d%d",&n1,&n2);//n1=15,n2=10
       printf("\n before change n1=%d and n2=%d",n1,n2);
       temp=n1;//temp=15
       n1=n2;//n1=10
       n2=temp;//n2=15
       printf("\n after interchange n1=%d and n2=%d",n1,n2);
       getch();
       }