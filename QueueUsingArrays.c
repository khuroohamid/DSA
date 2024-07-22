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
    if (q->rear == q->size-1) {
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
    q.size = 10;
    q.front = q.rear = -1;
    q.arr = (int *) malloc(q.size * sizeof(int));

     // Enqueue a few elements:
    enqueue(&q, 12);
    enqueue(&q, 11);
    printf("Dequeuing element %d\n", dequeue(&q));

// Check if the queue is Full or Empty:
    if(isEmpty(&q)) {
        printf("Queue is empty!\n");
    }
    if(isFull(&q)) {
        printf("Queue is full!\n");
    }

   
    enqueue(&q, 10);
    enqueue(&q, 09);

    return 0;
} 