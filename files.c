#include<stdio.h>

void open_files(const char *files);
void writingFiles(files);

int main(int argc, char *argv[]){
	open_files("text.txt");
	return 0;
}

void open_files(const char *files_name){
	
	FILE* files = NULL;
	files = fopen(files_name, "r+");
	
	if(files != NULL){
		printf("files find open in read and write\n");
	}

	else{
		files = fopen(files_name, "w+");
		printf("files not find creating a new file in read and write\n");
	}

	fprintf(files, "hello this is a file");

	if(files != NULL){
		printf("the files has been closed\n");
		fclose(files);
	}
}

