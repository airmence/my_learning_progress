#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_number();
int dice_bank();
int dice_player();

int main(int agrc, char *argv[]){

	srand(time(NULL)); 
	
	int player = 0, bank = 0;	
	
	// the player turn
	player = dice_player();
	if(player <= 21){
		printf("\n\t\t------ Bank's turn ------\n");
	}
	// the bank turn
	bank = dice_bank();

	if(player > 21){ printf("You busted ! The bank wins.\n"); }
	else if(bank > 21){ printf("The bank busted! you win!\n"); }
	else if(player > bank){ printf("Victory ! You beat the bank>\n"); }
	else if(bank > player){ printf("The banks win! Better luck next time.\n"); }
	else{ printf("It's a tie (Draw)!\n"); }
	

	return 0;
}

// just a little fonction that choose a random number between 1 and 6 like the dice
int random_number(){
	int number = 0;
	const int MAX = 6, MIN = 1;
        number = (rand() % (MAX - MIN + 1)) + MIN; 
	return number;
}

// the play of the bank
int dice_bank(){
	int decisions [4][4] ={
		{1, 1, 1, 1},//probabilites 100%
		{1, 1, 1, 0},//probabilites 75%
		{1, 1, 0, 0},//probabilites 50%
		{1, 0, 0, 0},//probabilites 25%
	};
	int dice_adding = 0, play = 0, indice = 0;

	while(dice_adding <= 21){
		//the decision making 	
		if(dice_adding <= 12){ indice = 0; }
		else if(dice_adding > 12 && dice_adding <= 16){ indice = 1; }
		else if(dice_adding > 16 && dice_adding <= 19){ indice = 2; }
		else { indice = 3; }

			play = decisions[indice][rand() % 4];

		if(play == 1){
			dice_adding += random_number();
			printf("the bank plays and obtain %d\n", dice_adding);
		}

		if(dice_adding > 21){
			printf("the bank is above 21\n");
			break;
		}

		if(play == 0){
			break;}
	}
	return dice_adding;
}

// the turn of the player
int dice_player(){
	
	int number_dice = 0, throw_or_quit = 0, add_up = 0;
	
	do{	
		//asking if the player want to continue the game
		printf("1 to throw 0 to quit the game: ");
		scanf("%d", &throw_or_quit);
		
		//ERROR handling if the player wants to troll
		if(throw_or_quit != 0 && throw_or_quit != 1){
			printf("ERROR: please select the correct number\n");
			break;
		}

		if(throw_or_quit == 0){ break; }

		number_dice = random_number();
		printf("number of the dice %d\n", number_dice);
		add_up += number_dice;
		printf("it's adding up to %d\n", add_up);

		if(add_up > 21){
			printf("you hade up above 21\n");
			break;
		}

	}while(throw_or_quit == 1);
	
	return add_up;
}

FILE scored_file(const char* file_name, const char* open_mode)
