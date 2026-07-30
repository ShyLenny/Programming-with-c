#include <stdio.h>
int main()
{
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if (num2 == 0)
    {
        printf("Division by zero is not possible.");
    }
    else
    {
        result = num1 / num2;
        printf("Result = %.2f", result);
    }

    return 0;
}