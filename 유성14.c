#include <stdio.h>

int main() {
    int data[2];
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &data[0], &data[1]);

    if (data[1] < 0) {
        printf("Cannot calculate a negative exponent.\n");
        return 0;
    }

    for (int k = 0; k < data[1]; k++) {
        result = result * data[0];
    }

    printf("%d ^ %d = %lld\n",
           data[0], data[1], result);

    return 0;
}
