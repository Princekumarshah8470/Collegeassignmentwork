#include <stdio.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;

void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("Student record added successfully.\n");
}

void displayStudents() {
    int i;

    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n===== STUDENT RECORDS =====\n");
    printf("Roll No\tName\t\tMarks\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%-10s\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int i, r;

    printf("Enter Roll Number to search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}