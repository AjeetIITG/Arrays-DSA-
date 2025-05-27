// 15. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

// Test Data :

// Input the number of rows of the matrix : 2

// Input the number of columns of the matrix : 2

// Input elements in the first matrix :

// element - [0],[0] : 0

// element - [0],[1] : 0

// element - [1],[0] : 1

// element - [1],[1] : 0

// Expected Output :

// The given matrix is sparse matrix.

// There are 3 number of zeros in the matrix
#include <stdio.h>

int main()
{
    int n, m, i, j;
    int count1 = 0;
    int count2 = 0;

    printf("Input the number of rows of the matrix : ");
    scanf("%d", &n);
    printf("Input the number of columns of the matrix : ");
    scanf("%d", &m);
    printf("Input elements in the first matrix :\n");
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("element - [%d],[%d] :", i, j);
            scanf("%d", &arr[i][j]);
            printf("\n");
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
                count1++;

            if (arr[i][j] != 0)
                count2++;
        }
    }
    if (count1 > count2)
    {
        printf("The given matrix is sparse matrix.\n");
        printf("There are %d number of zeros in the matrix.\n", count1);
    }
    else
        printf("The matrix is not a sparse matrix.");

    return 0;
}