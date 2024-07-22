#include <stdio.h>
#include <stdlib.h>

// Print Array:
void printArray (int *C, int o) {
    for (int i=0; i < o; i++) {
        printf("%d", C[i]);
    }
    printf("\n");
}

// Merge Sort
void mergeSort(A[], B[], C[], int m, int n) {
    int i, j, k;
    i = j = k = 0;

    while (i < m && i < n) { // Comparisions and merge in arrays A[] and B[]
        if (A[i] < B[j]) {
            C[k] = A[i];
            i++; k++; // i == pointer A[] && k == pointer C[]
        } else {
            C[k] = B[j];
            j++; k++; // j == pointer B[] && k == pointer C[]
        }
    }
    while (i < m) { // Copying remaining elements from A to C
        C[k] = A[i];
        k++; i++;
    }
    while (j < n) { // Copying remaining elements from B to C
        C[k] = B[j];
        k++; j++;
    }
}

int main () {
    int m = 5;
    int n = 5;
    int o = m + n;

    int A[] = {1, 2, 3, 4, 5};
    int B[] = {6, 7, 8, 9, 10};
    int C[];

    mergeSort(A, B, C, m, n);
    printArray(C, o); 


    return 0;
}  