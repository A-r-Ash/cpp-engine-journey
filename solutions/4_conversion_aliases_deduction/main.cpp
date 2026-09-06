#include <iostream>

void truncation(double d)
{
	int x = static_cast<int>(d);


	std::cout << "truth: " << d << '\t' << "Lie: " << x;
	std::cout << '\n';

	
	std::cout << '\n';
}

void floatPrecision(double d)
{
	float x = static_cast<float>(d);

	std::cout << "truth: " << d << '\t' << "Lie: " << x;
	std::cout << '\n';

	std::cout << '\n';
}

void singedUnsigned(unsigned u)
{
	signed x = static_cast<signed>(u);

	std::cout << "truth: " << u << '\t' << "Lie: " << x;
	std::cout << '\n';
	

	std::cout << '\n';
}

//void singedUnsigned(signed s)
//{
//	unsigned x = s;
//
//	std::cout << "truth: " << x << '\t' << "Lie: " << s;
//
//	std::cout << '\n';
//}

void doubleDivide()
{
	double x = 1.0 /2;
	double y = 1 / 2;

	std::cout << "truth: " << x << '\t' << "Lie: " << y;

	std::cout << '\n';
}









int main()
{	

	truncation(3.1564);
	floatPrecision(1.5184685684684641146846);
	singedUnsigned(-5);
	doubleDivide();

	//int b{3.7};




	

	return 0;
}