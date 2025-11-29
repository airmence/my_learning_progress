#include <stdio.h>
#include <string.h>

typedef struct{
	char name[100];
	int year_publishing;
	float price;
}Book_t;


int main(int argc, char *argv[]){
	Book_t my_book;
	strcpy(my_book.name, "the night of the blue moon");
	my_book.price = 23.99;
	my_book.year_publishing = 2015;
	printf("The book %s\nWho was realesed %d\nIs only %lf\n",my_book.name, my_book.year_publishing, my_book.price);
	return 0;
}
