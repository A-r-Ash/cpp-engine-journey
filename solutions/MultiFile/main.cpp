#include <iostream>

#include "greet.h"
#include "math.h"

int main()
{
    std::cout << greet("Arash") << '\n';
    std::cout << "2 + 3 = " << add(2, 3) << '\n';
    std::cout << sign_off() << '\n';
    return 0;
}