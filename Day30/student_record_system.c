#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100], n = 0;
    char name[100][50];
    int choice, i, searchRoll, found;

    do {
        printf("\n--- STUDENT RECORD SYSTEM ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                printf("Record added successfully!\n");
                break;

            case 2:
                printf("\nRoll No\tName\tMarks\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &searchRoll);
                found = 0;

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
                    printf("Student record not found!\n");
                break;

            case 4:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}