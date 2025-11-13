#include <stdio.h>

void bubbleSort(int arr[],int n){
    int temp ; 
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {54,256,7,436,278,34896,234,21,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("original array : \n");
    printArray(arr,n);
    bubbleSort(arr,n);
    printf("sorted array : \n");
    printArray(arr,n);

    return 0 ;
}