// 6. Write a program in C to print all unique elements in an array.

// Test Data :

// Print all unique elements of an array:

// ------------------------------------------

// Input the number of elements to be stored in the array: 4

// Input 4 elements in the array :

// element - 0 : 3

// element - 1 : 2

// element - 2 : 2

// element - 3 : 5

// Expected Output :

// The unique elements found in the array are:

// 3 5
#include <stdio.h>

int main()
{
    int a, i, j, count = 0;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &a);
    int arr[a];
    printf("Input %d number of elements in the array :\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("The unique elements found in the array are: \n");
    for (int i = 0; i < a; i++)
    {
        int count = 0;
        for (int j = 0; j < a; j++)
        {
            if (arr[i] == arr[j])
            
                count++;
        }
            if (count == 1){
                
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}


