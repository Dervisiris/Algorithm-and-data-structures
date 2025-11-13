#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binarySearch(int arr[], int n, int target){
    int low = 0;
    int high = n - 1; 

    while(low <= high){
        int mid = (low + high)/ 2; 
        if(arr[mid] == target){
            return mid; 
        }
        else if(arr[mid] < target){
            low = mid + 1 ; 
        }
        else{
            high = mid -1 ;
        }
    
    }
    return -1 ; 
}

int main(){
    int arr[] = {5,10,15,20,25,30,35,40,45,50} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    int target; 
    printf("enter the number you are looking for:\n");
    scanf("%d",&target);

    int result = binarySearch(arr,n,target);

    if(result != -1){
        printf("The number %d was found in the %d. index. \n",target,result);
    }
    else{
        printf("The number %d does not appear in this series.\n ",target);
    }
    return 0; 
}