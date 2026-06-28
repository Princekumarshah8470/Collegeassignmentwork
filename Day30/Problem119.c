#include <stdio.h>

int main() {
    int empId[100], n, i, searchId;
    char empName[100][50];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s", empName[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n===== EMPLOYEE RECORDS =====\n");
    printf("ID\tName\t\tSalary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%-10s\t%.2f\n",
               empId[i],
               empName[i],
               salary[i]);
    }

    // Search employee by ID
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++) {
        if (empId[i] == searchId) {
            printf("\nEmployee Found\n");
            printf("ID     : %d\n", empId[i]);
            printf("Name   : %s\n", empName[i]);
            printf("Salary : %.2f\n", salary[i]);
            break;
        }
    }

    if (i == n) {
        printf("Employee not found.\n");
    }

    return 0;
}