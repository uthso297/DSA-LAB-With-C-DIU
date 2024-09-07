#include<stdio.h>

int main(){
    
    int array[100];
    printf("Enter the number of elements: ");
    int n;
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("The array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    n++;
    /*for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }*/
    printf("Enter the index position to insert the array: ");
    int p;
    scanf("%d",&p);
    for(int i=n;i>p;i--){
        array[i-1]=array[i-2];
    }
    
    printf("Enter the number that you want to insert: ");
    int number;
    scanf("%d",&number);
    array[p]=number;
    printf("After inserting the array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}