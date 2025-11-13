#include<stdio.h>

int main()
{
	int resultat = 0, first_number = 0, second_number = 0;

	printf("Enter first number : ");
	scanf("%d", &first_number);

	printf("Enter second number : ");
	scanf("%d", &second_number);

	resultat = first_number + second_number;
	printf("%d + %d = %d\n",first_number, second_number, resultat);
	return 0;
}
