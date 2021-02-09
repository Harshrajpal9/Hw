#include <stdio.h>
#include <conio.h>
void main()
{
    int no;
    clrscr();
    printf("\n enter the value:");
    scanf("%d",&no);
    if(no>0)
    {
    printf("\n the no is positive");
    }
    else if(no<0)
    {
    printf("\n the no is negative");
    }
    else
    printf("\n the no is zero");
    getch();
  }