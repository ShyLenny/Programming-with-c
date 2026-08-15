#include <stdio.h>
int main()
{
    int arr[100],n,i;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    //accept input array elements
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Display even numbers
    printf("\n\nEven elements: ");
    for (i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            printf("%d ", arr[i]);
        }
    }

    // Display odd numbers
    printf("\nOdd elements: ");
    for (i = 0; i < n; i++) 
    {
        if (arr[i] % 2 != 0) 
        {
            printf("%d ", arr[i]);
        }
    }
}