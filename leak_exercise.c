#include <stdio.h>
#include <string.h>

void PrintExcitedMessage(const char* message, size_t length){
    // Add one to the length!
    char* newMessage = strndup(message,length+1);
    newMessage[length] = '!'; // Make the last character excited!
    printf("%s\n",newMessage);    
}

int main(){

    const char* message = "Hello World";
    PrintExcitedMessage(message,11);

    return 0;
}
