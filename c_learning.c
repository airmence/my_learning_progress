//a preprocessor that call a library, very usefull for using printf for example
//many more is too discover like string.h math.h float.h can be
#include<stdio.h>


//a little fonction that just write inside the terminal
void hello();
//fonction that just ask two number and sum them together
void ask_calcul();
//fonction that ask infinitely until user type the correct number
void loopofAsk();
//a little fonction that teaches how the pointer work
void pointer();
//another fonction that teaches you how to work fonction with pointer
void pointerInFonction(int *anything);


void hello(){
	printf("hello in a fonction");
}

void ask_calcul(){
	int resultat = 0, first_number = 0, second_number = 0;

	printf("Enter first number : ");
	scanf("%d", &first_number);

	printf("Enter second number : ");
	scanf("%d", &second_number);

	resultat = first_number + second_number;
	printf("%d + %d = %d\n",first_number, second_number, resultat);
}

void loopofAsk(){
	int number = 0;
	while(number != 78)
	{
		printf("enter the number 78 : ");
		scanf("%d", &number);
	}
}

void pointer(){
	// int tell the compiler to stock an integer number 
	// it put a place inside the RAM and got an addresse
	// addresse = place inside of the ram who got the value
	int aRandomNumber = 34;
	// this int tells that the pointer point to another int
	// the * of the *ptr tells you that it's the pointer who got another addresse (it reference)
	// and the & is the deferencement littaraly the adresse of the aRandomNumber
	int *ptr = &aRandomNumber;
	pointerInFonction(&aRandomNumber)
}

//this fonction take the pointer *anything in arguments it's good if you need to return more than once arguments 
//like that you can work directly on the variable enstead of an copy of it
void pointerInFonction(int *anything){
	*anything = 31;
}
