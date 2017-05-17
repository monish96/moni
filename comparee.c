#include<stdio.h>
int main()
{
int aa,bb,cc;
scanf("%d%d%d",&aa,&bb,&cc);
if(aa>bb)
printf("%d is greater",aa);
else if(bb>cc)
printf("%d is greater",bb);
else
printf("%d is greater",cc);
return 0;
}
