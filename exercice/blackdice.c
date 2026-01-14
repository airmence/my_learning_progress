#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_number();
void ia_bank_player();

int main(int agrc, char *argv[]){

	srand(time(NULL)); 
	int numberOfTheDice = 0, throw_or_quit = 0, add_up = 0;	
	do{	
		//asking if the player want to continue the game
		printf("1 to throw 0 to quit the game: ");
		scanf("%d", &throw_or_quit);
		
		//ERROR handling if the player wants to troll
		if(throw_or_quit != 0 && throw_or_quit != 1){
			printf("ERROR: please select the correct number\n");
			break;
		}

		numberOfTheDice = random_number();
		printf("number of the dice %d\n", numberOfTheDice);
		add_up += numberOfTheDice;
		printf("it's adding up to %d\n", add_up);

		if(add_up > 21){
			printf("you add up above 21");}

	}while(throw_or_quit == 1);
//	ia_bank_player();
	return 0;
}

// just a little fonction that choose a random number between 1 and 6 like the dice
int random_number(){
	int number = 0;
	const int MAX = 6, MIN = 1;
        number = (rand() % (MAX - MIN + 1)) + MIN; 
	return number;
}

void ia_bank_player(){
	int decisions [4][4] ={
		{1, 1, 1, 1},//probabilites 100%
		{1, 1, 1, 0},//probabilites 75%
		{1, 1, 0, 0},//probabilites 50%
		{1, 0, 0, 0},//probabilites 25%
	};
	int dice_adding = 0, play = 0, indice = 0;

	while(dice_adding > 21 && decisions != 0){
		play = decisions[indice][rand() % 4];
	
		if(dice_adding <= 12 && play == 1){
			dice_adding += random_number();}
		
		else if(dice_adding > 12 && dice_adding <= 16 && play == 1){
			dice_adding += random_number();}

		else if(dice_adding > 16 && dice_adding <= 19 && play == 1){
			dice_adding += random_number();}

		else if(dice_adding > 19 && dice_adding < 20 && play == 1){
			dice_adding += random_number();}

		if(dice_adding > 21){
			printf("the bank player is above 21");
			break;}
	}
}

