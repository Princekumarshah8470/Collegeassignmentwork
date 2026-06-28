#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount acc;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    acc.balance += amount;
                    printf("Deposit successful.\n");
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else if (amount > acc.balance) {
                    printf("Insufficient balance.\n");
                } else {
                    acc.balance -= amount;
                    printf("Withdrawal successful.\n");
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", acc.balance);
                break;

            case 4:
                printf("\nAccount Number : %d\n", acc.accountNumber);
                printf("Account Holder : %s\n", acc.name);
                printf("Balance        : %.2f\n", acc.balance);
                break;

            case 5:
                printf("Thank you for using the Bank Account System.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}