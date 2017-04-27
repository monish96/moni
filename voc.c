#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    int isl, isu;

    do {
        printf("Enter an alphabet: ");
        scanf(" %c", &c);
    }
    
    while (!isalpha(c));

    isl = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

  
    isu = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  
    if (isl || isu)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
