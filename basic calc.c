#include<stdio.h>
int main()
{
  int a, b;
  char op;
  scanf("%d\n",&a);
  scanf("%c\n",&op);
  scanf("%d",&b);
  switch(op)
  {
    case '+':
      printf("The sum is %d",a+b);
    break;
    case '-':
    printf("The difference is %d",a-b);
    break;
    case '*':
    printf("The product is %d",a*b);
    break;
    case  '/':
    printf("The quotient is %d",a/b);
    break;
    case  '%':
    printf("The remainder is %d",a%b);
    break;
    default:
    printf("Invalid Input");
  
}  
return 0;
}
