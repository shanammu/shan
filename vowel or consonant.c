#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();
scanf("%c",&n);
if((n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u'))
{
printf("vowel");
}
else
{
printf("consonant");
}
getch();
}
