#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

int main() {
    int base, exponent;

    printf("=== Power Calculator ===\n");
    printf("Base : ");
    scanf("%d", &base);

    printf("Exp  : ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Error: exponent cannot be negative.\n");
    } else {
        long long result = power(base, exponent);
        printf("%d^%d = %lld\n", base, exponent, result);
    }

    return 0;
}
