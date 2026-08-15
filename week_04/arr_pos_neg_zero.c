#include <stdio.h>

int main() 
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    //accepting input elements for array
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    //printing if pos, neg or zero
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > 0)
            printf("%d is Positive\n", arr[i]);
        else if (arr[i] < 0)
            printf("%d is Negative\n", arr[i]);
        else
            printf("%d is Zero\n", arr[i]);
    }
    return 0;
}