// 3. Write a program in C to find the sum of all elements of the array.

// Test Data :

// Input the number of elements to be stored in the array :3

// Input 3 elements in the array :

// element - 0 : 2

// element - 1 : 5

// element - 2 : 8

// Expected Output :

// Sum of all elements stored in the array is : 15
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
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    printf("Sum of all elements stored in the array is : %d", sum);
    return 0;
}
