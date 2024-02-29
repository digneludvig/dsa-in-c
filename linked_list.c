#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

void print_linked_list(struct Node *p) {
    if (p == NULL) {
        printf("Linked list is empty.\n");
    }

    while (p != NULL) {
        printf("Data is: %d\n", p->data);
        p = p->next;
    }
    printf("\n");
}

void insert_start(struct Node **p, int data) {
    printf("Inserted node.\n");
    struct Node *new_node;
    new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *p;
    (*p) = new_node;
}

void insert_end(struct Node **p, int data) {
    printf("Inserted node.\n");
    struct Node *new_node;
    new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if ((*p) == NULL) {
        (*p) = new_node;
        return;
    }

    struct Node *temp = *p;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

void remove_start(struct Node **p) {
    printf("Removed node.\n");
    if (*p == NULL) {
        return;
    }

    struct Node *temp = *p;
    *p = (*p)->next;
    free(temp);
}

void remove_end(struct Node **p) {
    printf("Removed node.\n");
    if ((*p) == NULL) {
        return;
    }

    if ((*p)->next == NULL) {
        free(*p);
        *p = NULL;
        return;
    }

    struct Node *temp = *p;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct Node *last_node = temp->next;
    temp->next = NULL;
}


int main() {
    struct Node *head = NULL;

    return 0;
}
