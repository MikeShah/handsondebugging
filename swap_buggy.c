// swap_buggy.c
#include <stdio.h>

void swap_element(int* a1, int* a2, int index){
    int tmp   = a2[index];
    a2[index] = a1[index];
    a1[index] = tmp;
}

int main(){
    int odds[]  = {1,3,5,7};
    int evens[] = {2,4,6,8};

    // swap arrays
    for(int i=0; i < 4; ++i)
        swap_element(odds,evens,i);

    // print the results
    // of each of the odds and evens array
    for(int i=0; i < 4; ++i)
        printf("odds[%d] =%d\n",i,odds[i]);
    for(int i=0; i < 4; ++i)
        printf("evens[%d]=%d\n",i,evens[i]);
    
    return 0;
}
