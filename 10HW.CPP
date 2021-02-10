#include <stdio.h>
#include <conio.h>
void main()
{
       char ch;
       clrscr();
       printf("enter any character \n");
       scanf("%c",&ch);
       if (ch>='a' && ch<='z')
       {
       printf("%c is a smaller letter.\n",ch);
       }

       else if(ch>='0' && ch<='9')
       {
       printf("%c is a digit.\n",ch);
       }
       else if (ch>='A' && ch<='Z')
       {
       printf("%c is a capital.\n",ch);
       }
       else
       {
       printf("%c is a special characher.\n",ch);
       }
       getch();
}
