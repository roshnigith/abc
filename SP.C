#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
char str[100];
int i,c=0;
printf("Enter a string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
c++;
}
printf(" string has %d spaces",c);
getch();
}
