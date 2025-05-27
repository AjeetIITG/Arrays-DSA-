// 8. Write a program in C to find the maximum and minimum elements in an array.

// Test Data :

// Input the number of elements to be stored in the array :3

// Input 3 elements in the array :

// element - 0 : 45

// element - 1 : 25

// element - 2 : 21

// Expected Output :

// Maximum element is : 45

// Minimum element is : 21
#include <stdio.h>

int main()
{
    int a, i, j, count = 1, max, min;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &a);
    int arr[a];
    printf("Input %d number of elements in the array :\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a; i++){
        max = arr[0];
       if(arr[i]>arr[0]){
        max = arr[i];
       }
    }
    printf("Maximum element is : %d\n", max);


    for(int i = 0; i < a; i++){
        min = arr[0];
       if(arr[i]<arr[0]){
        min = arr[i];
       }
    }
    printf("Minimum element is : %d", min);
    return 0;
}
    