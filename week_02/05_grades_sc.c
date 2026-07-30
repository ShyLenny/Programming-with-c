#include <stdio.h>
int main() {
    char grade;

    printf("Enter Grade (O/E/A/B/C/D/F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'O':
        case 'o':
            printf("Outstanding");
            break;

        case 'E':
        case 'e':
            printf("Excellent");
            break;

        case 'A':
        case 'a':
            printf("Very Good");
            break;

        case 'B':
        case 'b':
            printf("Good");
            break;

        case 'C':
        case 'c':
            printf("Average");
            break;

        case 'D':
        case 'd':
            printf("Pass");
            break;

        case 'F':
        case 'f':
            printf("Fail");
            break;

        default:
            printf("Invalid Grade");
    }

    return 0;
}