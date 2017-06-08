#include<stdio.h>
#include<conio.h>
void main()
{
int a,remainder,originalnum , result=0,;
clrscr();
scanf("%d",&a);
originalnum=a;
while(originalnum!=0)
{
remainder=originalnum%10;
result+=remainder*remainder*remainder;
originalnum/=10;
}
if(result==a)
{
printf("armstrong number");
}
else
{
printf("not an armstrong number");
}
getch(();
}
