//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

// Define the structure for a Student
struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that finds and returns the top student's structure
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0]; // Assume the first student is the top scorer

    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i]; // Update if a higher score is found
        }
    }

    return top; // Return the entire structure by value
}

int main() {
    int n;
    
    // Read number of students
    scanf("%d", &n);
    
    struct Student students[n];

    // Read details for each student
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Call the function and store the returned structure
    struct Student topper = getTopStudent(students, n);

    // Print the result matching the sample output format
    printf("Top Student: %s | Roll: %d | Marks: %.0f\n", topper.name, topper.roll, topper.marks);

    return 0;
}
