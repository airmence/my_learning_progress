#include<stdio.h>
#include<unistd.h>
#define SLEEPTIME 1

int main(){
	int i = 1, pid = 0, x = 1;
	for(; i <= 5; i++){
		printf("count: %d\n", i);
		sleep(SLEEPTIME);
	}

	printf("Calling fork()\n");
	
	fork();

	printf("this has the pid :%d\n", getpid());

	for(; x <= 5; x++){
		printf("count: %d\n", x);
		sleep(SLEEPTIME);
	}
	return 0;
}

