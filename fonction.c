#include<stdio.h>

void punie(int number_line);

int main()
{
	int number_of_line = 0;
	printf("combien de ligne devez vous recopier ? : ");
	scanf("%d", &number_of_line);

	punie(number_of_line);
	return 0;
}

void punie(int number_line)
{
	int i = 0;
	for(i= 0; i < number_line; i++)
	{
		printf("i no longer want my mtv\n");
	}
}
