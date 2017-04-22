#include <stdio.h>
int hcf(int, int);
int main()

{

    int a, b, result;
  
    scanf("%d%d", &a, &b);
    result = hcf(a, b);

    printf(" HCF IS ", a, b, result);

}

 

int hcf(int a, int b)

{

    while (a != b)

    {

        if (a > b)

        {

            return hcf(a - b, b);

        }

        else

        {

            return hcf(a, b - a);

        }

    }

    return a;

}
