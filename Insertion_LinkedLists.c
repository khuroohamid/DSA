#include <stdio.h>
#include <stdlib.h>

// Linked Lists
struct Node {
    int data;
    struct Node* next; // Self Referencing Structure
};

// Linked List Traversal
void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) 
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

// 1. Insertion at First:
struct Node* insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node)); // New Node Created
    ptr->data = data; // int data
    ptr->next = head; // this becomes the new head
    return ptr;
}

// 2. Insertion in Between/At Index:
struct Node* insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node*) malloc(sizeof(structNode)); // New Node Created
    struct Node *p = head; // Pointer Pointing to the head.
    int i = 0; 

    while (i != index-1)
    {
        p = p -> next;
        i++;
    }
    ptr->data = data; // Store the data
    ptr->next = p->next; // 
    p->next = ptr;
    return head;
}

// 3. Insertion at the end:
struct Node* insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node)); // create and allocate a ptr
    ptr->data = data;

    struct Node *p = head; // P = head
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

// 4. Insertion After Node (When the pointer is given):
struct Node* insertAfterNode(struct Node *prevNode, struct Node *head, int data) {
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main () {
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
    third->data = 41;
    third->next =fourth;

    //Link fourth and fifth Node
    fourth->data = 66;
    fourth->next = fifth;

     // Terminating the List by Pointing to null.
    fifth->data = 77;
    fifth->next = NULL;

//Calling the Traversal Function:
    printf("Linked list before inseation\n");
    linkedListTraversal(head);

//Calling Insertion Functions: [One at a time]
   // head = insertAtFirst(head, 56); //sets the new head as the function returns ptr 
   // head = insertAtIndex(head, 65, 1);
    head = insertAtEnd(head, 99);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);

    return 0;
} 