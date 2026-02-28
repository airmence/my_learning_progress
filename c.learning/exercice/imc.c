#include<stdio.h>

void testing_imc(float imc);

int main(int argc, char *argv[]){
	float weight = 0.0;
	float height = 0.0;
	float imc = 0.0;

	printf("What is your weight (in kilograms) :");
	scanf("%f", &weight);
	printf("what is you height (in meters) :");
	scanf("%f", &height);

	imc = weight/(height * height);

	printf("your imc is : %f\n", imc);
	
	testing_imc(imc);

	return 0;
}

void testing_imc(float imc){

	if(imc >= 18.5 && imc <= 25){
		printf("you've got a normal IMC\n");}
	else if(imc < 18.5){
		printf("you have an IMC lower than normal\n");}
	else if(imc > 25){
		printf("you have an IMC higher than normal\n");}
}
