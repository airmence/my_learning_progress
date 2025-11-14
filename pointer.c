#include<stdio.h>

int main()
{
	int number = 0;
	int *pointer = &number;
	printf("la variable est :%d\nelle a l'adresse :%p\n", number, &number);
	printf("l'adresse du pointer est a :%d\n", *pointer);
	*pointer = 40;
	printf("maintenant la variable vaut %d\n",number);
	return 0;
}
