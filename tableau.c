#include <stdio.h>

int main(int argc, char *argv[]){
	int chart[5];
	chart[0] = 56;
	chart[1] = 345;
	chart[2] = 86;
	chart[3] = 14;
	chart[4] = 3;

	for (int i = 0; i < 5; i++){
		printf("%d\n", chart[i]);
	}

	int another_chart[4] = {0}, i = 0;
	for(int i = 0; i < 4; i++){
		printf("%d\n", another_chart[i]);
	}

	return 0;
}
