#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n, i, choice, searchId;
    float totalValue = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Price: ");
        scanf("%f", &item[i].price);
    }

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Display Inventory\n");
        printf("2. Search Item by ID\n");
        printf("3. Calculate Total Inventory Value\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nID\tName\tQuantity\tPrice\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
                break;

            case 2:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (item[i].id == searchId) {
                        printf("\nItem Found:\n");
                        printf("ID       : %d\n", item[i].id);
                        printf("Name     : %s\n", item[i].name);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                        break;
                    }
                }

                if (i == n)
                    printf("Item not found.\n");
                break;

            case 3:
                totalValue = 0;
                for (i = 0; i < n; i++) {
                    totalValue += item[i].quantity * item[i].price;
                }
                printf("Total Inventory Value = %.2f\n", totalValue);
                break;

            case 4:
                printf("Exiting Inventory Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}