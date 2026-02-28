//a preprocessor that call a library, very usefull for using printf for example //many more is too discover like string.h math.h float.h can be #include<stdio.h>

//a little fonction that just write inside the terminal
void hello();
//a little fonction that teaches you the variable and sum it (can be done with multiply divided substract and modulo(rest of the divided))
void sum();
//fonction that just ask two number and sum them together
void ask_calcul();
//fonction that ask infinitely until user type the correct number
void loopofAsk();
//a little fonction that teaches how the pointer work
void pointer();
// a fonction that learn how condition work
void condition();
//another fonction that teaches you how to work fonction with pointer
void pointerInFonction(int *anything);
//fonction that teaches you how chart work
void chart();

void hello(){
	printf("hello in a fonction");
}

void sum(){
	int variable = 4;
	printf("variable = %d\n", variable);
	int resultat = 0;
	resultat = 5+7;
	printf("5 + 7 = %d\n", resultat);
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

void condition(){
	int number = 0;
	printf("choose a number between 0 and 100: ");
	scanf("%d", &number);

	if (number >= 0 && number <= 100){
		if (number < 50)
		{
			printf("you choose a number below 50\n");
		}
		else if (number > 50)
		{
			printf("you choose a number above 50\n");
		}
		else
		{
			printf("you have choose 50\n");
		}
	}

	else if(number < 0 | number > 100){
		printf("you have chose a number that is not between 0 and 100");
	}
	else{
		printf("please choose a number\n");
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

void chart(){
	int chart[5];
	chart[0] = 56;
	chart[1] = 345;
	chart[2] = 86;
	chart[3] = 14;
	chart[4] = 3;

	for (int i = 0; i < 5; i++){
		printf("%d\n", chart[i]);
	}

	int another_chart[4] = {0}, i = 0;
	for(int i = 0; i < 4; i++){
		printf("%d\n", another_chart[i]);
	}
}

