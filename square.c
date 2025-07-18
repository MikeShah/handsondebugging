#include <stdio.h>

int square(int x){
    return x*x;
}

int main(){

    int value = 5;
    printf("The value is: %d\n",value);
    printf("square(%d) is: %d\n",value,square(value));

    return 0;
}
