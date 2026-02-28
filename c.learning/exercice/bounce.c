#include<stdio.h>

int main(int argc, char *argv[]){

	double bounce = 400.0;
	int percentage = 90;
	const double MIN_BOUNCE = 0.1;
	int count = 0;

	while(bounce > MIN_BOUNCE){
		bounce = bounce * percentage/100;
		printf("rebound n%d :%lf\n", count+1, bounce);
		count++;
	}

	printf("the ball has rebounce %d time\n", count);
	return 0;
}
