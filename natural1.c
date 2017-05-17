#include<stdio.h>
int main()
{
int n,add=0,c,value;
scanf("%d",&n);
for(c=1;c<=n;c++)
{
scanf("%d",&value);
add=add+value;
}
printf("add is %d\n",add);
return 0;
}
