#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* insert_head(Node *head, int value);
Node* insert_tail(Node *head, int value);
Node* delete_value(Node *head, int value);
void print_list(Node *head);
void free_list(Node *head);

#endif
