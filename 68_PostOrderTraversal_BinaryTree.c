#include <stdio.h>
#include <stdlib.h>

struct Node n
{
    int data; 
    struct node * left;
    struct node * right;
};

// Create node Function:
struct node * createNode(int data) {
    struct node * n; // Creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL

    return n; // Finally returning the created node;
}

// Post-Order Traversal:
void postOrderTraversal (struct node * root) {
    if(root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d", root->data);
    }
}

int main () {
    // Constructing the root node - Using Function 
    struct node * p0 = createNode(4);
    struct node * p1 = createNode(1);
    struct node * p2 = createNode(6);
    struct node * p3 = createNode(5);
    struct node * p4 = createNode(2);

    // Linking the root node with left and right children
    p0->left = p1;
    p0->right = p2;
    p1->left = p3;
    p1->right = p4;

    postOrderTraversal(p0);
    printf("\n");

    return 0;
} 
