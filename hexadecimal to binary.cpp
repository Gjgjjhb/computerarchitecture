#include <stdio.h>
int main() {
    int n, a[10], m, i;
    printf("Enter the hexadecimal number: ");
    scanf("%x", &n);
    m = n; // Save the decimal value in variable m
    printf("Decimal value: %d\n", m);
    for (i = 0; m > 0; i++) {
        a[i] = m % 2;
        m = m / 2;
    }
    printf("Binary of Given Number is: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    return 0;
}


