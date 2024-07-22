#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[5][5], rows, columns, i, j;

    printf("Enter the order of the matrix. The order should be less than 5 × 5:\n");
    scanf("%d %d", &rows, &columns); // User will input the order of the matrix. 

    printf("Enter the elements of the matrix:\n"); // Prompt the user to enter the elements of the matrix of order &rows, &columns.
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]); // Store the elements in the matrix.
        } 
    }
// --------------------------------------------------------------
    printf("The 3 tuple representation of the Matrix is: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (a[i][j] != 0) {
                printf("%d %d %d\n", (i+1), (j+1), a[i][j]);
            }
        }
    }
}   