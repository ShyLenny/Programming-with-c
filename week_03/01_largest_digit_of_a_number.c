#include <stdio.h>
int main()
{
    int num,d;
    int largest =0;
    printf("Enter the number:");
    scanf("%d",&num);
    while (num >0)
    {
       d = num%10;
       if (d>largest)
       {
           largest = d;
       }

        num = num/10;

    
    }
    printf("largest digit = %d\n",largest);
    return 0;
}