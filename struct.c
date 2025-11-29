#include <stdio.h>
#include <string.h>

typedef struct{
	char name[100];
	int year_publishing;
	float price;
}Book_t;

void display_book(const book_t *book_ptr){
	printf("The book %s\nWho was realesed %d\nIs only %lf\n", book_ptr->name, book_ptr->year_publishing, book_ptr->price);
}

int main(int argc, char *argv[]){
	Book_t my_book;

	strcpy(my_book.name, "the night of the blue moon");
	my_book.price = 23.99;
	my_book.year_publishing = 2015;
	
	display_book(&my_book)
	
	return 0;
}
