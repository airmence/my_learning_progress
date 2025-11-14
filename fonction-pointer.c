#include <stdio.h>

void everythingIsZero(int *numberToPutAtZero);

int main()
{
	int any_number = 0;
	printf("please put a number :");
	scanf("%d", &any_number);
	printf("you have put %d\n", any_number);
	everythingIsZero(&any_number);
	printf("and now it's a %d again\n", any_number);
	return 0;
}

void everythingIsZero(int *numberToPutAtZero)
{
	*numberToPutAtZero = 0;
}
