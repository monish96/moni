#include<stdio.h>
  int main()
{
   int max,played;
  printf("Enter the maximum number of times\n");
  scanf("%d",&max);
  printf("Enter the number of games played\n");
  scanf("%d",&played);
 if(played < max)
 {
  printf("IN");
 } 
  else
  {  
  printf("OUT");
  }  
  return 0;
 }
