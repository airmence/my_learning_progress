#include<stdio.h>

void triangle(int max_loop);
void inverted_triangle(int max_loop);
void space_triangle(int max_loop);

int main(int argc, char *argv[]){
	//triangle(10);
	//inverted_triangle(10);
	space_triangle(30);
	return 0;
}

void triangle(int max_loop){
	//loop for the line
	for(int z = 1; z <= max_loop; z++){
		//loop for the print of #
		for(int y = 0; y < z; y++){
			printf("#");
		}
		printf("\n");
	}
}

void inverted_triangle(int max_loop){
	int space = max_loop;
	//a loop for printing each line
	for(int z = 1; z <= max_loop; z++){
		//another loop that decreasse spaces and increase #
		for(int y = space; y >= z; y--){
			printf("#");
		}
		printf("\n");
	}
}

void space_triangle(int max_loop){
	int space = max_loop;
	//a loop for printing each line
	for(int z = 1; z <= max_loop; z++){
		//another loop that decreasse spaces and increase #
		for(int y = space; y > z; y--){
			printf(" ");
		}

		for(int x = 0; x < z; x++){
			printf("#");
		}
		printf("\n");
	}
}

