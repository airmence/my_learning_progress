#include<stdio.h>
#include<stdlib.h>

char readCharactere();

int main(int argc, char *argv[]){
	
	int count = 10;

	while(count != 0){

		char aCharatere = 0;
		aCharatere = readCharactere();
		
		if(){
		}

		else{
			count--;
		}
	}
	if(){

	return 0;
}

char readCharactere(){
	char charactere = 0;
	charactere = getchar();
	charactere = toupper(charactere);

	while(getchar() != '\n');

	return charactere;
}

