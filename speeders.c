#include<stdio.h>
int main()
{
  float a,b,c;
  float dis,time,speed;
  scanf("%f",&dis);
  scanf("%f",&time);
  scanf("%f",&speed);
  a=dis/5280;
  b=time/3600;
  c=a/b;
  if(c>speed)
  {
    printf("Speeding");
  }
  else
  {
    printf("Not Speeding");
  }
  return 0;
}
