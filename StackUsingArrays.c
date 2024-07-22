#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
     if(ptr->top == -1) {
        return 1;
    }
     else {
        return 0;
    }
}

int isFull(struct stack *ptr) {
    if(ptr->top == size-1) {
        return 1;
    }
    else {
        return 0;
    }
}


int main () {
    /*
    struct stack s; // 's' as a stack
    s.size = 80;
    s.top = -1;
    s.arr = (int*) malloc(s.size * sizeof(int));
    */

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    // Pushing an element manually
    // s->arr[0] = 4;
    // s->top++;

    // Check if the stack is empty:
    if(isEmpty(s)) {
        printf("The stack is empty.");
    } else {
        printf("The stack is not empty.");
    }

    // Check if the stack is full:
    if(isFull(s)) {
        printf("The Stack is Full.");
    } else {
        printf("The Stack is not Full.");
    }

    return 0;
}