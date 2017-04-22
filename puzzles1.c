#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if((m==0)||(n==0))
    {
        printf("0");
    }
    else
    {
        printf("%d",(1+m/2+n/2));
    }
    return 0;
}
