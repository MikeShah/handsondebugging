// Array
#include <stdio.h>

void SetupArray(int* arr, size_t size){
    for(size_t i=0; i < size; i++){
        arr[i]=i;
    }
}

void PrintArray(int* arr, size_t size){
    for(size_t i=0; i < size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    // Create array of 10 integers;
    int a[10];
    // Setup the array
    SetupArray(a,10);
    // Print out the array
    PrintArray(a,10);

    return 0;
}
