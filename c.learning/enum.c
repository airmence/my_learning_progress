#include<stdio.h>

typedef enum{
	SILENT, LOW, MIDDLE, LOUD
}volume;

int main(int argc, char *argv[]){
	volume music = MIDDLE;
	switch(music){
		case SILENT:
			printf("the volume is set to silent\n");
			break;
		case LOW:
			printf("the volume is set to low\n");
			break;
		case MIDDLE:
			printf("the volume is set to middle\n");
			break;
		case LOUD:
			printf("the volume is set to loud\n");
			break;
	}
	return 0;
}
