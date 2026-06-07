#include <stdio.h>

int reverseNum = 0;
void reverse(int n) {
    if (n == 0)
        return;

    reverseNum = reverseNum * 10 + (n % 10);
    reverse(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(num);

    printf("Reversed number = %d\n", reverseNum);

    return 0;
}