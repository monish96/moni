#include<stdio.h>
int main()
{
  int X1,X2,X3,Y1,Y2,Y3;
  float p,q;
  printf("X1\n");
  scanf("%d",&X1);
  printf("Y1\n");
  scanf("%d",&Y1);
  printf("X2\n");
  scanf("%d",&X2);
  printf("Y2\n");
  scanf("%d",&Y2);
  printf("X3\n");
  scanf("%d",&X3);
  printf("Y3\n");
  scanf("%d",&Y3);
  p=(X1+X2+X3)/3.0;
  q=(Y1+Y2+Y3)/3.0;
  printf("Dinesh's house is located at (%.1f,%.1f)",p,q);
  return 0;
}
