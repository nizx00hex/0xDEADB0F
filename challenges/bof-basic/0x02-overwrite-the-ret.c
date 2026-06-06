#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vulnerable(char *);
void secret();

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Usage %s <input>\n", argv[0]);
        return 1;
    }
    printf("Secrect() is at %p\n", (void *)secret);
    vulnerable(argv[1]);
    return 0;
}

void secret(){
    printf("SECRET KEY: {12345678}");
}

void vulnerable(char *input){
    char buffer[64];
    strcpy(buffer, input);
}


