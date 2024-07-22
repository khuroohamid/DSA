#include <stdio.h>
#include <stdlib.h>

void printArray(int* A, int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}

// Selection Sort:
void selectionSort(int *A, int n) {
    int indexOfMin, temp;
    printf("Running Selection Sort...\n");
    // Total number of passes.
    for (int i = 0; i < n-1; i++) {
        indexOfMin = i;
        // For each pass.
        for(int j = i + 1; j < n; j++) {
            if(A[j] < A[indexOfMin]) {
                indexOfMin = j;
            }
        }
        // Swap the min with current element at index 'i'.
        temp = A[i];
        A[i] = A[indexOfMin]
        A[indexOfMin] = temp;        
    }
}

int main () {

    int n = 5;
    int A[] = {3, 5, 2, 13, 12};

    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}