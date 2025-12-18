#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node* insert_head(Node *head, int value) {
    Node *new_node = malloc(sizeof(Node));
    if (!new_node) return head;

    new_node->data = value;
    new_node->next = head;
    return new_node;
}

Node* insert_tail(Node *head, int value) {
    Node *new_node = malloc(sizeof(Node));
    if (!new_node) return head;

    new_node->data = value;
    new_node->next = NULL;

    if (!head) return new_node;

    Node *temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    return head;
}

Node* delete_value(Node *head, int value) {
    if (!head) return NULL;

    if (head->data == value) {
        Node *temp = head->next;
        free(head);
        return temp;
    }

    Node *curr = head;
    while (curr->next && curr->next->data != value)
        curr = curr->next;

    if (curr->next) {
        Node *temp = curr->next;
        curr->next = temp->next;
        free(temp);
    }

    return head;
}

void print_list(Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void free_list(Node *head) {
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
