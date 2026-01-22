#include<libgen.h>
#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(int argc, char *argv[]){
	
	// a pointer on a charactere
	char *buff;

	// argc it's an integer on the number of call for exemple "./base-dir.c" make argc = 1
	// and "./base-dir.c files" make argc = 2
	if(argc < 2){
		printf("%s: Syntaxe: base-dir PathFiles\n", argv[0]);
		return 1;
	}

	//dirname(argv[1]) make the first argument into buff
	buff = dirname(argv[1]);
	if(buff != NULL){
		printf("Path of the files excluding files: %s\n", buff);
	}

	else{
		perror("Path incorrect:");
		return errno;
	}

	buff = basename(argv[1]);
	if(buff != NULL){
		printf("Name of the File: %s\n", buff);
	}
	else{
		perror("Path incorrect:");
		return errno;
	}

	return 0;
}

