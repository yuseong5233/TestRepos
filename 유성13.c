#include <stdio.h>

int main() {
    int base, exp;
    long long answer = 1;

    printf("Input base: ");
    scanf("%d", &base);

    printf("Input exponent: ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Exponent must be zero or greater.\n");
    } else {
        int count = exp;

        do {
            if (count == 0)
                break;

            answer *= base;
            count--;
        } while (count > 0);

        printf("Result: %lld\n", answer);
    }

    return 0;
}
