#include <stdio.h>

long long calculatePower(int n, int p) {
    long long value = 1;

    for (int j = 0; j < p; j++) {
        value = value * n;
    }

    return value;
}

int main() {
    int number, exponent;

    printf("Enter two numbers: ");
    scanf("%d %d", &number, &exponent);

    if (exponent < 0) {
        printf("Invalid exponent.\n");
    } else {
        printf("%d power %d = %lld\n",
               number, exponent,
               calculatePower(number, exponent));
    }

    return 0;
}
