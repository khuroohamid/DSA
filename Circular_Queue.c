#include <stdio.h>
#include <stdlib.h>

// Circular Queue: 
// Circular Increment -> i = (i+1) % size

struct queue {
    int front, rear, size;
    int arr*;
}

// Enqueue Function:
void enqueue(struct queue *q, int val) {
    if ((q->rear+1) % q->size == q->front) {
        printf("Queue OverFlow!\n");
    } else {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = val;
        printf("Enqueued Element: %d\n", val);
    }
}

// Dequeue Function:
int dequeue(struct queue *q) {
    int val = -1;
    if (q->front == q->rear) {
        printf("Queue is Empty!\n");
    } else {
        q->front = (q->front + 1) % size; // i = (i + 1) % size Circular Increment  
        val = q->arr[q->front];
    }
    return val;
}

int main () {
    struct queue q;
    q.size = 10;
    q.front = q.rear = 0;
    q.arr = (int *) malloc(q.size * sizeof(int)); // Allocating the memory to this arr of size 10.

    // Enqueue a few elements:
    enqueue(&q, 12);
    enqueue(&q, 11);
    enqueue(&q, 10);
    enqueue(&q, 9);
    enqueue(&q, 8);
    enqueue(&q, 7);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    // Check if the queue is Full or Empty:
   if(isEmpty(&q)) {
    printf("Queue is empty!\n");
    }
    if(isFull(&q)) {
    printf("Queue is full!\n");
    }

    enqueue(&q, 6);
    enqueue(&q, 5);
    enqueue(&q, 4);
    enqueue(&q, 3);

     return 0;
} 
