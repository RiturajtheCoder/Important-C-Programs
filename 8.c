//Program to implement Adamas University Marking system

//8.1
#include <stdio.h>
void assignGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A+\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade: A\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: B+\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: B\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Grade: C\n");
    } else if (marks >= 40 && marks < 50) {
        printf("Grade: D\n");
    } else if (marks < 40 && marks >= 0) {
        printf("Grade: F (Fail)\n");
    } else {
        printf("Invalid marks entered. Please enter a valid number between 0 and 100.\n");
    }
}
int main() {
    int marks;
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);
    assignGrade(marks);
    return 0;
}

