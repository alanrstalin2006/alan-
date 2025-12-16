#include <stdio.h>

int main() {
    int r, c, i, j,sume=0;

    // Prompt user for the number of rows
    printf("Enter the number of rows (for matrices): ");
    scanf("%d", &r);

    // Prompt user for the number of columns
    printf("Enter the number of columns (for matrices): ");
    scanf("%d", &c);

    // Declare three 2D arrays: two for input matrices and one for their sum
    int matrix1[r][c], matrix2[r][c], sum[r][c];

    // Input elements for the first matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if(i>j)
            {
                matrix1[i][j]=0;
            }
            else
            {
            printf("Enter element matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if(i<j)
            {
                matrix2[i][j]=0;
            }
            else
            {   
            printf("Enter element matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
        }
    }
    printf("the elements of first matrix is\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix1[i][j]); // Print each element followed by a tab
        }
        printf("\n"); // Move to the next line after each row
    }
    printf("the elements of second matrix is\n");
    for (i = 0; i < r; i++) {                       
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix2[i][j]); // Print each element followed by a tab
        }
        printf("\n"); // Move to the next line after each row
    }2
    

    // Perform matrix addition and store the result in the 'sum' matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    printf("\nSum of the matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if(i==j)
            {
                sume= sume+sum[i][j];
            }
            
            printf("%d\t", sum[i][j]); // Print each element followed by a tab
        }
        printf("\n"); // Move to the next line after each row
    }
    printf("Sum of diagonal elements is %d",sume);
    


    return 0; // Indicate successful execution
}
