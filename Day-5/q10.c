//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Reading the input from the user
    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // 1. Calculate hours: 1 hour = 3600 seconds
    hours = total_seconds / 3600;

    // 2. Extract remaining seconds after taking out hours
    // then divide by 60 to get minutes (1 minute = 60 seconds)
    minutes = (total_seconds % 3600) / 60;

    // 3. Extract the leftover seconds
    seconds = total_seconds % 60;

    // Display the result in H:M:S format matching your sample output
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
