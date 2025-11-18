#include <stdio.h>
#include <string.h>

void chart_ptr();
size_t how_long(const char* chart_long);

int main(int argc, char *argv[]){
	char hello[] = "hello MF";
	how_long(hello);
	return 0;
}

void chart_ptr(){
	char *ptr_hello = "hello MF!!";
	printf("%s\n", ptr_hello);
}

size_t how_long(const char* chart_long){ 
	int size_chart = 0;
	size_chart = strlen(chart_long);
	printf("the string \"%s\" is %d long\n", chart_long, size_chart);
}

