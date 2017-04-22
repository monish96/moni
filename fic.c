#include<stdio.h>
 
int main()
{
   int n, first = 0, second = 1,a, c;
 
   
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         a = c;
      else
      {
         a = first + second;
         first = second;
         second = a;
      }
      printf("%d\n",a);
   }
 
   return 0;
}
