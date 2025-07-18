#include <stdio.h>
#include <unistd.h> // Linux sleep

int main(){

    unsigned int count=0;
    while(1){
        sleep(1);
        count++;
        printf("count= %d\n",count);
    }

    return 0;
}
