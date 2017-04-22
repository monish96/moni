#include <stdio.h>
int main()
{
    int num, a, r, result = 0;

  
    scanf("%d", &num);

    a = num;

    while (a != 0)
    {
        r = a%10;
        result += r*r*r;
      a /= 10;
    }

    if(result == num)
        printf( "Armstrong number",number);
    else
        printf(" not an Armstrong number",number);

    return 0;
}
