#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float marks[5], total = 0, percentage;
    int i;
    char grade;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    // Input marks for 5 subjects
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = total / 5;

    // Determine grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n===== Marksheet =====\n");
    printf("Student Name: %s\n", name);
    printf("Roll Number: %d\n", roll);

    for(i = 0; i < 5; i++) {
        printf("Subject %d Marks: %.2f\n", i + 1, marks[i]);
    }

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}