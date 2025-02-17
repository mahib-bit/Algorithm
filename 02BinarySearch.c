#include <stdio.h>

int main()
{
    int a[] = {1, 5, 16, 24, 36, 56, 73, 81, 91, 99};
    int number;
    int left, right, middle;
    left = 0;
    right = 9;
    
    printf("Enter the number you would like to search: ");
    scanf("%d", &number);

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (a[middle] == number)
        {
            printf("Number found at position %d\n", middle+1);
            return 0;
        }
        else if (a[middle] < number)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Number not found\n");
    return 0;
}