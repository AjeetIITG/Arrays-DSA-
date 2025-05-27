// 12. Write a program in C for adding two matrices of the same size.

// Test Data :

// Input the size of the square matrix (less than 5): 2

// Input elements in the first matrix :

// element - [0],[0] : 1

// element - [0],[1] : 2

// element - [1],[0] : 3

// element - [1],[1] : 4

// Input elements in the second matrix :

// element - [0],[0] : 5

// element - [0],[1] : 6

// element - [1],[0] : 7

// element - [1],[1] : 8

// Expected Output :

// The First matrix is :

// 1 2

// 3 4

// The Second matrix is :

// 5 6

// 7 8

// The Addition of two matrix is :

// 6 8

// 10 12
#include <stdio.h>

int main()
{
    int i, j, n;
    int sum = 0;

    printf("Input the size of the square matrix (less than 5):\n");
    scanf("%d", &n);
    int arr1[n][n];
    printf("Input elements in the first matrix :\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] :", i, j);
            scanf("%d", &arr1[i][j]);
            printf("\n");
        }
    }
    int arr2[n][n];
    printf("\nInput elements in the second matrix :\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] :", i, j);
            scanf("%d", &arr2[i][j]);
            printf("\n");
        }
    }
    printf("The First matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The Second matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("The Addition of two matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = arr1[i][j] + arr2[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}
