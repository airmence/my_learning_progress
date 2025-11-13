#include <stdio.h>

int main()
{
	int number = 0;
	printf("choissiser un nombre entre 0 et 100 : ");
	scanf("%d", &number);

	if (number >= 0 && number <= 100)
	{
		if (number < 50)
		{
			printf("vous avez choisie un chiffre inferieur a 50\n");
		}
		else if (number > 50)
		{
			printf("vous avez choisie un chiffre superieur a 50\n");
		}
		else
		{
			printf("vous avez choisie 50\n");
		}
	}
	
	else
	{
		printf("vous avez choisie un nombre non autoriser\n");
	}
	return 0;
}
