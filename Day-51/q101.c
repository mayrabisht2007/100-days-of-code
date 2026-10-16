//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

void find(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int first = -1;
    int m;

    while (start <= end) {
        m = (start + end) / 2;
        if (nums[m] == target) {
            first = m;
            end = m - 1;
        } else if (nums[m] < target) {
            start = m + 1;
        } else {
            end = m - 1;
        }
    }

    start = 0;
    end = size - 1;
    int last = -1;

    while (start <= end) {
        m = (start + end) / 2;
        if (nums[m] == target) {
            last = m;
            start = m + 1;
        } else if (nums[m] < target) {
            start = m + 1;
        } else {
            end = m - 1;
        }
    }

    if (first == -1) {
        printf("-1,-1\n");
    } else {
        printf("%d,%d\n", first, last);
    }
}

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter target value: ");
    scanf("%d", &target);

    find(nums, size, target);

    return 0;
}
