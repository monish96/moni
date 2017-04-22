#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);
  if(a==b)
    printf("%d is equal to %d",a,b);
  else if(a<b)
    printf("%d is less than %d",a,b);
  else
    printf("%d is greater than %d",a,b);
  return 0;
}
