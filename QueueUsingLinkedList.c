#include <stdio.h>
#include <stdlib.h>

// Global Variables:
struct Node * front = NULL;
struct Node * rear = NULL;

// Linked Lists
struct Node {
    int data;
    struct Node* next; // Self Referencing Structure
};

// Linked List Traversal
void linkedListTraversal(struct Node *ptr) {
    printf("Printing the elements of the linked list (queue):\n");
    while (ptr != NULL) 
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

// Enqueue Function:
void enqueue (struct Node *front, struct Node *rear, int val) {
    struct Node *n = (struct Node *) malloc(sizeof(struct Node)); // New node
    if (n==NULL) {
        printf("Queue is Full!\n"); // In case n couldn't be created.
    } else {
        n->data = val;
        n->next = NULL;
        if (front == NULL) { // When queue is empty then Front will be Null; 
            front = rear = n;
        } else {
            rear->next = n; // Normal Insertion.
            rear = n;
        }
    }
}

// Dequeue Function
    void dequeue() {
        int val = -1;
        struct Node *ptr = front;
        if (front == NULL) {
            printf("Queue is Empty!\n");
        } else {
            front = front->next;
            val = ptr->data;
            free(ptr);
        }
        return val;
    }

int main () {
   
    linkedListTraversal(front);
    printf("Dequeuing element %d\n", dequeue());
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(front);


    return 0;
} 