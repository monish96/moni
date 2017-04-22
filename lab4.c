#include<stdio.h>
int main()
{
  int x,y,z,n;
  printf("Enter x\n");
  scanf("%d",&x);
  printf("Enter y\n");
  scanf("%d",&y);
  printf("Enter z\n");
  scanf("%d",&z);
  printf("Enter n\n");
  scanf("%d",&n);
  if((n<x)&&(n<y)&&(n>z))
  {
    if(x<y)
    {
        printf("L1 should be allocated to this class");
    }
    else if(y<x)
    {
        printf("L2 should be allocated to this class");
    }   
    else
    {
        printf("L3 should be allocated to this class");
    }
  }
  else
  {
      printf("None of the labs can be allocated");
  }
  return 0; 
}
