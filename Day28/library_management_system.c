#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int quantity;
};

struct Book b[100];
int count = 0;

void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &b[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[count].author);

    printf("Enter Quantity: ");
    scanf("%d", &b[count].quantity);

    count++;
    printf("Book added successfully!\n");
}

void displayBooks() {
    int i;
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    for (i = 0; i < count; i++) {
        printf("\nBook ID: %d", b[i].id);
        printf("\nBook Name: %s", b[i].name);
        printf("\nAuthor: %s", b[i].author);
        printf("\nQuantity: %d\n", b[i].quantity);
    }
}

void searchBook() {
    int id, i, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (b[i].id == id) {
            printf("\nBook Found!");
            printf("\nBook Name: %s", b[i].name);
            printf("\nAuthor: %s", b[i].author);
            printf("\nQuantity: %d\n", b[i].quantity);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

void issueBook() {
    int id, i;

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (b[i].id == id) {
            if (b[i].quantity > 0) {
                b[i].quantity--;
                printf("Book issued successfully!\n");
            } else {
                printf("Book not available.\n");
            }
            return;
        }
    }

    printf("Book not found!\n");
}

void returnBook() {
    int id, i;

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (b[i].id == id) {
            b[i].quantity++;
            printf("Book returned successfully!\n");
            return;
        }
    }

    printf("Book not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("Thank you!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}