#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    head = (struct Node *)malloc(sizeof(struct Node));
    printf("Address of head node: %p\n", head);
    head->data = 15;
    head->next = NULL;

    printf("Data of head node: %d\n", head->data); //(*head) can be written as head->data (arrow operator)
    printf("Link of head node before new node created: %p\n", head->next);

    struct Node *Node2 = NULL;
    Node2 = (struct Node *)malloc(sizeof(struct Node));
    printf("Address of Node2: %p\n", Node2);

    head->next = Node2;
    Node2->data = 20;
    Node2->next = NULL;

    printf("Data of Node2: %d\n", Node2->data);
    printf("Link of Node2 before new node created: %p\n", Node2->next);

    printf("Linked List is: %d->%d\n",head->data,Node2->data);

    return 0;
}