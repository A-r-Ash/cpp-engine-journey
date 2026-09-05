#include <iostream>
#include "Random.h"

int main()
{
	std::uniform_int_distribution<> die6(1, 6);

	int roll = die6(Random::mt);
	//std::cout << "Number actually is " << roll;
	std::cout << "\n";
	std::cout << "Guess a number: ";
	
	

	int guess{ 0 };
	std::cin >> guess;
	
	
	
	

	while (guess != roll)
	{	
		if (guess > roll)
		{
			std::cout << "Lower";
			std::cout << "\n";

		}

		else
		{
			std::cout << "Higher";
			std::cout << "\n";
		}


		
		std::cin >> guess;

	};

	
		std::cout << "Right Guess, the number was " << guess;
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
	
	

	


	return 0;
}