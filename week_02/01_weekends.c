#include<stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7) representing the day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            printf("weekdays\n");
            break;
        case 6:
            break;
        case 7:
            printf("weekends\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}