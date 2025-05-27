// 9. Write a program in C to separate odd and even integers into separate arrays.

// Test Data :

// Input the number of elements to be stored in the array :5

// Input 5 elements in the array :

// element - 0 : 25

// element - 1 : 47

// element - 2 : 42

// element - 3 : 56

// element - 4 : 32

// Expected Output :

// The Even elements are :

// 42 56 32

// The Odd elements are :

// 25 47
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
    printf("The Even elements are : \n");
    for (int i = 0; i < a; i++){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        }
    }
    printf("\nThe Odd elements are : \n");
    for (int i = 0; i < a; i++){
        if(arr[i]%2!=0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}