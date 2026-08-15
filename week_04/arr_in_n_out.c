#include <stdio.h>
int main() 
{
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //accept input for array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Display the array by printing its elements
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}