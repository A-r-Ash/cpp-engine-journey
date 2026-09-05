#include "Random.h" // defines Random::mt, Random::get(), and Random::generate()
#include <cstddef> // for std::size_t
#include <iostream>

int main()
{
	// We can call Random::get() to generate random integral values
	// If the two arguments have the same type, the returned value will have that same type.
	std::cout << Random::get(1, 6) << '\n';   // returns int between 1 and 6
	std::cout << Random::get(1u, 6u) << '\n'; // returns unsigned int between 1 and 6

	// In cases where we have two arguments with different types
	// and/or if we want the return type to be different than the argument types
	// We must specify the return type using a template type argument (between the angled brackets)
// See https://www.learncpp.com/cpp-tutorial/function-template-instantiation/
	std::cout << Random::get<std::size_t>(1, 6u) << '\n'; // returns std::size_t between 1 and 6

	// If we have our own distribution, we can access Random::mt directly

	// Let's create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution<> die6{ 1, 6 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };
	for (int count{ 1 }; count <= 10; ++count)
	{
		std::cout << die6(Random::mt) << '\t'; // generate a roll of the die here
	}

	std::cout << '\n';

	return 0;
}





















/*#include <iostream>
#include <random>

int main()
{
	std::random_device rd{};
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; // get 8 integers of random numbers from std::random_device for our seed
	std::mt19937 mt{ ss }; // initialize our Mersenne Twister with the std::seed_seq

	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution<> die6{ 1, 6 }; // for C++14, use std::uniform_int_distribution<> d ie6{ 1, 6 };

	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << die6(mt) << '\t'; // generate a roll of the die here

		// If we've printed 10 numbers, start a new row
		if (count % 10 == 0)
			std::cout << '\n';
	}

	return 0;
}

*/












/*#include <iostream>
#include <random>

//Random numbers generation using std::random_device (provided by the OS)

int main()
{
	std::mt19937 mt{ std::random_device{}() };

	std::uniform_int_distribution<> die6(1, 6);

	for (int i{ 1 }; i <= 50; i++)
	{
		std::cout << die6( mt ) << '\t';

		if (i % 10 == 0)
		{
			std::cout << '\n';
		}


	}

	return 0;
}

*/









//Random numbers generation using std::chrono::steady_clock::now().time_since_epoch().count()) which is time passing
//For generation of a random number by the clock of the device we use std::chrono::high_resolution_clock





/*#include <iostream>
#include <random>
#include <chrono>

int main()
{

	std::mt19937 mt{static_cast<std::mt19937::result_type>(std::chrono::steady_clock::now().time_since_epoch().count())};

	std::uniform_int_distribution<> die6{ 1 , 6 };

	for (int i{1}; i <= 10; i++)
	{
		std::cout << die6(mt)  << ' ';

		if (i % 5 == 0)
		{
			std::cout << std::endl;
		}
	}




	return 0;
}
*/