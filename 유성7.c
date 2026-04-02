#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Negative number.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                count++;
            }
        }
        printf("Number of even numbers from 1 to %d = %d\n", n, count);
    }

    return 0;
}
