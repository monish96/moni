# include <stdio.h>
int main()
{
  int len,wid,a;
  float sqm,b;
  printf("Enter the length of the bed\n");
  scanf("%d",&len);
  printf("Enter the width of the bed\n");
  scanf("%d",&wid);
  printf("Enter the cost per sqm (in dollars)\n");
  scanf("%f",&sqm);
  a = (len*wid);
  b = ((sqm*a)*100);
  printf("The quantity of cover needed is %dsqm\n", a);
  printf("The cost of the cover in cents is %.2f", b);
  return 0;
}
