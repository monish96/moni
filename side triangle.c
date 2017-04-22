#include<stdio.h>
#include<math.h>
int main()
{
  int x1,x2,x3,y1,y2,y3;
  float AB,BC,AC;
  printf("x-coordinate of vertex A\n");
  scanf("%d",&x1);
  printf("y-coordinate of vertex A\n");
  scanf("%d",&y1);
  printf("x-coordinate of vertex B\n");
  scanf("%d",&x2);
  printf("y-coordinate of vertex B\n");
  scanf("%d",&y2);
  printf("x-coordinate of vertex C\n");
  scanf("%d",&x3);
  printf("y-coordinate of vertex C\n");
  scanf("%d",&y3);
  AB=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  printf("Length of side AB is %.1f\n",AB);
  BC=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
  printf("Length of side BC is %.1f\n",BC);
  AC=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
  printf("Length of side AC is %.1f\n",AC);
  return 0;
}
