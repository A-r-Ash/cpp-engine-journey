#include <iostream>
#include <vector>

using std::cout;

template <typename T>
void printArray(const std::vector<T>& arr)
{
	std::size_t length{ arr.size() };
	for (std::size_t index{ 0 }; index < length; ++index)
	{
		cout << arr[index] << ' ';

	}
}

template <typename T>
void addToArray(std::vector<T>& arr, T input)
{
	arr.push_back(input);
}



int main()
{
	

	std::vector<int> arr{  };
	bool validate{ false };
	int input;

	while (!validate)
	{	
		
		cout << "Enter a number between 1 and 9 to put inside the array: " << ' ';
		std::cin >> input;
		cout << '\n';

		if (input < 1 || input >9)
		{
			cout << "Wrong number ";
		}

		else
		{	
			
			validate = true;
		}

	}


	addToArray(arr, input);
	printArray(arr);
	


	


	return 0;
}