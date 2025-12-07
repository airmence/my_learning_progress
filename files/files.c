#include<stdio.h>

int main(){
	FILE* file = NULL;
	file = fopen("test.txt", "w+");
	if(file != NULL){
		fprintf(file, "this is a test on printing in files\n");
	}
	fclose(file);
	return 0;
}
