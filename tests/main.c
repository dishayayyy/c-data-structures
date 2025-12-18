#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "linked_list.h"

int main() {
    Stack *s = create_stack(2);
    push(s, 10);
    push(s, 20);

    int x;
    pop(s, &x);
    printf("Stack pop: %d\n", x);
    free_stack(s);

    Queue *q = create_queue(2);
    enqueue(q, 1);
    enqueue(q, 2);
    dequeue(q, &x);
    printf("Queue dequeue: %d\n", x);
    free_queue(q);

    Node *head = NULL;
    head = insert_head(head, 5);
    head = insert_tail(head, 10);
    print_list(head);
    free_list(head);

    return 0;
}
