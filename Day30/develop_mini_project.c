#include <stdio.h>
#include <string.h>

int roll[100], marks[100], n = 0;
char name[100][50];

// Function to add student
void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Student added successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;
    if(n == 0) {
        printf("No records found!\n");
        return;
    }

    printf("\nRoll No\tName\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int i, searchRoll, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(roll[i] == searchRoll) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found!\n");
}

// Function to update marks
void updateMarks() {
    int i, searchRoll, found = 0;

    printf("Enter Roll Number to update marks: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(roll[i] == searchRoll) {
            printf("Enter new marks: ");
            scanf("%d", &marks[i]);
            printf("Marks updated successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found!\n");
}

// Function to delete student
void deleteStudent() {
    int i, j, searchRoll, found = 0;

    printf("Enter Roll Number to delete: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(roll[i] == searchRoll) {
            for(j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];
                strcpy(name[j], name[j + 1]);
            }
            n--;
            printf("Student deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n--- STUDENT MANAGEMENT SYSTEM ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting system...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}