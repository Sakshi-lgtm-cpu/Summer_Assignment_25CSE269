#include <stdio.h>
#include <string.h>

struct Ticket {
    char name[50];
    int age;
    int ticket_no;
};

struct Ticket t[100];
int totalTickets = 10;   // Total available tickets
int booked = 0;

// Book Ticket
void bookTicket() {
    if (totalTickets == 0) {
        printf("Sorry! No tickets available.\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", t[booked].name);

    printf("Enter Age: ");
    scanf("%d", &t[booked].age);

    t[booked].ticket_no = booked + 1;

    booked++;
    totalTickets--;

    printf("Ticket booked successfully!\n");
    printf("Your Ticket Number is: %d\n", t[booked - 1].ticket_no);
}

// Cancel Ticket
void cancelTicket() {
    int ticket_no, i;

    printf("Enter Ticket Number to cancel: ");
    scanf("%d", &ticket_no);

    for (i = 0; i < booked; i++) {
        if (t[i].ticket_no == ticket_no) {
            printf("Ticket cancelled successfully for %s\n", t[i].name);

            for (int j = i; j < booked - 1; j++) {
                t[j] = t[j + 1];
            }

            booked--;
            totalTickets++;
            return;
        }
    }

    printf("Ticket not found!\n");
}

// View Available Tickets
void availableTickets() {
    printf("Available Tickets: %d\n", totalTickets);
}

// Display Booking Details
void displayBookings() {
    int i;

    if (booked == 0) {
        printf("No bookings found.\n");
        return;
    }

    for (i = 0; i < booked; i++) {
        printf("\nTicket No: %d", t[i].ticket_no);
        printf("\nName: %s", t[i].name);
        printf("\nAge: %d\n", t[i].age);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Available Tickets\n");
        printf("4. Display Bookings\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;
            case 2:
                cancelTicket();
                break;
            case 3:
                availableTickets();
                break;
            case 4:
                displayBookings();
                break;
            case 5:
                printf("Thank you!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}