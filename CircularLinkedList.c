#include <stdio.h>
#include <stdlib.h>

// Linked List
struct Node {
    int data;
    struct Node *next; // Self ref structure
}

// Traversal for this Circular linked list:
void LinkedListTraversal(struct Node* head) {
   struct Node *ptr = head;
    do {
    printf("Element is %d\n", ptr->data);
    ptr = p->next;
   } while(ptr!=head);
}

// Insert at First:
struct Node* InsertAtFirst(struct Node* head, int data) {
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node*));
    ptr->data = data;
    
    struct Node *p = head->next;
    while(p->next != head) {
        p = p->next;
    }
    // At this point P points to the last node of the Circular Linked List.

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main() {
    // Creating the Nodes
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // Allocating Memory
    head = (struct Node*) malloc(sizeof(struct Node*));
    second = (struct Node*) malloc(sizeof(struct Node*));
    third = (struct Node*) malloc(sizeof(struct Node*));
    fourth = (struct Node*) malloc(sizeof(struct Node*));

    // Link the nodes -> 1st and 2nd
    head->data = 9;
    head->next = second;

    // Link the nodes -> 2nd and 3rd
    second->data = 19;
    second->next = third;

    // Link the nodes -> 3rd and 4th
    third->data = 29;
    third->next = fourth;

    // Link the nodes -> 4th and 1st Node (Circular Linked List)
    fourth->data = 39;
    fourth->next = head;

/* Calling Functions */
    printf("Circular Linked List Before Insertion: ")
    LinkedListTraversal(head);

    printf("Circular Linked List After Insertion: ");
    InsertAtFirst(head, 54);
    LinkedListTraversal(head);

    return 0;
}   