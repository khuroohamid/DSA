#include <stdio.h>
#include <stdlib.h>

struct queue {
    int front, rear, size;
    int *arr;
};

// Is Full Function:
int isFull(struct queue *q) {
    if (q->rear == q->size-1) {
        return 1;
    }
    return 0;
}

// Is Empty Function:
int isEmpty(struct queue *q) {
    if(q->rear == q->front) {
        return 1;
    }
    return 0;
}

// Enqueue Function:
void enqueue (struct queue *q, int val) {
    if (isFull(q)) {
        printf("Queue Overflow.\n");
    } else {
        q->rear++;
        q->arr[q->rear] = val;
    }
}

// Dequeue Function:
int dequeue (struct queue * q) {
    int a = -1;
    if (q->front == q->rear) {
        printf("Queue Underflow!!\n");
    } else {
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

int main () {

    struct queue q;
    q.size = 400;
    q.front = q.back = 0;
    q.arr = (int *) malloc(q.size * sizeof(int));

    // BFS Implementation:
    int node;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a [7][7] = {
        {0, 1, 1, 1, 0, 0, 0}
        {1, 0, 0, 1, 0, 0, 0}
        {1, 1, 0, 1, 1, 0, 0}
        {1, 0, 1, 0, 1, 0, 0}
        {0, 0, 1, 1, 0, 1, 1}
        {0, 0, 0, 0, 1, 0, 0}
        {0, 0, 0, 0, 1, 0, 0}       
    };
    
    printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i); // Enqueue i For Exploration
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 7; j++) 
        {
            if(a[node][j] ==1 && visited[j] ==0) {
                printf("%d", i);
                visited[j]=1;
                enqueue(&q, j);
            }
        }
    }

    return 0;
}