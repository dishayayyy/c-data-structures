#include <stdlib.h>
#include "queue.h"

Queue* create_queue(int capacity) {
    if (capacity <= 0) return NULL;

    Queue *q = malloc(sizeof(Queue));
    if (!q) return NULL;

    q->data = malloc(sizeof(int) * capacity);
    if (!q->data) {
        free(q);
        return NULL;
    }

    q->capacity = capacity;
    q->front = 0;
    q->rear = -1;
    q->size = 0;

    return q;
}

int enqueue(Queue *q, int value) {
    if (!q || q->size == q->capacity)
        return -1;

    q->rear = (q->rear + 1) % q->capacity;
    q->data[q->rear] = value;
    q->size++;
    return 0;
}

int dequeue(Queue *q, int *removed_value) {
    if (!q || q->size == 0)
        return -1;

    *removed_value = q->data[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return 0;
}

int is_queue_empty(Queue *q) {
    return (!q || q->size == 0);
}

void free_queue(Queue *q) {
    if (!q) return;
    free(q->data);
    free(q);
}
