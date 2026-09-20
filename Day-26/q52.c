#include <stdio.h>

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        if (i > 1) {
            printf("\n");
        }
    }

    return 0;
}
