#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contacts
    for (i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", contacts[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", contacts[i].phone);
    }

    // Display contacts
    printf("\n=== Contact List ===\n");
    printf("Name\t\tPhone Number\n");

    for (i = 0; i < n; i++) {
        printf("%-15s %s\n",
               contacts[i].name,
               contacts[i].phone);
    }

    return 0;
}