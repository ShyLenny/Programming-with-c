#include <stdio.h>
int main() 
{
    float grade;
    printf("Enter your grade: ");
    scanf("%f", &grade);

    if (grade >= 90) 
    {
        printf("You have Grade O.\n");
    } 
    else if (grade >= 80) 
    {
        printf("You have Grade A.\n");
    } 
    else if (grade >= 70) 
    {
        printf("You have Grade B.\n");
    }
    else if (grade >= 60) 
    {
        printf("You have Grade C.\n");
    } 
    else if (grade >= 50) 
    {
        printf("You have Grade D.\n");
    }
    else if (grade >= 40) 
    {
        printf("You have Grade E.\n");
    } 
    else 
    {
        printf("You have Grade F.\n");
    }

    return 0;
}