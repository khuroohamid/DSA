/* Two types of Double Ended Queue:
    1. Restricted Input DE-Queue -> insertion from front isn't allowed.
    2. Restricted Output DE-Queue -> Deletion from rear isn't allowed. 
*/ 
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

// Enqueue Rear:
void enqueueR (struct queue *q, int val) {
    if (isFull(q)) {
        printf("Queue Overflow.\n");
    } else {
        q->rear++;
        q->arr[q->rear] = val;
    }
}

// Enqueue Front:
void enqueueF (struct queue *q, int val) {
    if (front == -1) {
        printf("Cannot Insert Element at Front!\n");
    } else {
        q->front--;
        q->arr[q->front] = val;
    }
}

// Dequeue Front:
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

// Dequeue Rear:
int dequeueRear (struct queue * q) {
    int a;
    if (isEmpty(q)) {
        printf("Queue Underflow!!\n");
    } else {
        q->front++;
        a = q->arr[q->rear];
    }
    return a;
}

int main () {

    struct queue q;
    q.size = 10;
    q.front = q.back = -1;
    q.arr = (int *) malloc(q.size * sizeof(int));

     // Enqueue a few elements:
    enqueueR(&q, 12);
    enqueueR(&q, 11);
    printf("Dequeuing element %d\n", dequeue(&q));

// Check if the queue is Full or Empty:
    if(isEmpty(&q)) {
        printf("Queue is empty!\n");
    }
    if(isFull(&q)) {
        printf("Queue is full!\n");
    }

   
    enqueueF(&q, 10);
    enqueue(&q, 09);

    return 0;
}