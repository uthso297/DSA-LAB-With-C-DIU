#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stack[10];
    int top = -1;
    int choice;
    int value;

    while (1)
    {
        printf("Stack Menu: \n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display Top\n");
        printf("4.Display All\n");
        printf("5.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (top == 10 - 1)
            {
                printf("Stack Overflow\n");
            }
            else
            {
                printf("Enter value to push: ");
                scanf("%d",&value);
                top++;
                stack[top] = value;
                printf("Value %d pushed into the stack\n", value);
            }

            break;
        case 2:
            if (top == -1)
            {
                printf("Stack underflow\n");
            }
            else
            {
                printf("Value %d poped from the stack\n", stack[top]);
                top--;
            }

            break;
        case 3:
            if (top == -1)
            {
                printf("Stack Empty\n");
            }
            else
            {
                printf("Value %d is the top element.\n", stack[top]);
            }
            break;
        case 4:
            if (top == -1)
            {
                printf("Stack Empty\n");
            }
            else
            {
                printf("Current Stack: ");
                for (int i = top; i >= 0; i--)
                {
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
            break;
        case 5:
            exit(0);
            break;
        }
    }

    return 0;
}