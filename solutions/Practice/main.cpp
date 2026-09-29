#include <iostream>


void printArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << ' ';
	}
}

void swapReference(int& a, int& b)
{
	int temp;

	temp = a ;
	a = b;
	b = temp;



}


int main()
{
	int array[] = { 10,20,30,40,50,60 };

	printArray(array, sizeof(array) / sizeof(array[8]));

	std::cout << "Done";






	return 0;

}