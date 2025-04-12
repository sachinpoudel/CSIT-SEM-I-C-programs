// this program will find the sum of diagonal of matrix entered by user
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m,&n);

    int mat[m][n];

    printf("Enter the elements of matrix\n");
    for ( i = 0; i < m; i++)
    {
      for ( j = 0; j < n; j++)
      {
        scanf("%d",&mat[i][j]);
      }
      
    }
    
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for ( i = 0; i < m; i++)
    {
      
        primary_diagonal_sum += mat[i][i];
        secondary_diagonal_sum += mat[i][n-1-i];
      
      
    }
    //displaying results
printf("The sum of diagonal are:\n");
    printf("%d ", primary_diagonal_sum);
    printf("%d ", secondary_diagonal_sum);
}