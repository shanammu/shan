#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,remainder,result=0;
clrscr();
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
while(i!=null)
{
remainder=i%10;
result+=reamainder*remainder*remainder;
i/=10;
}
if(result==i)
{
printf("armstrong number:%d",result);
}
}
getch();
}
