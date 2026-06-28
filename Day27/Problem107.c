#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        emp[i].hra = 0.20 * emp[i].basicSalary; // 20% HRA
        emp[i].da = 0.10 * emp[i].basicSalary;  // 10% DA
        emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    printf("\n=== Salary Details ===\n");
    printf("ID\tName\tBasic\tHRA\tDA\tGross Salary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].grossSalary);
    }

    return 0;
}