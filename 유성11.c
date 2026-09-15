#include <stdio.h>

int main() {
    int base, exp;
    long long power = 1;

    printf("Base: ");
    scanf("%d", &base);

    printf("Exponent: ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Negative exponent is not allowed.\n");
        return 0;
    }

    while (exp > 0) {
        power *= base;
        exp--;
    }

    printf("Answer = %lld\n", power);

    return 0;
}
