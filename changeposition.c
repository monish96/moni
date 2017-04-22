#include<stdio.h>
int main()
{
  int v1,v2,len;
  int a,b;
  printf("Enter the x-coordinate of the left bottom vertex\n");
  scanf("%d",&v1);
  printf("Enter the y-coordinate of the left bottom vertex\n");
  scanf("%d",&v2);
  printf("Enter the length of a side\n");
  scanf("%d",&len);
  a=(v1+(len/2.0));
  b=(v2+(len/2.0));
  printf("The centre of the room is at (%d,%d)",a,b);
  return 0;
}
