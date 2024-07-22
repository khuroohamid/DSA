#include <stdio.h>
#include <stdlib.h>

void printArray (int* a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSortAdaptive(int* a, int n) {
    int temp;
    int isSorted = 0;
    // For number of passes
    for (int i = 0; i < n-1; i++) 
    {
        printf("Working on pass number %d\n", i+1); 
        isSorted = 1;
           // For comparisions in each pass.
        for (int j = 0; j < n-1-i; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                isSorted = 0;
            }
        } 
        if(isSorted) {
            return;
        } 
    }
}

void bubbleSort(int* a, int n) {
    int temp;
    // For number of passes
    for (int i = 0; i < n-1; i++) 
    {
        printf("Working on pass number %d\n", i+1);
           // For comparisions in each pass.
        for (int j = 0; j < n-1-i; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main () {
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printArray(a, n); // Printing the Array b4 Bubble sort;
    bubbleSort(a, n);
    printArray(a, n); // Printing the Array after Bubble sort;

    printArray(a, n); // Printing the Array b4 Adaptive Bubble sort;
    bubbleSortAdaptive(a, n);
    printArray(a, n); // Printing the Array after Adaptive Bubble sort

    return 0;
} 