#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
    int *data;
    int front;
    int rear;
    int size;
    int capacity;
} Queue;

Queue* create_queue(int capacity);
int enqueue(Queue *q, int value);
int dequeue(Queue *q, int *removed_value);
int is_queue_empty(Queue *q);
void free_queue(Queue *q);

#endif
