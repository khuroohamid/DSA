#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size; // set manually & usually C indices start from 0, thats why we used size-1;
    int top;
    int *arr;
};

int isFull(struct stack* ptr) {
    if(ptr->top == ptr->size - 1) { //size -1 for a reason, read line 5 comment. ((-1 == 10-1))
        return 1;
    } else {
        return 0;
    }
}
int isEmpty(struct stack* ptr) {
    if(ptr->top == -1) { // Index Starts from "0", So -1 indicates empty. 
        return 1;
    }
    else {
        return 0;
    }
}

// PUSH Function:
void push(struct stack *ptr, int val) {
    if(isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d to the Stack.\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
} 

// POP Function:
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// PEEK Function:
int peek(struct stack *s, int i) {
    int arrayInd = sp->top -1 + 1;
    if(arrayInd < 0) {
        printf("Invalid Position.\n");
        return -1;
    } else {
        return s->arr[arrayInd];
    }
}

int stackTop (struct stack *s) {
    return s->arr[s->top];
}

int stackBottom (struct stack *s) {
    return s->arr[0];
}

int main () {
    
    /*
    struct stack s; // 's' as a stack
    s.size = 80;
    s.top = -1;
    s.arr = (int*) malloc(s.size * sizeof(int));
    */

    struct stack *s = (struct stack *) malloc(sizeof(struct stack)); // Instance Created.
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
    printf("Stack has been created successfully.\n");

    printf("Before Pushing, Full: %d\n", isFull(s));
    printf("Before Pushing, Empty:%d\n", isEmpty(s));

    push(s, 34);
    push(s, 24);
    push(s, 14);
    push(s, 04);
    push(s, 14);
    push(s, 24);
    push(s, 34);
    push(s, 44);
    push(s, 54);
    push(s, 64); // Pushed 10 values in the Stack.

    // push(s, 99); // Stack Overflow since the size of the stack is 10.


    printf("After Pushing, Full?: %d\n", isFull(s));
    printf("After Pushing, Empty?: %d\n", isEmpty(s));

    printf("Popped %d from the Stack.\n", pop(s)); // LIFO !
    printf("Popped %d from the Stack.\n", pop(s)); // LIFO !
    printf("Popped %d from the Stack.\n", pop(s)); // LIFO !

    // Print int values from the Stack:
    for(int j = 0; j < s->top+1; j++) 
    {
    printf("The value at position %d is %d\n", i, peek(s, j));
    }

    printf("The Topmost Value of the Stack is %d\n", stackTop(s));
    printf("The Bottom Most Value of the Stack is %d\n", stackBottom(s));

    return 0;
}

