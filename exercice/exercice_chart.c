#include <stdio.h>

int adding_chart(int chart[], int size_chart);
double average_chart(int chart[], int size_chart);
void copy_chart(int source[], int destination[], int size);
void maximum_chart(int chart[], int size_chart, int value_max);
void chart_order(int chart[], int size_chart);

int main(int argc, char *argv[]){
	int chart[4] = {45, 5, 653, 3};
	return 0;

}

int adding_chart(int chart[], int size_chart){
	int result = 0;
	for(int i = 0; i < size_chart; i++){
		result += chart[i]; 
	}
	return result;
}

double average_chart(int chart[], int size_chart){
	double result = 0.0;
	for(int i = 0; i < size_chart; i++){
		result += chart[i];
	}

	return result /= size_chart;
}

void copy_chart(int source[], int destination[], int size){
	for(int i = 0; i < size; i++){
		destination[i] = source[i];
	}
}

void maximum_chart(int chart[], int size_chart, int value_max){
	for(int i = 0; i < size_chart; i++){
		if(value_max < chart[i]){
			chart[i] = 0;
		}
		printf("%d\n", chart[i]);
	}
}

void chart_order(int chart[], int size_chart){
	int temp = 0;
	for(int i = 0; i < size_chart; i++){
		for(int j = 0; j < size_chart; j++){
			if(chart[i] < chart[j]){
				temp = chart[i];
				chart[i] = chart[j];
				chart[j] = temp;
			}
		}
	}

}
