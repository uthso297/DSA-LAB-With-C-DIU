#include <stdio.h>
#include <stdlib.h>

int queue[10];
int front = -1;
int rear = -1;

void enqueue(int x)
{

    if (rear == 10 - 1)
    {
        printf("Overeflow!\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
        printf("Value %d is enqued in queue\n", x);
    }
    else
    {
        rear++;
        queue[rear] = x;
        printf("Value %d is enqued in queue\n", x);
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("%d is removed from queue.\n", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("%d is removed from queue.\n", queue[front]);
        front++;
    }
}

void displayQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{

    int choice;
    int value;

    while (1)
    {
        printf("Queue Menu: \n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display Queue\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            displayQueue();
            break;
        case 4:
            exit(0);
            break;
        }
    }

    return 0;
}