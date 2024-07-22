#include <stdio.h>
#include <stdlib.h>

// Traversal:
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Deletion at Index:
void indexDeletion(int arr[], int size, int element, int capacity, int index) {
    if(index >= capacity-1){
        return -1;  
    }
    for (int i = index; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
}
 
int main () {
    int arr[100] = {7, 8, 12, 28, 88};
    int size = 5, element = 45, index = 1;
    display(arr, size);
    indexDeletion(arr, size, element, 100, index);
    size -=1;
    display(arr, size);

    return 0;
}