// . Write a program in C to count the total number of duplicate elements in an array.

// Test Data :

// Input the number of elements to be stored in the array :3

// Input 3 elements in the array :

// element - 0 : 5

// element - 1 : 1

// element - 2 : 1

// Expected Output :

// Total number of duplicate elements found in the array is : 1
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
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i != j && arr[i] == arr[j])

                count++;
        }
    }
    printf("Total number of duplicate elements found in the array is : %d", count);
    return 0;
}

// there is an error