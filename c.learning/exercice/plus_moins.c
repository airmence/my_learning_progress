#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int nombreMystere = 0, nombre_guessed = 0, numberOfGuessed = 0;
	
	const int MAX = 100, MIN = 1;
	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
	
		for(numberOfGuessed = 0; nombre_guessed != nombreMystere; numberOfGuessed++)
		{
			printf("trouver le nombre entre 1 et 100 :");
			scanf("%d", &nombre_guessed);
			
			if(nombre_guessed < nombreMystere)
			{
				printf("c'est plus !\n");
			}

			else if(nombre_guessed > nombreMystere)
			{
				printf("c'est moins !\n");
			}
		}
	printf("felicitation vous avez trouver en %d fois\n", numberOfGuessed);	
	return 0;
}
