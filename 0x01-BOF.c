#include <stdio.h>
#include <string.h>

void _bof(char *buff){
	char buffer[1024];
	strcpy(buffer, buff);
	printf("Entered: %s\n", buffer);
}

int main(int argc, char *argv[]){
	_bof(argv[1]);
	printf("Done.\n");
	return 0;
}
