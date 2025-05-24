// . Write a program in C to copy the elements of one array into another array.

// Test Data :

// Input the number of elements to be stored in the array :3

// Input 3 elements in the array :

// element - 0 : 15

// element - 1 : 10

// element - 2 : 12

// Expected Output :

// The elements stored in the first array are :

// 15 10 12

// The elements copied into the second array are :

// 15 10 12
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
    printf("The elements stored in first array are:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }

    int arr2[a];
    for (int i = 0; i < a; i++)
    {
        arr2[i] = arr[i];
    }
    printf("\nThe elements copied into the second array are :");
    for (int i = 0; i < a; i++)
    {
        printf("\n%d ", arr2[i]);
    }
    return 0;
}