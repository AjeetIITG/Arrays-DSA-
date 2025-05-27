// 13. Write a program in C to print or display the lower triangular of a given matrix.

// Test Data :

// Input the size of the square matrix : 3

// Input elements in the first matrix :

// element - [0],[0] : 1

// element - [0],[1] : 2

// element - [0],[2] : 3

// element - [1],[0] : 4

// element - [1],[1] : 5

// element - [1],[2] : 6

// element - [2],[0] : 7

// element - [2],[1] : 8

// element - [2],[2] : 9

// Expected Output :

// The matrix is :

// 1 2 3

// 4 5 6

// 7 8 9

// Setting zero in lower triangular matrix

// 1 2 3

// 0 5 6

// 0 0 9
#include <stdio.h>

int main()
{
    int i, j, n;
    int sum = 0;

    printf("Input the size of the square matrix (less than 5):\n");
    scanf("%d", &n);
    int arr[n][n];
    printf("Input elements in the first matrix :\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] :", i, j);
            scanf("%d", &arr[i][j]);
            printf("\n");
        }
    }
    printf("The matrix is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Setting zero in lower triangular matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i > j)
            {
                arr[i][j] = 0;
            }
            
            printf("%d ", arr[i][j]);
        
    }
        printf("\n");
    }
    return 0;
}
