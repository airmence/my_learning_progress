#include<stdio.h>

int main(int argc, char *argv[]){

	int  asked_money = 0;
	printf("How many money do you want :");
	scanf("%d", &asked_money);

	int billets_500 = 0, billets_200 = 0, billets_100 = 0, billets_50 = 0, billets_20 = 0, billets_10 = 0, billets_5 = 0;

	billets_500 = asked_money/500;
	asked_money = asked_money%500;

	billets_200 = asked_money/200;
	asked_money = asked_money%200;
	
	billets_100 = asked_money/100;
	asked_money = asked_money%100;
	
	billets_50 = asked_money/50;
	asked_money = asked_money%50;
	
	billets_20 = asked_money/20;
	asked_money = asked_money%20;
	
	billets_10 = asked_money/10;
	asked_money = asked_money%10;
	
	billets_5 = asked_money/5;
	asked_money = asked_money%5;

	printf("im giving you :\n");

	if(billets_500 != 0){
		printf("%d of 500 bill\t", billets_500);
	}
	if(billets_200 != 0){
		printf("%d of 200 bill\t", billets_200);
	}
	if(billets_100 != 0){
		printf("%d of 100 bill\t", billets_100);
	}
	if(billets_50 != 0){
		printf("%d of 50 bill\t", billets_50);
	}
	if(billets_20 != 0){
		printf("%d of 20 bill\t", billets_20);
	}
	if(billets_10 != 0){
		printf("%d of 10 bill\t", billets_10);
	}
	if(billets_5 != 0){
		printf("%d of 5 bill\t", billets_5);
	}
	printf("\n");
	return 0;
}
