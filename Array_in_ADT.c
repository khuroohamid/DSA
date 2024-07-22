#include <stdio.h>
#include <stdlib.h>

struct myArray //defined vars
{
    /* data */
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a, int tSize, int uSize) {
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *) malloc(tsize*sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *) malloc(tSize*sizeof(int)); // Dynamic Memory Allocation in heap;

}

// Function to print the elements of an array. 
void show (struct myArray a){
    for(int i=0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]); // () de-referencing the pointer and then accessing the element [i].
    }
}

// Function to set the value of elements in the Array;
void setVal (struct myArray *a){
    int n;
    for(int i=0; i < a->used_size; i++)
    {
        printf("Enter Elements: ");
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main () {

    struct myArray marks; //initialized struct
    createArray(&marks, 100, 20); //memory allocation
    show(&marks); // prints gibberish values

    setVal(&marks); // Set the values of elements in the array

    show(&marks); // Prints back the set values.

    return 0;
}    