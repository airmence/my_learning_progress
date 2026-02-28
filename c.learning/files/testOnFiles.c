#include<stdio.h>

FILE *open_files(const char *files);
FILE *writingFiles(const char *files);

int main(int argc, char *argv[]){
	open_files("text.txt");
	return 0;
}

FILE *open_files(const char *files_name){
	
	FILE* files = NULL;
	files = fopen(files_name, "r+");
	
	if(files != NULL){
		printf("files find open in read and write\n");
	}

	else{
		files = fopen(files_name, "w+");
		printf("files not find creating a new file in read and write\n");
	}
	writingFiles(files);
}

FILE *writingFiles(files){
	fprintf(files, "hello this is a file");
	fclose(files);
	return files;
}

