#include <stdio.h>
int main()
{
    long long s;
    int count = 0;

   
    scanf("%lld", &s);

    while(s != 0)
    {
     
        s /= 10;
        ++count;
    }

    printf("Num of digits: %d", count);
}
