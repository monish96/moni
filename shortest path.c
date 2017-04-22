#include<stdio.h>
#include<math.h>
int main()
{
  int l,w,h;
  float a,d;
  printf("Enter the length\n");
  scanf("%d",&l);
  printf("Enter the width\n");
  scanf("%d",&w);
  printf("Enter the height\n");
  scanf("%d",&h);
 a=sqrt((l*l)+(w*w));
  d=a+h;
  printf("The Shortest distance is %.2f\n",d);
  return 0;
}
