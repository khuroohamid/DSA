#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char *arr;
}
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

char stackTop (struct stack *s) {
    return s->arr[s->top];
}

char stackBottom () {
    return s->arr[0];
}

// PRECEDENDE FUNCTION:
int precedence(char ch) {
    if(ch == '*' || ch == '/') {
        return 3;
    }
     if(ch == '+' || ch == '-') {
        return 2;
    } else {
        return 0;
    }
}

// isOperator FUNCTION:
int isOperator(char ch) {
    if (ch == '+' || ch == "-" || ch == '*' || ch == '/') {
        return 1;
    } else {
        return 0;
    }
}

// INFIX TO POSTFIX:
char *infixToPostfix(char *infix) {
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    // Initializing the stack:
    sp->size = 80;
    sp->top = -1;
    sp->arr = (char *) malloc(s->size * sizeof(char));
    
    char *postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i = 0; // Track infix Traversal
    int j = 0; // TRACK POSTFIX ADDITION

    while (infix[i] != '\0') 
    {
        if(!isOperator(infix[i])) {
            postfix[j] = infix[i];
            j++;
            i++;
        } else {
            if (precedence(infix[i]) > precedence(stackTop(sp)))) {
                push(sp, infix[i]);
                i++;
            } else {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)) {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;  
}   

int main () {
    char * infix = "a-b+t/6";

    printf("Postfix is %s", infixToPostfix(infix));


    return 0;
}