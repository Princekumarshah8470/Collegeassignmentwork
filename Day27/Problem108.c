#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n===== MARKSHEET =====\n");
    printf("Name       : %s\n", name);
    printf("Roll No    : %d\n", rollNo);
    printf("Subject 1  : %.2f\n", m1);
    printf("Subject 2  : %.2f\n", m2);
    printf("Subject 3  : %.2f\n", m3);
    printf("Subject 4  : %.2f\n", m4);
    printf("Subject 5  : %.2f\n", m5);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade      : A+\n");
    else if (percentage >= 80)
        printf("Grade      : A\n");
    else if (percentage >= 70)
        printf("Grade      : B\n");
    else if (percentage >= 60)
        printf("Grade      : C\n");
    else if (percentage >= 50)
        printf("Grade      : D\n");
    else
        printf("Grade      : F\n");

    return 0;
}