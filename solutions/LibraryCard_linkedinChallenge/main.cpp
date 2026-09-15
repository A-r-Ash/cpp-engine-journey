#include <iostream>

struct libraryCard
{
	std::string title{};
	std::string author{};
	std::string publisher{};
	std::string subject{};
	int isbn{};
	std::string worldCat{};
	double deweyDecimal{};
	int yearPublished{};
	int yearAcquired{};
	int quantityInStock{};
};


int main()
{

	libraryCard newBook;

	newBook.title = "BookTitle";
	newBook.author =  "Mamad";
	newBook.publisher = "publisher";



	return 0;
}