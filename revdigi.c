#include<stdio.h>
#include<conio.h>
void main()
{
int a,s=0,n;
clrscr();
printf("\nEnter the number that have to be reversed :");
scanf("%d",&a);
while(a!=0)
{
  n=a%10;
  s=s*10+n;
  a=a/10;
  printf("\nThe Reversed string is :%d",s);
}
getch();
}
