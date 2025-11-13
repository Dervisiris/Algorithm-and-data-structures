#include <stdio.h>

void selectionSort(int arr[], int n){
 int min_idx ; 
    for(int i = 0; i < n -1 ; i++){
        min_idx = i ; 
        for(int j = i+1; j < n ; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp ; 
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {64,26,794,294,35,396,202,20996,394} ; 
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array : \n");
    printArray(arr,n);

    selectionSort(arr,n);
    printf("Sorted array : \n ");
    printArray(arr,n);

    return 0; 
}