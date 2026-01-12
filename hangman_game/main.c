#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char readCharactere();
FILE *open_files(const char *files_name);

int main(int argc, char *argv[]){
	
	int count = 10;

	while(count != 0){

		char aCharatere = 0;
		aCharatere = readCharactere();
		
		if(aCharatere == ){
		}

		else{
			count--;
		}
	}
	if(){
	}
	return 0;
}

// a little fonction that read a charactere
char readCharactere(){
	char charactere = 0;
	charactere = getchar();
	charactere = toupper(charactere);

	while(getchar() != '\n');

	return charactere;
}

FILE *readeverything(const char a_file){

}

