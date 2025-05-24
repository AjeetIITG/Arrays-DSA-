// . Write a program in C to read n number of values in an array and display them in reverse order.

// Test Data :

// Input the number of elements to store in the array :3

// Input 3 number of elements in the array :

// element - 0 : 2

// element - 1 : 5

// element - 2 : 7

// Expected Output :

// The values stored in the array are :2 5 7

// The values stored in the array in reverse are :7 5 2
#include <stdio.h>

int main()
{
    int a;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &a);
    int arr[a];
    printf("Input %d number of elements in the array :\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("The values stored in the array are :");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        int temp = arr[i];
        arr[0] = arr[a - i - 1];
        arr[a - i - 1] = temp;
        printf("\nThe values stored in the array in reverse are :");
        for (int i = 0; i < a; i++)
        {
            printf("%d ", arr[i]);
        }

        return 0;
    }
}
