#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &m, &n);

    int mat1[m][n], mat2[m][n], result[m][n];

    // Input for first matrix
    printf("Enter values for the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter values for the second matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix addition
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Printing the sum matrix
    printf("The sum of both matrices is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
