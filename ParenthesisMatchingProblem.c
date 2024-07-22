// APPLICATIONS OF STACK:
// 1. Parenthesis Matching Problem.

/*
 Conditions::
a. While popping Stack shouldn't Underflow!
b. At the End of Expression, the Stack must be Empty.
*/
#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};

// If Stack is Full
int isFull(struct stack* ptr) {
    if(ptr->top == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}
// If Stack is Empty
int isEmpty(struct stack* ptr) {
    if(ptr-> == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

// PUSH Function:
void push(struct stack *ptr, char val) {
    if(isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d to the Stack.\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// POP Function:
char pop(struct stack *ptr) {
    is(isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    } else {
        char val = ptr->arr[ptr->top];
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

int stackBottom () {
    return s->arr[0];
}

// Parenthesis Matching Function:
int parenthesisMatch(char * exp) {
    // Create & initialize the stack:
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    s->arr = (char *) malloc(sp->size * sizeof(char));

    for(int i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(') {
            push(sp, '(');
        } else if (exp[i] == ')') {
            if(isEmpty(sp)) {
                return 0;
            } 
            pop(sp);
        }
    }
    if(isEmpty(sp)) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    char * exp = "8*(9)";
    // Check if Stack is Empty:
    if (parenthesisMatch(exp)) {
        
    } else {
        printf("The Parenthesis is not matching.");
    }

    return 0;
}