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
int isFull(struct Node* top) {
    struct Node *p = (struct Node*) malloc(sizeof(struct Node));
    if (p == NULL) { // If the memory allocation to the new node p fails, ie the queue is full. 
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
        struct Node *n = (struct Node*) malloc(sizeof(struct Node)); // Created and allocated a new node
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

// POP Function:
struct Node* pop (struct Node* *top) {
    if(isEmpty(*top)) {
        printf("Stack UnderFlow\n");
    } else {
        struct Node *ptr = *top; // Setting ptr == top
        *top = (*top)->next; // top ++
        int x = ptr->data; 
        free(ptr);
        return x;
    }
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

    return 0;
}