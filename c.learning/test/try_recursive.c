#include<stdio.h>

int recurse(int number_given, int max_given);

int main(int argc, char *argv[]){
	int number = 10;
	int max = 20;
	recurse(number, max);
	return 0;
}

int recurse(int number_given, int max_given){

	printf("the number given is %d\n", number_given);
	if(number_given >= max_given){
		return 1;
	}
	return recurse(++number_given, max_given);
}
