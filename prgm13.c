#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,c=2;
printf("enter the value");
scanf("%d",&n);
for(c=2;c<=n-1;c++)
{
if(n%c==0)
{
printf("not a prime number");
break;
}
}
if(c==n)
{
printf("prime number");
}
getch();
}
