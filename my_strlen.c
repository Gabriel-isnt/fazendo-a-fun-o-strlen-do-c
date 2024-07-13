#include <stdio.h>
#include <string.h>

int MY_strlen(char array[]);

int main(){
    
    // my version of strlen
    char idk[] = {"tentando primeira vez"};
    int stringLengthOne = MY_strlen(idk);
    
    printf("the string's length with my function: %d\n", stringLengthOne);

    // the original one
    char array[] = {"tentando primeira vez"};
    int stringLengthTwo = strlen(array);

    printf("the string's length with strlen.....: %d\n", stringLengthTwo);
}


int MY_strlen(char array[]){
    
    int wordCounter = 0;
    
    for(int i = 0; array[i] != '\0'; i++){
        wordCounter++;
    }
    
    return wordCounter;
}
