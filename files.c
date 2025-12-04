#include<stdio.h>

void printf_files();

int main(int argc, char *argv[]){

	FILE* files = NULL;
	files = fopen("text.txt", "r+");

	if(files != NULL){
		printf("files find open in read and write\n");
	}

	if(files == NULL){
		files = fopen("text.txt", "w+");
		printf("files not find creating a new file in read and write\n");
	}

	if(files != NULL){
		printf("the files has been closed\n");
		fclose(files);
	}

	else{
		printf("files failed to open\n");
	}
	return 0;
}

void printf_files(){

}
