// 10. Write a program in C to delete an element at a desired position from an array.

// Test Data :

// Input the size of array : 5

// Input 5 elements in the array in ascending order:

// element - 0 : 1

// element - 1 : 2

// element - 2 : 3

// element - 3 : 4

// element - 4 : 5

// Input the position where to delete: 3

// Expected Output :

// The new list is : 1 2 4 5
#include <stdio.h>

int main()
{
    int a, n;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &a);
    int arr[a];
    printf("Input %d number of elements in the array :\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("Input the position where to delete: ");
    scanf("%d", &n);
    for (int i = n-1; i < a-1; i++)
    {
        arr[i] = arr[i+1];
    }   for (int i = 0; i < a-1; i++){
            printf("%d ", arr[i]);
        }
    
    
    return 0;
}