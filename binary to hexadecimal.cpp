#include <stdio.h>

int main() {
    int num, binary_num, decimal_num = 0, base = 1, rem;

    // Binary to Decimal conversion
    printf("Enter a binary number: ");
    scanf("%d", &num);
    binary_num = num;

    while (num > 0) {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }

    // Print Binary and Decimal values
    printf("The binary number is %d\n", binary_num);
    printf("The decimal number is %d\n", decimal_num);

    // Decimal to Hexadecimal conversion
    printf("The hexadecimal value is: %x\n", decimal_num);

    return 0;
}

