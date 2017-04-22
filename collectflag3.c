#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a>b&&a>c)
  {
    printf("%d is the maximum number",a);
  }
  else if(b>c)
  {
    printf("%d is the maximum number",b);
  }
  else
  {
    printf("%d is the maximum number",c);
  }
  return 0;
}
