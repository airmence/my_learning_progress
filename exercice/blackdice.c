#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_number();
int main(int agrc, char *argv[]){

	int numberOfTheDice = 0;	
	numberOfTheDice = random_number();


	return 0;
}

int random_number(){
	int number = 0;
	const int MAX = 21, MIN = 1;
        srand(time(NULL));                                                                                                                                                                                                                                                                                                  
        number = (rand() % (MAX - MIN + 1)) + MIN; 
	return number;
}
