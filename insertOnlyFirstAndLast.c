#include <stdio.h>

int main() {
    int array[100];
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("The array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    //in last position
    printf("\nEnter the number that you want to add in last position: \n");
    int ln;
    scanf("%d",&ln);
    array[n]=ln;
    n++;
    printf("After inserting the number in last position the array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    n--;
    printf("\nNow we will return in our main array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\nEnter the number that you want to add in first position: \n");
    int fn;
    scanf("%d",&fn);
    
    //temporary array 
    int temp[100];
    for(int i=0;i<n;i++){
        temp[i]=array[i];
    }
    array[0]=fn;
    n++;
    for(int i=0;i<n;i++){
        array[i+1]=temp[i];
    }
    printf("After inserting the number in first position the array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}