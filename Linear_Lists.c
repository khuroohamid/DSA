/* Inserting an element into contiguous list (Linear Array) at specified position */
/* contiguous_list.C */
#include <stdio.h>

/* definition of linear list */
typedef struct
{
    int data[10];
    int count;
} list;

/*prototypes of functions */
void insert(list *, int, int);
void create(list *);
void traverse(list *);

/* Definition of the insert funtion */
void insert(list *start, int position, int element)
{
    int temp = start->count; // Count will be at the last element of the array.
    while (temp >= position)
    {
        start->data[temp + 1] = start->data[temp];
        temp--;
    }
    start->data[position] = element;
    start->count++;
}

/* definition of create function to READ data values into the list */
void create(list *start)
{
    int i = 0, test = 1;
    while (test) // Evaluates the condition if test == true ie test == 1;   
    {
        fflush(stdin);
        printf("\n input value value for: %dth element:", i);
        scanf("%d", &start->data[i]);
        if (start->data[i] == 0)
            test = 0;
        else
            i++;
    }
    start->count = i;
}

/* OUTPUT FUNCTION TO PRINT ON THE CONSOLE */
void traverse(list *start)
{
    for (int i=0; i < start->count; i++)
    {
        printf("\n Value at the position: %d: %d ", i, start->data[i]);
    }
}
/* declaration of delete_list function */
void delete_list(list *, int);

/* definition of delete_list function*/
/* the position of the element is given by the user and the element is deleted from the
list*/
void delete_list(list *start, int position)
{
    int temp = position;
    printf("\n information which we have to delete: %d", l->data[position]);
    while (temp <= start->count - 1)
    {
        start->data[temp] = start->data[temp + 1];
        temp++;
    }
    start->count = start->count - 1;
}

/* main function */
void main()
{
    int position, element;
    list l; 
    create(&l); // Create the list 'l' & Put the elements in the list here!

    printf("\n Entered list as follows:\n");
    fflush(stdin);
    traverse(&l); // Prints the Linear List!

    fflush(stdin);
    printf("\n input the position where you want to add a new data item:");
    scanf("%d", &position); // Insertion at Position ___;

    fflush(stdin);
    printf("\n input the value for the position:");
    scanf("%d", &element); // Value for the element to be inserted;

    insert(&l, position, element); // Insert the element into the List l;
    traverse(&l); // Print the new updated list l;
}