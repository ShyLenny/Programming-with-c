#include <stdio.h>

int main()
{
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number does not exist.");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        printf("Factorial of %d = %lld", num, fact);
    }

    return 0;
}