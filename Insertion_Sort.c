#include <stdio.h>
#include <stdlib.h>

// Insertion Sort:
void printArray(int *A, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n) {
    int key, j; // key (element) for the comparison with J (element)
    // Loop for passes
    for (int i = 1; i <= n-1; i++) // This depicts the number of passes ie n-1;
    {   
        key = A[i]; // key = element of Array ie i=1 (for ist pass)
        j = i-1; // (j=0) ist element of the array a (for ist pass)
        
        // Loop for each pass:
        while (j >= 0 && A[j] > key) { // A[j] = index 0 (for the ist pass)
            A[j+1] = A[j]; 
            j--;
        }
        A[j+1] = key; // sets 54 as key (for ist pass)
       }
}

int main () {
    // DRY RUN:
    //  -1   0    1   2  3   4  5
    //      12,| 54, 65, 7, 23, 9 --> i=1, key=54, j=0
    //      12,| 54, 65, 7, 23, 9 --> 1st pass done. (i=1)!

    //      12, 54,| 65, 7, 23, 9 --> i=2, key=65, j=1
    //      12, 54,| 65, 7, 23, 9 --> 2nd pass done. (i=2)!

    //      12, 54, 65,| 7, 23, 9 --> i=3, key=7, j=2
    //      12, 54, xx,| 65, 23, 9 --> 3rd pass done. (i=3)!

    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}