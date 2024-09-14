#include <stdio.h>

int main()
{

    int array[100];
    int n;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The aray is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    int position;
    printf("\nEnter the position for deletion: \n");
    scanf("%d", &position);
    for (int i = position; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    n--;
    printf("The final array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    // Linear Search
    printf("\nEnter the element to find: \n");
    int key;
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            printf("The Index of %d is %d \n", key, i);
        }
    }
    return 0;
}