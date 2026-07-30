#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if(b == 0)
            {
                printf("Division by zero is not possible.");
            }
            else
            {
                printf("Result = %.2f", (float)a / b);
            }
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}