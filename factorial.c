#include<stdio.h>
#include<conio.h>
void main()
{
int n;
unsigned long long factorial=1;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
factorial*=i;
}
printf("factorial of %d=%llu",n,factorial);
getch();
}
