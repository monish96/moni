#include <stdio.h>
#include <string.h>
int digit(char);
int main()
{
    char val[1000];
    int i = 0;
    long int number = 0;
    scanf("%s",val);
    while (val[i])
    {
        if (digit(val[i])  2)
        {
            if (digit(val[i]) = digit(val[i+1]))
            number = number + digit(val[i]);
        else
        {
            number = number + (digit(val[i + 1]) -
            digit(val[i]));
            i++;
        }
        i++;
    }
   return 0;
}
int digit(char c)
{
    int value = 0;
    switch (c)
    {
    case 'I':
        value = 1;
        break;
    case 'V':
        value = 5;
        break;
    case 'X':
        value = 10;
        break;
    case 'L':
        value = 50;
        break;
    case 'C':
        value = 100;
        break;
    case 'D':
        value = 500;
        break;
    case 'M':
        value = 1000;
        break;
    case '0':
        value = 0;
        break;
    default:
        value = -1;
    }
    return value;
}
