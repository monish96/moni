#include<stdio.h>
int main()
{
    int x,y,z,n,a=2;
    printf("Enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);
    printf("Enter z\n");
    scanf("%d",&z);
    printf("Enter n\n");
    scanf("%d",&n);
    if((x>n)&&(y>n))
    printf("%d lab(s) can accommodate %d students",a,n);
    else if(z>n)
    printf("%d lab can accommodate %d students",a,n);
    else
    printf("None of the labs can accommodate %d students",n);
    return 0;
    
}
