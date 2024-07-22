#include <stdio.h>
#include <stdlib.h>

// Node Structure:
struct node
{
   int data;
   struct node * left;
   struct node * right;
};

struct node * createNode(int data) {
    struct node * n; // Creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL

    return n; // Finally returning the created node;
}



int main () {
/*   
    // Create a new tree with root as NULL 
    struct node * p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;
    
    // Constructing the 2nd Node
    struct node * p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;
    
    // Constructing the 3rd Node
    struct node * p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
*/

    // Constructing the root node - Using Function 
    struct node * p = createNode(2);
    struct node * p1 = createNode(1);
    struct node * p2 = createNode(4);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    
    return 0;
}