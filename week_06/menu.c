// 1) stores values given as input in 1d array
// 2) sort in ascending order
// 3) switch case menu of ascending or descending and print according to that

// #include<stdio.h>
// int main ()
// {
//     int arr[10], n, i;

//     //accept input for array elements
//     printf("Enter %d elements:\n", 10);
//     for (i = 0; i < 10; i++) 
//     {
//         scanf("%d", &arr[i]);
//     }

//     int temp, swapped;

//     for (int i = 0; i < 10 - 1; i++) 
//     {
//          // Reset flag for each pass
        
//         // n - i - 1 because the last i elements are already sorted
//         for (int j = 0; j < 10 - i - 1; j++) 
//         {
//             if (arr[j] > arr[j + 1]) 
//             {
//                 // Swap the elements
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
                
//                 // Mark that a swap occurred
//             }
//         }
//         // Optimization: If no two elements were swapped, the array is already sorted
//     }


//     char order;
//     printf("Enter an order of sorting: A for ascending or D for descending");
//     scanf("%c",&order);


//         if (order=='A')
//         {
//             printf("\nArray elements are: ");
//             for (i = 0; i < 10; i++) 
//             {
//                 printf("%d ", arr[i]);
//             }
//         }
//         if (order== 'D')
//         {
//             printf("\nArray elements are: ");
//             for (i = 10; i <= 10; i--) 
//             {
//                 printf("%d ", arr[i]);
//             }
//         }
    
// }
//1d array stores 10 numbers input by user then sees a menu with 2 options to sort and print the 10 numbers in ascending or descneding order
#include <stdio.h>
int main(){
    int a[10];
    int temp,ch;
    printf("Enter 10 numbers: \n");
    for(int i=0; i<10;i++){
        printf("Enter number %d:\n",(i+1));
        scanf("%d", &a[i]);
    }
    
     printf("1. Ascending order\n");
     printf("2. Descending order\n");
     printf("Enter ur choice\n");
     for(int j =0;j<10;j++){
        for(int k=1+j;k<10;k++){
            if(a[j]>a[k]){
             temp=a[j];
             a[j]=a[k];
             a[k]=temp;
            }
        }
     }
    scanf("%d",&ch);
    switch(ch){
        case 1:
       for(int i=0; i<10;i++){
        printf("%d: %d \n",(i+1), a[i]);

    } 
    break;
    case 2: 
     for(int i=9; i>=0;i--){
        printf("%d: %d \n",(i+1), a[i]);
        
    } 
    break;
    default: 
    printf("Invalid choice");
    }
    return 0;
}
//create a program that allows a user to offer upto . use a 2d array to store a friends name. after each name is entered the user should have the option to enter another name or print out a report that shows each name entered thus far