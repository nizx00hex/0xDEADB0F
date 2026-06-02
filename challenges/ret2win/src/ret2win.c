#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void _secret();
void _bof(char *);

int main(int argc, char *argv[]){
	_bof(argv[1]);
	printf("Done.\n");
	return 0;
}

void _secret(){
	printf("flag{ret2win_success}");
}

void _bof(char *buff){
	char buffer[1024];
	strcpy(buffer, buff);
	printf("Entered: %s\n", buffer);
}