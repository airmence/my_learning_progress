#include<stdio.h>

int main()
{
	int number = 0;
	int *pointer = &number;
	printf("la variable est :%d\nelle a l'adresse :%p\n", number, &number);
	printf("l'adresse du pointer est a :%d\n", *pointer);
	return 0;
}
