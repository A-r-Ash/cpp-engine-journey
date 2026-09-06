#include <iostream>

void print(int x = 5);                  // signature print(int)
void print(int x, int y = 10);      // signature print(int, int)
void print(int x, double y = 20.5); // signature print(int, double)

void print(int x)
{
    std::cout << x ;
    std::cout << '\n';

    
}



void print(int x, double y)
{
    std::cout << x << y;
    std::cout << '\n';
}

void print(int x, int y)
{
    std::cout << x << y;
    std::cout << '\n';
}

//int main()
//{
    //print(1, 2);   // will resolve to print(int, int)
    //print(1, 2.5); // will resolve to print(int, double)
    //print(2);      // ambiguous function call
   // print();

   // return 0;
//}