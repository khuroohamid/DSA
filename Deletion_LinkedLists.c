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

// 1. Deleting the First Node. [Time Complexity -> O(1)]
struct Node* deleteFirst(struct Node *head) {
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    
     return head;
}

// 2. Deleting a node in between/at a given index. [Time Complexity -> O(n)]
struct Node* deleteAtIndex(struct Node *head, int index) {
    struct Node *p = head;
    struct Node *q = head->next;

    for(int i = 0; i < index-1; i++) 
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    
    return head;
}

// 3. Deleting the Last Node.  [Time Complexity -> O(n)]
struct Node *deletionAtEnd (struct Node *head) 
    {
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
    }

// 4. Delete a node with a given value/key.  [Time Complexity -> O()]
//First Node at that Value.
struct Node *deletionWithAKey(struct Node *head, int value) 
    {
    struct Node *p = head;
    struct Node *q = head->next;
    
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value) {
        p->next = q->next;
        free(q);
    else {
            printf("Element not found");
        }
    }
    
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

// Calling the Traversal Function:
    printf("Linked list before deletion \n");
    linkedListTraversal(head);

/* Calling the Deletion Function (One case at a time): */
    
/* Case1. For deleting the first element in the linked list.
    head = deleteFirst(head);
    printf("Linked list after deletion \n");
    linkedListTraversal(head);
*/

/* Case2. For deleting an element at an index in the linked list.
    head = deleteAtIndex(head, 2); // where 2 == an index;
    printf("Linked list After Deletion at Index: \n")
    linkedListTraversal(head);
 */

/* Case3. For deleting the last element in the linked list. 
    head = deleteAtIndex(head); // where 2 == an index;
    printf("Linked list After Deletion at Index: \n")
    linkedListTraversal(head);
*/

/* Case4. For deleting the last element in the linked list. */
    head = deleteWithValue(head);
    printf("Linked list After Deletion at Value: \n")
    linkedListTraversal(head);

    return 0;
}
 
