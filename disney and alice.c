#include<stdio.h>
int main()
{
  int a;
    int b;
  printf("The bird said :\n");
  scanf("%d",&a);
  b=(a%10)+(a/10);
  printf("Patrick and Johnny must go in path-%d to find Alice",b);
  return 0;       
}
