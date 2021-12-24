#include<stdio.h>
#include<conio.h>

#define MAX 7;

void arrayTraversal (int arr[]){
    for(int i = 0; i< sizeof(arr)/ sizeof(arr[0]); i++ ){
        printf("%d, ",arr[i]);
    }
}

int main(void){
    int array[] = {2,3,4,5,6,7,8},i = 0;

    // while (i < sizeof(array)/ sizeof(array[0]) )
    // {
    //     printf("%d\n",array[i]);
    //     i++;
    // }
    arrayTraversal(array);
    

    return 0;
}