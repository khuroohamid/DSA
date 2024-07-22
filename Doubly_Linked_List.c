#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
}

// Traversal
void TraversalFunction(struct Node* head) {
    struct Node* ptr = head;
    while (ptr != NULL) {
        ptr = ptr->next;
    }
}


int main () {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // Memory Allocation
    head = (struct Node*) malloc(sizeof(struct Node*));
    second = (struct Node*) malloc(sizeof(struct Node*));
    third = (struct Node*) malloc(sizeof(struct Node*));
    fourth = (struct Node*) malloc(sizeof(struct Node*));

    // Linking the Nodes
    head->prev = NULL;
    head->data = 1;
    head->next = second;
   
    second->prev = head;
    second->data = 2;
    second->next = third;
    
    third->prev = second;
    third->data = 3;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 4;
    fourth->next = NULL;

    return 0;
}  