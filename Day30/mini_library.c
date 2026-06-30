#include <stdio.h>
#include <string.h>

int main() {
    int bookId[100], issued[100], n = 0;
    char title[100][50], author[100][50];
    int choice, i, searchId, found;

    do {
        printf("\n--- MINI LIBRARY SYSTEM ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Title: ");
                scanf("%s", title[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                issued[n] = 0;   // 0 = Available
                n++;

                printf("Book added successfully!\n");
                break;

            case 2:
                printf("\nID\tTitle\tAuthor\tStatus\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\t", bookId[i], title[i], author[i]);
                    if(issued[i] == 0)
                        printf("Available\n");
                    else
                        printf("Issued\n");
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);
                found = 0;

                for(i = 0; i < n; i++) {
                    if(bookId[i] == searchId) {
                        printf("Book Found:\n");
                        printf("ID: %d\n", bookId[i]);
                        printf("Title: %s\n", title[i]);
                        printf("Author: %s\n", author[i]);

                        if(issued[i] == 0)
                            printf("Status: Available\n");
                        else
                            printf("Status: Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");
                break;

            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);
                found = 0;

                for(i = 0; i < n; i++) {
                    if(bookId[i] == searchId) {
                        if(issued[i] == 0) {
                            issued[i] = 1;
                            printf("Book issued successfully!\n");
                        } else {
                            printf("Book is already issued!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");
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