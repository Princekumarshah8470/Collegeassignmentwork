#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("=== Quiz Application ===\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is primarily used for system programming?\n");
    printf("1. C\n2. HTML\n3. Python\n4. CSS\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 4
    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 5
    printf("\n5. What is the value of 5 + 3?\n");
    printf("1. 6\n2. 7\n3. 8\n4. 9\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\n=== Quiz Result ===\n");
    printf("Your Score: %d out of 5\n", score);

    return 0;
}