#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){

	FILE* touch = NULL;
	for(int i = 1; i < argc; i++){
		touch = fopen(argv[i], "a");
		fclose(touch);
	}
	return 0;
}

