#include<stdio.h>
int main()
{
  int x,y,z;
  printf("Enter x\n");
  scanf("%d",&x);
  printf("Enter y\n");
  scanf("%d",&y);
  printf("Enter z\n");
  scanf("%d",&z);
  if((z<x)&&(z<y))
  {
      printf("L3 has the minimal seating capacity");
  }
  else if((y<z)&&(y<x))
  {
      printf("L2 has the minimal seating capacity");
  }
  else
  {
      printf("L1 has the minimal seating capacity");
  }
  return 0;
}
