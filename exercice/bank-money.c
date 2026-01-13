#include<stdio.h>
int main(int argc, char *argv[]){

	int  asked_money = 0;
	printf("How many money do you want :");
	scanf("%d", &asked_money);
	
	if(asked_money <= 0){
		printf("ERROR: invalid amount\n");
		return 1;
	}
	
	int money_bill[] = {500, 200, 100, 50, 20, 10, 5};
	int size_chart = sizeof(money_bill) / sizeof(money_bill[0]);

	for(int i = 0; i < size_chart; i++){

		int number_Bills = 0;
		number_Bills = asked_money/money_bill[i];
		asked_money = asked_money%money_bill[i];
		
		if(number_Bills != 0){
			printf("i give you %d of %d bills\n", number_Bills, money_bill[i]);}
	}
	
	if(asked_money != 0){
		printf("i can't give you the rest\n");}
	return 0;
}

