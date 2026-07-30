#include <stdio.h>

int main()
{
    int bDay, bMonth, bYear;
    int cDay, cMonth, cYear;
    int age;

    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &bDay, &bMonth, &bYear);

    printf("Enter Current Date (DD MM YYYY): ");
    scanf("%d %d %d", &cDay, &cMonth, &cYear);

    age = cYear - bYear;
     if (cMonth < bMonth || (cMonth == bMonth && cDay < bDay))
    {
        age--;
    }
    printf("Age = %d years", age);

    return 0;
}