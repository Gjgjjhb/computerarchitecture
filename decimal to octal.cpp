#include <stdio.h>
int main()
{
    long decimal, remainder, quotient,octal=0;
    int octalnum[100], i = 1, j;
    printf("Enter the decimal number: ");
    scanf("%ld", &decimal);
    quotient = decimal;
    while (quotient != 0)
    {
        octalnum[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    for (j = i - 1; j > 0; j--)
        octal= octal*10 + octalnum[j];
    printf("Equivalent octal value of decimal no %d is: %d  ", decimal,octalnum);
    return 0;
}

