#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("You entered zero it is neither a positive or a negative.");
        else
            printf("%lf a negative number.",number);
    }
    else
        printf("%lf a positive number.",number);
    return 0;
}
