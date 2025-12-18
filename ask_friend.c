#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int numberofFriend = 0;
	int *age_friend = NULL;

	printf("how many friend you have ?: ");
	scanf("%d", &numberofFriend);

	if(numberofFriend > 0){
		
		age_friend = malloc(numberofFriend * sizeof(int));
		
		if(age_friend == NULL){
			exit(3);
		}

		for(int i = 0; i < numberofFriend; i++){
			printf("how old is your friend nu %d ?: ", i + 1);
			scanf("%d", &age_friend[i]);//try to write in the chart but failed. Why?
		}

		printf("\n\n your friend got respectively \n\n");

		for(int i = 0; i < numberofFriend; i++){
			printf("%d ans\n", age_friend[i]);
		}
		
		free(age_friend);
	}
	return 0;
}
