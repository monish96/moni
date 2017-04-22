#include<stdio.h>
int main()
{
  int cents,cost;
  float bal;
  printf("Enter cents :\n");
  scanf("%d",&cents);
  printf("Enter taxi fare (in Dollars) :\n");
  scanf("%d",&cost);
  bal=((cents/100.0)-cost);
  printf("Balance : $%.2f",bal);
  return 0;
}
