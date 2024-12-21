#include <stdio.h>
#include <stdlib.h>

int queue[10];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (((rear + 1) % 10) == front)
    {
        printf("Overflow!\n");
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
        printf("Value %d is enqueued in the queue.\n", x);
    }
    else
    {
        rear = (rear + 1) % 10;
        queue[rear] = x;
        printf("Value %d is enqueued in the queue.\n", x);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else if (front == rear)
    {
        printf("%d is removed from the queue.\n", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("%d is removed from the queue.\n", queue[front]);
        front = (front + 1) % 10;
    }
}

void displayQueue()
{
    int i = front;
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % 10;
        }
        printf("%d\n", queue[rear]);
    }
}

int main()
{
    int choice;
    int value;

    while (1)
    {
        printf("\nQueue Menu: \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            if (scanf("%d", &value) != 1)
            {
                printf("Invalid input! Please enter a valid integer.\n");
                while (getchar() != '\n'); 
                continue;
            }
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            displayQueue();
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}
