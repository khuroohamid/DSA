#include <stdio.h>
#include <stdlib.h>

// Linked Lists
struct Node {
    int data;
    struct Node *next; // Self Referencing Structure
}

// Traversal: 
void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) 
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

int main () {
    // Creating individual link of a chain;
    struct Node* head;  
    struct Node* second;  
    struct Node* third;  
    struct Node* fourth;  
    struct Node* fifth;  

    // Allocating memory for nodes in the linked list in Heap:
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node));

    // Link first and second Nodes
    head->data = 7;
    head->next = second;

     // Link second and third Nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth Nodes
    third->data = 16;
    third->next = fourth;

    //Link fourth and fifth Node
    fourth->data = 20;
    fourth->next = fifth;

     // Terminating the List by Pointing to null.
    fifth->data = 66;
    fifth->next = NULL;

    linkedListTraversal(head);
    return 0;
}  