#include<stdio.h>
int main()
{
int b,e;
long long result=1;
scanf("%d",&b);
scanf("%d",&e);
while(e!=0)
{
result*=b;
--e;
}
printf("ans:%11d",result);
return 0;
}
