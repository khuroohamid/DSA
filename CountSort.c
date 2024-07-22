#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* TIME COMPLEXITY:
O(m+n) -> O(n) Linear [At the cost of Extra Space]   
*/

// Print Array:
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}

// Find the max element in A.
int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

// Count Sort:
void countSort(int *A, int n)
{
    int i, j;
    // Find the max element in A.
    int max = maximum(A, n);

    // Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initialize the array elements to 0;
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array.
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i] + 1];
    }

    i = 0; // Counter for count array
    j = 0; // Counter for given array (A in this case)

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

// Main Function
int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;

    printArray(A, n);
    mergeSort(A, n);
    printArray(A, n);

    return 0;
}