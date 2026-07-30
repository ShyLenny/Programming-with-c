#include <stdio.h>
int main() {
    int choice;
    int id;
    char name[50];
    char batch[20];

    printf("===== Student Management System =====\n");
    printf("1. Enter Student Details\n");
    printf("2. Display Student Details\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter Student ID: ");
            scanf("%d", &id);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Student Batch: ");
            scanf("%s", batch);

            printf("\nStudent Details Saved Successfully!\n");
            printf("ID : %d\n", id);
            printf("Name : %s\n", name);
            printf("Batch : %s\n", batch);
            break;

        case 2:
            printf("\nNo student details available.\n");
            printf("Please choose option 1 first.\n");
            break;

        case 3:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}