#include <stdio.h>
#include <string.h>

struct Bank {
    int acc_no;
    char name[50];
    float balance;
};

struct Bank b;

void createAccount() {
    printf("Enter Account Number: ");
    scanf("%d", &b.acc_no);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    printf("Account created successfully!\n");
}

// Deposit Money
void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    b.balance += amount;
    printf("Amount deposited successfully!\n");
}

// Withdraw Money
void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= b.balance) {
        b.balance -= amount;
        printf("Withdrawal successful!\n");
    } else {
        printf("Insufficient balance!\n");
    }
}

// Check Balance
void checkBalance() {
    printf("Current Balance: %.2f\n", b.balance);
}

void displayDetails() {
    printf("\nAccount Number: %d", b.acc_no);
    printf("\nAccount Holder Name: %s", b.name);
    printf("\nBalance: %.2f\n", b.balance);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Bank Account System ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Details\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayDetails();
                break;
            case 6:
                printf("Thank you!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}