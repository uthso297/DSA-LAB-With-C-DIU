#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBegining(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtAnyPosition(struct Node **head, int data, int position)
{
    struct Node *newNode = createNode(data);
    if (position == 1)
    {
        newNode->next = *head;
        *head = newNode;
    }
    struct Node *temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of range. Inserting at the end.\n");
        insertAtEnd(head, data);
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void displayList(struct Node *head)
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        printf("Linked List: ");
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    struct Node *head = NULL;
    int choice;
    int data;
    int position;
    while (1)
    {
        printf("Linkedlist Menu: \n\n");
        printf("1.Insert at begining\n");
        printf("2.Insert at End\n");
        printf("3.Insert at any position\n");
        printf("4.Display the linkedlist\n");
        printf("5.exit\n\n");

        printf("Enter you choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at begining: ");
            scanf("%d", &data);
            insertAtBegining(&head, data);
            break;
        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;
        case 3:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position to insert: ");
            scanf("%d", &position);
            insertAtAnyPosition(&head, data, position);
            break;
        case 4:
            displayList(head);
            break;
        case 5:
            exit(0);
            break;
        }
    }

    return 0;
}