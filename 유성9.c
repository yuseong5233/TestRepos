#include <stdio.h>

int main() {
    int n, num, max;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error! Invalid count.\n");
    } else {
        printf("Enter numbers:\n");
        scanf("%d", &max);

        for (int i = 1; i < n; i++) {
            scanf("%d", &num);
            if (num > max) {
                max = num;
            }
        }
        printf("Maximum = %d\n", max);
    }

    return 0;
}
