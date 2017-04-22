#include<stdio.h>
int main()
{
int base,exp;
long long result=1;
scanf("%d",&base);
scanf("%d",&exp);
while(exp!=0)
{
result*=base;
--exp;
}
printf("ans:%11d",result);
return 0;
}
