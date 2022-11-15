#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int score = 0;

void welcomeMessage() {
    char name[15];
    printf("Welcome to the game. Please enter your name: ");
    scanf("%s", name);
    printf("Welcome, %s! Lets begin.\n", name);
}

void multiple_choice(const char* question, int answer) {
    printf("%s", question);
    int uAnswer;
    scanf("%d", &uAnswer);
    bool result = answer == uAnswer;
    result ? (printf("%d is correct!", uAnswer)) : (printf("Incorrect, the answer is %d.\n", answer));
        if (result) {
            score++;
        }
    printf("\nYour score is %d\n", score);
    printf("---------------\n");
}

void fillinQues(const char* question, const char* correctAns) {
    char fillin[20];
    printf("\n\n%s", question);
    scanf("%s", fillin);
    bool result = !strcmp(fillin, correctAns);
    result ? printf("%s is correct\n", fillin) : printf("Incorrect, the answer is %s\n", correctAns);
        if (result) { 
            score++;
        }
        printf("\nYour score is %d\n", score);

}

int main() {
    welcomeMessage();

    multiple_choice("\nQuestion 1\nWhat is the capital of Australia\n 1. Sydney\n 2. Canberra\n 3. Melbourne\n", 2);
    multiple_choice("\nQuestion 2\nWhich Country has the most timezones?\n 1. France\n 2. Russia\n 3. China\n", 1);
    multiple_choice("\nQuestion 3\nWhich country has the most volcanos?\n 1. USA\n 2. Philippines\n 3. Japan\n", 1);
    fillinQues("Question 4\nWhat is the largest ocean in the world? The _ Ocean \n", "Pacific");
    fillinQues("Question 5\nWhat is the most populated country in the world? \n", "China");
    fillinQues("Question 6\nWhat language is most widely spoken? \n", "Mandarin");

    return 0;
}