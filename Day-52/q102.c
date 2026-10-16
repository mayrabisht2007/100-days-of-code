#include <stdio.h>

void find(int arr[], int size, int x) {
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int m;

    while (s <= e) {
        m = (s + e) / 2;
        if (arr[m] >= x) {
            ans = m;
            e = m - 1;
        } else {
            s = m + 1;
        }
    }

    printf("%d\n", ans);
}

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter x value: ");
    scanf("%d", &x);

    find(arr, size, x);

    return 0;
}
