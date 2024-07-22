#include <stdlib.h>
#include <stdio.h>

struct NODE
{
    struct NODE *left;
    int value;
    struct NODE *right;
};

create_tree(struct NODE *curr, struct NODE *new)
{
    if (new->value <= curr->value)
    {
        if (curr->left != NULL)
            create_tree(curr->left, new);
        else
            curr->left = new;
    }
    else
    {
        if (curr->right != NULL)
            create_tree(curr->right, new);
        else
            curr->right = new;
    }
}

preorder(struct NODE *curr) 
{ 
 printf("%d", curr->value); 
 if(curr->left != NULL) preorder(curr->left); 
 if(curr->right != NULL) preorder(curr->right); 
}

inorder(struct NODE *curr) 
{ 
 if(curr->left != NULL) inorder(curr->left); 
 printf("%d", curr->value); 
 if(curr->right != NULL) inorder(curr->right); 
} 

postorder(struct NODE *curr) 
{ 
 if(curr->left != NULL) postorder(curr->left); 
 if(curr->right != NULL) postorder(curr->right); 
printf("%d", curr->value);  
}