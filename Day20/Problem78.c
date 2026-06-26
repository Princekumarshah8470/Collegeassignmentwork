#include <stdio.h>

int main() {
    int n, flag = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int A[10][10];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is Not Symmetric.\n");

    return 0;
}