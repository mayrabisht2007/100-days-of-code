//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int min_digit, max_digit;
    
    if (scanf("%lld", &num) != 1) return 0;
    if (scanf("%d %d", &min_digit, &max_digit) != 2) return 0;
    
    if (num == 0 && min_digit <= 0 && max_digit >= 0) {
        printf("0\n");
        return 0;
    }
    
    if (num < 0) {
        num = -num;
    }

    int freq[10] = {0};

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    int max_count = -1;
    int most_frequent_digit = -1;

    for (int i = min_digit; i <= max_digit; i++) {
        if (i >= 0 && i <= 9) {
            if (freq[i] > max_count) {
                max_count = freq[i];
                most_frequent_digit = i;
            }
        }
    }

    printf("%d\n", most_frequent_digit);

    return 0;
}
