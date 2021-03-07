#include <stdio.h>
#include <conio.h>
void main()
{
       int arr[5],i;
       clrscr();
       for(i=0;i<5;i++)
       {
       printf("enter a[%d]:",i);
       scanf("%d",&arr[i]);
       }
       printf("\n printing elements of the array:\n\n");
       for(i=0;i<5;i++)
       {
       printf("%d",arr[i]);
       }
       getch();
}