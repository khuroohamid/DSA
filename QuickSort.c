#include <stdio.h>
#include <stdlib.h>

// Print Array:
void printArray (int * A, int n) {
    for (int i=0; i<n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");
}

// Partition Function:
int partition(int *A, int low, int high) {
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

do {
    while (A[i] <= pivot) {
        i++;
    }

    while (A[j] > pivot) {
        j--;
    }

    if (i<j) { // Swap A[i] & A[j]
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        }
} while (i < j); 

  // Swap A[low] and A[j] when i < j = false;
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

// Quick Sort:
void quickSort(int A[], int low, int high) {
    int partitionIndex; // Index of pivot after partition.

    if (low < high) {
    partitionIndex = partition(A, low, high);
    quickSort(A, low, partitionIndex-1); // sort left subarray
    quickSort(A, partitionIndex+1, high); // sort right subarray
    }
}


int main () {
    int A[15] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = 9;

    printArray(A, n); 
    quickSort(A, 0, n-1);
    printArray(A, n);

    return 0;
}
   
/* DRY RUN :::::: 
Indices -->     0  1  2   3   4  5  6   7   8
Array   -->     3, 5, 2, 13, 12, 3, 2, 13, 45

// 3, 5, 2, 13, 12, 3, 2, 13, 45


*/