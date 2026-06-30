#include <stdio.h>
#include <string.h>

int main() {
    int empId[100], salary[100], n = 0;
    char name[100][50], department[100][50];
    int choice, i, searchId, found;

    do {
        printf("\n--- MINI EMPLOYEE MANAGEMENT SYSTEM ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf("%s", name[n]);

                printf("Enter Department: ");
                scanf("%s", department[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                printf("\nID\tName\tDepartment\tSalary\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\t\t%d\n",
                           empId[i], name[i], department[i], salary[i]);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);
                found = 0;

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        printf("Employee Found:\n");
                        printf("ID: %d\n", empId[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Department: %s\n", department[i]);
                        printf("Salary: %d\n", salary[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");
                break;

            case 4:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &searchId);
                found = 0;

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        printf("Enter new salary: ");
                        scanf("%d", &salary[i]);
                        printf("Salary updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");
                break;

            case 5:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}