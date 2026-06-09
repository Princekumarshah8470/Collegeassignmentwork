#include <stdio.h>

int main() {
    char ch;

    for (ch = 'A'; ch <= 'E'; ch++) {
        for (int j = 1; j <= (ch - 'A' + 1); j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}