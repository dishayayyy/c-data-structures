#include <stdlib.h>
#include "stack.h"

Stack* create_stack(int capacity) {
    if (capacity <= 0) return NULL;

    Stack *s = malloc(sizeof(Stack));
    if (!s) return NULL;

    s->data = malloc(sizeof(int) * capacity);
    if (!s->data) {
        free(s);
        return NULL;
    }

    s->capacity = capacity;
    s->top = -1;
    return s;
}

int push(Stack *s, int value) {
    if (!s || s->top == s->capacity - 1)
        return -1;

    s->data[++s->top] = value;
    return 0;
}

int pop(Stack *s, int *popped_value) {
    if (!s || s->top < 0)
        return -1;

    *popped_value = s->data[s->top--];
    return 0;
}

int is_empty(Stack *s) {
    return (!s || s->top == -1);
}

void free_stack(Stack *s) {
    if (!s) return;
    free(s->data);
    free(s);
}
