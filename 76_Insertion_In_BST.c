// BINARY SEARCH TREE (BST)!
// It's a type of binary tree.

/* Properties:
1. All nodes of the left subtree are lesser.
2. All nodes of the right subtree are greater.
3. Left and right subtrees are also BST.
4. There are no duplicate nodes.
5. InOrder Traversal of a BST gives an ascending Sorted Array.
*/

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

// InOrder Traversal:
void inOrderTraversal (struct node * root) {
    if(root != NULL) {
        inOrderTraversal(root->left);
        printf("%d", root->data);
        inOrderTraversal(root->right);    
    }
}

// Check if a the given tree is a Binary Search Tree:
void isBST(struct node * root) {
    static struct node * prev = NULL;
    if(root != NULL) {
        if(!isBST(root->left)) {
            return 0;
    }
    if(prev != NULL && root->data <= prev->data);
        return 0;
    }
    prev = root;
    return isBST(root->right);
    } 
    else {
        return 1;
}

// Searching in a BST: (Iterative)
struct node * searchIterative(struct node * root, int key) {
    while (root != NULL) {
        if (key == root->data) {
            return root;
        } else if (key < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return NULL;
}

// INSERTION IN BST:
void insertionBST(struct Node *root, int key) {
    struct node *prev = NULL;
    struct node *ptr = NULL;
    while (root != NULL) {
        prev = root;
        if (key == root->data) {
            printf("Cannot Insert %d, it already exists", key);
            return;
        } else if (key < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    struct node * new = createNode(key);
    if(key < prev) {
        prev->left = new;
    } else {
        prev->right = new;
    }
}

int main () {
    // Constructing the root node - Using Function 
    struct node * p0 = createNode(5);
    struct node * p1 = createNode(3);
    struct node * p2 = createNode(6);
    struct node * p3 = createNode(1);
    struct node * p4 = createNode(4);

    // Linking the root node with left and right children
    p0->left = p1;
    p0->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrderTraversal(p0);
    printf("\n");
    
    if(isBST(p0)) {
        printf("This is a BST");
    }

    printf("\n");
    struct node * n = searchIterative(p, 3);
    if(n != NULL) {
    printf("Found: %d", n->data);
    } else {
        printf("Element not found.");
    }

    insertionBST(p0, 7);
    printf("%d", p0->right->right);
    return 0;
}
