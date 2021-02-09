#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   float sum=1.0,fact=1.0,j,i,no;
   printf("enter the no:");
   scanf("%f",&no);
   for(i=2;i<=no;i++);
   {
      for(j=i;j>0;j--)
      {
      fact=fact*j;
      }
      sum=sum+1/fact;
      fact=1.0;
      }
      printf("the sum is :-->%f",sum);
      getch();
      }