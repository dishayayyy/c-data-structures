#ifndef STACK_H
#define STACK_H

typedef struct {
    int *data;
    int top;
    int capacity;
} Stack;

Stack* create_stack(int capacity);
int push(Stack *s, int value);
int pop(Stack *s, int *popped_value);
int is_empty(Stack *s);
void free_stack(Stack *s);

#endif
