#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	printf("you have put %d argument\n", argc);

	printf("you have put");
	for(int i = 0; i < argc; i++){
		printf(" %s", argv[i]);
	}
	
	printf(" as an argument\n");
	return 0;
}
