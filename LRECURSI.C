#include<stdio.h>
#include<conio.h>
void main()
{
char ch[100];
clrscr();
printf("\n Enter production rule");
gets(ch);
if(ch[0]==ch[3])
{
putch(ch[100]);
printf("->");
putch(ch[strlen(ch)-1]);
printf("A'\nA'->");
printf("%c",ch[4]);
puts("A||null");
}
else
puts("no left recursion");
getch();
}