#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

struct Contact c[100];
int count = 0;

void addContact() {
    printf("Enter Name: ");
    scanf(" %[^\n]", c[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", c[count].phone);

    count++;
    printf("Contact added successfully!\n");
}

void displayContacts() {
    int i;

    if (count == 0) {
        printf("No contacts found.\n");
        return;
    }

    for (i = 0; i < count; i++) {
        printf("\nName: %s", c[i].name);
        printf("\nPhone: %s\n", c[i].phone);
    }
}

void searchContact() {
    char name[50];
    int i, found = 0;

    printf("Enter name to search: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < count; i++) {
        if (strcmp(c[i].name, name) == 0) {
            printf("\nContact Found!");
            printf("\nName: %s", c[i].name);
            printf("\nPhone: %s\n", c[i].phone);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");
}

void deleteContact() {
    char name[50];
    int i, j;

    printf("Enter name to delete: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < count; i++) {
        if (strcmp(c[i].name, name) == 0) {
            for (j = i; j < count - 1; j++) {
                c[j] = c[j + 1];
            }

            count--;
            printf("Contact deleted successfully!\n");
            return;
        }
    }

    printf("Contact not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Thank you!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}