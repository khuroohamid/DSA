#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Traversal: 
void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) 
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

// Checking if the Stack is Empty:
int isEmpty(struct Node* top) {
    if(top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// Checking if the Stack is Full:
int isFull(sturct Node* top) {
    struct Node * p = (struct Node*) malloc(sizeof(struct Node));
    if (p == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// PUSH Function:
struct Node* push(struct Node* top, int x) {
    if (isFull(top)) {
        printf("Stack OverFlow\n");
    } else {
        struct Node * n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

// POP Function:
struct Node* pop (struct Node * top) {
    if(isEmpty(*top)) {
        printf("Stack UnderFlow\n");
    } else {
        struct Node* ptr = *top;
        *top = (*top)->next;
        int x = ptr->data;
        free(ptr);
        return x;
    }
}

// PEEK Function:
int peek (int pos) {
    struct Node* ptr = top;
    for (i = 0; (i < pos-1 && ptr != NULL); i++) {
        ptr = ptr->next;
    }
    if (ptr != NULL) {
        return ptr->data;
    } else {
        return -1;
    }
}

// Stack Top
int stackTop (struct Node* top) {
    return top->data;
}

// Stack Bottom
int stackBottom (struct Node* top) {
   
}

int main () {

    // Creating Nodes:
    struct Node* top = NULL;
    top = push(top, 78);
    top = push(top, 88);
    top = push(top, 98);
    
    linkedListTraversal(top);

    int element = pop(&top);
    printf("Popped Element is %d\n", element);

    linkedListTraversal(top);
    
    for (int i = 1; i <= 4; i++) {
    printf("Value at Position %d is %d:",i, peek(1));
    }

    return 0;
}