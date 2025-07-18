#include <stdio.h>
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortInteger(int* array, unsigned int size){
    int i,j;
    for(i =0; i < size-1; ++i){
        for(j=0; j < size-1; ++j){
            if(array[j] > array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

int main(){
    int numbers[] = {1,7,5,9,2};
    sortInteger(numbers,5);

    for(int i=0; i < 5; i++){
        printf("%d ",numbers[i]);
    }

    
    return 0;
}
