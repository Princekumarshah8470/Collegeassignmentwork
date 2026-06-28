#include <stdio.h>

int main() {
    int bookId[100], n, i, searchId;
    char bookName[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);
    }

    // Display books
    printf("\n===== LIBRARY BOOKS =====\n");
    printf("Book ID\tBook Name\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\n", bookId[i], bookName[i]);
    }

    // Search book by ID
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++) {
        if (bookId[i] == searchId) {
            printf("Book Found: %s\n", bookName[i]);
            break;
        }
    }

    if (i == n) {
        printf("Book not found.\n");
    }

    return 0;
}