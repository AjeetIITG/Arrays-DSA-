// 14. Write a program in C to calculate the determinant of a 3 x 3 matrix.

// Test Data :

// Input elements in the first matrix :

// element - [0],[0] : 1

// element - [0],[1] : 0

// element - [0],[2] : -1

// element - [1],[0] : 0

// element - [1],[1] : 0

// element - [1],[2] : 1

// element - [2],[0] : -1

// element - [2],[1] : -1

// element - [2],[2] : 0

// Expected Output :

// The matrix is :

// 1 0 -1

// 0 0 1

// -1 -1 0

// The Determinant of the matrix is: 1
#include <stdio.h>

int main()
{
    int i, j;
    int det;
    int arr[3][3];
    printf("Input elements in the matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("element - [%d],[%d] :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])
        - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])
        + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

    printf("The Determinant of the matrix is: %d", det);
    return 0;
}

