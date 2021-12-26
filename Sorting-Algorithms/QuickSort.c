#include<stdio.h>

// Performing recursive method in quick sort

void swap(int *num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int* arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j<=high; j++){
        // if()
    }
    return 0;
}



int* quickSort(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        int min = i;
        for(int j = i + 1; j<size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    return arr;
}

int main(void){
    int arr[] = {40, 20, 60, 10, 50, 30};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    // quickSort(arr, size);

    for(int i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("%d ",arr[-1]);

    return 0;
}