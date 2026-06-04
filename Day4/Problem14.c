#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("The %dth Fibonacci term is %lld", n, a);
    else if (n == 2)
        printf("The %dth Fibonacci term is %lld", n, b);
    else {
        for (i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("The %dth Fibonacci term is %lld", n, b);
    }

    return 0;
}