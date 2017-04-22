#include<stdio.h>
int main()
{
  int x,y,z;
  char L3;
  printf("Enter x\n");
  scanf("%d",&x);
  printf("Enter y\n");
  scanf("%d",&y);
  printf("Enter z\n");
  scanf("%d",&z);
  printf("Enter the lab allocated for ACE training\n");
  scanf("%s",&L3);
  if(x<y)
  {
      printf("L1 has the minimal seating capacity");
  }
  else
  {
      printf("L2 has the minimal seating capacity");
  }
  return 0;
}
