#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	int *var = NULL;
	var = malloc(sizeof(int));
	
	if(var == NULL){
		exit(2);}
	
	printf("How old are you?: ");
	scanf("%d", var);
	printf("You are %d year old\n", *var);

	free(var);

	return 0;
}
