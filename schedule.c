#include<stdio.h>
#include<string.h>
int main()                                                                                                                                        
{
  char event[50];
  float st;
  float et;
  printf("Enter event :\n");  
  scanf("%s",event);
  printf("Enter Start Time :\n");
  scanf("%f",&st);
  printf("Enter End Time :\n");
  scanf("%f",&et);
  printf("%s : %.2f AM to %.2f PM",event,st,et);
  return 0;
}
