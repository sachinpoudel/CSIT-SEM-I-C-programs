// this program will find the largest element of each row of matrix
#include <stdio.h>

int main() {
    int i, j, m, n;
    
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d", &m, &n);
    
    int mat[m][n]; // Declare matrix after getting input for m and n

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {  
            scanf("%d", &mat[i][j]);
        }
    }

    // Finding the largest element in each row
    for (i = 0; i < m; i++) {
        int largest = mat[i][0]; 
        for (j = 1; j < n; j++) { 
            if (mat[i][j] > largest) {
                largest = mat[i][j];
            }
        }
        printf("Largest element of row %d is: %d\n", i + 1, largest);
    }

    return 0;
}
