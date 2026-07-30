#include <stdio.h>
int main() {
    int choice;
    long long mobile;
    float amount;

    printf("===== Mobile Recharge Menu =====\n");
    printf("1. Airtel\n");
    printf("2. Jio\n");
    printf("3. Vi\n");
    printf("4. BSNL\n");

    printf("Select Network: ");
    scanf("%d", &choice);

    printf("Enter Mobile Number: ");
    scanf("%lld", &mobile);

    printf("Enter Recharge Amount: ");
    scanf("%f", &amount);

    switch(choice) {

        case 1:
            printf("\nRecharge Successful!\n");
            printf("Operator : Airtel\n");
            break;

        case 2:
            printf("\nRecharge Successful!\n");
            printf("Operator : Jio\n");
            break;

        case 3:
            printf("\nRecharge Successful!\n");
            printf("Operator : Vi\n");
            break;

        case 4:
            printf("\nRecharge Successful!\n");
            printf("Operator : BSNL\n");
            break;

        default:
            printf("Invalid Operator");
            return 0;
    }

    printf("Mobile Number : %lld\n", mobile);
    printf("Recharge Amount : Rs. %.2f\n", amount);
    printf("Thank you for using our service.\n");

    return 0;
}