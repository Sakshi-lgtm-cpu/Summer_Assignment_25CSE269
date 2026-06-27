#include <stdio.h>

struct Salary {
    int id;
    char name[50];
    float basic, bonus, deduction, netSalary;
};

int main() {
    struct Salary s[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Records\n");
        printf("3. Search Employee Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &s[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &s[n].basic);

                printf("Enter Bonus: ");
                scanf("%f", &s[n].bonus);

                printf("Enter Deduction: ");
                scanf("%f", &s[n].deduction);

                s[n].netSalary = s[n].basic + s[n].bonus - s[n].deduction;

                n++;
                printf("Salary record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No salary records found.\n");
                } else {
                    printf("\nSalary Records:\n");
                    for (i = 0; i < n; i++) {
                        printf("\nID: %d", s[i].id);
                        printf("\nName: %s", s[i].name);
                        printf("\nBasic Salary: %.2f", s[i].basic);
                        printf("\nBonus: %.2f", s[i].bonus);
                        printf("\nDeduction: %.2f", s[i].deduction);
                        printf("\nNet Salary: %.2f\n", s[i].netSalary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (s[i].id == id) {
                        printf("\nEmployee Salary Found:\n");
                        printf("ID: %d\n", s[i].id);
                        printf("Name: %s\n", s[i].name);
                        printf("Net Salary: %.2f\n", s[i].netSalary);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found.\n");

                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}