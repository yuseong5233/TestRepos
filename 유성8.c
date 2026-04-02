#include <stdio.h>

int main() {
    int base, exp;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    if (exp < 0) {
        printf("Error! Negative exponent not supported.\n");
    } else {
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        printf("%d^%d = %lld\n", base, exp, result);
    }

    return 0;
}
