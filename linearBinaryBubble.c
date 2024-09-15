#include <stdio.h>
int linearSearch(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int array[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("After sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter the element to find with linear and binary search: \n");
    int key;
    scanf("%d", &key);
    int lResult = linearSearch(array, n, key);
    printf("After applying linear search the index of %d is %d\n", key, lResult);
    int bResult = binarySearch(array, n, key);
    printf("After applying binary search the index of %d is %d\n", key, bResult);
    return 0;
}