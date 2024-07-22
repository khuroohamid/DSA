#include <stdio.h>
#include <stdlib.h>

// Print Array:
void printArray (int * A, int n) {
    for (int i=0; i<n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");
}

// Merge Sort
void merge(A[], int mid, int low, int high) {
    int i, j, k, B[100]; // [High-low+1];
    i =  low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) { // Comparisions and merge
        if (A[i] < A[j]) {
            B[k] = A[i];
            i++; k++;
        } else {
            B[k] = A[j];
            j++; k++;
        }
    }
    while (i <= mid) { // Copying remaining elements from A to C
        B[k] = A[i];
        k++; i++;
    }
    while (j <= high) { // Copying remaining elements from B to C
        B[k] = A[j];
        k++; j++;
    }
// Copying elements back to the original array! 
    for(i = low; i <= high; i++) {
        A[i] = B[i];
    }
}

// Recursive Merge Sort:
void mergeSort (int A, int low, int high) {
    int mid;
    if(low < high) {
        mid = (low + high) / 2;
        mergeSort(A, low ,mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main () {

    int A[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;

    printArray(A, n); 
    mergeSort(A, 0, 6);
    printArray(A, n);

    return 0;
}

